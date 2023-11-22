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
static const char *ng0 = "/home/ise/my_shared_folder/Rep-EIT-VHDL-SDL/direct/mulop.vhd";
extern char *IEEE_P_3620187407;
extern char *IEEE_P_2592010699;

unsigned char ieee_p_3620187407_sub_1366267000076357978_3965413181(char *, char *, char *, char *, char *);
char *ieee_p_3620187407_sub_1496620905533613331_3965413181(char *, char *, char *, char *, char *, char *);
char *ieee_p_3620187407_sub_1496620905533649268_3965413181(char *, char *, char *, char *, char *, char *);
char *ieee_p_3620187407_sub_1496620905533721142_3965413181(char *, char *, char *, char *, char *, char *);
char *ieee_p_3620187407_sub_2255506239096166994_3965413181(char *, char *, char *, char *, int );


static void work_a_3400501926_3212880686_p_0(char *t0)
{
    char t9[16];
    char t14[16];
    char t17[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    unsigned char t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned int t10;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    int t15;
    unsigned int t16;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;

LAB0:    xsi_set_current_line(60, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 6080U);
    t3 = (t0 + 1888U);
    t4 = *((char **)t3);
    t3 = (t0 + 6160U);
    t5 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t2, t1, t4, t3);
    if (t5 != 0)
        goto LAB2;

LAB4:    xsi_set_current_line(63, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t3 = ((IEEE_P_2592010699) + 4000);
    t4 = (t0 + 6080U);
    t1 = xsi_base_array_concat(t1, t9, t3, (char)99, (unsigned char)2, (char)97, t2, t4, (char)101);
    t6 = (t0 + 2008U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    t10 = (1U + 16U);
    memcpy(t6, t1, t10);

LAB3:    xsi_set_current_line(65, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t1 = (t0 + 6096U);
    t3 = (t0 + 1888U);
    t4 = *((char **)t3);
    t3 = (t0 + 6160U);
    t5 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t2, t1, t4, t3);
    if (t5 != 0)
        goto LAB5;

LAB7:    xsi_set_current_line(68, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = ((IEEE_P_2592010699) + 4000);
    t4 = (t0 + 6096U);
    t1 = xsi_base_array_concat(t1, t9, t3, (char)99, (unsigned char)2, (char)97, t2, t4, (char)101);
    t6 = (t0 + 2128U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    t10 = (1U + 16U);
    memcpy(t6, t1, t10);

LAB6:    xsi_set_current_line(71, ng0);
    t1 = (t0 + 2008U);
    t2 = *((char **)t1);
    t1 = (t0 + 6176U);
    t3 = (t0 + 2128U);
    t4 = *((char **)t3);
    t3 = (t0 + 6192U);
    t6 = ieee_p_3620187407_sub_1496620905533613331_3965413181(IEEE_P_3620187407, t9, t2, t1, t4, t3);
    t7 = (t0 + 2488U);
    t8 = *((char **)t7);
    t7 = (t8 + 0);
    t11 = (t9 + 12U);
    t10 = *((unsigned int *)t11);
    t12 = (1U * t10);
    memcpy(t7, t6, t12);
    xsi_set_current_line(72, ng0);
    t1 = (t0 + 2488U);
    t2 = *((char **)t1);
    t10 = (33 - 15);
    t12 = (t10 * 1U);
    t13 = (0 + t12);
    t1 = (t2 + t13);
    t4 = ((IEEE_P_2592010699) + 4000);
    t6 = (t14 + 0U);
    t7 = (t6 + 0U);
    *((int *)t7) = 15;
    t7 = (t6 + 4U);
    *((int *)t7) = 0;
    t7 = (t6 + 8U);
    *((int *)t7) = -1;
    t15 = (0 - 15);
    t16 = (t15 * -1);
    t16 = (t16 + 1);
    t7 = (t6 + 12U);
    *((unsigned int *)t7) = t16;
    t3 = xsi_base_array_concat(t3, t9, t4, (char)99, (unsigned char)2, (char)97, t1, t14, (char)101);
    t7 = (t0 + 2248U);
    t8 = *((char **)t7);
    t7 = (t8 + 0);
    t16 = (1U + 16U);
    memcpy(t7, t3, t16);
    xsi_set_current_line(73, ng0);
    t1 = (t0 + 2488U);
    t2 = *((char **)t1);
    t10 = (33 - 32);
    t12 = (t10 * 1U);
    t13 = (0 + t12);
    t1 = (t2 + t13);
    t3 = (t0 + 2368U);
    t4 = *((char **)t3);
    t3 = (t4 + 0);
    memcpy(t3, t1, 17U);
    xsi_set_current_line(74, ng0);
    t1 = (t0 + 6463);
    t3 = (t0 + 2248U);
    t4 = *((char **)t3);
    t6 = ((IEEE_P_2592010699) + 4000);
    t7 = (t17 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 0;
    t8 = (t7 + 4U);
    *((int *)t8) = 14;
    t8 = (t7 + 8U);
    *((int *)t8) = 1;
    t15 = (14 - 0);
    t10 = (t15 * 1);
    t10 = (t10 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t10;
    t8 = (t0 + 6208U);
    t3 = xsi_base_array_concat(t3, t14, t6, (char)97, t1, t17, (char)97, t4, t8, (char)101);
    t11 = (t0 + 2368U);
    t18 = *((char **)t11);
    t11 = (t0 + 6224U);
    t19 = ieee_p_3620187407_sub_1496620905533721142_3965413181(IEEE_P_3620187407, t9, t3, t14, t18, t11);
    t20 = (t0 + 1768U);
    t21 = *((char **)t20);
    t20 = (t21 + 0);
    t22 = (t9 + 12U);
    t10 = *((unsigned int *)t22);
    t12 = (1U * t10);
    memcpy(t20, t19, t12);
    xsi_set_current_line(75, ng0);
    t1 = (t0 + 2248U);
    t2 = *((char **)t1);
    t1 = (t0 + 6208U);
    t3 = (t0 + 2368U);
    t4 = *((char **)t3);
    t3 = (t0 + 6224U);
    t5 = ieee_p_3620187407_sub_1366267000076357978_3965413181(IEEE_P_3620187407, t2, t1, t4, t3);
    if (t5 != 0)
        goto LAB8;

LAB10:
LAB9:    xsi_set_current_line(78, ng0);
    t1 = (t0 + 1768U);
    t2 = *((char **)t1);
    t10 = (31 - 15);
    t12 = (t10 * 1U);
    t13 = (0 + t12);
    t1 = (t2 + t13);
    t3 = (t0 + 3864);
    t4 = (t3 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 16U);
    xsi_driver_first_trans_fast_port(t3);
    t1 = (t0 + 3784);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(61, ng0);
    t6 = (t0 + 1648U);
    t7 = *((char **)t6);
    t6 = (t0 + 2008U);
    t8 = *((char **)t6);
    t6 = (t8 + 0);
    memcpy(t6, t7, 17U);
    goto LAB3;

LAB5:    xsi_set_current_line(66, ng0);
    t6 = (t0 + 1648U);
    t7 = *((char **)t6);
    t6 = (t0 + 2128U);
    t8 = *((char **)t6);
    t6 = (t8 + 0);
    memcpy(t6, t7, 17U);
    goto LAB6;

LAB8:    xsi_set_current_line(76, ng0);
    t6 = (t0 + 1768U);
    t7 = *((char **)t6);
    t6 = (t0 + 6144U);
    t8 = (t0 + 1648U);
    t11 = *((char **)t8);
    t8 = (t0 + 6128U);
    t18 = ieee_p_3620187407_sub_1496620905533649268_3965413181(IEEE_P_3620187407, t14, t7, t6, t11, t8);
    t19 = ieee_p_3620187407_sub_2255506239096166994_3965413181(IEEE_P_3620187407, t9, t18, t14, 1);
    t20 = (t0 + 1768U);
    t21 = *((char **)t20);
    t20 = (t21 + 0);
    t22 = (t9 + 12U);
    t10 = *((unsigned int *)t22);
    t12 = (1U * t10);
    memcpy(t20, t19, t12);
    goto LAB9;

}


extern void work_a_3400501926_3212880686_init()
{
	static char *pe[] = {(void *)work_a_3400501926_3212880686_p_0};
	xsi_register_didat("work_a_3400501926_3212880686", "isim/tb_round_isim_beh.exe.sim/work/a_3400501926_3212880686.didat");
	xsi_register_executes(pe);
}
