----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    18:35:29 12/14/2023 
-- Design Name: 
-- Module Name:    mux2x1 - Behavioral 
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

entity mux2x1 is
	Port( S : in  STD_LOGIC;
		D0 : in  STD_LOGIC_VECTOR(15 downto 0);
		D1 : in  STD_LOGIC_VECTOR(15 downto 0);
		O : out  STD_LOGIC_VECTOR(15 downto 0) );
end mux2x1;

architecture Behavioral of mux2x1 is
	begin
	process(s, d0, d1) -- instant, no clk
		begin
			case S is
				when '0' 
					=> o <= d0;
				when '1' 
					=> o <= d1;
				when others 
					=> o <= (others=>'X'); -- undefined 'U' case
			end case; 
	end process;

end Behavioral;

