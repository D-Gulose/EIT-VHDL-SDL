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
    Port ( inputkey : in STD_LOGIC_VECTOR (127 downto 0);
           lap  : in STD_LOGIC_VECTOR (3 downto 0);
           key1 : out STD_LOGIC_VECTOR (15 downto 0);
           key2 : out STD_LOGIC_VECTOR (15 downto 0);
           key3 : out STD_LOGIC_VECTOR (15 downto 0);
           key4 : out STD_LOGIC_VECTOR (15 downto 0);
           key5 : out STD_LOGIC_VECTOR (15 downto 0);
           key6 : out STD_LOGIC_VECTOR (15 downto 0));
end keygen;

architecture Behavioral of keygen is
--	signal fullkey_out : std_logic_vector(95 downto 0) := (others=>'X');
	signal check : std_logic_vector(95 downto 0) := (others=>'0');
	
	
	begin
		
		
		
		process(inputkey)
			
			-- VARIABLES/SIGNALS ONLY DECLARE BEFORE 'BEGIN' AND ASSIGN AFTER 'BEGIN' !!!
			-- More readable to use bit numbers:
			-- * 128 or 127 .. fullkey size or size-1 
			-- * 16 or 15.. subkey size or size-1
			variable subkeys : std_logic_vector(95 downto 0);
			variable shift1, subkey1: integer := 0;
			variable fullkey_tmp : std_logic_vector(127 downto 0);
			variable fullkey_out : std_logic_vector(95 downto 0);
			variable key_ctr, pos1, loop_end, t1, t2, t3, t4, t5 : integer;
			

			begin
--				fullkey_out <= (others=>'1');
				case lap is -- lap = round
					when b"0000" => -- lap 1
						shift1 := 0; subkey1 := 1; 
					when b"0001" => -- lap 2
						shift1 := 0; subkey1 := 7; 
					when b"0010" => -- lap 3
						shift1 := 1; subkey1 := 5; 
					when b"0011" => -- lap 4
						shift1 := 2; subkey1 := 3; 			
					when b"0100" => -- lap 5
						shift1 := 3; subkey1 := 1;
					when b"0101" => -- lap 6
						shift1 := 3; subkey1 := 7; 
					when b"0110" => -- lap 7
						shift1 := 4; subkey1 := 6; 
					when b"0111" => -- lap 8
						shift1 := 5; subkey1 := 3;
					when b"1000" => -- output trafo
						shift1 := 6; --subkey1 := 1; 
					when others => -- undefined
						report "Case error";
				end case;
				
--				report "check anfang";
				report "Case shift1 = " & integer'image(shift1);
				report "Case subkey1 = " & integer'image(subkey1);
				
				key_ctr := 6;
				fullkey_tmp := inputkey;
			
				l_shift: for shift in 0 to 6 loop
					report "Test loop: l_shift " & integer'image(shift);
					if (shift = shift1) and (shift < 6) then
						pos1 := subkey1;
						loop_end := 8;
						report "fall 1";
					elsif (shift = shift1+1) and (key_ctr > 0) then
						pos1 := 1;
						loop_end := key_ctr;
						report "fall 2";
					elsif shift = 6 then -- output transform
						pos1 := 1;
						loop_end := 4;
						key_ctr := 4;
						report "fall 3";
					else -- skip iteration
						report "fall 4";
						report "shift happend";
						fullkey_tmp := fullkey_tmp(102 downto 0) & fullkey_tmp(127 downto 103);
						next l_shift;
						pos1 := 0;
						loop_end := 0;
					end if;
					
					l_pos: for pos in pos1 to loop_end loop
						report "test l_pos: " & integer'image(pos) & "/" & integer'image(loop_end);
						report integer'image(key_ctr*16-1);
						report integer'image(16*(key_ctr-1));
						report integer'image(127-16*(pos-1));
						report integer'image(127-16*pos+1);
						fullkey_out(key_ctr*16-1 downto 16*(key_ctr-1)) := 
							fullkey_tmp(127-16*(pos-1) downto 127-16*pos+1);
						check <= fullkey_out;
						key_ctr := key_ctr - 1;
						report integer'image(key_ctr);
						if key_ctr < 1 then 
							exit l_shift; 
						end if;
					end loop;
					report "shift happend";
					fullkey_tmp := fullkey_tmp(102 downto 0) & fullkey_tmp(127 downto 103);
				
				end loop;
			
			key6 <= fullkey_out(15 downto 0);
			key6 <= x"ffff";
			key5 <= fullkey_out(31 downto 16);
			key4 <= fullkey_out(47 downto 32);
			key3 <= fullkey_out(63 downto 48);
			key2 <= fullkey_out(79 downto 64);
			key1 <= fullkey_out(95 downto 80);	
	
	end process;
	
end Behavioral;
