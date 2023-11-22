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
static const char *ng0 = "/home/ise/my_shared_folder/Rep-EIT-VHDL-SDL/direct/addop.vhd";
extern char *IEEE_P_3620187407;
extern char *IEEE_P_2592010699;

char *ieee_p_3620187407_sub_1496620905533649268_3965413181(char *, char *, char *, char *, char *, char *);
char *ieee_p_3620187407_sub_17314940489608042223_3965413181(char *, char *, unsigned char , char *, char *);


static void work_a_2104193931_3212880686_p_0(char *t0)
{
    char t8[16];
    char t9[16];
    char t10[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
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

LAB0:    xsi_set_current_line(49, ng0);
    t1 = xsi_get_transient_memory(17U);
    memset(t1, 0, 17U);
    t2 = t1;
    memset(t2, (unsigned char)2, 17U);
    t3 = (t0 + 3064);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 17U);
    xsi_driver_first_trans_fast(t3);
    xsi_set_current_line(50, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t3 = ((IEEE_P_2592010699) + 4000);
    t4 = (t0 + 4824U);
    t1 = xsi_base_array_concat(t1, t9, t3, (char)99, (unsigned char)2, (char)97, t2, t4, (char)101);
    t5 = (t0 + 1192U);
    t6 = *((char **)t5);
    t5 = (t0 + 4840U);
    t7 = ieee_p_3620187407_sub_17314940489608042223_3965413181(IEEE_P_3620187407, t10, (unsigned char)2, t6, t5);
    t11 = ieee_p_3620187407_sub_1496620905533649268_3965413181(IEEE_P_3620187407, t8, t1, t9, t7, t10);
    t12 = (t8 + 12U);
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
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t13 = (16 - 15);
    t14 = (t13 * 1U);
    t21 = (0 + t14);
    t1 = (t2 + t21);
    t3 = (t0 + 3128);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 16U);
    xsi_driver_first_trans_fast_port(t3);
    t1 = (t0 + 2984);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_size_not_matching(17U, t14, 0);
    goto LAB3;

}


extern void work_a_2104193931_3212880686_init()
{
	static char *pe[] = {(void *)work_a_2104193931_3212880686_p_0};
	xsi_register_didat("work_a_2104193931_3212880686", "isim/tb_round_isim_beh.exe.sim/work/a_2104193931_3212880686.didat");
	xsi_register_executes(pe);
}
