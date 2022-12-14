-- ==============================================================
-- RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2018.3
-- Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
-- 
-- ===========================================================

library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;

entity ListInsert is
port (
    ap_clk : IN STD_LOGIC;
    ap_rst : IN STD_LOGIC;
    ap_start : IN STD_LOGIC;
    ap_done : OUT STD_LOGIC;
    ap_idle : OUT STD_LOGIC;
    ap_ready : OUT STD_LOGIC;
    Data_address0 : OUT STD_LOGIC_VECTOR (12 downto 0);
    Data_ce0 : OUT STD_LOGIC;
    Data_we0 : OUT STD_LOGIC;
    Data_d0 : OUT STD_LOGIC_VECTOR (31 downto 0);
    Data_q0 : IN STD_LOGIC_VECTOR (31 downto 0);
    i : IN STD_LOGIC_VECTOR (31 downto 0);
    e : IN STD_LOGIC_VECTOR (8 downto 0);
    length_r : IN STD_LOGIC_VECTOR (31 downto 0) );
end;


architecture behav of ListInsert is 
    constant ap_const_logic_1 : STD_LOGIC := '1';
    constant ap_const_logic_0 : STD_LOGIC := '0';
    constant ap_ST_fsm_state1 : STD_LOGIC_VECTOR (2 downto 0) := "001";
    constant ap_ST_fsm_state2 : STD_LOGIC_VECTOR (2 downto 0) := "010";
    constant ap_ST_fsm_state3 : STD_LOGIC_VECTOR (2 downto 0) := "100";
    constant ap_const_lv32_0 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000000";
    constant ap_const_lv1_0 : STD_LOGIC_VECTOR (0 downto 0) := "0";
    constant ap_const_lv1_1 : STD_LOGIC_VECTOR (0 downto 0) := "1";
    constant ap_const_lv32_1 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000001";
    constant ap_const_lv32_2 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000010";
    constant ap_const_lv32_1388 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000001001110001000";
    constant ap_const_lv32_FFFFFFFF : STD_LOGIC_VECTOR (31 downto 0) := "11111111111111111111111111111111";
    constant ap_const_boolean_1 : BOOLEAN := true;

    signal ap_CS_fsm : STD_LOGIC_VECTOR (2 downto 0) := "001";
    attribute fsm_encoding : string;
    attribute fsm_encoding of ap_CS_fsm : signal is "none";
    signal ap_CS_fsm_state1 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state1 : signal is "none";
    signal e_cast_fu_76_p1 : STD_LOGIC_VECTOR (31 downto 0);
    signal e_cast_reg_146 : STD_LOGIC_VECTOR (31 downto 0);
    signal tmp_fu_80_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal tmp_reg_151 : STD_LOGIC_VECTOR (0 downto 0);
    signal tmp_62_fu_92_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal tmp_62_reg_155 : STD_LOGIC_VECTOR (0 downto 0);
    signal tmp_63_fu_98_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal tmp_63_reg_159 : STD_LOGIC_VECTOR (0 downto 0);
    signal Data_addr_reg_163 : STD_LOGIC_VECTOR (12 downto 0);
    signal j_6_fu_114_p2 : STD_LOGIC_VECTOR (31 downto 0);
    signal j_6_reg_171 : STD_LOGIC_VECTOR (31 downto 0);
    signal ap_CS_fsm_state2 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state2 : signal is "none";
    signal tmp_65_fu_109_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal j_reg_67 : STD_LOGIC_VECTOR (31 downto 0);
    signal ap_CS_fsm_state3 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state3 : signal is "none";
    signal tmp_64_fu_104_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal tmp_68_fu_120_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal tmp_67_fu_130_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal tmp_s_fu_86_p2 : STD_LOGIC_VECTOR (31 downto 0);
    signal tmp_66_fu_125_p2 : STD_LOGIC_VECTOR (31 downto 0);
    signal ap_NS_fsm : STD_LOGIC_VECTOR (2 downto 0);


begin




    ap_CS_fsm_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_CS_fsm <= ap_ST_fsm_state1;
            else
                ap_CS_fsm <= ap_NS_fsm;
            end if;
        end if;
    end process;


    j_reg_67_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_start = ap_const_logic_1) and (tmp_63_fu_98_p2 = ap_const_lv1_1) and (tmp_62_fu_92_p2 = ap_const_lv1_0) and (tmp_fu_80_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
                j_reg_67 <= length_r;
            elsif ((ap_const_logic_1 = ap_CS_fsm_state3)) then 
                j_reg_67 <= j_6_reg_171;
            end if; 
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_start = ap_const_logic_1) and (tmp_63_fu_98_p2 = ap_const_lv1_1) and (tmp_62_fu_92_p2 = ap_const_lv1_0) and (tmp_fu_80_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state1))) then
                Data_addr_reg_163 <= tmp_64_fu_104_p1(13 - 1 downto 0);
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_start = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_state1))) then
                    e_cast_reg_146(8 downto 0) <= e_cast_fu_76_p1(8 downto 0);
                tmp_reg_151 <= tmp_fu_80_p2;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((tmp_63_reg_159 = ap_const_lv1_1) and (tmp_65_fu_109_p2 = ap_const_lv1_0) and (tmp_62_reg_155 = ap_const_lv1_0) and (tmp_reg_151 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state2))) then
                j_6_reg_171 <= j_6_fu_114_p2;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_start = ap_const_logic_1) and (tmp_fu_80_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state1))) then
                tmp_62_reg_155 <= tmp_62_fu_92_p2;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_start = ap_const_logic_1) and (tmp_62_fu_92_p2 = ap_const_lv1_0) and (tmp_fu_80_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state1))) then
                tmp_63_reg_159 <= tmp_63_fu_98_p2;
            end if;
        end if;
    end process;
    e_cast_reg_146(31 downto 9) <= "00000000000000000000000";

    ap_NS_fsm_assign_proc : process (ap_start, ap_CS_fsm, ap_CS_fsm_state1, tmp_reg_151, tmp_62_reg_155, tmp_63_reg_159, ap_CS_fsm_state2, tmp_65_fu_109_p2)
    begin
        case ap_CS_fsm is
            when ap_ST_fsm_state1 => 
                if (((ap_start = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_state1))) then
                    ap_NS_fsm <= ap_ST_fsm_state2;
                else
                    ap_NS_fsm <= ap_ST_fsm_state1;
                end if;
            when ap_ST_fsm_state2 => 
                if (((ap_const_logic_1 = ap_CS_fsm_state2) and ((tmp_reg_151 = ap_const_lv1_1) or ((tmp_62_reg_155 = ap_const_lv1_1) or ((tmp_65_fu_109_p2 = ap_const_lv1_1) or (tmp_63_reg_159 = ap_const_lv1_0)))))) then
                    ap_NS_fsm <= ap_ST_fsm_state1;
                else
                    ap_NS_fsm <= ap_ST_fsm_state3;
                end if;
            when ap_ST_fsm_state3 => 
                ap_NS_fsm <= ap_ST_fsm_state2;
            when others =>  
                ap_NS_fsm <= "XXX";
        end case;
    end process;

    Data_address0_assign_proc : process(tmp_reg_151, tmp_62_reg_155, tmp_63_reg_159, Data_addr_reg_163, ap_CS_fsm_state2, tmp_65_fu_109_p2, ap_CS_fsm_state3, tmp_68_fu_120_p1, tmp_67_fu_130_p1)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state3)) then 
            Data_address0 <= Data_addr_reg_163;
        elsif (((tmp_65_fu_109_p2 = ap_const_lv1_1) and (tmp_63_reg_159 = ap_const_lv1_1) and (tmp_62_reg_155 = ap_const_lv1_0) and (tmp_reg_151 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state2))) then 
            Data_address0 <= tmp_67_fu_130_p1(13 - 1 downto 0);
        elsif (((tmp_63_reg_159 = ap_const_lv1_1) and (tmp_65_fu_109_p2 = ap_const_lv1_0) and (tmp_62_reg_155 = ap_const_lv1_0) and (tmp_reg_151 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state2))) then 
            Data_address0 <= tmp_68_fu_120_p1(13 - 1 downto 0);
        else 
            Data_address0 <= "XXXXXXXXXXXXX";
        end if; 
    end process;


    Data_ce0_assign_proc : process(tmp_reg_151, tmp_62_reg_155, tmp_63_reg_159, ap_CS_fsm_state2, tmp_65_fu_109_p2, ap_CS_fsm_state3)
    begin
        if (((ap_const_logic_1 = ap_CS_fsm_state3) or ((tmp_65_fu_109_p2 = ap_const_lv1_1) and (tmp_63_reg_159 = ap_const_lv1_1) and (tmp_62_reg_155 = ap_const_lv1_0) and (tmp_reg_151 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state2)) or ((tmp_63_reg_159 = ap_const_lv1_1) and (tmp_65_fu_109_p2 = ap_const_lv1_0) and (tmp_62_reg_155 = ap_const_lv1_0) and (tmp_reg_151 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state2)))) then 
            Data_ce0 <= ap_const_logic_1;
        else 
            Data_ce0 <= ap_const_logic_0;
        end if; 
    end process;


    Data_d0_assign_proc : process(Data_q0, e_cast_reg_146, tmp_reg_151, tmp_62_reg_155, tmp_63_reg_159, ap_CS_fsm_state2, tmp_65_fu_109_p2, ap_CS_fsm_state3)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state3)) then 
            Data_d0 <= Data_q0;
        elsif (((tmp_65_fu_109_p2 = ap_const_lv1_1) and (tmp_63_reg_159 = ap_const_lv1_1) and (tmp_62_reg_155 = ap_const_lv1_0) and (tmp_reg_151 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state2))) then 
            Data_d0 <= e_cast_reg_146;
        else 
            Data_d0 <= "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        end if; 
    end process;


    Data_we0_assign_proc : process(tmp_reg_151, tmp_62_reg_155, tmp_63_reg_159, ap_CS_fsm_state2, tmp_65_fu_109_p2, ap_CS_fsm_state3)
    begin
        if (((ap_const_logic_1 = ap_CS_fsm_state3) or ((tmp_65_fu_109_p2 = ap_const_lv1_1) and (tmp_63_reg_159 = ap_const_lv1_1) and (tmp_62_reg_155 = ap_const_lv1_0) and (tmp_reg_151 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state2)))) then 
            Data_we0 <= ap_const_logic_1;
        else 
            Data_we0 <= ap_const_logic_0;
        end if; 
    end process;

    ap_CS_fsm_state1 <= ap_CS_fsm(0);
    ap_CS_fsm_state2 <= ap_CS_fsm(1);
    ap_CS_fsm_state3 <= ap_CS_fsm(2);

    ap_done_assign_proc : process(ap_start, ap_CS_fsm_state1, tmp_reg_151, tmp_62_reg_155, tmp_63_reg_159, ap_CS_fsm_state2, tmp_65_fu_109_p2)
    begin
        if ((((ap_const_logic_1 = ap_CS_fsm_state2) and ((tmp_reg_151 = ap_const_lv1_1) or ((tmp_62_reg_155 = ap_const_lv1_1) or ((tmp_65_fu_109_p2 = ap_const_lv1_1) or (tmp_63_reg_159 = ap_const_lv1_0))))) or ((ap_start = ap_const_logic_0) and (ap_const_logic_1 = ap_CS_fsm_state1)))) then 
            ap_done <= ap_const_logic_1;
        else 
            ap_done <= ap_const_logic_0;
        end if; 
    end process;


    ap_idle_assign_proc : process(ap_start, ap_CS_fsm_state1)
    begin
        if (((ap_start = ap_const_logic_0) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
            ap_idle <= ap_const_logic_1;
        else 
            ap_idle <= ap_const_logic_0;
        end if; 
    end process;


    ap_ready_assign_proc : process(tmp_reg_151, tmp_62_reg_155, tmp_63_reg_159, ap_CS_fsm_state2, tmp_65_fu_109_p2)
    begin
        if (((ap_const_logic_1 = ap_CS_fsm_state2) and ((tmp_reg_151 = ap_const_lv1_1) or ((tmp_62_reg_155 = ap_const_lv1_1) or ((tmp_65_fu_109_p2 = ap_const_lv1_1) or (tmp_63_reg_159 = ap_const_lv1_0)))))) then 
            ap_ready <= ap_const_logic_1;
        else 
            ap_ready <= ap_const_logic_0;
        end if; 
    end process;

    e_cast_fu_76_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(e),32));
    j_6_fu_114_p2 <= std_logic_vector(unsigned(j_reg_67) + unsigned(ap_const_lv32_FFFFFFFF));
    tmp_62_fu_92_p2 <= "1" when (signed(tmp_s_fu_86_p2) < signed(i)) else "0";
    tmp_63_fu_98_p2 <= "1" when (signed(length_r) < signed(ap_const_lv32_1388)) else "0";
    tmp_64_fu_104_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(i),64));
    tmp_65_fu_109_p2 <= "1" when (signed(j_reg_67) < signed(i)) else "0";
    tmp_66_fu_125_p2 <= std_logic_vector(unsigned(i) + unsigned(ap_const_lv32_FFFFFFFF));
    tmp_67_fu_130_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_66_fu_125_p2),64));
    tmp_68_fu_120_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(j_6_fu_114_p2),64));
    tmp_fu_80_p2 <= "1" when (signed(i) < signed(ap_const_lv32_1)) else "0";
    tmp_s_fu_86_p2 <= std_logic_vector(unsigned(length_r) + unsigned(ap_const_lv32_1));
end behav;
