--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   18:55:40 12/20/2023
-- Design Name:   
-- Module Name:   /home/ise/my_shared_folder/EIT-VHDL-SDL/assignments/rcs1/tb_idea_single.vhd
-- Project Name:  idea_rcs1
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: idea_single
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
 
ENTITY tb_idea_single IS
END tb_idea_single;
 
ARCHITECTURE behavior OF tb_idea_single IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
    COMPONENT idea_single
    PORT(
         CLOCK : IN  std_logic;
         START : IN  std_logic;
         KEY : IN  std_logic_vector(127 downto 0);
         X_1 : IN  std_logic_vector(15 downto 0);
         X_2 : IN  std_logic_vector(15 downto 0);
         X_3 : IN  std_logic_vector(15 downto 0);
         X_4 : IN  std_logic_vector(15 downto 0);
         Y_1 : OUT  std_logic_vector(15 downto 0);
         Y_2 : OUT  std_logic_vector(15 downto 0);
         Y_3 : OUT  std_logic_vector(15 downto 0);
         Y_4 : OUT  std_logic_vector(15 downto 0);
         READY : OUT  std_logic
        );
    END COMPONENT;
   
   --Inputs
   signal CLOCK,START :std_logic := '0';
   signal KEY :std_logic_vector(127 downto 0) := (others => '0');
   signal X_1,X_2,X_3,X_4 :std_logic_vector(15 downto 0) := (others => '0');

 	--Outputs
   signal Y_1,y1e,Y_2,y2e,Y_3,y3e,Y_4,y4e :std_logic_vector(15 downto 0);
   signal READY : std_logic;

   -- Clock period definitions
   constant CLOCK_period : time := 5 ns;
	signal tc_pass :std_logic;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: idea_single PORT MAP (
          CLOCK => CLOCK,
          START => START,
          KEY => KEY,
          X_1 => X_1,
          X_2 => X_2,
          X_3 => X_3,
          X_4 => X_4,
          Y_1 => Y_1,
          Y_2 => Y_2,
          Y_3 => Y_3,
          Y_4 => Y_4,
          READY => READY
        );

   -- Clock process definitions
   CLOCK_process :process
   begin
		CLOCK <= '0';
		wait for CLOCK_period/2;
		CLOCK <= '1';
		wait for CLOCK_period/2;
   end process;
 
	-- Check results
	process
		begin
			for i in 1 to 3 loop
				while ready = '0' or y4e = "UUUU" loop
					wait for clock_period;
				end loop;
				if y_1 = y1e and y_2 = y2e and 
					y_3 = y3e and y_4 = y4e 
				then 
					report "TC PASS: " & integer'image(i);	
				else 
					report "TC FAIL: " & integer'image(i);	
				end if;
				
			end loop;
			wait;		
	end process;

   -- Stimulus process
   stim_proc: process
   begin		   
		start <= '0';
		wait for clock_period;
		
		-- tc1
		key <= x"00010002000300040005000600070008";
		x_1 <= x"1111";
		x_2 <= x"2222";
		x_3 <= x"4444";
		x_4 <= x"8888";
		y1e <= x"8aa9";
		y2e <= x"0fef";
		y3e <= x"c0c9";
		y4e <= x"56f6";
		
		start <= '1';
		wait for clock_period;
		start <= '0';
		while ready = '0' loop
			wait for clock_period;
		end loop;
		
		-- tc2
		key <= x"00000000000000000000000000000000";
		x_1 <= x"0000";
		x_2 <= x"0000";
		x_3 <= x"0000";
		x_4 <= x"0000";
		y1e <= x"0001";
		y2e <= x"0001";
		y3e <= x"0000";
		y4e <= x"0000";
		start <= '1';
		wait for clock_period;
		start <= '0';
      while ready = '0' loop
			wait for clock_period;
		end loop;
		
		-- tc3		
		key <= x"0AD79FDFA07DFA0F0AFD7DAF079DF770";
		x_1 <= x"1F1F";
		x_2 <= x"2E2E";
		x_3 <= x"3D3D";
		x_4 <= x"4A4A";
		y1e <= x"57e3";
		y2e <= x"a28b";
		y3e <= x"cd0b";
		y4e <= x"1ff9";
		
		start <= '1';
		wait for clock_period*2;
		start <= '0';
		while ready = '0' loop
			wait for clock_period;
		end loop;

      wait;
   end process;

END;
