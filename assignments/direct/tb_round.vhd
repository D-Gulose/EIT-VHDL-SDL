--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   15:30:25 11/22/2023
-- Design Name:   
-- Module Name:   /nas/lrz/home/ge74men/Rep-EIT-VHDL-SDL/direct/tb_round.vhd
-- Project Name:  idea
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: round
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
 
ENTITY tb_round IS
END tb_round;
 
ARCHITECTURE behavior OF tb_round IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT round
    PORT(
         x1,x2,x3,x4,z1,z2,z3,z4,z5,z6 : IN std_logic_vector(15 downto 0);
         y1, y2, y3, y4 : OUT  std_logic_vector(15 downto 0)
         );
    END COMPONENT;
   
	-- Signals
   signal x1, x2, x3, x4, z1, z2, z3, z4, z5, z6, y1, y1e, y2, y2e, y3, y3e, y4, y4e
		: std_logic_vector(15 downto 0); -- Warning caused 
	signal tc_pass : std_logic := '0';
	constant TC_BREAK : time := 10 ns;

 begin
    uut: round PORT MAP (
          x1 => x1,
          x2 => x2,
          x3 => x3,
          x4 => x4,
          z1 => z1,
          z2 => z2,
          z3 => z3,
          z4 => z4,
          z5 => z5,
          z6 => z6,
          y1 => y1,
          y2 => y2,
          y3 => y3,
          y4 => y4
        );

stimulus: process begin

		-- TC 1
		X1 <= x"0000";
		X2 <= x"0000";
		X3 <= x"0000";
		X4 <= x"0000";
		Z1 <= x"0000";
		Z2 <= x"0000";
		Z3 <= x"0000";
		Z4 <= x"0000";
		Z5 <= x"0000";
		Z6 <= x"0000";
		--
		y1e <= x"0001";
		y2e <= x"0000";
		y3e <= x"0000";
		y4e <= x"0001";
		
		wait for TC_BREAK;

		-- TC2		
		X1 <= x"ffff";
		X2 <= x"0000";
		X3 <= x"0000";
		X4 <= x"0000";
		Z1 <= x"0000";
		Z2 <= x"0000";
		Z3 <= x"0000";
		Z4 <= x"0000";
		Z5 <= x"0000";
		Z6 <= x"0000";
		--
		y1e <= x"0003";
		y2e <= x"0001";
		y3e <= x"0000";
		y4e <= x"0001";
		wait for TC_BREAK;
		
		-- TC3
		X1 <= x"ffff";
		X2 <= x"aaaa";
		X3 <= x"0000";
		X4 <= x"0000";
		Z1 <= x"0000";
		Z2 <= x"0000";
		Z3 <= x"0000";
		Z4 <= x"0000";
		Z5 <= x"0000";
		Z6 <= x"0000";
		--
		y1e <= x"5555";
		y2e <= x"5557";
		y3e <= x"fffc";
		y4e <= x"5557";
		wait for TC_BREAK;
		
		-- TC4
		X1 <= x"ffff";
		X2 <= x"aaaa";
		X3 <= x"5555";
		X4 <= x"0000";
		Z1 <= x"0000";
		Z2 <= x"0000";
		Z3 <= x"0000";
		Z4 <= x"0000";
		Z5 <= x"0000";
		Z6 <= x"0000";
		--
		y1e <= x"aaae";
		y2e <= x"fff9";
		y3e <= x"fffc";
		y4e <= x"5557";
		wait for TC_BREAK;
		
		-- TC5
		X1 <= x"ffff";
		X2 <= x"aaaa";
		X3 <= x"5555";
		X4 <= x"2492";
		Z1 <= x"0000";
		Z2 <= x"0000";
		Z3 <= x"0000";
		Z4 <= x"0000";
		Z5 <= x"0000";
		Z6 <= x"0000";
		--
		y1e <= x"e390";
		y2e <= x"b6c7";
		y3e <= x"2496";
		y4e <= x"5553";
		wait for TC_BREAK;
		
		-- TC6
		X1 <= x"ffff";
		X2 <= x"aaaa";
		X3 <= x"5555";
		X4 <= x"2492";
		Z1 <= x"db6d";
		Z2 <= x"0000";
		Z3 <= x"0000";
		Z4 <= x"0000";
		Z5 <= x"0000";
		Z6 <= x"0000";
		--
		y1e <= x"e390";
		y2e <= x"ffed";
		y3e <= x"2496";
		y4e <= x"5553";
		wait for TC_BREAK;
		
		-- TC7
		X1 <= x"ffff";
		X2 <= x"aaaa";
		X3 <= x"5555";
		X4 <= x"2492";
		Z1 <= x"db6d";
		Z2 <= x"1c71";
		Z3 <= x"0000";
		Z4 <= x"0000";
		Z5 <= x"0000";
		Z6 <= x"0000";
		--
		y1e <= x"4921";
		y2e <= x"555c";
		y3e <= x"2496";
		y4e <= x"38e2";
		wait for TC_BREAK;
		
		-- TC8
		X1 <= x"ffff";
		X2 <= x"aaaa";
		X3 <= x"5555";
		X4 <= x"2492";
		Z1 <= x"db6d";
		Z2 <= x"1c71";
		Z3 <= x"cccc";
		Z4 <= x"0000";
		Z5 <= x"0000";
		Z6 <= x"0000";
		y1e <= x"07bd";
		y2e <= x"6cb4";
		y3e <= x"2496";
		y4e <= x"38e2";
		wait for TC_BREAK;
		
		-- TC9
		X1 <= x"ffff";
		X2 <= x"aaaa";
		X3 <= x"5555";
		X4 <= x"2492";
		Z1 <= x"db6d";
		Z2 <= x"1c71";
		Z3 <= x"cccc";
		Z4 <= x"0002";
		Z5 <= x"0000";
		Z6 <= x"0000";
		--
		y1e <= x"95e2";
		y2e <= x"feeb";
		y3e <= x"b6d9";
		y4e <= x"38e6";
		wait for TC_BREAK;
		
		-- TC10
		X1 <= x"ffff";
		X2 <= x"aaaa";
		X3 <= x"5555";
		X4 <= x"2492";
		Z1 <= x"db6d";
		Z2 <= x"1c71";
		Z3 <= x"cccc";
		Z4 <= x"0002";
		Z5 <= x"eeee";
		Z6 <= x"0000";
		--
		y1e <= x"bc61";
		y2e <= x"d768";
		y3e <= x"b6d9";
		y4e <= x"38e6";
		wait for TC_BREAK;
		
		-- TC11
		X1 <= x"ffff";
		X2 <= x"aaaa";
		X3 <= x"5555";
		X4 <= x"2492";
		Z1 <= x"db6d";
		Z2 <= x"1c71";
		Z3 <= x"cccc";
		Z4 <= x"0002";
		Z5 <= x"eeee";
		Z6 <= x"8888";
		--
		y1e <= x"2521";
		y2e <= x"4e28";
		y3e <= x"2f99";
		y4e <= x"a1a6";
		wait for TC_BREAK;		
		
		wait;
	end process;
	
 	compare: process begin
		for I in 0 to 11 loop
			if (y1 = y1e) and (y2 = y2e) and (y3 = y3e) and (y4 = y4e) then 
				tc_pass <= '1';
				report "Test " & natural'image(I) & "/11 passed";
			else
				tc_pass <= '0';
				report "Test " & natural'image(I) & "/11 failed";
			end if;
			wait for TC_BREAK;
		end loop;
		wait;
	end process;
			
END architecture;
      
