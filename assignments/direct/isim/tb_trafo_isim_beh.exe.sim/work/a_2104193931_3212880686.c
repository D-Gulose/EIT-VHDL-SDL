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
static const char *ng0 = "/home/ise/my_shared_folder/Rep-EIT-VHDL-SDL/assignments/direct/addop.vhd";
extern char *IEEE_P_3620187407;
extern char *IEEE_P_2592010699;

char *ieee_p_3620187407_sub_1496620905533649268_3965413181(char *, char *, char *, char *, char *, char *);
char *ieee_p_3620187407_sub_17314940489608042223_3965413181(char *, char *, unsigned char , char *, char *);


static void work_a_2104193931_3212880686_p_0(char *t0)
{
    char t1[16];
    char t4[16];
    char t7[16];
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned char t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    unsigned int t21;

LAB0:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 1032U);
    t3 = *((char **)t2);
    t5 = ((IEEE_P_2592010699) + 4000);
    t6 = (t0 + 4912U);
    t2 = xsi_base_array_concat(t2, t4, t5, (char)99, (unsigned char)2, (char)97, t3, t6, (char)101);
    t8 = (t0 + 1192U);
    t9 = *((char **)t8);
    t8 = (t0 + 4928U);
    t10 = ieee_p_3620187407_sub_17314940489608042223_3965413181(IEEE_P_3620187407, t7, (unsigned char)2, t9, t8);
    t11 = ieee_p_3620187407_sub_1496620905533649268_3965413181(IEEE_P_3620187407, t1, t2, t4, t10, t7);
    t12 = (t1 + 12U);
    t13 = *((unsigned int *)t12);
    t14 = (1U * t13);
    t15 = (17U != t14);
    if (t15 == 1)
        goto LAB2;

LAB3:    t16 = (t0 + 3064);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    memcpy(t20, t11, 17U);
    xsi_driver_first_trans_fast(t16);
    xsi_set_current_line(51, ng0);
    t2 = (t0 + 1512U);
    t3 = *((char **)t2);
    t13 = (16 - 15);
    t14 = (t13 * 1U);
    t21 = (0 + t14);
    t2 = (t3 + t21);
    t5 = (t0 + 3128);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 16U);
    xsi_driver_first_trans_fast_port(t5);
    t2 = (t0 + 2984);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_size_not_matching(17U, t14, 0);
    goto LAB3;

}


extern void work_a_2104193931_3212880686_init()
{
	static char *pe[] = {(void *)work_a_2104193931_3212880686_p_0};
	xsi_register_didat("work_a_2104193931_3212880686", "isim/tb_trafo_isim_beh.exe.sim/work/a_2104193931_3212880686.didat");
	xsi_register_executes(pe);
}
