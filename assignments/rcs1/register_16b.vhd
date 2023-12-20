----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    11:53:00 12/13/2023 
-- Design Name: 
-- Module Name:    register_16b - Behavioral 
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

entity register_16b is
    Port ( CLK : in  STD_LOGIC;
           ENABLE : in  STD_LOGIC;
           D : in  STD_LOGIC_VECTOR(15 downto 0); -- input
           q : out  STD_LOGIC_VECTOR(15 downto 0)); -- output
		end register_16b;

architecture Behavioral of register_16b is

	begin

	process(clk) 

		begin 

		if (clk='1' and clk'EVENT and enable='1') then -- or rising_edge(clk)
			q <= d ;
		end if;
	
end process;

end Behavioral;

