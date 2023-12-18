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
static const char *ng0 = "/home/ise/my_shared_folder/EIT-VHDL-SDL/assignments/rcs1/tb_keygen.vhd";



static void work_a_2624715952_2372691052_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    int64 t9;

LAB0:    t1 = (t0 + 4544U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(82, ng0);
    t2 = (t0 + 8640);
    t4 = (t0 + 4928);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 128U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(83, ng0);
    t2 = (t0 + 8768);
    t4 = (t0 + 4992);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 4U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(84, ng0);
    t2 = (t0 + 8772);
    t4 = (t0 + 5056);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 16U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(85, ng0);
    t2 = (t0 + 8788);
    t4 = (t0 + 5120);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 16U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(86, ng0);
    t2 = (t0 + 8804);
    t4 = (t0 + 5184);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 16U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(87, ng0);
    t2 = (t0 + 8820);
    t4 = (t0 + 5248);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 16U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(88, ng0);
    t2 = (t0 + 8836);
    t4 = (t0 + 5312);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 16U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(89, ng0);
    t2 = (t0 + 8852);
    t4 = (t0 + 5376);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 16U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(90, ng0);
    t2 = (t0 + 3568U);
    t3 = *((char **)t2);
    t9 = *((int64 *)t3);
    t2 = (t0 + 4352);
    xsi_process_wait(t2, t9);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(115, ng0);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    goto LAB2;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

}


extern void work_a_2624715952_2372691052_init()
{
	static char *pe[] = {(void *)work_a_2624715952_2372691052_p_0};
	xsi_register_didat("work_a_2624715952_2372691052", "isim/tb_keygen_isim_beh.exe.sim/work/a_2624715952_2372691052.didat");
	xsi_register_executes(pe);
}
