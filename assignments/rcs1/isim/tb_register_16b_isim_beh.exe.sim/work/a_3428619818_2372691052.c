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
static const char *ng0 = "/nas/lrz/home/ge74men/EIT-VHDL-SDL/assignments/rcs1/tb_register_16b.vhd";



static void work_a_3428619818_2372691052_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int64 t7;
    int64 t8;

LAB0:    t1 = (t0 + 2784U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(77, ng0);
    t2 = (t0 + 3664);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(78, ng0);
    t2 = (t0 + 1808U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 2592);
    xsi_process_wait(t2, t8);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(79, ng0);
    t2 = (t0 + 3664);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(80, ng0);
    t2 = (t0 + 1808U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 2592);
    xsi_process_wait(t2, t8);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    goto LAB2;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

}

static void work_a_3428619818_2372691052_p_1(char *t0)
{
    char *t1;
    char *t2;
    int64 t3;
    char *t4;
    int t5;
    int t6;
    char *t7;
    char *t8;
    unsigned char t9;
    unsigned char t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    int t15;
    int64 t16;

LAB0:    t1 = (t0 + 3032U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(88, ng0);
    t3 = (100 * 1000LL);
    t2 = (t0 + 2840);
    xsi_process_wait(t2, t3);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(91, ng0);
    t2 = (t0 + 6088);
    *((int *)t2) = 1;
    t4 = (t0 + 6092);
    *((int *)t4) = 3;
    t5 = 1;
    t6 = 3;

LAB8:    if (t5 <= t6)
        goto LAB9;

LAB11:    xsi_set_current_line(99, ng0);

LAB22:    *((char **)t1) = &&LAB23;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB9:    xsi_set_current_line(92, ng0);
    t7 = (t0 + 1192U);
    t8 = *((char **)t7);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)2);
    if (t10 != 0)
        goto LAB12;

LAB14:    xsi_set_current_line(95, ng0);
    t2 = (t0 + 3728);
    t4 = (t2 + 56U);
    t7 = *((char **)t4);
    t8 = (t7 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);

LAB13:    xsi_set_current_line(97, ng0);
    t2 = (t0 + 1808U);
    t4 = *((char **)t2);
    t3 = *((int64 *)t4);
    t2 = (t0 + 6088);
    t15 = *((int *)t2);
    t16 = (t3 * t15);
    t7 = (t0 + 2840);
    xsi_process_wait(t7, t16);

LAB17:    *((char **)t1) = &&LAB18;
    goto LAB1;

LAB10:    t2 = (t0 + 6088);
    t5 = *((int *)t2);
    t4 = (t0 + 6092);
    t6 = *((int *)t4);
    if (t5 == t6)
        goto LAB11;

LAB19:    t15 = (t5 + 1);
    t5 = t15;
    t7 = (t0 + 6088);
    *((int *)t7) = t5;
    goto LAB8;

LAB12:    xsi_set_current_line(93, ng0);
    t7 = (t0 + 3728);
    t11 = (t7 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)3;
    xsi_driver_first_trans_fast(t7);
    goto LAB13;

LAB15:    goto LAB10;

LAB16:    goto LAB15;

LAB18:    goto LAB16;

LAB20:    goto LAB2;

LAB21:    goto LAB20;

LAB23:    goto LAB21;

}

static void work_a_3428619818_2372691052_p_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int t4;
    int t5;
    char *t6;
    char *t7;
    int64 t8;
    int t9;
    int64 t10;
    char *t11;
    char *t12;
    char *t13;
    unsigned char t14;
    unsigned char t15;
    unsigned char t16;
    unsigned char t17;
    unsigned char t18;
    unsigned int t19;
    unsigned char t20;
    unsigned char t21;
    unsigned char t22;
    char *t23;
    char *t24;
    unsigned char t25;
    unsigned int t26;
    char *t27;
    char *t28;

LAB0:    t1 = (t0 + 3280U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(107, ng0);
    t2 = (t0 + 6096);
    *((int *)t2) = 2;
    t3 = (t0 + 6100);
    *((int *)t3) = 4;
    t4 = 2;
    t5 = 4;

LAB4:    if (t4 <= t5)
        goto LAB5;

LAB7:    xsi_set_current_line(118, ng0);

LAB39:    *((char **)t1) = &&LAB40;

LAB1:    return;
LAB5:    xsi_set_current_line(108, ng0);
    t6 = (t0 + 1808U);
    t7 = *((char **)t6);
    t8 = *((int64 *)t7);
    t6 = (t0 + 6096);
    t9 = *((int *)t6);
    t10 = (t8 * t9);
    t11 = (t0 + 3088);
    xsi_process_wait(t11, t10);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB6:    t2 = (t0 + 6096);
    t4 = *((int *)t2);
    t3 = (t0 + 6100);
    t5 = *((int *)t3);
    if (t4 == t5)
        goto LAB7;

LAB36:    t9 = (t4 + 1);
    t4 = t9;
    t6 = (t0 + 6096);
    *((int *)t6) = t4;
    goto LAB4;

LAB8:    xsi_set_current_line(109, ng0);
    t2 = (t0 + 6104);
    t6 = (t0 + 3792);
    t7 = (t6 + 56U);
    t11 = *((char **)t7);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t2, 16U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(110, ng0);
    t2 = (t0 + 1192U);
    t3 = *((char **)t2);
    t16 = *((unsigned char *)t3);
    t17 = (t16 == (unsigned char)3);
    if (t17 == 1)
        goto LAB18;

LAB19:    t15 = (unsigned char)0;

LAB20:    if (t15 == 1)
        goto LAB15;

LAB16:    t12 = (t0 + 1192U);
    t13 = *((char **)t12);
    t21 = *((unsigned char *)t13);
    t22 = (t21 == (unsigned char)2);
    if (t22 == 1)
        goto LAB27;

LAB28:    t20 = (unsigned char)0;

LAB29:    t14 = t20;

LAB17:    if (t14 != 0)
        goto LAB12;

LAB14:    xsi_set_current_line(114, ng0);
    t2 = (t0 + 6124);
    xsi_report(t2, 4U, 0);

LAB13:    xsi_set_current_line(116, ng0);
    t2 = (t0 + 6128);
    t6 = (t0 + 3792);
    t7 = (t6 + 56U);
    t11 = *((char **)t7);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t2, 16U);
    xsi_driver_first_trans_fast(t6);
    goto LAB6;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

LAB12:    xsi_set_current_line(112, ng0);
    t28 = (t0 + 6120);
    xsi_report(t28, 4U, 0);
    goto LAB13;

LAB15:    t14 = (unsigned char)1;
    goto LAB17;

LAB18:    t2 = (t0 + 1352U);
    t6 = *((char **)t2);
    t2 = (t0 + 1512U);
    t7 = *((char **)t2);
    t18 = 1;
    if (16U == 16U)
        goto LAB21;

LAB22:    t18 = 0;

LAB23:    t15 = t18;
    goto LAB20;

LAB21:    t19 = 0;

LAB24:    if (t19 < 16U)
        goto LAB25;
    else
        goto LAB23;

LAB25:    t2 = (t6 + t19);
    t11 = (t7 + t19);
    if (*((unsigned char *)t2) != *((unsigned char *)t11))
        goto LAB22;

LAB26:    t19 = (t19 + 1);
    goto LAB24;

LAB27:    t12 = (t0 + 1352U);
    t23 = *((char **)t12);
    t12 = (t0 + 1512U);
    t24 = *((char **)t12);
    t25 = 1;
    if (16U == 16U)
        goto LAB30;

LAB31:    t25 = 0;

LAB32:    t20 = (!(t25));
    goto LAB29;

LAB30:    t26 = 0;

LAB33:    if (t26 < 16U)
        goto LAB34;
    else
        goto LAB32;

LAB34:    t12 = (t23 + t26);
    t27 = (t24 + t26);
    if (*((unsigned char *)t12) != *((unsigned char *)t27))
        goto LAB31;

LAB35:    t26 = (t26 + 1);
    goto LAB33;

LAB37:    goto LAB2;

LAB38:    goto LAB37;

LAB40:    goto LAB38;

}


extern void work_a_3428619818_2372691052_init()
{
	static char *pe[] = {(void *)work_a_3428619818_2372691052_p_0,(void *)work_a_3428619818_2372691052_p_1,(void *)work_a_3428619818_2372691052_p_2};
	xsi_register_didat("work_a_3428619818_2372691052", "isim/tb_register_16b_isim_beh.exe.sim/work/a_3428619818_2372691052.didat");
	xsi_register_executes(pe);
}
