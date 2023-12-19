--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   20:13:20 12/18/2023
-- Design Name:   
-- Module Name:   /home/ise/my_shared_folder/EIT-VHDL-SDL/assignments/rcs1/tb_keygen.vhd
-- Project Name:  idea_rcs1
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: keygen
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
 
ENTITY tb_keygen IS
END tb_keygen;
 
ARCHITECTURE behavior OF tb_keygen IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT keygen
    PORT(
         inputkey : IN  std_logic_vector(127 downto 0);
         lap  : IN   std_logic_vector(3 downto 0);
         key1 : out  std_logic_vector(15 downto 0);
         key2 : out  std_logic_vector(15 downto 0);
         key3 : out  std_logic_vector(15 downto 0);
         key4 : out  std_logic_vector(15 downto 0);
         key5 : out  std_logic_vector(15 downto 0);
         key6 : out  std_logic_vector(15 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal inputkey : std_logic_vector(127 downto 0) := (others => '0');
	signal lap : std_logic_vector(3 downto 0) := b"0000"; -- Init as round 1 -> value change in first TC 
   signal 
		key1, key1e, key2, key2e, key3, key3e, 
		key4, key4e, key5, key5e, key6, key6e
		: std_logic_vector(15 downto 0);
	signal pass : std_logic := '0';
	constant period : time := 50 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: keygen PORT MAP (
          inputkey => inputkey,
          lap => lap,
          key1 => key1,
          key2 => key2,
          key3 => key3,
          key4 => key4,
          key5 => key5,
          key6 => key6
        );
	
	process 
		begin
			inputkey <= x"00010002000300040005000600070008";
			
			-- tc1
			lap <= b"0000";			
			key1e <= x"0001";
			key2e <= x"0002";
			key3e <= x"0003";
			key4e <= x"0004";
			key5e <= x"0005";
			key6e <= x"0006";
			wait for period;
			 
			lap <= b"0001";
			key1e <= x"0007";
			key2e <= x"0008";
			key3e <= x"0400";
			key4e <= x"0600";
			key5e <= x"0800";
			key6e <= x"0a00";
			wait for period;
			
			-- round 3: 0c00 0e00 1000 0200 0010 0014
			lap <= b"0010";
			key1e <= x"0c00";
			key2e <= x"0e00";
			key3e <= x"1000";
			key4e <= x"0200";
			key5e <= x"0010";
			key6e <= x"0014";			
			wait for period;
			
			--round 4: 0018 001c 0020 0004 0008 000c
			lap <= b"0011"; 
			key1e <= x"0018";
			key2e <= x"001c";
			key3e <= x"0020";
			key4e <= x"0004";
			key5e <= x"0008";
			key6e <= x"000c";
			wait for period;
			
			--round 5: 2800 3000 3800 4000 0800 1000
			lap <= b"0100"; 
			key1e <= x"2800";
			key2e <= x"3000";
			key3e <= x"3800";
			key4e <= x"4000";
			key5e <= x"0800";
			key6e <= x"1000";
			wait for period;

			--round 6: 1800 2000 0070 0080 0010 0020
			lap <= b"0101";
			key1e <= x"1800";
			key2e <= x"2000";
			key3e <= x"0070";
			key4e <= x"0080";
			key5e <= x"0010";
			key6e <= x"0020";
			wait for period;

			--round 7: 0030 0040 0050 0060 0000 2000
			lap <= b"0110";
			key1e <= x"0030";
			key2e <= x"0040";
			key3e <= x"0050";
			key4e <= x"0060";
			key5e <= x"0000";
			key6e <= x"2000";
			wait for period;		
			
			--round 8: 4000 6000 8000 a000 c000 e001
			lap <= b"0111"; 
			key1e <= x"4000";
			key2e <= x"6000";
			key3e <= x"8000";
			key4e <= x"a000";
			key5e <= x"c000";
			key6e <= x"e001";
			wait for period;
			
			--trafo: 0080 00c0 0100 0140
			lap <= b"1000"; 
			key1e <= x"0080";
			key2e <= x"00c0";
			key3e <= x"0100";
			key4e <= x"0140";
			wait for period;

			wait;
	end process;
	
	process
		variable allpass : integer;
	
		begin
			wait for 1 ns;
			allpass := 1;
			for i in 1 to 9 loop
				
				if (lap = b"1000") and 
					(key1 = key1e and key2 = key2e and key3 = key3e and key4 = key4e) 
				then
					pass <= '1';
					report "TC PASS: " & integer'image(i) & "-------------------------------------------------";
				elsif (key1 = key1e and key2 = key2e and key3 = key3e and key4 = key4e and key5 = key5e and key6 = key6e)
				then
					pass <= '1';
					report "TC PASS: " & integer'image(i) & "-------------------------------------------------";
				else
					pass <= '0';
					allpass := 0;
					report "TC FAIL: " & integer'image(i) & "-------------------------------------------------";
				end if;
				wait for period;
				
			end loop;
			if allpass = 1 then
				report "ALL PASS!";
			else
				report "NOT ALL PASS!";
			end if;
			wait;
	end process;

END;
