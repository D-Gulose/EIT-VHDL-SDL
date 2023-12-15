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

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

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
	
	begin

		process(KEY)
			constant shifts : integer := 6;
			constant partitions : integer := 7;
			constant key_sz : integer:= 16;
			variable key_shifted : std_logic_vector(127 downto 0); 
			variable ctr : integer;
				
		begin
		-- VARIABLES/SIGNALS ONLY DECLARE BEFORE 'BEGIN' AND ASSIGN AFTER 'BEGIN' !!!
		ctr := 0;
		key_shifted := KEY;		
	
		for shift in 0 to shifts loop 
			for part in 0 to partitions loop 
				subkeys(ctr) <= key_shifted((key_sz*8-1)-key_sz*part downto (key_sz*8)-key_sz*(part+1));
				ctr := ctr + 1;
				exit when ctr > 51 ;
			end loop;
			key_shifted := key_shifted(102 downto 0) & key_shifted(127 downto 103);
		end loop;
		
	end process;

	needed_key : process(lap)
	
		begin
		
		case lap is
			when x"0000" => -- lap 1
			when x"0001" => -- lap 2
			when x"0010" => -- lap 3
			when x"0011" => -- lap 4
			when x"0100" => -- lap 5
			when x"0101" => -- lap 6
			when x"0110" => -- lap 7
			when x"0111" => -- lap 8
			when x"1000" => -- output trafo
			when others => -- undefined
		



end Behavioral;

