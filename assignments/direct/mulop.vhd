----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:     
-- Design Name: 
-- Module Name:    mulop - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
--use ieee.std_logic_signed.all;
--use ieee.std_logic_arith.all;
use ieee.std_logic_unsigned.all;

-- Uncomment the folmoduing library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the folmoduing library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity mulop is
    Port ( I_1 : in  STD_LOGIC_VECTOR (15 downto 0);
           I_2 : in  STD_LOGIC_VECTOR (15 downto 0);
           O_1 : out  STD_LOGIC_VECTOR (15 downto 0));
end mulop;

architecture Behavioral of mulop is
	
	
	begin
	
	process(I_1, I_2)
	
		-- Before "begin" variables are only initialized once
		variable base2_power16 : std_logic_vector(16 downto 0) := b"10000000000000000";
		variable sum : std_logic_vector(31 downto 0) := (others=>'0') ;
		constant zeros : std_logic_vector(15 downto 0) := (others=>'0');
		variable i1var : std_logic_vector(16 downto 0) := (others=>'0'); 
		variable i2var : std_logic_vector(16 downto 0) := (others=>'0'); -- initializations 
		variable modu : std_logic_vector(16 downto 0) := (others=>'0'); -- 16 LSB
		variable divi : std_logic_vector(16 downto 0) := (others=>'0'); -- 16 MSB without 33 bit
		variable tmp : std_logic_vector(33 downto 0) := (others=>'0'); -- worst case 33 bit
		
		begin 
		
		if I_1 = zeros then
			i1var := base2_power16;
		else
			i1var := '0' & I_1;
		end if;
		if I_2 = zeros then
			i2var := base2_power16;
		else
			i2var := '0' & I_2;
		end if;
		
		tmp := i1var * i2var;
		modu := ('0' & tmp(15 downto 0)); --(a*b mod 2^n)
		divi := tmp(32 downto 16); --(a*b div 2^n)
		sum := b"000000000000000" & modu - divi;
		if modu < divi then 
			sum := sum + base2_power16 + 1;
		end if;
		O_1 <= sum(15 downto 0);
	
	end process;
	
end Behavioral;

