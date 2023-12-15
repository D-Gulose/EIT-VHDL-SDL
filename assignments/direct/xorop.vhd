----------------------------------------------------------------------------------
-- Company: 
-- Engineer:  Markus Gulo
-- 
-- Create Date:    21:50:18 11/18/2023 
-- Design Name: 
-- Module Name:    xorop - Behavioral 
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
use ieee.std_logic_unsigned.all;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity xorop is
    Port ( I1 : in  std_logic_vector(15 downto 0);
           I2 : in  std_logic_vector(15 downto 0);
           O : out  std_logic_vector(15 downto 0)
			  );
end xorop;

architecture Behavioral of xorop is
begin

	process(I1, I2)
	begin
		O <= I1 XOR I2;
	end process;
	
end Behavioral;

