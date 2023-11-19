/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/home/ise/my_shared_folder/Rep-EIT-VHDL-SDL/direct/tb_xorop.vhd";
extern char *IEEE_P_3620187407;



static void work_a_1442616576_2372691052_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned char t9;
    int64 t10;

LAB0:    t1 = (t0 + 2944U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(64, ng0);
    t2 = (t0 + 5632);
    t4 = (t0 + 3328);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 16U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(65, ng0);
    t2 = (t0 + 5648);
    t4 = (t0 + 3392);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 16U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(66, ng0);
    t2 = (t0 + 5664);
    t4 = (t0 + 3456);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 16U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(67, ng0);
    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t2 = (t0 + 5528U);
    t4 = (t0 + 1512U);
    t5 = *((char **)t4);
    t4 = (t0 + 5528U);
    t9 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t3, t2, t5, t4);
    if (t9 == 0)
        goto LAB4;

LAB5:    xsi_set_current_line(71, ng0);
    t2 = (t0 + 5691);
    xsi_report(t2, 11U, 0);
    xsi_set_current_line(73, ng0);
    t2 = (t0 + 1968U);
    t3 = *((char **)t2);
    t10 = *((int64 *)t3);
    t2 = (t0 + 2752);
    xsi_process_wait(t2, t10);

LAB8:    *((char **)t1) = &&LAB9;

LAB1:    return;
LAB4:    t6 = (t0 + 5680);
    xsi_report(t6, 11U, (unsigned char)2);
    goto LAB5;

LAB6:    xsi_set_current_line(75, ng0);
    t2 = (t0 + 5702);
    t4 = (t0 + 3328);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 16U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(76, ng0);
    t2 = (t0 + 5718);
    t4 = (t0 + 3392);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 16U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(77, ng0);
    t2 = (t0 + 5734);
    t4 = (t0 + 3456);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 16U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(79, ng0);
    t2 = (t0 + 1968U);
    t3 = *((char **)t2);
    t10 = *((int64 *)t3);
    t2 = (t0 + 2752);
    xsi_process_wait(t2, t10);

LAB12:    *((char **)t1) = &&LAB13;
    goto LAB1;

LAB7:    goto LAB6;

LAB9:    goto LAB7;

LAB10:    xsi_set_current_line(81, ng0);
    t2 = (t0 + 5750);
    t4 = (t0 + 3328);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 16U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(82, ng0);
    t2 = (t0 + 5766);
    t4 = (t0 + 3392);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 16U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(83, ng0);
    t2 = (t0 + 5782);
    t4 = (t0 + 3456);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 16U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(85, ng0);
    t2 = (t0 + 1968U);
    t3 = *((char **)t2);
    t10 = *((int64 *)t3);
    t2 = (t0 + 2752);
    xsi_process_wait(t2, t10);

LAB16:    *((char **)t1) = &&LAB17;
    goto LAB1;

LAB11:    goto LAB10;

LAB13:    goto LAB11;

LAB14:    xsi_set_current_line(87, ng0);
    t2 = (t0 + 5798);
    t4 = (t0 + 3328);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 16U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(88, ng0);
    t2 = (t0 + 5814);
    t4 = (t0 + 3392);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 16U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(89, ng0);
    t2 = (t0 + 5830);
    t4 = (t0 + 3456);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 16U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(91, ng0);
    t2 = (t0 + 1968U);
    t3 = *((char **)t2);
    t10 = *((int64 *)t3);
    t2 = (t0 + 2752);
    xsi_process_wait(t2, t10);

LAB20:    *((char **)t1) = &&LAB21;
    goto LAB1;

LAB15:    goto LAB14;

LAB17:    goto LAB15;

LAB18:    xsi_set_current_line(92, ng0);

LAB24:    *((char **)t1) = &&LAB25;
    goto LAB1;

LAB19:    goto LAB18;

LAB21:    goto LAB19;

LAB22:    goto LAB2;

LAB23:    goto LAB22;

LAB25:    goto LAB23;

}


extern void work_a_1442616576_2372691052_init()
{
	static char *pe[] = {(void *)work_a_1442616576_2372691052_p_0};
	xsi_register_didat("work_a_1442616576_2372691052", "isim/tb_xorop_isim_beh.exe.sim/work/a_1442616576_2372691052.didat");
	xsi_register_executes(pe);
}
