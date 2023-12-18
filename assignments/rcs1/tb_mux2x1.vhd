--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   20:46:13 12/14/2023
-- Design Name:   
-- Module Name:   /home/ise/my_shared_folder/EIT-VHDL-SDL/assignments/rcs1/tb_mux2x1.vhd
-- Project Name:  idea_rcs1
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: mux2x1
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
use ieee.std_logic_arith.all;
use ieee.std_logic_unsigned.all;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY tb_mux2x1 IS
END tb_mux2x1;
 
ARCHITECTURE behavior OF tb_mux2x1 IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT mux2x1
    PORT(
         S : IN  std_logic;
         D0 : IN  std_logic_vector(15 downto 0);
         D1 : IN  std_logic_vector(15 downto 0);
         O : OUT  std_logic_vector(15 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal S : std_logic ; --:= '0';
   signal D0 : std_logic_vector(15 downto 0);-- := (others => '0');
   signal D1 : std_logic_vector(15 downto 0);-- := (others => '0');

 	--Outputs
   signal O : std_logic_vector(15 downto 0);
	signal pass : std_logic := '0';
 
   constant period : time := 100 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: mux2x1 PORT MAP (S, D0, D1, O);
		  
   -- Stimulus process
   stim_proc: process
   begin	
	
		wait for period;
		
		-- tc1
		d0 <= x"11d0";
		d1 <= x"11d1";
		s <= '0';
		wait for period;
		
		-- tc2
		d0 <= x"22d0";
		d1 <= x"22d1";
		wait for period;
		
		-- tc3
		s <= '1';
		wait for period;
		
		-- tc4
		s <= 'U';
		wait for period;
		
      wait;
   end process;
	
	process(s, d01, d2)
		
		begin
--		wait for period;
		
		for tc in 1 to 4 loop
			if	(s='0' and o=d0) or
				(s='1' and o=d1) or
				(s='U' and o="XXXXXXXXXXXXXXXX")
			then
				pass <= '1';
				report "pass";
			else
				pass <= '0';
				report "fail";
			end if;
			wait for period;
		end loop;
		wait;
	end process; 

END;
