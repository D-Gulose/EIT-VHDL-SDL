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
static const char *ng0 = "/nas/ei/home/ge74men/EIT-VHDL-SDL/assignments/rcs1/register_16b.vhd";



static void work_a_0008965937_3212880686_p_0(char *t0)
{
    unsigned char t1;
    unsigned char t2;
    char *t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    char *t9;
    unsigned char t10;
    unsigned char t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;

LAB0:    xsi_set_current_line(47, ng0);
    t3 = (t0 + 1032U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)3);
    if (t6 == 1)
        goto LAB8;

LAB9:    t2 = (unsigned char)0;

LAB10:    if (t2 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t3 = (t0 + 2984);
    *((int *)t3) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(48, ng0);
    t8 = (t0 + 1352U);
    t12 = *((char **)t8);
    t8 = (t0 + 3064);
    t13 = (t8 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t12, 16U);
    xsi_driver_first_trans_fast_port(t8);
    goto LAB3;

LAB5:    t8 = (t0 + 1192U);
    t9 = *((char **)t8);
    t10 = *((unsigned char *)t9);
    t11 = (t10 == (unsigned char)3);
    t1 = t11;
    goto LAB7;

LAB8:    t3 = (t0 + 992U);
    t7 = xsi_signal_has_event(t3);
    t2 = t7;
    goto LAB10;

}


extern void work_a_0008965937_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0008965937_3212880686_p_0};
	xsi_register_didat("work_a_0008965937_3212880686", "isim/tb_idea_single_isim_beh.exe.sim/work/a_0008965937_3212880686.didat");
	xsi_register_executes(pe);
}
