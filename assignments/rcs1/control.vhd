----------------------------------------------------------------------------------
-- Company: 
-- Engineer:  Markus Gulo
-- 
-- Create Date:     
-- Design Name: 
-- Module Name:    control - Behavioral 
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

entity control is
    Port ( CLK : in  STD_LOGIC;
           START : in  STD_LOGIC;
           ROUND : out  STD_LOGIC_VECTOR (3 downto 0);
           READY : out  STD_LOGIC; 
           EN : out  STD_LOGIC; -- enable state change
           S : out  STD_LOGIC); -- current state
end control;

architecture Behavioral of control is
	signal state : std_logic_vector(3 downto 0) := "1000"; 
	-- "states" 1-9 as "0000" to "1000".
	-- "state" is signal, "lap" is output port
	-- "lap" input port initially undefined, bc "signal" 
	-- outputs to "lap" during the first clock.
	
	begin 
	
	state_machine: process(clk, start) 
	
		begin
			if rising_edge(clk) then
			
				if state = "1000" then 
										
					-- Encryption start
						-- Assignment plot: Setting start = '1' needs 1 cycle to trigger "0000".
						-- My plot: Setting start = '1' simultaneously triggers "0000". 
						if start = '1' then -- and waited = 1 then 	
						state <= "0000";
						round <= "0000";
						ready <= '0';
						s <= '0';
						en <= '1';
					
					-- Idle
					else -- start = '0' 
						state <= "1000";
						round <= "1000";
						ready <= '1';
						s <= '1';
						en <= '0';
				
					end if;
						
				elsif state = "0000" then
					state <= "0001";
					round <= "0001";
					ready <= '0';
					s <= '1';
					en <= '1';
					
				elsif state = "0001" then 
					state <= "0010";
					round <= "0010";
					ready <= '0';
					s <= '1';
					en <= '1';
					
				elsif state = "0010" then 
					state  <= "0011"; 
					round <= "0011";
					ready <= '0';
					s <= '1';
					en <= '1';
					
				elsif state = "0011" then 
					state <= "0100";
					round <= "0100";
					ready <= '0';
					s <= '1';
					en <= '1';
					
				elsif state = "0100" then 
					state <= "0101";
					round <= "0101";
					ready <= '0';
					s <= '1';
					en <= '1';
					
				elsif state = "0101" then 
					state <= "0110";
					round <= "0110";
					ready <= '0';
					s <= '1';
					en <= '1';
				
				elsif state = "0110" then 
					state <= "0111";
					round <= "0111";
					ready <= '0';
					s <= '1';
					en <= '1';
				
				elsif state = "0111" then
					-- Encryption finish
					state <= "1000";
					round <= "1000";
					ready <= '1';
					s <= '1';
					en <= '0';
				
				else
--					report "ERROR: UNDEFINED CASE";
				end if;
				
			end if; 
			
	end process;

end Behavioral;

