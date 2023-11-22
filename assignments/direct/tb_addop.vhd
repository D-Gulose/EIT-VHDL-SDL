--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   22:38:33 11/20/2023
-- Design Name:   
-- Module Name:   /home/ise/my_shared_folder/Rep-EIT-VHDL-SDL/direct/tb_addop.vhd
-- Project Name:  idea
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: addop
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
USE IEEE.std_logic_unsigned.all;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY tb_addop IS
END tb_addop;
 
ARCHITECTURE behavior OF tb_addop IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT addop
    PORT(
         I1 : IN  std_logic_vector(15 downto 0);
         I2 : IN  std_logic_vector(15 downto 0);
         O : OUT  std_logic_vector(15 downto 0)
        );
    END COMPONENT;
    

   --Inputs
--   signal I1 : std_logic_vector(15 downto 0) := (others => '0');
--   signal I2 : std_logic_vector(15 downto 0) := (others => '0');

   signal I1, I2, O, O_EXPECTED : std_logic_vector(15 downto 0);
	signal tc_pass : std_logic := '0';
	constant TC_BREAK : time := 10 ns;
   
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   UUT_addop_instance: addop PORT MAP (
          I1 => I1,
          I2 => I2,
          O => O 
        );

	stimulus: process begin
		
		-- TC1
		I1<= x"0000";
		I2<= x"0000";
		O_EXPECTED <= x"0000";
		wait for TC_BREAK;
		
		-- TC2
		I1<= x"7ce3";
		I2<= x"0000";
		O_EXPECTED <= x"7ce3";
		wait for TC_BREAK;
		
		-- TC3
		I1<= x"7ce3";
		I2<= x"2db6";
		O_EXPECTED<= x"aa99";
		wait for TC_BREAK;
		
		-- TC4
		I1<= x"fce3";
		I2<= x"2db6";
		O_EXPECTED<= x"2a99";
		wait for TC_BREAK;
		
		-- TC5
		I1<= x"fce3";
		I2<= x"edb6";
		O_EXPECTED<= x"ea99";
		wait for TC_BREAK;
		
		-- TC6
		I1<= x"7ce3";
		I2<= x"edb6";
		O_EXPECTED<= x"6a99";
		wait for TC_BREAK;
		
		wait;
	end process;
	
 	compare: process begin
		for I in 0 to 6 loop
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

