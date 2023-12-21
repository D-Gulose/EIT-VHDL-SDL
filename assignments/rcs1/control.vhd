--library IEEE;
--use IEEE.STD_LOGIC_1164.ALL;
--
---- Uncomment the following library declaration if using
---- arithmetic functions with Signed or Unsigned values
----use IEEE.NUMERIC_STD.ALL;
--
---- Uncomment the following library declaration if instantiating
---- any Xilinx primitives in this code.
----library UNISIM;
----use UNISIM.VComponents.all;
--
--entity control is
--    Port ( CLK : in  STD_LOGIC;
--           START : in  STD_LOGIC;
--           ROUND : out  STD_LOGIC_VECTOR (3 downto 0);
--           READY : out  STD_LOGIC;
--           EN : out  STD_LOGIC;
--           S : out  STD_LOGIC);
--end control;
--
--architecture Behavioral of control is
--
--type STATE_TYPE is (init, R0, R1, R2, R3, R4, R5, R6, R7, R8);
--signal NEXT_STATE, CURRENT_STATE: STATE_TYPE;
--
--
--begin
--
--	state_reg: process(CLK, START)
--		 begin
--			if (rising_edge(CLK)) then
--				 CURRENT_STATE <= NEXT_STATE;
--			end if;
--	end process;						  
--
--	comb_logic: process(CURRENT_STATE, START)
--		 begin
--
--		case CURRENT_STATE is
--
--			 when init =>	
--				ROUND <= "1000";
--				READY <= '1';
--				EN <= '0';
--				S <= '1';
--				if START='1' then
--					 NEXT_STATE <= R0;
--				elsif START='0' then
--					 NEXT_STATE <= init;
--				end if;
--				
--			 when R0 =>	
--				ROUND <= "0000";
--				READY <= '0';
--				EN <= '1';
--				S <= '0';
--				NEXT_STATE <= R1;
--
--			when R1 =>	
--				ROUND <= "0001";
--				READY <= '0';
--				EN <= '1';
--				S <= '1';
--				NEXT_STATE <= R2;
--
--			when R2 =>	
--				ROUND <= "0010";
--				READY <= '0';
--				EN <= '1';
--				S <= '1';
--				NEXT_STATE <= R3;
--
--			when R3 =>	
--				ROUND <= "0011";
--				READY <= '0';
--				EN <= '1';
--				S <= '1';
--				NEXT_STATE <= R4;
--
--			when R4 =>	
--				ROUND <= "0100";
--				READY <= '0';
--				EN <= '1';
--				S <= '1';
--				NEXT_STATE <= R5;
--
--			when R5 =>	
--				ROUND <= "0101";
--				READY <= '0';
--				EN <= '1';
--				S <= '1';
--				NEXT_STATE <= R6;
--				
--			when R6 =>	
--				ROUND <= "0110";
--				READY <= '0';
--				EN <= '1';
--				S <= '1';
--				NEXT_STATE <= R7;
--		
--			when R7 =>	
--				ROUND <= "0111";
--				READY <= '0';
--				EN <= '1';
--				S <= '1';
--				NEXT_STATE <= R8;
--
--			when R8 =>	
--				ROUND <= "1000";
--				READY <= '1';
--				EN <= '0';
--				S <= '1';
--				NEXT_STATE <= init;
--				
--			when others =>
--		end case;
--
--	end process;
--
--end Behavioral;


----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
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

--entity control is
--    Port ( CLK : in  STD_LOGIC;
--           START : in  STD_LOGIC;
--           ROUND : out  STD_LOGIC_VECTOR (3 downto 0);
--           READY : out  STD_LOGIC;
--           EN : out  STD_LOGIC;
--           S : out  STD_LOGIC);
--end control;
--
--architecture Behavioral of control is
--
--	signal state: std_logic_vector(3 downto 0);
--
--begin
--
--	process (CLK, START)
--
--		type state_type is (ready_state, start_state, work_state);
--		
--		variable general_state : state_type;
--
--	begin
--		if (rising_edge(CLK)) then 
--			case state is
--				when "0000" => state <= "0001";
--				when "0001" => state <= "0010";
--				when "0010" => state <= "0011";
--				when "0011" => state <= "0100";
--				when "0100" => state <= "0101";
--				when "0101" => state <= "0110";
--				when "0110" => state <= "0111";
--				when "0111" => state <= "1000";
--				when "1000" =>
--					if (START = '1') then			
--						general_state := start_state;
--					else
--						general_state := ready_state;
--					end if;
--				when others =>
--					state <= "1000";
--					general_state := ready_state;
--					
--			end case;
--			
--			
--			case general_state is
--				when ready_state =>
--					ROUND <= state;
--					READY <='1';
--					EN <='0';
--				when start_state => 
--					ROUND <= "0000";
--					READY <= '0';
--					EN <= '1';
--					S <= '0';
--					state <= "0001";
--					general_state := work_state;
--				when work_state => 
--					ROUND <= state;
--					S <= '1';
--			end case;
--		end if;
--		
--	end process;
--
--end Behavioral;

----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
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
--	signal waited : integer := 0;
	-- rounds / states 1 to 9 are decoaded as "0000" to "1000".
	
	begin 
	
	state_machine: process(clk, start) 
	
		begin
			if rising_edge(clk) then
			
				if state = "1000" then 
										
					-- Encryption start
					-- Assignment plot: Setting start = '1' during rising edge. One cycle wait, then the next reaching rising edge clk triggers "0000".
					-- My plot: Setting start = '1' during rising edge simultaneously triggers "0000". No clk cycle wait.
					if start = '1' then -- and waited = 1 then 	
						state <= "0000";
						round <= "0000";
						ready <= '0';
						s <= '0';
						en <= '1';
--						waited <= 0;
						
--					elsif start = '1' then
--						state <= "1000";
--						round <= "1000";
--						ready <= '1';
--						s <= '1';
--						en <= '0';
--						waited <= 1;
					
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
					report "ERROR: UNDEFINED CASE";
				end if;
				
			end if; 
			
	end process;

end Behavioral;

