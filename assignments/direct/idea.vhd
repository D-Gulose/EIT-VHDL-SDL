----------------------------------------------------------------------------------
-- Company: 
-- Engineer: Markus Gulo
-- 
-- Create Date:     
-- Design Name: 
-- Module Name:    idea - Structural 
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

-- delete all *.wdb files for upload

entity idea is
    Port ( KEY : in  STD_LOGIC_VECTOR (127 downto 0);
           X_1 : in  STD_LOGIC_VECTOR (15 downto 0);
           X_2 : in  STD_LOGIC_VECTOR (15 downto 0);
           X_3 : in  STD_LOGIC_VECTOR (15 downto 0);
           X_4 : in  STD_LOGIC_VECTOR (15 downto 0);
           Y_1 : out  STD_LOGIC_VECTOR (15 downto 0);
           Y_2 : out  STD_LOGIC_VECTOR (15 downto 0);
           Y_3 : out  STD_LOGIC_VECTOR (15 downto 0);
           Y_4 : out  STD_LOGIC_VECTOR (15 downto 0));
end idea;

architecture Structural of idea is

	-- MODULES
	component round Port ( 
		x1, x2, x3, x4, z1, z2, z3, z4, z5, z6 : in std_logic_vector(15 downto 0);
		y1, y2, y3, y4 : out std_logic_vector(15 downto 0)
	); end component;
		
	component trafo Port (
		x1, x2, x3, x4, z1, z2, z3, z4 : in std_logic_vector(15 downto 0);
		y1, y2, y3, y4 : out std_logic_vector(15 downto 0)
	); end component;
	
	-- SIGNALS
	signal 
	y1r1, y1r2, y1r3, y1r4, y1r5, y1r6, y1r7, y1r8, 
	y2r1, y2r2, y2r3, y2r4, y2r5, y2r6, y2r7, y2r8, 
	y3r1, y3r2, y3r3, y3r4, y3r5, y3r6, y3r7, y3r8, 
	y4r1, y4r2, y4r3, y4r4, y4r5, y4r6, y4r7, y4r8
	: STD_LOGIC_VECTOR (15 downto 0);

	
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

	r1 : round port map(
		X_1, X_2, X_3, X_4, subkeys(0), subkeys(1), subkeys(2), 
		subkeys(3), subkeys(4), subkeys(5), y1r1, y2r1, y3r1, y4r1
		);
		
	r2 : round port map(
		y1r1, y2r1, y3r1, y4r1, subkeys(6), subkeys(7), subkeys(8), 
		subkeys(9), subkeys(10), subkeys(11), y1r2, y2r2, y3r2, y4r2
		);

	r3 : round port map(
		y1r2, y2r2, y3r2, y4r2, subkeys(12), subkeys(13), subkeys(14), 
		subkeys(15), subkeys(16), subkeys(17), y1r3, y2r3, y3r3, y4r3
		);
	
	r4 : round port map(
		y1r3, y2r3, y3r3, y4r3, subkeys(18), subkeys(19), subkeys(20), 
		subkeys(21), subkeys(22), subkeys(23), y1r4, y2r4, y3r4, y4r4
		);
		
	r5 : round port map(
		y1r4, y2r4, y3r4, y4r4, subkeys(24), subkeys(25), subkeys(26), 
		subkeys(27), subkeys(28), subkeys(29), y1r5, y2r5, y3r5, y4r5
		);

	r6 : round port map(
		y1r5, y2r5, y3r5, y4r5, subkeys(30), subkeys(31), subkeys(32), 
		subkeys(33), subkeys(34), subkeys(35), y1r6, y2r6, y3r6, y4r6
		);
		
	r7 : round port map(
		y1r6, y2r6, y3r6, y4r6, subkeys(36), subkeys(37), subkeys(38), 
		subkeys(39), subkeys(40), subkeys(41), y1r7, y2r7, y3r7, y4r7
		);

	r8 : round port map(
		y1r7, y2r7, y3r7, y4r7, subkeys(42), subkeys(43), subkeys(44), 
		subkeys(45), subkeys(46), subkeys(47), y1r8, y2r8, y3r8, y4r8
		);
	
	t : trafo port map(
		y1r8, y2r8, y3r8, y4r8, subkeys(48), subkeys(49), subkeys(50), 
		subkeys(51), Y_1, Y_2, Y_3, Y_4
		);

end Structural;

