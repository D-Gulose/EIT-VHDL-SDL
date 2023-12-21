----------------------------------------------------------------------------------
-- Company: 
-- Engineer:  Markus Gulo
-- 
-- Create Date:     
-- Design Name: 
-- Module Name:    idea_single - Structural 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity idea_single is
    Port ( CLOCK : in  STD_LOGIC;
           START : in  STD_LOGIC;
           KEY : in  STD_LOGIC_VECTOR (127 downto 0);
           X_1 : in  STD_LOGIC_VECTOR (15 downto 0);
           X_2 : in  STD_LOGIC_VECTOR (15 downto 0);
           X_3 : in  STD_LOGIC_VECTOR (15 downto 0);
           X_4 : in  STD_LOGIC_VECTOR (15 downto 0);
           Y_1 : out  STD_LOGIC_VECTOR (15 downto 0);
           Y_2 : out  STD_LOGIC_VECTOR (15 downto 0);
           Y_3 : out  STD_LOGIC_VECTOR (15 downto 0);
           Y_4 : out  STD_LOGIC_VECTOR (15 downto 0);
           READY : out  STD_LOGIC);
end idea_single;

architecture Structural of idea_single is

	component round Port ( 
		x1, x2, x3, x4, z1, z2, z3, z4, z5, z6 : in std_logic_vector(15 downto 0);
		y1, y2, y3, y4 : out std_logic_vector(15 downto 0)
	); end component;
		
	component trafo Port (
		x1, x2, x3, x4, z1, z2, z3, z4 : in std_logic_vector(15 downto 0);
		y1, y2, y3, y4 : out std_logic_vector(15 downto 0)
	); end component;
	
	component register_16b Port (
		clk, enable : in std_logic;
		d : in std_logic_vector(15 downto 0);
		q : out std_logic_vector(15 downto 0)
	); end component;
	
	component mux2x1 Port (
		d0, d1 : in std_logic_vector(15 downto 0);
		s : in std_logic;
		o : out std_logic_vector(15 downto 0)
	); end component;
	
	component keygen Port (
		fullkey : in std_logic_vector(127 downto 0);
		lap : in std_logic_vector(3 downto 0);
		key1, key2, key3, key4, key5, key6 : out std_logic_vector(15 downto 0)
	); end component;
	
	component control Port (
		clk, start : in std_logic;
		round : out std_logic_vector(3 downto 0);
		ready, en, s : out std_logic
	); end component;
		
	-- Wires
	signal enable_w, select_w : std_logic;
	signal lap_w : std_logic_vector(3 downto 0);
	signal 
		regi1_w, regi2_w, regi3_w, regi4_w, 
		rego1_w, rego2_w, rego3_w, rego4_w,
		muxo1_w, muxo2_w, muxo3_w, muxo4_w, 
		key1_w, 	key2_w, 	key3_w, 	key4_w, 	key5_w, 	key6_w
		: std_logic_vector(15 downto 0);
	
	begin

	-- Module connects (figure 5.3)
	
		c: control port map(
			clk=>CLOCK, 	start=>start, round=>lap_w, 
			ready=>ready, 	en=>enable_w, s=>select_w
		);
		
		mux1: mux2x1 port map(d0=>x_1, d1=>rego1_w, s=>select_w, o=>muxo1_w);
		mux2: mux2x1 port map(d0=>x_2, d1=>rego2_w, s=>select_w, o=>muxo2_w);
		mux3: mux2x1 port map(d0=>x_3, d1=>rego3_w, s=>select_w, o=>muxo3_w);
		mux4: mux2x1 port map(d0=>x_4, d1=>rego4_w, s=>select_w, o=>muxo4_w);
		
		k: keygen port map
		(
			fullkey=>key, lap=>lap_w,
			key1=>key1_w, 	key2=>key2_w, 	key3=>key3_w, 
			key4=>key4_w, 	key5=>key5_w, 	key6=>key6_w
		);
		
		r: round port map(
			x1=>muxo1_w, 	x2=>muxo2_w, 	x3=>muxo3_w, 	x4=>muxo4_w, 
			z1=>key1_w, 	z2=>key2_w, 	z3=>key3_w, 	z4=>key4_w, 	z5=>key5_w,		z6=>key6_w, 
			y1=>regi1_w, 	y2=>regi2_w, 	y3=>regi3_w, 	y4=>regi4_w
		);
		
		reg1: register_16b port map(clk=>CLOCK, enable=>enable_w, d=>regi1_w, q=>rego1_w);
		reg2: register_16b port map(clk=>CLOCK, enable=>enable_w, d=>regi2_w, q=>rego2_w);
		reg3: register_16b port map(clk=>CLOCK, enable=>enable_w, d=>regi3_w, q=>rego3_w);
		reg4: register_16b port map(clk=>CLOCK, enable=>enable_w, d=>regi4_w, q=>rego4_w);
		
		t: trafo port map(
			x1=>rego1_w,	x2=>rego2_w,	x3=>rego3_w,	x4=>rego4_w, 
			z1=>key1_w, 	z2=>key2_w, 	z3=>key3_w, 	z4=>key4_w,
			y1=>y_1, 		y2=>y_2, 		y3=>y_3, 		y4=>y_4
		);
	
end Structural;

