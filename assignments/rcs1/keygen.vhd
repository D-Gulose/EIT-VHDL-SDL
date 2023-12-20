----------------------------------------------------------------------------------
-- Company: 
-- Engineer: Saptarshi Mitra
-- 
-- Create Date:    16:22:30 12/07/2018 
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

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity keygen is
    Port ( KEY : in  STD_LOGIC_VECTOR (127 downto 0);
           ROUND : in  STD_LOGIC_VECTOR (3 downto 0);
           KEY1 : out  STD_LOGIC_VECTOR (15 downto 0);
           KEY2 : out  STD_LOGIC_VECTOR (15 downto 0);
           KEY3 : out  STD_LOGIC_VECTOR (15 downto 0);
           KEY4 : out  STD_LOGIC_VECTOR (15 downto 0);
           KEY5 : out  STD_LOGIC_VECTOR (15 downto 0);
           KEY6 : out  STD_LOGIC_VECTOR (15 downto 0));
end keygen;

architecture Behavioral of keygen is

signal SELECTED_KEY: std_logic_vector (95 downto 0);

begin



	process (ROUND)
	begin
		case ROUND is
			when "0000" => SELECTED_KEY <= KEY(127 downto 32);
			when "0001" => SELECTED_KEY <= KEY(31 downto 0) & KEY(102 downto 39);
			when "0010" => SELECTED_KEY <= KEY(38 downto 0) & KEY(127 downto 103) & KEY(77 downto 46);
			when "0011" => SELECTED_KEY <= KEY(45 downto 0) & KEY(127 downto 78);
			when "0100" => SELECTED_KEY <= KEY(52 downto 0) & KEY(127 downto 85);
			when "0101" => SELECTED_KEY <= KEY(84 downto 53) & KEY(27 downto 0) & KEY(127 downto 92);
			when "0110" => SELECTED_KEY <= KEY(91 downto 28) & KEY(2 downto 0) & KEY(127 downto 99);
			when "0111" => SELECTED_KEY <= KEY(98 downto 3);
			when "1000" => SELECTED_KEY <= KEY(105 downto 42) & x"00000000"; --64 bits + 8*4 bits= 96 bits key to maintain no error
			when others => SELECTED_KEY <= x"000000000000000000000000";
		end case;
	end process;

	KEY1 <= SELECTED_KEY(95 downto 80); -- these are the 6 keys of total 96 bits, seperate keys for operations
	KEY2 <= SELECTED_KEY(79 downto 64);
	KEY3 <= SELECTED_KEY(63 downto 48);
	KEY4 <= SELECTED_KEY(47 downto 32);
	KEY5 <= SELECTED_KEY(31 downto 16);
	KEY6 <= SELECTED_KEY(15 downto 0);



end Behavioral;



------------------------------------------------------------------------------------
---- Company: 
---- Engineer: 
---- 
---- Create Date:    16:17:54 12/15/2023 
---- Design Name: 
---- Module Name:    keygen - Behavioral 
---- Project Name: 
---- Target Devices: 
---- Tool versions: 
---- Description: 
----
---- Dependencies: 
----
---- Revision: 
---- Revision 0.01 - File Created
---- Additional Comments: 
----
------------------------------------------------------------------------------------
--library IEEE;
--use IEEE.STD_LOGIC_1164.ALL;
--use ieee.numeric_std.all;
--
---- port names can be choosen arbitrarily
--entity keygen is
--    Port ( inputkey : in STD_LOGIC_VECTOR (127 downto 0);
--           lap  : in STD_LOGIC_VECTOR (3 downto 0);
--           key1 : out STD_LOGIC_VECTOR (15 downto 0);
--           key2 : out STD_LOGIC_VECTOR (15 downto 0);
--           key3 : out STD_LOGIC_VECTOR (15 downto 0);
--           key4 : out STD_LOGIC_VECTOR (15 downto 0);
--           key5 : out STD_LOGIC_VECTOR (15 downto 0);
--           key6 : out STD_LOGIC_VECTOR (15 downto 0));
--end keygen;
--
--architecture Behavioral of keygen is
----	signal fullkey_out : std_logic_vector(95 downto 0) := (others=>'X');
----	signal check : std_logic_vector(95 downto 0) := (others=>'0');
--	
--	begin
--
--		process(inputkey, lap)			
--		-- Laps unchanged, keys changes -> inputkey must be in sensitivity list
--		-- Simulation initialization: Programm output contineous before finishing initialization, 
--		--		but consol repeats output after initialization once it reached programm position, 
--		-- 	where finished initialization is needed.
--		
--		
--			-- VARIABLES/SIGNALS ONLY DECLARE BEFORE 'BEGIN' AND ASSIGN AFTER 'BEGIN' !!!
--			-- More readable to use bit numbers:
--			-- * 128 or 127 .. fullkey size or size-1 
--			-- * 16 or 15.. subkey size or size-1
--			
--			variable subkeys : std_logic_vector(95 downto 0);
--			variable shift1, subkey1: integer := 0;
--			variable fullkey_tmp : std_logic_vector(127 downto 0);
--			variable fullkey_out : std_logic_vector(95 downto 0);
--			variable key_ctr, pos1, loop_end : integer;
--			
--			begin
--				case lap is -- lap = round
--					when b"0000" => -- lap 1
--						shift1 := 0; subkey1 := 1; 
--					when b"0001" => -- lap 2
--						shift1 := 0; subkey1 := 7; 
--					when b"0010" => -- lap 3
--						shift1 := 1; subkey1 := 5; 
--					when b"0011" => -- lap 4
--						shift1 := 2; subkey1 := 3; 			
--					when b"0100" => -- lap 5
--						shift1 := 3; subkey1 := 1;
--					when b"0101" => -- lap 6
--						shift1 := 3; subkey1 := 7; 
--					when b"0110" => -- lap 7
--						shift1 := 4; subkey1 := 5; 
--					when b"0111" => -- lap 8
--						shift1 := 5; subkey1 := 3;
--					when b"1000" => -- output trafo
--						shift1 := 6; subkey1 := 1; 
--					when others => -- undefined
--						report "ERROR CASE in keygen";
--				end case;
--				
----				report "Case shift1 = " & integer'image(shift1);
----				report "Case subkey1 = " & integer'image(subkey1);				
--				key_ctr := 6;
--				fullkey_tmp := inputkey;
--			
--				l_shift: for shift in 0 to 6 loop
----					report "Test loop: l_shift " & integer'image(shift);
--					if (shift = shift1) then
----						report "If 1";
--						pos1 := subkey1;
--						loop_end := 8;
--					elsif (shift = shift1+1) and (key_ctr > 0) then
----						report "If 2";
--						pos1 := 1;
--						loop_end := key_ctr;
--					else -- skip iteration
--						report "If 4";
--						fullkey_tmp := fullkey_tmp(102 downto 0) & fullkey_tmp(127 downto 103);
--						next l_shift;
--					end if;
--					
--					l_pos: for pos in pos1 to loop_end loop
--						
----						report "test l_pos: " & integer'image(pos) & "/" & integer'image(loop_end);
----						report integer'image(key_ctr*16-1);
----						report integer'image(16*(key_ctr-1));
----						report integer'image(127-16*(pos-1));
----						report integer'image(127-16*pos+1);					
--						fullkey_out(key_ctr*16-1 downto 16*(key_ctr-1)) := 
--							fullkey_tmp(127-16*(pos-1) downto 127-16*pos+1);
--						key_ctr := key_ctr - 1;
----						report "key_ctr: " & integer'image(key_ctr);
--
--						if key_ctr < 1 then 
--							exit l_shift; 
--						end if;
--						
--					end loop;
--					fullkey_tmp := fullkey_tmp(102 downto 0) & fullkey_tmp(127 downto 103);
--				
--				end loop;
--			
--				key6 <= fullkey_out(15 downto 0);
--				key5 <= fullkey_out(31 downto 16);
--				key4 <= fullkey_out(47 downto 32);
--				key3 <= fullkey_out(63 downto 48);
--				key2 <= fullkey_out(79 downto 64);
--				key1 <= fullkey_out(95 downto 80);	
--		end process;
--	
--end Behavioral;
