----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
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
		clk, en : in std_logic;
		d : in std_logic_vector(15 downto 0);
		q : out std_logic_vector(15 downto 0)
	); end component;
	
	component mux2x1 Port (
		d0, d1 : in std_logic_vector(15 downto 0);
		s : in std_logic;
		o : out std_logic_vector(15 downto 0)
	); end component;
	
	component keygen Port (
		inputkey : in std_logic_vector(127 downto 0);
		lap : in std_logic_vector(3 downto 0);
		key1, key2, key3, key4, key5, key6 
			: out std_logic_vector(15 downto 0)
	); end component;
	
	component control Port (
		clk, start : in std_logic;
		round : out std_logic_vector(3 downto 0);
		ready, en, s : out std_logic
	); end component;
		
		

	begin


end Structural;

