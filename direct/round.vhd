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
    Port ( i1 : in  STD_LOGIC;
           i2 : in  STD_LOGIC;
           o : out  STD_LOGIC);
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
	signal xor_i1, xor_i2, xor_o, add_i1, add_i2, add_o, mul_i1, mul_i2, mul_o 
		: STD_LOGIC_VECTOR(15 downto 0);

begin

	-- INSTANTIATE MODULES
	xor_obj : xorop port map (I1=>xor_i1, I2=>xor_i2, O=>xor_o);
	add_obj : addop port map (I1=>add_i1, I2=>add_i2, O=>add_o);
	mul_obj : mulop port map (I_1=>mul_i1, I_2=>mul_i2, O=>mul_o);
	
	

end Behavioral;

