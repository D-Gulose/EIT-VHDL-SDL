----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    16:17:54 12/15/2023 
-- Design Name: 
-- Module Name:    keygen - Behavioral 
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
use ieee.std_logic_arith.all;

entity keygen is
    Port ( inputkey : in  STD_LOGIC_VECTOR (127 downto 0);
           lap : in  STD_LOGIC_VECTOR (3 downto 0);
           key1 : in  STD_LOGIC_VECTOR (15 downto 0);
           key2 : in  STD_LOGIC_VECTOR (15 downto 0);
           key3 : in  STD_LOGIC_VECTOR (15 downto 0);
           key4 : in  STD_LOGIC_VECTOR (15 downto 0);
           key5 : in  STD_LOGIC_VECTOR (15 downto 0);
           key6 : in  STD_LOGIC_VECTOR (15 downto 0));
end keygen;

architecture Behavioral of keygen is

	type matrix is array(51 downto 0) of std_logic_vector(15 downto 0);
	signal subkeys : matrix := (others => (others => '0'));
	signal shift_a, shift_b : std_logic;
	signal keys_a, keys_b: std_logic_vector(1 downto 0);
	
	begin
	
		select_round: process
			begin
				case lap is
					when b"0000" => -- lap 1
						shift_a <= '0'; 
						keys_a <= x"6_1"'; 
						shift_b <= 'U'; 
						keys_b <= x"XX";
						
					when b"0001" => -- lap 2
						shift_a <= '0'; keys_a <= x"8_7";
						shift_b <= '1'; keys_b <= x"4_1";
						
					when b"0010" => -- lap 3
						shift_a <= '1'; keys_a <= x"8_5";
						shift_b <= '2'; keys_b <= x"2_1";

					when b"0011" => -- lap 4
						shift_a <= '2'; keys_a <= x"8_3";
						shift_b <= 'X'; keys_b <= "XX";
						
					when b"0100" => -- lap 5
						shift_a <= '3'; keys_a <= x"6_1";
						shift_b <= 'X'; keys_b <= "XX";
						
					when b"0101" => -- lap 6
						shift_a <= '3'; keys_a <= x"8_7";
						shift_b <= '4'; keys_b <= x"4_1";

					when b"0110" => -- lap 7
						shift_a <= '4'; keys_a <= x"8_5";
						shift_b <= '5'; keys_b <= x"2_1";
						
					when b"0111" => -- lap 8
						shift_a <= '5'; keys_a <= x"8_3";
						shift_b <= 'X'; keys_b <= "XX";
						
					when b"1000" => -- output trafo
						shift_a <= '6'; keys_a <= x"4_1";
						shift_b <= 'X'; keys_b <= "XX";
					
					when others => -- undefined
						report "Case error"
				end case;
		end process;				
	
	
		process(KEY)
			constant key_sz : integer:= 16;
			variable key_shifted : std_logic_vector(127 downto 0); 
			variable ctr : integer;
				
			begin
			-- VARIABLES/SIGNALS ONLY DECLARE BEFORE 'BEGIN' AND ASSIGN AFTER 'BEGIN' !!!
			ctr := 0;
			key_shifted := KEY;		
		
			for shift in 0 to 6 loop 
				for key in 0 to 8 loop
					if shift = shift_a then
						
					if shift = shift_b then 
					
					subkeys(ctr) <= key_shifted((key_sz*8-1)-key_sz*part downto (key_sz*8)-key_sz*(part+1));
					ctr := ctr + 1;
					exit when ctr > 51 ;
				end loop;
				key_shifted := key_shifted(102 downto 0) & key_shifted(127 downto 103);
			end loop;
		
	end process;

	needed_key : process(lap)
	
		begin
		

		



end Behavioral;

