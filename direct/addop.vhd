----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    15:17:52 11/19/2023 
-- Design Name: 
-- Module Name:    addop - Behavioral 
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
--use ieee.numeric_std.all;
--use IEEE.std_logic_arith.all;
use ieee.std_logic_unsigned.all;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity addop is
    Port ( I1 : in  STD_LOGIC_VECTOR(15 downto 0);
           I2 : in  STD_LOGIC_VECTOR(15 downto 0);
           O : out  STD_LOGIC_VECTOR(15 downto 0) 
			  );
end addop;

architecture Behavioral of addop is
	signal sum : std_logic_vector(16 downto 0);

begin	
	
	process(I1, I2, sum)
		begin
		sum <= (others => '0');
		sum <= ('0' & I1) + ('0' + I2);
		O <= sum(15 downto 0);
	 
	end process;

end Behavioral;
