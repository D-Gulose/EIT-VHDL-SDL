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
         lap : IN  std_logic_vector(3 downto 0);
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
   signal lap : std_logic_vector(3 downto 0) := (others => '0');
   signal key1, key1e, key2, key2e, key3, key3e, key4, key4e, key5, key5e, key6, key6e: std_logic_vector(15 downto 0); -- := (others => '0');
	signal pass : std_logic := '0';
	constant period : time := 10 ns;
 
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
--			key3e <= x"0003";
--			key4e <= x"0004";
--			key5e <= x"0005";
--			key6e <= x"0006";
			wait for period;
--
			lap <= b"0010";
			wait for period;
--
			lap <= b"0011"; 
			wait for period;
			
			lap <= b"0100"; 
			wait for period;

			lap <= b"0101"; 
			wait for period;

			lap <= b"0110";
			wait for period;		
			
			lap <= b"0111"; 
			wait for period;
			
			lap <= b"1000"; 

			wait;
	end process;

END;
