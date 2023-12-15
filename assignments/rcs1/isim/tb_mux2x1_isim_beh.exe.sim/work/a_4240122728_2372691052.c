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
static const char *ng0 = "/nas/lrz/home/ge74men/EIT-VHDL-SDL/assignments/rcs1/tb_mux2x1.vhd";
extern char *IEEE_P_3620187407;



static void work_a_4240122728_2372691052_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int64 t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;

LAB0:    t1 = (t0 + 2944U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(74, ng0);
    t2 = (t0 + 1968U);
    t3 = *((char **)t2);
    t4 = *((int64 *)t3);
    t2 = (t0 + 2752);
    xsi_process_wait(t2, t4);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(77, ng0);
    t2 = (t0 + 6048);
    t5 = (t0 + 3576);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 16U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(78, ng0);
    t2 = (t0 + 6064);
    t5 = (t0 + 3640);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 16U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(79, ng0);
    t2 = (t0 + 3704);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(80, ng0);
    t2 = (t0 + 1968U);
    t3 = *((char **)t2);
    t4 = *((int64 *)t3);
    t2 = (t0 + 2752);
    xsi_process_wait(t2, t4);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    xsi_set_current_line(83, ng0);
    t2 = (t0 + 6080);
    t5 = (t0 + 3576);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 16U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(84, ng0);
    t2 = (t0 + 6096);
    t5 = (t0 + 3640);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 16U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(85, ng0);
    t2 = (t0 + 1968U);
    t3 = *((char **)t2);
    t4 = *((int64 *)t3);
    t2 = (t0 + 2752);
    xsi_process_wait(t2, t4);

LAB14:    *((char **)t1) = &&LAB15;
    goto LAB1;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

LAB12:    xsi_set_current_line(88, ng0);
    t2 = (t0 + 3704);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(89, ng0);
    t2 = (t0 + 1968U);
    t3 = *((char **)t2);
    t4 = *((int64 *)t3);
    t2 = (t0 + 2752);
    xsi_process_wait(t2, t4);

LAB18:    *((char **)t1) = &&LAB19;
    goto LAB1;

LAB13:    goto LAB12;

LAB15:    goto LAB13;

LAB16:    xsi_set_current_line(92, ng0);
    t2 = (t0 + 3704);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)0;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(93, ng0);
    t2 = (t0 + 1968U);
    t3 = *((char **)t2);
    t4 = *((int64 *)t3);
    t2 = (t0 + 2752);
    xsi_process_wait(t2, t4);

LAB22:    *((char **)t1) = &&LAB23;
    goto LAB1;

LAB17:    goto LAB16;

LAB19:    goto LAB17;

LAB20:    xsi_set_current_line(95, ng0);

LAB26:    *((char **)t1) = &&LAB27;
    goto LAB1;

LAB21:    goto LAB20;

LAB23:    goto LAB21;

LAB24:    goto LAB2;

LAB25:    goto LAB24;

LAB27:    goto LAB25;

}

static void work_a_4240122728_2372691052_p_1(char *t0)
{
    char t35[16];
    char *t1;
    char *t2;
    char *t3;
    int64 t4;
    int t5;
    int t6;
    unsigned char t7;
    unsigned char t8;
    unsigned char t9;
    char *t10;
    char *t11;
    unsigned char t12;
    unsigned char t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned char t17;
    unsigned char t18;
    char *t19;
    char *t20;
    unsigned char t21;
    unsigned char t22;
    char *t23;
    char *t24;
    char *t25;
    unsigned char t26;
    unsigned char t27;
    char *t28;
    char *t29;
    unsigned char t30;
    unsigned char t31;
    char *t32;
    char *t33;
    char *t36;
    char *t37;
    int t38;
    unsigned int t39;
    unsigned char t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;

LAB0:    t1 = (t0 + 3192U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(102, ng0);
    t2 = (t0 + 1968U);
    t3 = *((char **)t2);
    t4 = *((int64 *)t3);
    t2 = (t0 + 3000);
    xsi_process_wait(t2, t4);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(104, ng0);
    t2 = (t0 + 6112);
    *((int *)t2) = 1;
    t3 = (t0 + 6116);
    *((int *)t3) = 4;
    t5 = 1;
    t6 = 4;

LAB8:    if (t5 <= t6)
        goto LAB9;

LAB11:    xsi_set_current_line(117, ng0);

LAB37:    *((char **)t1) = &&LAB38;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB9:    xsi_set_current_line(105, ng0);
    t10 = (t0 + 1032U);
    t11 = *((char **)t10);
    t12 = *((unsigned char *)t11);
    t13 = (t12 == (unsigned char)2);
    if (t13 == 1)
        goto LAB21;

LAB22:    t9 = (unsigned char)0;

LAB23:    if (t9 == 1)
        goto LAB18;

LAB19:    t19 = (t0 + 1032U);
    t20 = *((char **)t19);
    t21 = *((unsigned char *)t20);
    t22 = (t21 == (unsigned char)3);
    if (t22 == 1)
        goto LAB24;

LAB25:    t18 = (unsigned char)0;

LAB26:    t8 = t18;

LAB20:    if (t8 == 1)
        goto LAB15;

LAB16:    t28 = (t0 + 1032U);
    t29 = *((char **)t28);
    t30 = *((unsigned char *)t29);
    t31 = (t30 == (unsigned char)0);
    if (t31 == 1)
        goto LAB27;

LAB28:    t27 = (unsigned char)0;

LAB29:    t7 = t27;

LAB17:    if (t7 != 0)
        goto LAB12;

LAB14:    xsi_set_current_line(112, ng0);
    t2 = (t0 + 3768);
    t3 = (t2 + 56U);
    t10 = *((char **)t3);
    t11 = (t10 + 56U);
    t14 = *((char **)t11);
    *((unsigned char *)t14) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(113, ng0);
    t2 = (t0 + 6140);
    xsi_report(t2, 4U, 0);

LAB13:    xsi_set_current_line(115, ng0);
    t2 = (t0 + 1968U);
    t3 = *((char **)t2);
    t4 = *((int64 *)t3);
    t2 = (t0 + 3000);
    xsi_process_wait(t2, t4);

LAB32:    *((char **)t1) = &&LAB33;
    goto LAB1;

LAB10:    t2 = (t0 + 6112);
    t5 = *((int *)t2);
    t3 = (t0 + 6116);
    t6 = *((int *)t3);
    if (t5 == t6)
        goto LAB11;

LAB34:    t38 = (t5 + 1);
    t5 = t38;
    t10 = (t0 + 6112);
    *((int *)t10) = t5;
    goto LAB8;

LAB12:    xsi_set_current_line(109, ng0);
    t37 = (t0 + 3768);
    t41 = (t37 + 56U);
    t42 = *((char **)t41);
    t43 = (t42 + 56U);
    t44 = *((char **)t43);
    *((unsigned char *)t44) = (unsigned char)3;
    xsi_driver_first_trans_fast(t37);
    xsi_set_current_line(110, ng0);
    t2 = (t0 + 6136);
    xsi_report(t2, 4U, 0);
    goto LAB13;

LAB15:    t7 = (unsigned char)1;
    goto LAB17;

LAB18:    t8 = (unsigned char)1;
    goto LAB20;

LAB21:    t10 = (t0 + 1512U);
    t14 = *((char **)t10);
    t10 = (t0 + 5960U);
    t15 = (t0 + 1192U);
    t16 = *((char **)t15);
    t15 = (t0 + 5928U);
    t17 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t14, t10, t16, t15);
    t9 = t17;
    goto LAB23;

LAB24:    t19 = (t0 + 1512U);
    t23 = *((char **)t19);
    t19 = (t0 + 5960U);
    t24 = (t0 + 1352U);
    t25 = *((char **)t24);
    t24 = (t0 + 5944U);
    t26 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t23, t19, t25, t24);
    t18 = t26;
    goto LAB26;

LAB27:    t28 = (t0 + 1512U);
    t32 = *((char **)t28);
    t28 = (t0 + 5960U);
    t33 = (t0 + 6120);
    t36 = (t35 + 0U);
    t37 = (t36 + 0U);
    *((int *)t37) = 0;
    t37 = (t36 + 4U);
    *((int *)t37) = 15;
    t37 = (t36 + 8U);
    *((int *)t37) = 1;
    t38 = (15 - 0);
    t39 = (t38 * 1);
    t39 = (t39 + 1);
    t37 = (t36 + 12U);
    *((unsigned int *)t37) = t39;
    t40 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t32, t28, t33, t35);
    t27 = t40;
    goto LAB29;

LAB30:    goto LAB10;

LAB31:    goto LAB30;

LAB33:    goto LAB31;

LAB35:    goto LAB2;

LAB36:    goto LAB35;

LAB38:    goto LAB36;

}


extern void work_a_4240122728_2372691052_init()
{
	static char *pe[] = {(void *)work_a_4240122728_2372691052_p_0,(void *)work_a_4240122728_2372691052_p_1};
	xsi_register_didat("work_a_4240122728_2372691052", "isim/tb_mux2x1_isim_beh.exe.sim/work/a_4240122728_2372691052.didat");
	xsi_register_executes(pe);
}
