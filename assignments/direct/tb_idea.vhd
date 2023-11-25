--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   17:04:11 11/25/2023
-- Design Name:   
-- Module Name:   /home/ise/my_shared_folder/Rep-EIT-VHDL-SDL/assignments/direct/tb_idea.vhd
-- Project Name:  idea
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: idea
-- 
-- Dependencies:
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
--
-- Notes: 
-- This testbench has been automatically generated using types std_logic and
-- std_logic_vector for the ports of the unit under test.  Xilinx recommends
-- that these types always be used for the top-level I/O of a design in order
-- to guarantee that the testbench will bind correctly to the post-implementation 
-- simulation model.
--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY tb_idea IS
END tb_idea;
 
ARCHITECTURE behavior OF tb_idea IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT idea
    PORT(
         KEY : IN  std_logic_vector(127 downto 0);
         X_1 : IN  std_logic_vector(15 downto 0);
         X_2 : IN  std_logic_vector(15 downto 0);
         X_3 : IN  std_logic_vector(15 downto 0);
         X_4 : IN  std_logic_vector(15 downto 0);
         Y_1 : OUT  std_logic_vector(15 downto 0);
         Y_2 : OUT  std_logic_vector(15 downto 0);
         Y_3 : OUT  std_logic_vector(15 downto 0);
         Y_4 : OUT  std_logic_vector(15 downto 0)
        );
    END COMPONENT;
    
 
   signal 
		x1, x2, x3, x4, 
		Y1, y1e, Y2, y2e, Y3, y3e, Y4, y4e 
		: std_logic_vector(15 downto 0);
	signal key : std_logic_vector(127 downto 0);
	signal tc_pass : std_logic := '0';
	constant TC_BREAK : time := 30 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: idea PORT MAP (
          KEY => KEY,
          X_1 => X1,
          X_2 => X2,
          X_3 => X3,
          X_4 => X4,
          Y_1 => Y1,
          Y_2 => Y2,
          Y_3 => Y3,
          Y_4 => Y4
        );

   stimulus : process begin
	
		--tc1
		key <= x"00000000000000000000000000000000";
		x1 <= x"0000";
		x2 <= x"0000";
		x3 <= x"0000";
		x4 <= x"0000";
		y1e <= x"0001";
		y2e <= x"0001";
		y3e <= x"0000";
		y4e <= x"0000";
		wait for TC_BREAK;

		--tc2
		key <= x"00010002000300040005000600070008";
		x1 <= x"1111";
		x2 <= x"2222";
		x3 <= x"4444";
		x4 <= x"8888";
		y1e <= x"8aa9";
		y2e <= x"0fef";
		y3e <= x"c0c9";
		y4e <= x"56f6";
		wait for TC_BREAK;
		
		--tc3
		key <= x"0AD79FDFA07DFA0F0AFD7DAF079DF770";
		x1 <= x"1F1F";
		x2 <= x"2E2E";
		x3 <= x"3D3D";
		x4 <= x"4A4A";
		y1e <= x"57e3";
		y2e <= x"a28b";
		y3e <= x"cd0b";
		y4e <= x"1ff9";
		wait for TC_BREAK;
		
		
		wait;
   end process;
 

 	compare: process begin
		wait for 1 ns;
		for I in 1 to 3 loop
			if (Y1 = y1e) and (Y2 = y2e) and (Y3 = y3e) and (Y4 = y4e) then 
				tc_pass <= '1';
				report "Test " & natural'image(I) & " passed";
			else
				tc_pass <= '0';
				report "Test " & natural'image(I) & " failed";
			end if;
			wait for TC_BREAK;
		end loop;
		wait;
	end process;

END;
