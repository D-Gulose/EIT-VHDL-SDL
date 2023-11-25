----------------------------------------------------------------------------------
-- Company: 
-- Engineer:  Markus Gulo
-- 
-- Create Date:    15:45:53 11/23/2023 
-- Design Name: 
-- Module Name:    trafo - Behavioral 
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

entity trafo is
    Port ( x1 : in  std_logic_vector(15 downto 0);
           x2 : in  std_logic_vector(15 downto 0);
           x3 : in  std_logic_vector(15 downto 0);
           x4 : in  std_logic_vector(15 downto 0);
           z1 : in  std_logic_vector(15 downto 0);
           z2 : in  std_logic_vector(15 downto 0);
           z4 : in  std_logic_vector(15 downto 0);
           z3 : in  std_logic_vector(15 downto 0);
           y1 : out  std_logic_vector(15 downto 0);
           y2 : out  std_logic_vector(15 downto 0);
           y3 : out  std_logic_vector(15 downto 0);
           y4 : out  std_logic_vector(15 downto 0));
end trafo;

architecture Behavioral of trafo is

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

begin

	mul_l : mulop port map(x1, z1, y1);
	add_l : addop port map(x3, z2, y2);
	add_r : addop port map(x2, z3, y3);
	mul_r : mulop port map(x4, z4, y4);

end Behavioral;

