--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   21:55:23 11/18/2023
-- Design Name:   
-- Module Name:   /home/ise/my_shared_folder/Rep-EIT-VHDL-SDL/direct/tb_xorop.vhd
-- Project Name:  idea
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: xorop
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
use ieee.std_logic_unsigned.all;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY tb_xorop IS
END tb_xorop; -- no input/output
 
ARCHITECTURE behavior OF tb_xorop IS 
 
    COMPONENT xorop -- Component Declaration for the Unit Under Test (UUT)
    PORT(
         I1 : IN  std_logic_vector(15 downto 0);
         I2 : IN  std_logic_vector(15 downto 0);
         O : OUT  std_logic_vector(15 downto 0)
        );
    END COMPONENT;
   
   signal I1, I2, O, O_EXPECTED : std_logic_vector(15 downto 0);--:= "0000";
	signal tc_pass : std_logic := '0';
	constant TC_BREAK : time := 10 ns;
   
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   UUT_xorop_instance: xorop PORT MAP (
          I1 => I1,
          I2 => I2,
          O => O --?
        );

	stimulus: process begin
		
		-- TC1
		I1<= x"0000";
		I2<= x"0000";
		O_EXPECTED <= x"0000";
		wait for TC_BREAK;
		
		-- TC2
		I1<= x"1234";
		I2<= x"5678";
		O_EXPECTED <= x"444c";
		wait for TC_BREAK;
		
		-- TC3
		I1<= x"1234";
		I2<= x"0000";
		O_EXPECTED<= x"1234";
		wait for TC_BREAK;
		
		-- + TC4
		I1<= x"0000";
		I2<= x"1234";
		O_EXPECTED<= x"1234";
		wait for TC_BREAK;
		
		wait;
	end process;
	
 	compare: process begin
		for I in 0 to 3 loop
			if O = O_EXPECTED  then 
				tc_pass <= '1';
				report "Test passed";
			else
				tc_pass <= '0';
				report "Test failed";
			end if;
			wait for TC_BREAK;
		end loop;
		wait;
	end process;
			
END architecture;
