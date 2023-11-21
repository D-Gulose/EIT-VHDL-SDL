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
static const char *ng0 = "/nas/lrz/home/ge74men/Rep-EIT-VHDL-SDL/direct/tb_mulop.vhd";



static void work_a_3571496051_2372691052_p_0(char *t0)
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

LAB0:    t1 = (t0 + 2944U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(67, ng0);
    t2 = (t0 + 6008);
    t4 = (t0 + 3576);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 16U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(68, ng0);
    t2 = (t0 + 6024);
    t4 = (t0 + 3640);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 16U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(69, ng0);
    t2 = (t0 + 6040);
    t4 = (t0 + 3704);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 16U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(70, ng0);
    t2 = (t0 + 1968U);
    t3 = *((char **)t2);
    t9 = *((int64 *)t3);
    t2 = (t0 + 2752);
    xsi_process_wait(t2, t9);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(73, ng0);
    t2 = (t0 + 6056);
    t4 = (t0 + 3576);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 16U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(74, ng0);
    t2 = (t0 + 6072);
    t4 = (t0 + 3640);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 16U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(75, ng0);
    t2 = (t0 + 6088);
    t4 = (t0 + 3704);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 16U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(76, ng0);
    t2 = (t0 + 1968U);
    t3 = *((char **)t2);
    t9 = *((int64 *)t3);
    t2 = (t0 + 2752);
    xsi_process_wait(t2, t9);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    xsi_set_current_line(79, ng0);
    t2 = (t0 + 6104);
    t4 = (t0 + 3576);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 16U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(80, ng0);
    t2 = (t0 + 6120);
    t4 = (t0 + 3640);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 16U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(81, ng0);
    t2 = (t0 + 6136);
    t4 = (t0 + 3704);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 16U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(82, ng0);
    t2 = (t0 + 1968U);
    t3 = *((char **)t2);
    t9 = *((int64 *)t3);
    t2 = (t0 + 2752);
    xsi_process_wait(t2, t9);

LAB14:    *((char **)t1) = &&LAB15;
    goto LAB1;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

LAB12:    xsi_set_current_line(84, ng0);

LAB18:    *((char **)t1) = &&LAB19;
    goto LAB1;

LAB13:    goto LAB12;

LAB15:    goto LAB13;

LAB16:    goto LAB2;

LAB17:    goto LAB16;

LAB19:    goto LAB17;

}

static void work_a_3571496051_2372691052_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int t4;
    int t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned char t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    int64 t17;
    int t18;

LAB0:    t1 = (t0 + 3192U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(89, ng0);
    t2 = (t0 + 6152);
    *((int *)t2) = 0;
    t3 = (t0 + 6156);
    *((int *)t3) = 3;
    t4 = 0;
    t5 = 3;

LAB4:    if (t4 <= t5)
        goto LAB5;

LAB7:    xsi_set_current_line(100, ng0);

LAB24:    *((char **)t1) = &&LAB25;

LAB1:    return;
LAB5:    xsi_set_current_line(90, ng0);
    t6 = (t0 + 1352U);
    t7 = *((char **)t6);
    t6 = (t0 + 1512U);
    t8 = *((char **)t6);
    t9 = 1;
    if (16U == 16U)
        goto LAB11;

LAB12:    t9 = 0;

LAB13:    if (t9 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(94, ng0);
    t2 = (t0 + 3768);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(95, ng0);
    t2 = (t0 + 6171);
    xsi_report(t2, 11U, 0);

LAB9:    xsi_set_current_line(97, ng0);
    t2 = (t0 + 1968U);
    t3 = *((char **)t2);
    t17 = *((int64 *)t3);
    t2 = (t0 + 3000);
    xsi_process_wait(t2, t17);

LAB19:    *((char **)t1) = &&LAB20;
    goto LAB1;

LAB6:    t2 = (t0 + 6152);
    t4 = *((int *)t2);
    t3 = (t0 + 6156);
    t5 = *((int *)t3);
    if (t4 == t5)
        goto LAB7;

LAB21:    t18 = (t4 + 1);
    t4 = t18;
    t6 = (t0 + 6152);
    *((int *)t6) = t4;
    goto LAB4;

LAB8:    xsi_set_current_line(91, ng0);
    t12 = (t0 + 3768);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = (unsigned char)3;
    xsi_driver_first_trans_fast(t12);
    xsi_set_current_line(92, ng0);
    t2 = (t0 + 6160);
    xsi_report(t2, 11U, 0);
    goto LAB9;

LAB11:    t10 = 0;

LAB14:    if (t10 < 16U)
        goto LAB15;
    else
        goto LAB13;

LAB15:    t6 = (t7 + t10);
    t11 = (t8 + t10);
    if (*((unsigned char *)t6) != *((unsigned char *)t11))
        goto LAB12;

LAB16:    t10 = (t10 + 1);
    goto LAB14;

LAB17:    goto LAB6;

LAB18:    goto LAB17;

LAB20:    goto LAB18;

LAB22:    goto LAB2;

LAB23:    goto LAB22;

LAB25:    goto LAB23;

}


extern void work_a_3571496051_2372691052_init()
{
	static char *pe[] = {(void *)work_a_3571496051_2372691052_p_0,(void *)work_a_3571496051_2372691052_p_1};
	xsi_register_didat("work_a_3571496051_2372691052", "isim/tb_mulop_isim_beh.exe.sim/work/a_3571496051_2372691052.didat");
	xsi_register_executes(pe);
}
