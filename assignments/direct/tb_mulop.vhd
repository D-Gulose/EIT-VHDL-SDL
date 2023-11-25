--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   18:27:04 11/21/2023
-- Design Name:   
-- Module Name:   /nas/lrz/home/ge74men/Rep-EIT-VHDL-SDL/direct/tb_mulop.vhd
-- Project Name:  idea
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: mulop
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
 
ENTITY tb_mulop IS
END tb_mulop;
 
ARCHITECTURE behavior OF tb_mulop IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
   COMPONENT mulop
   PORT(
         I_1 : IN  std_logic_vector(15 downto 0);
         I_2 : IN  std_logic_vector(15 downto 0);
         O_1 : OUT  std_logic_vector(15 downto 0)
        );
   END COMPONENT;
    
   --Inputs
   signal I_1, I_2 : std_logic_vector(15 downto 0) := (others => '0');
   signal O_1: std_logic_vector(15 downto 0) := (others => '0');
	signal O_expected : std_logic_vector(15 downto 0) := (others => '0');
	signal tc_pass : std_logic := '0';
	constant TC_BREAK : time := 10 ns;
	
begin

	uut_mulop_instance: mulop port map (
		I_1 => I_1,
		I_2 => I_2,
		O_1 => O_1 );
	
	test: process begin
		
		-- TC1
		I_1<= x"0000";
		I_2<= x"0000";
		O_EXPECTED <= x"0001";
		wait for TC_BREAK;
		
		-- TC2
		I_1 <= x"0001";
		I_2 <= x"0000";
		O_EXPECTED <= x"0000";
		wait for TC_BREAK;
		
		-- TC
		I_1 <= x"0001";
		I_2 <= x"0001";
		O_EXPECTED <= x"0001";
		wait for TC_BREAK;
		
		-- TC
		I_1 <= x"0003";
		I_2 <= x"0001";
		O_EXPECTED <= x"0003";
		wait for TC_BREAK;


		-- TC
		I_1 <= x"0003";
		I_2 <= x"0003";
		O_EXPECTED <= x"0009";
		wait for TC_BREAK;


		-- TC
		I_1 <= x"7fff";
		I_2 <= x"0003";
		O_EXPECTED <= x"7ffc";
		wait for TC_BREAK;


		-- TC
		I_1 <= x"7fff";
		I_2 <= x"7fff";
		O_EXPECTED <= x"c003";
		wait for TC_BREAK;
		
		-- TC
		I_1 <= x"ffff";
		I_2 <= x"7fff";
		O_EXPECTED <= x"0003";
		wait for TC_BREAK;
		
		-- TC
		I_1 <= x"ffff";
		I_2 <= x"ffff";
		O_EXPECTED <= x"0004";
		wait for TC_BREAK;

		-- TC
		I_1 <= x"8000";
		I_2 <= x"ffff";
		O_EXPECTED <= x"0001";
		wait for TC_BREAK;
		
		-- TC
		I_1 <= x"8000";
		I_2 <= x"8000";
		O_EXPECTED <= x"c001";
		wait for TC_BREAK;
		
		wait;
	end process;
	
	compare: process begin
		wait for 1 ns; -- start after test process
		for I in 0 to 10 loop
			if O_1 = O_EXPECTED  then 
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
