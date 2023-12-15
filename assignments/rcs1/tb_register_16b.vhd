--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   11:57:53 12/13/2023
-- Design Name:   
-- Module Name:   /home/ise/my_shared_folder/Rep-EIT-VHDL-SDL/assignments/rcs1/tb_register_16b.vhd
-- Project Name:  idea_rcs1
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: register_16b
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
 
ENTITY tb_register_16b IS
	
END tb_register_16b;
 
ARCHITECTURE behavior OF tb_register_16b IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT register_16b
    PORT(
         CLK : IN  std_logic;
         ENABLE : IN  std_logic;
         I : IN  std_logic_vector(15 downto 0);
         O : OUT  std_logic_vector(15 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal CLK : std_logic := '0';
   signal ENABLE : std_logic := '0';
   signal I : std_logic_vector(15 downto 0) := (others=>'0');

 	--Outputs
   signal O : std_logic_vector(15 downto 0) := (others=>'0');

   -- Clock period definitions
   constant CLK_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: register_16b PORT MAP (
          CLK => CLK,
          ENABLE => ENABLE,
          I => I,
          O => O
        );

   -- Clock process definitions
   CLK_process :process
   begin
		CLK <= '0';
		wait for CLK_period/2;
		CLK <= '1';
		wait for CLK_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- reset
      wait for 100 ns;

      -- insert stimulus here 
		for l in 1 to 3 loop
			if (enable = '0') then 
				enable <= '1';
			else
				enable <= '0';
			end if;
			wait for CLK_period*l;
		end loop;
      wait;
		
   end process;
	
	
	test_proc: process
		begin
		
		for l in 2 to 4 loop
			wait for CLK_period*l;
			i <= x"1fff";
			if (enable = '1' and i = o) or 
				(enable = '0' and i /= o) then
				report "pass";
			else
				report "fail";
			end if;
			i <= x"0000";
		end loop;
		wait;
	end process;
end architecture;
