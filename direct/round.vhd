----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    11:18:00 11/22/2023 
-- Design Name: 
-- Module Name:    round - Behavioral 
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

entity round is 
	Port ( 
		x1, x2, x3, x4, z1, z2, z3, z4, z5, z6 : in std_logic_vector(15 downto 0);
		y1, y2, y3, y4 : out std_logic_vector(15 downto 0)
	);
end round;

architecture Behavioral of round is
	
	-- MODULES
	
	component xorop Port ( 
		I1 : in  std_logic_vector(15 downto 0);
		I2 : in  std_logic_vector(15 downto 0);
		O : out  std_logic_vector(15 downto 0)
	);	end component;

	component addop Port ( 
		I1 : in  STD_LOGIC_VECTOR(15 downto 0);
		I2 : in  STD_LOGIC_VECTOR(15 downto 0);
		O : out  STD_LOGIC_VECTOR(15 downto 0) 
	); end component;
	
	component mulop Port ( 
		I_1 : in  STD_LOGIC_VECTOR (15 downto 0);
	   I_2 : in  STD_LOGIC_VECTOR (15 downto 0);
		O_1 : out  STD_LOGIC_VECTOR (15 downto 0)
	); end component;

	-- SIGNALS
--	signal 
--		wx1, wx2, wx3, wx4, 
--		wz1, wz2, wz3, wz4, wz5, wz6, 
--		wy1, wy2, wy3, wy4 
--	: std_logic_vector(15 downto 0);
--	
	signal 
		o_lv1_mod_l, o_lv1_mod_r, o_lv1_add_l, o_lv1_add_r,
		o_lv2_xor,
		o_lv3_xor,
		o_lv4_mod_l, o_lv4_add_r,
		o_lv5_add_l, o_lv5_mod_r
	: STD_LOGIC_VECTOR(15 downto 0);

begin

	-- INSTANTIATE MODULES -> static structure
--	lv1_mod_l : mulop port map (wx1, wz1, o_lv1_mod_l);
--	lv1_mod_r : mulop port map (wx4, wz4, o_lv1_mod_r);
--	lv1_add_l : addop port map (wx2, wz2, o_lv1_add_l);
--	lv1_add_r : addop port map (wx3, wz3, o_lv1_add_r);
--	
--	lv2_xor : xorop port map (o_lv1_mod_l, o_lv1_mod_r, o_lv2_xor);
--	lv3_xor : xorop port map (o_lv1_add_l, o_lv1_add_r, o_lv3_xor);
--	
--	lv4_mod_l : mulop port map (o_lv2_xor, wz5, o_lv4_mod_l);
--	lv4_add_r : addop port map	(i1 => o_lv3_xor, io_lv4_mod_l, o_lv4_add_r);

--	lv5_mod_r : mulop port map (i1 => wz6, o_l4_add_r, o_l5_mod_r);
--	lv5_add_l : addop port map (i1 => o_lv4_mod_l, o_l5_mod_r, o_l5_add_l);
--	
--	lv6_xor_l : xorop port map (i1 => o_lv1_mod_l, o_lv5_mod_r, wy1);
--	lv6_xor_r : xorop port map (i1 => o_lv5_mod_r, o_lv1_add_r, wy2);
--	lv7_xor_l : xorop port map (i1 => o_lv1_add_l, o_lv5_add_l, wy3);
--	lv7_xor_r : xorop port map (i1 => o_lv1_mod_r, o_lv5_add_l, wy4);

--	process(
--		x1, x2, x3, x4, 
--		z1, z2, z3, z4, z5, z6,
--		wx1, wx2, wx3, wx4, 
--		wz1, wz2, wz3, wz4, wz5, wz6) 
--	begin
--		wx1<=x1; wx2<=x2; wx3<=x3; wx4<=x4; 
--		wz1<=z1; wz2<=z2; wz3<=z3; wz4<=z4; wz5<=z5; wz6<=z6; 
--		y1 <= wy1; y2 <= wy2; y3<=wy3; y4<=wy4;
--	end process;
	
	lv1_mod_l: mulop port map(x1, 	z1,	o_lv1_mod_l);
	lv1_mod_r: mulop port map(x4, 	z4,	o_lv1_mod_r);
	lv1_add_l: addop port map(x2, 	z2,	o_lv1_add_l);
	lv1_add_r: addop port map(x3,		z3,	o_lv1_add_r);
	lv2_xor 	: xorop port map(o_lv1_mod_l, 	o_lv1_add_r, 	o_lv2_xor);
	lv3_xor 	: xorop port map(o_lv1_add_l, 	o_lv1_mod_r, 	o_lv3_xor);
	lv4_mod_l: mulop port map(o_lv2_xor, 		z5, 				o_lv4_mod_l);
	lv4_add_r: addop port map(o_lv3_xor, 		o_lv4_mod_l,	o_lv4_add_r);
	lv5_mod_r: mulop port map(z6,					o_lv4_add_r, 	o_lv5_mod_r);
	lv5_add_l: addop port map(o_lv4_mod_l, 	o_lv5_mod_r, 	o_lv5_add_l);
	lv6_xor_l: xorop port map(o_lv1_mod_l, 	o_lv5_mod_r, 	y1);
	lv6_xor_r: xorop port map(o_lv5_mod_r, 	o_lv1_add_r, 	y2);
	lv7_xor_l: xorop port map(o_lv1_add_l, 	o_lv5_add_l, 	y3);
	lv7_xor_r: xorop port map(o_lv1_mod_r, 	o_lv5_add_l, 	y4);
	
end Behavioral;

