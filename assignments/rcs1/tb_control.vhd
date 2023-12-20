--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   22:24:14 12/19/2023
-- Design Name:   
-- Module Name:   /home/ise/my_shared_folder/EIT-VHDL-SDL/assignments/rcs1/tb_control.vhd
-- Project Name:  idea_rcs1
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: control
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
 
ENTITY tb_control IS
END tb_control;
 
ARCHITECTURE behavior OF tb_control IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT control
    PORT(
         CLK : IN  std_logic;
         START : IN  std_logic;
         ROUND : OUT  std_logic_vector(3 downto 0);
         READY : OUT  std_logic;
         EN : OUT  std_logic;
         S : OUT  std_logic
        );
    END COMPONENT;
 
   --Inputs
   signal CLK : std_logic := '0';
   signal START : std_logic := '0';

 	--Outputs
   signal READY : std_logic;
   signal S : std_logic;
	signal EN : std_logic;
	signal ROUND : std_logic_vector(3 downto 0);

   -- Clock period definitions
	signal pass : std_logic := '0';
   constant CLK_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: control PORT MAP (
          CLK => CLK,
          START => START,
          ROUND => ROUND,
          READY => READY,
          EN => EN,
          S => S
        );

--   CLK_process :process
--   begin
--		CLK <= '1';
--		wait for CLK_period/2;
--		CLK <= '0';
--		wait for CLK_period/2;
--   end process;
-- 
--
--   -- Stimulus process
--   stim_proc: process
--   begin		
--      -- hold reset state for 100 ns.
--		
--		START <= '1';
--		
--      wait for 100 ns;	
--		START <= '0';
--
--  
--   end process;

   -- Clock process definitions
   CLK_process: process
   begin
		CLK <= '0';
--		report "(clk = 0)";
		wait for CLK_period/2;
		CLK <= '1';
--		report "(clk = 1)";
		wait for CLK_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
		
		begin	
			
			-- reset
			wait for CLK_period/2;
			
			-- tc1 
			start <= '0'; -- no next state, start is missing
			wait for CLK_period;
			if round = "1000" and
				start = '0'
			then
				report "TC1 PASS";
				pass <= '1';
			else
				pass <= '0';
				report "TC1 FAIL";
			end if;

			-- tc2
			start <= '1';
			wait for CLK_period;
			if 
				round = "0000" and 
				start = '1' and
				ready = '0' and 
				s = '0' and
				en = '1'
			then
				report "TC2 PASS";
				pass <= '1';
			else
				pass <= '0';
				report "TC2 FAIL";
			end if;
			
			-- tc3;
			start <= '0';
			wait for CLK_period;
			if 
				round = "0001" and 
				start = '0' and
				ready = '0' and 
				s = '1' and
				en = '1' 
			then
				report "TC3 PASS";
				pass <= '1';
			else
				pass <= '0';
				report "TC3 FAIL";
			end if;
			
			-- tc3b;
			wait for CLK_period;
			if 
				round = "0010" and 
				start = '0' and
				ready = '0' and 
				s = '1' and
				en = '1' 
			then
				report "TC3b PASS";
				pass <= '1';
			else
				pass <= '0';
				report "TC3b FAIL";
			end if;
			
			-- tc4;
			wait for CLK_period;
			if 
				round = "0011" and 
				start = '0' and
				ready = '0' and 
				s = '1' and
				en = '1' 
			then
				report "TC4 PASS";
				pass <= '1';
			else
				pass <= '0';
				report "TC4 FAIL";
			end if;
			
			-- tc5;
			wait for CLK_period;
			if 
				round = "0100" and 
				start = '0' and
				ready = '0' and 
				s = '1' and
				en = '1' 
			then
				report "TC5 PASS";
				pass <= '1';
			else
				pass <= '0';
				report "TC5 FAIL";
			end if;
			
			-- tc6;
			wait for CLK_period;
			if 
				round = "0101" and 
				start = '0' and
				ready = '0' and 
				s = '1' and
				en = '1' 
			then
				report "TC6 PASS";
				pass <= '1';
			else
				pass <= '0';
				report "TC6 FAIL";
			end if;
			
			-- tc7;
			wait for CLK_period;
			if 
				round = "0110" and 
				start = '0' and
				ready = '0' and 
				s = '1' and
				en = '1' 
			then
				report "TC7 PASS";
				pass <= '1';
			else
				pass <= '0';
				report "TC7 FAIL";
			end if;
			
			-- tc8;
			wait for CLK_period;
			if 
				round = "0111" and 
				start = '0' and
				ready = '0' and 
				s = '1' and
				en = '1' 
			then
				report "TC8 PASS";
				pass <= '1';
			else
				pass <= '0';
				report "TC8 FAIL";
			end if;
			
			-- tc9;
			wait for CLK_period;
			if 
				round = "1000" and 
				start = '0' and
				ready = '1' and 
				s = '1' and
				en = '0' 
			then
				report "TC9 PASS";
				pass <= '1';
			else
				pass <= '0';
				report "TC9 FAIL";
			end if;
		
			-- tc10;
			start <= '1';
			wait for CLK_period;
			if 
				round = "1000" and 
				start = '0' and
				ready = '1' and 
				s = '1' and
				en = '0' 
			then
				report "TC9 PASS";
				pass <= '1';
			else
				pass <= '0';
				report "TC9 FAIL";
			end if;

			wait;
   end process;

END;
