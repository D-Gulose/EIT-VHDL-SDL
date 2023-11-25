--------------------------------------------------------------------------------
-- Company: 
-- Engineer: Markus Gulo
--
-- Create Date:   15:51:36 11/23/2023
-- Design Name:   
-- Module Name:   /nas/lrz/home/ge74men/f4/Rep-EIT-VHDL-SDL/assignments/direct/tb_trafo.vhd
-- Project Name:  idea
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: trafo
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
 
ENTITY tb_trafo IS
END tb_trafo;
 
ARCHITECTURE behavior OF tb_trafo IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT trafo
    PORT(
         x1 : IN  std_logic_vector(15 downto 0);
         x2 : IN  std_logic_vector(15 downto 0);
         x3 : IN  std_logic_vector(15 downto 0);
         x4 : IN  std_logic_vector(15 downto 0);
         z1 : IN  std_logic_vector(15 downto 0);
         z2 : IN  std_logic_vector(15 downto 0);
         z4 : IN  std_logic_vector(15 downto 0);
         z3 : IN  std_logic_vector(15 downto 0);
         y1 : OUT  std_logic_vector(15 downto 0);
         y2 : OUT  std_logic_vector(15 downto 0);
         y3 : OUT  std_logic_vector(15 downto 0);
         y4 : OUT  std_logic_vector(15 downto 0)
        );
    END COMPONENT;
    
	
	signal 
		x1, x2, x3, x4, 
		z1, z2, z3, z4, 
		y1, y1e, y2, y2e, y3, y3e, y4, y4e
		: std_logic_vector(15 downto 0) := (others => '0');
	signal tc_pass : std_logic := '0';
	constant TC_BREAK : time := 10 ns;

BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: trafo PORT MAP (
          x1 => x1,
          x2 => x2,
          x3 => x3,
          x4 => x4,
          z1 => z1,
          z2 => z2,
          z4 => z4,
          z3 => z3,
          y1 => y1,
          y2 => y2,
          y3 => y3,
          y4 => y4
        );

	test: process begin
--		wait for 1 ns;
		--tc1
		X1 <= x"0000";
		X2 <= x"0000";
		X3 <= x"0000";
		X4 <= x"0000";
		Z1 <= x"0000";
		Z2 <= x"0000";
		Z3 <= x"0000";
		Z4 <= x"0000";
		--
		y1e <= x"0001";
		y2e <= x"0000";
		y3e <= x"0000";
		y4e <= x"0001";
      wait for TC_BREAK;	
		
		--tc2
		X1 <= x"ffff";
		X2 <= x"0000";
		X3 <= x"0000";
		X4 <= x"0000";
		Z1 <= x"0000";
		Z2 <= x"0000";
		Z3 <= x"0000";
		Z4 <= x"0000";
		--
		y1e <= x"0002";
		y2e <= x"0000";
		y3e <= x"0000";
		y4e <= x"0001";
		wait for TC_BREAK;	
		
		--tc3
		X1 <= x"ffff";
		X2 <= x"aaaa";
		X3 <= x"0000";
		X4 <= x"0000";
		Z1 <= x"0000";
		Z2 <= x"0000";
		Z3 <= x"0000";
		Z4 <= x"0000";
		--
		y1e <= x"0002";
		y2e <= x"0000";
		y3e <= x"aaaa";
		y4e <= x"0001";
		wait for TC_BREAK;	
		
		--tc4
		X1 <= x"ffff";
		X2 <= x"aaaa";
		X3 <= x"5555";
		X4 <= x"0000";
		Z1 <= x"0000";
		Z2 <= x"0000";
		Z3 <= x"0000";
		Z4 <= x"0000";
		--
		y1e <= x"0002";
		y2e <= x"5555";
		y3e <= x"aaaa";
		y4e <= x"0001";
		wait for TC_BREAK;	
		
		--tc5
		X1 <= x"ffff";
		X2 <= x"aaaa";
		X3 <= x"5555";
		X4 <= x"2492";
		Z1 <= x"0000";
		Z2 <= x"0000";
		Z3 <= x"0000";
		Z4 <= x"0000";
		--
		y1e <= x"0002";
		y2e <= x"5555";
		y3e <= x"aaaa";
		y4e <= x"db6f";
		wait for TC_BREAK;	
		
		--tc6
		X1 <= x"ffff";
		X2 <= x"aaaa";
		X3 <= x"5555";
		X4 <= x"2492";
		Z1 <= x"db6d";
		Z2 <= x"0000";
		Z3 <= x"0000";
		Z4 <= x"0000";
		--
		y1e <= x"4928";
		y2e <= x"5555";
		y3e <= x"aaaa";
		y4e <= x"db6f";
		wait for TC_BREAK;	
		
		--tc7
		X1 <= x"ffff";
		X2 <= x"aaaa";
		X3 <= x"5555";
		X4 <= x"2492";
		Z1 <= x"db6d";
		Z2 <= x"1c71";
		Z3 <= x"0000";
		Z4 <= x"0000";
		--
		y1e <= x"4928";
		y2e <= x"71c6";
		y3e <= x"aaaa";
		y4e <= x"db6f";
		wait for TC_BREAK;	
		
		--tc8
		X1 <= x"ffff";
		X2 <= x"aaaa";
		X3 <= x"5555";
		X4 <= x"2492";
		Z1 <= x"db6d";
		Z2 <= x"1c71";
		Z3 <= x"cccc";
		Z4 <= x"0000";
		--
		y1e <= x"4928";
		y2e <= x"71c6";
		y3e <= x"7776";
		y4e <= x"db6f";
		wait for TC_BREAK;	
		
		--tc9
		X1 <= x"ffff";
		X2 <= x"aaaa";
		X3 <= x"5555";
		X4 <= x"2492";
		Z1 <= x"db6d";
		Z2 <= x"1c71";
		Z3 <= x"cccc";
		Z4 <= x"0002";
		--
		y1e <= x"4928";
		y2e <= x"71c6";
		y3e <= x"7776";
		y4e <= x"4924";
		wait for TC_BREAK;
		
		wait;
	end process;
		
	compare: process begin
		wait for 1 ns; -- start after test process
		for I in 1 to 9 loop
			if (y1 = y1e) and (y2 = y2e) and (y3 = y3e) and (y4 = y4e) then 
				tc_pass <= '1';
				report "Test " & natural'image(I) & "/9 passed";
			else
				tc_pass <= '0';
				report "Test " & natural'image(I) & "/9 failed";
			end if;
			wait for TC_BREAK;
		end loop;
		wait;
	end process;

END architecture;
