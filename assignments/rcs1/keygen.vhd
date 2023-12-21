----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    23:50:14 12/20/2017 
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
    Port ( fullkey : in  STD_LOGIC_VECTOR (127 downto 0);
				lap : in  STD_LOGIC_VECTOR (3 downto 0);
           
           key1 : out  STD_LOGIC_VECTOR (15 downto 0);
           key2 : out  STD_LOGIC_VECTOR (15 downto 0);
           key3 : out  STD_LOGIC_VECTOR (15 downto 0);
           key4 : out  STD_LOGIC_VECTOR (15 downto 0);
           key5 : out  STD_LOGIC_VECTOR (15 downto 0);
           key6 : out  STD_LOGIC_VECTOR (15 downto 0));
end keygen;

architecture Behavioral of keygen is

begin
	process(fullkey,lap)
	
	variable temp_key : std_logic_vector(127 downto 0);
	
	begin
	
	temp_key := fullkey;
	
	case lap is
	
	when "0000" =>
		
		temp_key := fullkey;
		key1 <= temp_key(127 downto 112);
		key2 <= temp_key(111 downto 96);
		key3 <= temp_key(95 downto 80);
		key4 <= temp_key(79 downto 64);
		key5 <= temp_key(63 downto 48);
		key6 <= temp_key(47 downto 32);
		
	when "0001" =>
		
		key1 <= temp_key(31 downto 16);
		key2 <= temp_key(15 downto 0);
		temp_key := fullkey(102 downto 0) & fullkey(127 downto 103);
		key3 <= temp_key(127 downto 112);
		key4 <= temp_key(111 downto 96);
		key5 <= temp_key(95 downto 80);
		key6 <= temp_key(79 downto 64);
		
	when "0010" =>
		
		temp_key := fullkey(102 downto 0) & fullkey(127 downto 103);
		key1 <= temp_key(63 downto 48);
		key2 <= temp_key(47 downto 32);
		key3 <= temp_key(31 downto 16);
		key4 <= temp_key(15 downto 0);
		temp_key := temp_key(102 downto 0) & temp_key(127 downto 103);
		key5 <= temp_key(127 downto 112);
		key6 <= temp_key(111 downto 96);	
		
	when "0011" =>
		
		temp_key := fullkey(102 downto 0) & fullkey(127 downto 103);
		temp_key := temp_key(102 downto 0) & temp_key(127 downto 103);
		key1 <= temp_key(95 downto 80);
		key2 <= temp_key(79 downto 64);
		key3 <= temp_key(63 downto 48);
		key4 <= temp_key(47 downto 32);
		key5 <= temp_key(31 downto 16);
		key6 <= temp_key(15 downto 0);
	
	when "0100" =>
		
		temp_key := fullkey(102 downto 0) & fullkey(127 downto 103);
		temp_key := temp_key(102 downto 0) & temp_key(127 downto 103);
		temp_key := temp_key(102 downto 0) & temp_key(127 downto 103);
		key1 <= temp_key(127 downto 112);
		key2 <= temp_key(111 downto 96);
		key3 <= temp_key(95 downto 80);
		key4 <= temp_key(79 downto 64);
		key5 <= temp_key(63 downto 48);
		key6 <= temp_key(47 downto 32);
		
	when "0101" =>
		
		temp_key := fullkey(102 downto 0) & fullkey(127 downto 103);
		temp_key := temp_key(102 downto 0) & temp_key(127 downto 103);
		temp_key := temp_key(102 downto 0) & temp_key(127 downto 103);
		key1 <= temp_key(31 downto 16);
		key2 <= temp_key(15 downto 0);
		temp_key := temp_key(102 downto 0) & temp_key(127 downto 103);
		key3 <= temp_key(127 downto 112);
		key4 <= temp_key(111 downto 96);
		key5 <= temp_key(95 downto 80);
		key6 <= temp_key(79 downto 64);
		
	when "0110" =>
		
		temp_key := fullkey(102 downto 0) & fullkey(127 downto 103);
		temp_key := temp_key(102 downto 0) & temp_key(127 downto 103);
		temp_key := temp_key(102 downto 0) & temp_key(127 downto 103);
		temp_key := temp_key(102 downto 0) & temp_key(127 downto 103);
		key1 <= temp_key(63 downto 48);
		key2 <= temp_key(47 downto 32);
		key3 <= temp_key(31 downto 16);
		key4 <= temp_key(15 downto 0);
		temp_key := temp_key(102 downto 0) & temp_key(127 downto 103);
		key5 <= temp_key(127 downto 112);
		key6 <= temp_key(111 downto 96);
	
	when "0111" =>
		
		temp_key := fullkey(102 downto 0) & fullkey(127 downto 103);
		temp_key := temp_key(102 downto 0) & temp_key(127 downto 103);
		temp_key := temp_key(102 downto 0) & temp_key(127 downto 103);
		temp_key := temp_key(102 downto 0) & temp_key(127 downto 103);
		temp_key := temp_key(102 downto 0) & temp_key(127 downto 103);
		key1 <= temp_key(95 downto 80);
		key2 <= temp_key(79 downto 64);
		key3 <= temp_key(63 downto 48);
		key4 <= temp_key(47 downto 32);
		key5 <= temp_key(31 downto 16);
		key6 <= temp_key(15 downto 0);
		
	when "1000" =>
		
		temp_key := fullkey(102 downto 0) & fullkey(127 downto 103);
		temp_key := temp_key(102 downto 0) & temp_key(127 downto 103);
		temp_key := temp_key(102 downto 0) & temp_key(127 downto 103);
		temp_key := temp_key(102 downto 0) & temp_key(127 downto 103);
		temp_key := temp_key(102 downto 0) & temp_key(127 downto 103);
		temp_key := temp_key(102 downto 0) & temp_key(127 downto 103);
		key1 <= temp_key(127 downto 112);
		key2 <= temp_key(111 downto 96);
		key3 <= temp_key(95 downto 80);
		key4 <= temp_key(79 downto 64);
		key5 <= temp_key(63 downto 48);
		key6 <= temp_key(47 downto 32);
		
	when others =>
		temp_key:= fullkey;
		key1 <= "0000000000000000";
		key2 <= "0000000000000000";
		key3 <= "0000000000000000";
		key4 <= "0000000000000000";
		key5 <= "0000000000000000";
		key6 <= "0000000000000000";
	
	end case;
	end process;

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
--------------------------------------------------------------------------------------
--library IEEE;
--use IEEE.STD_LOGIC_1164.ALL;
--use ieee.numeric_std.all;
--
---- Arbitrary port names
--entity keygen is
--    Port ( fullkey : in STD_LOGIC_VECTOR (127 downto 0);
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
--	begin
--
--		process(fullkey, lap)			
--		-- Laps unchanged, keys changes -> fullkey must be in sensitivity list
--		-- Simulation initialization: Programm output contineous before finishing initialization, 
--		--		but consol repeats output after initialization once it reached programm position, 
--		-- 	where finished initialization is needed.
--		
--			-- VARIABLES/SIGNALS ONLY DECLARE BEFORE 'BEGIN' AND ASSIGN AFTER 'BEGIN' !!!
--			-- 128 or 127 .. fullkey size; 16 or 15.. subkey size
--			
--			variable fullkey_tmp : std_logic_vector(127 downto 0);
--			variable fullkey_out : std_logic_vector(95 downto 0);
--	
--			variable shift1, subkey1: integer;		
--			variable key_ctr, pos1, loop_end : integer;
--			
--			begin
--				key_ctr := 6;
--				fullkey_tmp := fullkey;
--				
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
--					when others => -- 
--						-- "lap" input port initially undefined, bc "control" 
--						-- outputs its lap state during the first clock.
--						shift1 := -1;
--						subkey1 := 1;
--				end case;
--				
----				report "Case shift1 = " & integer'image(shift1);
----				report "Case subkey1 = " & integer'image(subkey1);				
--
--				l_shift: for shift in 0 to 6 loop
----					report "Test loop: l_shift " & integer'image(shift);
--					if (shift = shift1) then
----						report "1st shift of round";
--						pos1 := subkey1;
--					elsif (shift = shift1+1) and (key_ctr > 0) then
----						report "2nd rshift for round";
--						pos1 := 1;
--					else 
----						report "Skip this shift value";
--						fullkey_tmp := fullkey_tmp(102 downto 0) & fullkey_tmp(127 downto 103);
--						next l_shift;
--					end if;
--					
--					l_pos: for pos in 1 to 8 loop
--						
--						
----						report "test l_pos: " & integer'image(pos) & "/" & integer'image(loop_end);
----						report integer'image(key_ctr*16-1);
----						report integer'image(16*(key_ctr-1));
----						report integer'image(127-16*(pos-1));
----						report integer'image(127-16*pos+1);
--						
--						if pos >= pos1 then 
--							fullkey_out(key_ctr*16-1 downto 16*(key_ctr-1)) := 
--								fullkey_tmp(127-16*(pos-1) downto 127-16*pos+1);
--							key_ctr := key_ctr - 1;
--
--	--						report "key_ctr: " & integer'image(key_ctr);
--
--							if key_ctr < 1 then 
--								exit l_shift; 
--							end if;
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
