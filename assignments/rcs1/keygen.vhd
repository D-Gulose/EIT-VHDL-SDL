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
use ieee.numeric_std.all;

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

	signal subkeys : std_logic_vector(95 downto 0);
	signal shift1, subkey1: integer;
	
	begin
	
		cases: process
			begin
				case lap is
					when b"0000" => -- lap 1
						shift1 <= 0; subkey1 <= 1; 
					when b"0001" => -- lap 2
						shift1 <= 0; subkey1 <= 7; 
					when b"0010" => -- lap 3
						shift1 <= 1; subkey1 <= 5; 
					when b"0011" => -- lap 4
						shift1 <= 2; subkey1 <= 3; 			
					when b"0100" => -- lap 5
						shift1 <= 3; subkey1 <= 1;
					when b"0101" => -- lap 6
						shift1 <= 3; subkey1 <= 7; 
					when b"0110" => -- lap 7
						shift1 <= 4; subkey1 <= 6; 
					when b"0111" => -- lap 8
						shift1 <= 5; subkey1 <= 3;
					when b"1000" => -- output trafo
						shift1 <= 6; subkey1 <= 1; 
					when others => -- undefined
						report "Case error";
				end case;
				wait;
		end process;				
	
		process(shift1)
		
			-- VARIABLES/SIGNALS ONLY DECLARE BEFORE 'BEGIN' AND ASSIGN AFTER 'BEGIN' !!!
			-- 128 or 127 .. fullkey size (or and -1)
			-- 16 or 15.. subkey size (or and -1)
			variable fullkey_tmp, fullkey_out : std_logic_vector(127 downto 0); 
			variable key_ctr, pos1, loop_end: integer;

			begin
			
				key_ctr := 6;
				fullkey_tmp := inputkey;
--				fullkey_out := others=>'0';
			
				l_shift: for shift in 0 to 6 loop
					if (shift = shift1) and (shift < 6) then
						pos1 := subkey1;
						loop_end := 8;
					elsif (shift = shift1+1) and (key_ctr > 0) then
						pos1 := 1;
						loop_end := key_ctr;
					elsif shift = 6 then -- output transform
						pos1 := 1;
						loop_end := 4;
					else -- skip iteration
						pos1 := 0;
						loop_end := 0;
					end if;
					
					l_pos: for pos in pos1 to loop_end loop
						fullkey_out(127-16*(key_ctr-1) downto 127-16*key_ctr) := 
						fullkey_tmp(127-16*pos downto 127-16*(pos+1));
						key_ctr := key_ctr - 1;
						if key_ctr < 1 then exit l_shift; end if;
					end loop;
					
					fullkey_tmp := fullkey_tmp(102 downto 0) & fullkey_tmp(127 downto 103);
				
				end loop;
				
			
	end process;					
				
				
--		cases: process
--			begin
--				case lap is
--					when b"0000" => -- lap 1
--						shift1 <= 0; subkey1 <= 1; --subkey1last <= 6; 
----						shift2 <= -1; subkey2first <= -1;subkey1last <= -1;
--					when b"0001" => -- lap 2
--						shift1 <= 0; subkey1 <= 7; --subkey1last <= 8;
----						shift2 <= 1; subkey2first <= 1;subkey1last <= 4; 
--					when b"0010" => -- lap 3
--						shift1 <= 1; subkey1 <= 5; --subkey1last <= 8;
----						shift2 <= 2; subkey2first <= 1 ; subkey1last <= 2;
--					when b"0011" => -- lap 4
--						shift1 <= 2; subkey1 <= 3; --x"8_3";
----						shift2 <= -1; subkey2first <= "XX";					
--					when b"0100" => -- lap 5
--						shift1 <= 3; subkey1 <= 1;--x"6_1";
----						shift2 <= -1; subkey2first <= "XX";
--					when b"0101" => -- lap 6
--						shift1 <= 3; subkey1 <= 7; --x"8_7";
----						shift2 <= 4; subkey2first <= x"4_1";
--					when b"0110" => -- lap 7
--						shift1 <= 4; subkey1 <= 6; --x"8_5";
----						shift2 <= 5; subkey2first <= x"2_1";
--					when b"0111" => -- lap 8
--						shift1 <= 5; subkey1 <= 3; --x"8_3";
----						shift2 <= -1; subkey2first <= "XX";
--					when b"1000" => -- output trafo
--						shift1 <= 6; subkey1 <= 1; --x"4_1";
----						shift2 <= -1; subkey2first <= "XX";
--					when others => -- undefined
--						report "Case error";
--				end case;
--		end process;							
				
				
--					---- Rounds 
--					if shift = wanted_shift and shift < 6 then
--						pos_1st := subkey_1st
--						
--						l_pos: for pos in key_first to 8 loop
--							subkeys(ctr) <= key_shifted((fullkey_sz-1) - subkey_sz*pos downto fullkey_sz-key_sz*(pos+1));
--							ctr := ctr - 1;
--							if key_ctr < 1 then
--								exit l_shift;
--							end if;
--						end loop;
--						
--					elsif shift = wanted_shift+1 and key_ctr > 0 then1
--						l_pos: for pos in key_first to 8 loop
--							subkeys(ctr) <= key_shifted((fullkey_sz-1) - subkey_sz*pos downto fullkey_sz-key_sz*(pos+1));
--							ctr := ctr - 1;
--							if key_ctr < 1 then
--								exit l_shift;
--							end if;
--						end loop;
--						
--					-- Output transformation
--					elsif shift = 6 then
--						l_pos: for pos in 1 to 4 loop
--							subkeys(ctr) <= key_shifted((fullkey_sz-1) - subkey_sz*pos downto fullkey_sz-key_sz*(pos+1));
--					
--						
--					end if;
--						
--		
--					else 
--						next l1;
--						key_shifted := key_shifted(102 downto 0) & key_shifted(127 downto 103);
--					end if; 
--					----
--					l2: for key in key_first to key_last loop
--						subkeys(ctr) <= key_shifted((key_sz*8-1)-key_sz*key downto (key_sz*8)-key_sz*(key+1));
--						ctr := ctr + 1;
--						exit when ctr > 6;
--					end loop;
--					----
--					key_shifted := key_shifted(102 downto 0) & key_shifted(127 downto 103);
--				end loop;
--			
--	end process;					
--				
--				
				
--					----
--					if shift = shift1 then
--						key_first := to_integer(unsigned(subkey1first(0)));
--						key_last := subkey1first(1);
--					elsif shift = shift2 then 
--						key_first := subkey2first(0);
--						key_last := subkey2first(1);
--					else 
--						next l1;
--						key_shifted := key_shifted(102 downto 0) & key_shifted(127 downto 103);
--					end if; 
--					----
--					l2: for key in key_first to key_last loop
--						subkeys(ctr) <= key_shifted((key_sz*8-1)-key_sz*key downto (key_sz*8)-key_sz*(key+1));
--						ctr := ctr + 1;
--						exit when ctr > 6;
--					end loop;
--					----
--					key_shifted := key_shifted(102 downto 0) & key_shifted(127 downto 103);
--				end loop;
--			
--	end process;	


----	type matrix is array(51 downto 0) of std_logic_vector(15 downto 0);
----	signal subkeys : matrix := (others => (others => '0'));
--	signal shift1, shift2 : integer;
--	signal subkey1first, subkey2first: std_logic_vector(1 downto 0);
--	
--	begin
--	
--		select_round: process
--			constant subkey_size : integer := 16;
--			variable fullkey_tmp : std_logic_vector(127 downto 0); 
--			variable ctr, key_first, key_last : integer;
--			variable subkeys_all : std_logic_vector(95 downto 0);
--			-- VARIABLES/SIGNALS ONLY DECLARE BEFORE 'BEGIN' AND ASSIGN AFTER 'BEGIN' !!!	
--			begin
--				if lap = b"0000" then 
--					subkeys <= fullkey_tmp(126 downto 32)
--				end if; 
--				if lap = b"0001" then 
--					subkeys <= fullkey_tmp(126 downto 32)
--					
--					when b"0001" => -- lap 2
--						shift1 <= 0; subkey1first <= x"8_7";
--						shift2 <= 1; subkey2first <= x"4_1";
--					when b"0010" => -- lap 3
--						shift1 <= 1; subkey1first <= x"8_5";
--						shift2 <= 2; subkey2first <= x"2_1";
--					when b"0011" => -- lap 4
--						shift1 <= 2; subkey1first <= x"8_3";
--						shift2 <= 99; subkey2first <= "XX";					
--					when b"0100" => -- lap 5
--						shift1 <= 3; subkey1first <= x"6_1";
--						shift2 <= 99; subkey2first <= "XX";
--					when b"0101" => -- lap 6
--						shift1 <= 3; subkey1first <= x"8_7";
--						shift2 <= 4; subkey2first <= x"4_1";
--					when b"0110" => -- lap 7
--						shift1 <= 4; subkey1first <= x"8_5";
--						shift2 <= 5; subkey2first <= x"2_1";
--					when b"0111" => -- lap 8
--						shift1 <= 5; subkey1first <= x"8_3";
--						shift2 <= 99; subkey2first <= "XX";
--					when b"1000" => -- output trafo
--						shift1 <= 6; subkey1first <= x"4_1";
--						shift2 <= 99; subkey2first <= "XX";
--					when others => -- undefined
--						report "Case error";
--				end case;
--		end process;				
--	
--		process(KEY)
--			constant key_sz : integer:= 16;
--			variable key_shifted : std_logic_vector(127 downto 0); 
--			variable ctr, key_first, key_last : integer;
--			-- VARIABLES/SIGNALS ONLY DECLARE BEFORE 'BEGIN' AND ASSIGN AFTER 'BEGIN' !!!
--			
--			begin
--			
--				ctr := 0;
--				key_shifted := inputkey;	
--			
--				l1: for shift in 0 to 6 loop
--					----
--					if shift = shift1 then
--						key_first := subkey1first(0);
--						key_last := subkey1first(1);
--					elsif shift = shift2 then 
--						key_first := subkey2first(0);
--						key_last := subkey2first(1);
--					else 
--						next l1;
--						key_shifted := key_shifted(102 downto 0) & key_shifted(127 downto 103);
--					end if; 
--					----
--					l2: for key in key_first to key_last loop
--						subkeys(ctr) <= key_shifted((key_sz*8-1)-key_sz*key downto (key_sz*8)-key_sz*(key+1));
--						ctr := ctr + 1;
--						exit when ctr > 6;
--					end loop;
--					----
--					key_shifted := key_shifted(102 downto 0) & key_shifted(127 downto 103);
--				end loop;
--			
--	end process;	
--

end Behavioral;

