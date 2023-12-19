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
static const char *ng0 = "/nas/lrz/home/ge74men/EIT-VHDL-SDL/assignments/rcs1/keygen.vhd";
extern char *STD_STANDARD;
extern char *IEEE_P_2592010699;



static void work_a_2331319070_3212880686_p_0(char *t0)
{
    char t31[16];
    char t32[16];
    char t33[16];
    char *t1;
    char *t2;
    char *t3;
    int t4;
    char *t5;
    char *t6;
    int t7;
    char *t8;
    char *t9;
    int t10;
    char *t11;
    char *t12;
    int t13;
    char *t14;
    char *t15;
    int t16;
    char *t17;
    char *t18;
    int t19;
    char *t20;
    int t22;
    char *t23;
    int t25;
    char *t26;
    int t28;
    char *t29;
    char *t30;
    unsigned int t34;
    unsigned int t35;
    unsigned char t36;
    unsigned char t37;
    unsigned char t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    int t44;
    int t45;
    int t46;
    int t47;
    int t48;
    int t49;
    int t50;
    int t51;
    int t52;
    int t53;
    int t54;
    int t55;
    int t56;
    int t57;
    int t58;
    int t59;
    int t60;
    int t61;
    int t62;
    int t63;
    unsigned int t64;

LAB0:    xsi_set_current_line(54, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t1 = (t0 + 8688);
    t4 = xsi_mem_cmp(t1, t2, 4U);
    if (t4 == 1)
        goto LAB3;

LAB13:    t5 = (t0 + 8692);
    t7 = xsi_mem_cmp(t5, t2, 4U);
    if (t7 == 1)
        goto LAB4;

LAB14:    t8 = (t0 + 8696);
    t10 = xsi_mem_cmp(t8, t2, 4U);
    if (t10 == 1)
        goto LAB5;

LAB15:    t11 = (t0 + 8700);
    t13 = xsi_mem_cmp(t11, t2, 4U);
    if (t13 == 1)
        goto LAB6;

LAB16:    t14 = (t0 + 8704);
    t16 = xsi_mem_cmp(t14, t2, 4U);
    if (t16 == 1)
        goto LAB7;

LAB17:    t17 = (t0 + 8708);
    t19 = xsi_mem_cmp(t17, t2, 4U);
    if (t19 == 1)
        goto LAB8;

LAB18:    t20 = (t0 + 8712);
    t22 = xsi_mem_cmp(t20, t2, 4U);
    if (t22 == 1)
        goto LAB9;

LAB19:    t23 = (t0 + 8716);
    t25 = xsi_mem_cmp(t23, t2, 4U);
    if (t25 == 1)
        goto LAB10;

LAB20:    t26 = (t0 + 8720);
    t28 = xsi_mem_cmp(t26, t2, 4U);
    if (t28 == 1)
        goto LAB11;

LAB21:
LAB12:    xsi_set_current_line(74, ng0);
    t1 = (t0 + 8724);
    xsi_report(t1, 10U, 0);

LAB2:    xsi_set_current_line(77, ng0);
    t1 = (t0 + 8734);
    xsi_report(t1, 19U, 0);
    xsi_set_current_line(78, ng0);
    t1 = (t0 + 8753);
    t3 = ((STD_STANDARD) + 384);
    t5 = (t0 + 2728U);
    t6 = *((char **)t5);
    t4 = *((int *)t6);
    t5 = xsi_int_to_mem(t4);
    t8 = xsi_string_variable_get_image(t31, t3, t5);
    t11 = ((STD_STANDARD) + 984);
    t12 = (t33 + 0U);
    t14 = (t12 + 0U);
    *((int *)t14) = 1;
    t14 = (t12 + 4U);
    *((int *)t14) = 14;
    t14 = (t12 + 8U);
    *((int *)t14) = 1;
    t7 = (14 - 1);
    t34 = (t7 * 1);
    t34 = (t34 + 1);
    t14 = (t12 + 12U);
    *((unsigned int *)t14) = t34;
    t9 = xsi_base_array_concat(t9, t32, t11, (char)97, t1, t33, (char)97, t8, t31, (char)101);
    t14 = (t31 + 12U);
    t34 = *((unsigned int *)t14);
    t35 = (14U + t34);
    xsi_report(t9, t35, 0);
    xsi_set_current_line(79, ng0);
    t1 = (t0 + 8767);
    t3 = ((STD_STANDARD) + 384);
    t5 = (t0 + 2848U);
    t6 = *((char **)t5);
    t4 = *((int *)t6);
    t5 = xsi_int_to_mem(t4);
    t8 = xsi_string_variable_get_image(t31, t3, t5);
    t11 = ((STD_STANDARD) + 984);
    t12 = (t33 + 0U);
    t14 = (t12 + 0U);
    *((int *)t14) = 1;
    t14 = (t12 + 4U);
    *((int *)t14) = 15;
    t14 = (t12 + 8U);
    *((int *)t14) = 1;
    t7 = (15 - 1);
    t34 = (t7 * 1);
    t34 = (t34 + 1);
    t14 = (t12 + 12U);
    *((unsigned int *)t14) = t34;
    t9 = xsi_base_array_concat(t9, t32, t11, (char)97, t1, t33, (char)97, t8, t31, (char)101);
    t14 = (t31 + 12U);
    t34 = *((unsigned int *)t14);
    t35 = (15U + t34);
    xsi_report(t9, t35, 0);
    xsi_set_current_line(81, ng0);
    t1 = (t0 + 3208U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((int *)t1) = 6;
    xsi_set_current_line(82, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 2968U);
    t3 = *((char **)t1);
    t1 = (t3 + 0);
    memcpy(t1, t2, 128U);
    xsi_set_current_line(84, ng0);
    t1 = (t0 + 8782);
    *((int *)t1) = 0;
    t2 = (t0 + 8786);
    *((int *)t2) = 6;
    t4 = 0;
    t7 = 6;

LAB23:    if (t4 <= t7)
        goto LAB24;

LAB26:    xsi_set_current_line(132, ng0);
    t1 = (t0 + 3088U);
    t2 = *((char **)t1);
    t34 = (95 - 15);
    t35 = (t34 * 1U);
    t39 = (0 + t35);
    t1 = (t2 + t39);
    t3 = (t0 + 4824);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 16U);
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(133, ng0);
    t1 = (t0 + 3088U);
    t2 = *((char **)t1);
    t34 = (95 - 31);
    t35 = (t34 * 1U);
    t39 = (0 + t35);
    t1 = (t2 + t39);
    t3 = (t0 + 4888);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 16U);
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(134, ng0);
    t1 = (t0 + 3088U);
    t2 = *((char **)t1);
    t34 = (95 - 47);
    t35 = (t34 * 1U);
    t39 = (0 + t35);
    t1 = (t2 + t39);
    t3 = (t0 + 4952);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 16U);
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(135, ng0);
    t1 = (t0 + 3088U);
    t2 = *((char **)t1);
    t34 = (95 - 63);
    t35 = (t34 * 1U);
    t39 = (0 + t35);
    t1 = (t2 + t39);
    t3 = (t0 + 5016);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 16U);
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(136, ng0);
    t1 = (t0 + 3088U);
    t2 = *((char **)t1);
    t34 = (95 - 79);
    t35 = (t34 * 1U);
    t39 = (0 + t35);
    t1 = (t2 + t39);
    t3 = (t0 + 5080);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 16U);
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(137, ng0);
    t1 = (t0 + 3088U);
    t2 = *((char **)t1);
    t34 = (95 - 95);
    t35 = (t34 * 1U);
    t39 = (0 + t35);
    t1 = (t2 + t39);
    t3 = (t0 + 5144);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 16U);
    xsi_driver_first_trans_fast_port(t3);
    t1 = (t0 + 4744);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(56, ng0);
    t29 = (t0 + 2728U);
    t30 = *((char **)t29);
    t29 = (t30 + 0);
    *((int *)t29) = 0;
    xsi_set_current_line(56, ng0);
    t1 = (t0 + 2848U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((int *)t1) = 1;
    goto LAB2;

LAB4:    xsi_set_current_line(58, ng0);
    t1 = (t0 + 2728U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((int *)t1) = 0;
    xsi_set_current_line(58, ng0);
    t1 = (t0 + 2848U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((int *)t1) = 7;
    goto LAB2;

LAB5:    xsi_set_current_line(60, ng0);
    t1 = (t0 + 2728U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((int *)t1) = 1;
    xsi_set_current_line(60, ng0);
    t1 = (t0 + 2848U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((int *)t1) = 5;
    goto LAB2;

LAB6:    xsi_set_current_line(62, ng0);
    t1 = (t0 + 2728U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((int *)t1) = 2;
    xsi_set_current_line(62, ng0);
    t1 = (t0 + 2848U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((int *)t1) = 3;
    goto LAB2;

LAB7:    xsi_set_current_line(64, ng0);
    t1 = (t0 + 2728U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((int *)t1) = 3;
    xsi_set_current_line(64, ng0);
    t1 = (t0 + 2848U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((int *)t1) = 1;
    goto LAB2;

LAB8:    xsi_set_current_line(66, ng0);
    t1 = (t0 + 2728U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((int *)t1) = 3;
    xsi_set_current_line(66, ng0);
    t1 = (t0 + 2848U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((int *)t1) = 7;
    goto LAB2;

LAB9:    xsi_set_current_line(68, ng0);
    t1 = (t0 + 2728U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((int *)t1) = 4;
    xsi_set_current_line(68, ng0);
    t1 = (t0 + 2848U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((int *)t1) = 5;
    goto LAB2;

LAB10:    xsi_set_current_line(70, ng0);
    t1 = (t0 + 2728U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((int *)t1) = 5;
    xsi_set_current_line(70, ng0);
    t1 = (t0 + 2848U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((int *)t1) = 3;
    goto LAB2;

LAB11:    xsi_set_current_line(72, ng0);
    t1 = (t0 + 2728U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((int *)t1) = 6;
    xsi_set_current_line(72, ng0);
    t1 = (t0 + 2848U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((int *)t1) = 1;
    goto LAB2;

LAB22:;
LAB24:    xsi_set_current_line(85, ng0);
    t3 = (t0 + 8790);
    t6 = ((STD_STANDARD) + 384);
    t8 = (t0 + 8782);
    t9 = xsi_int_to_mem(*((int *)t8));
    t11 = xsi_string_variable_get_image(t31, t6, t9);
    t14 = ((STD_STANDARD) + 984);
    t15 = (t33 + 0U);
    t17 = (t15 + 0U);
    *((int *)t17) = 1;
    t17 = (t15 + 4U);
    *((int *)t17) = 19;
    t17 = (t15 + 8U);
    *((int *)t17) = 1;
    t10 = (19 - 1);
    t34 = (t10 * 1);
    t34 = (t34 + 1);
    t17 = (t15 + 12U);
    *((unsigned int *)t17) = t34;
    t12 = xsi_base_array_concat(t12, t32, t14, (char)97, t3, t33, (char)97, t11, t31, (char)101);
    t17 = (t31 + 12U);
    t34 = *((unsigned int *)t17);
    t35 = (19U + t34);
    xsi_report(t12, t35, 0);
    xsi_set_current_line(90, ng0);
    t1 = (t0 + 8782);
    t2 = (t0 + 2728U);
    t3 = *((char **)t2);
    t10 = *((int *)t3);
    t13 = *((int *)t1);
    t36 = (t13 == t10);
    if (t36 != 0)
        goto LAB27;

LAB29:    t1 = (t0 + 8782);
    t2 = (t0 + 2728U);
    t3 = *((char **)t2);
    t10 = *((int *)t3);
    t13 = (t10 + 1);
    t16 = *((int *)t1);
    t37 = (t16 == t13);
    if (t37 == 1)
        goto LAB32;

LAB33:    t36 = (unsigned char)0;

LAB34:    if (t36 != 0)
        goto LAB30;

LAB31:    xsi_set_current_line(106, ng0);
    t1 = (t0 + 8817);
    xsi_report(t1, 4U, 0);
    xsi_set_current_line(107, ng0);
    t1 = (t0 + 2968U);
    t2 = *((char **)t1);
    t34 = (127 - 102);
    t35 = (t34 * 1U);
    t39 = (0 + t35);
    t1 = (t2 + t39);
    t3 = (t0 + 2968U);
    t5 = *((char **)t3);
    t40 = (127 - 127);
    t41 = (t40 * 1U);
    t42 = (0 + t41);
    t3 = (t5 + t42);
    t8 = ((IEEE_P_2592010699) + 4000);
    t9 = (t32 + 0U);
    t11 = (t9 + 0U);
    *((int *)t11) = 102;
    t11 = (t9 + 4U);
    *((int *)t11) = 0;
    t11 = (t9 + 8U);
    *((int *)t11) = -1;
    t10 = (0 - 102);
    t43 = (t10 * -1);
    t43 = (t43 + 1);
    t11 = (t9 + 12U);
    *((unsigned int *)t11) = t43;
    t11 = (t33 + 0U);
    t12 = (t11 + 0U);
    *((int *)t12) = 127;
    t12 = (t11 + 4U);
    *((int *)t12) = 103;
    t12 = (t11 + 8U);
    *((int *)t12) = -1;
    t13 = (103 - 127);
    t43 = (t13 * -1);
    t43 = (t43 + 1);
    t12 = (t11 + 12U);
    *((unsigned int *)t12) = t43;
    t6 = xsi_base_array_concat(t6, t31, t8, (char)97, t1, t32, (char)97, t3, t33, (char)101);
    t12 = (t0 + 2968U);
    t14 = *((char **)t12);
    t12 = (t14 + 0);
    t43 = (103U + 25U);
    memcpy(t12, t6, t43);
    xsi_set_current_line(108, ng0);

LAB25:    t1 = (t0 + 8782);
    t4 = *((int *)t1);
    t2 = (t0 + 8786);
    t7 = *((int *)t2);
    if (t4 == t7)
        goto LAB26;

LAB45:    t10 = (t4 + 1);
    t4 = t10;
    t3 = (t0 + 8782);
    *((int *)t3) = t4;
    goto LAB23;

LAB27:    xsi_set_current_line(91, ng0);
    t2 = (t0 + 8809);
    xsi_report(t2, 4U, 0);
    xsi_set_current_line(92, ng0);
    t1 = (t0 + 2848U);
    t2 = *((char **)t1);
    t10 = *((int *)t2);
    t1 = (t0 + 3328U);
    t3 = *((char **)t1);
    t1 = (t3 + 0);
    *((int *)t1) = t10;
    xsi_set_current_line(93, ng0);
    t1 = (t0 + 3448U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((int *)t1) = 8;

LAB28:    xsi_set_current_line(112, ng0);
    t1 = (t0 + 3448U);
    t2 = *((char **)t1);
    t10 = *((int *)t2);
    t1 = (t0 + 3328U);
    t3 = *((char **)t1);
    t13 = *((int *)t3);
    t1 = (t0 + 8836);
    *((int *)t1) = t13;
    t5 = (t0 + 8840);
    *((int *)t5) = t10;
    t16 = t13;
    t19 = t10;

LAB36:    if (t16 <= t19)
        goto LAB37;

LAB39:    xsi_set_current_line(128, ng0);
    t1 = (t0 + 2968U);
    t2 = *((char **)t1);
    t34 = (127 - 102);
    t35 = (t34 * 1U);
    t39 = (0 + t35);
    t1 = (t2 + t39);
    t3 = (t0 + 2968U);
    t5 = *((char **)t3);
    t40 = (127 - 127);
    t41 = (t40 * 1U);
    t42 = (0 + t41);
    t3 = (t5 + t42);
    t8 = ((IEEE_P_2592010699) + 4000);
    t9 = (t32 + 0U);
    t11 = (t9 + 0U);
    *((int *)t11) = 102;
    t11 = (t9 + 4U);
    *((int *)t11) = 0;
    t11 = (t9 + 8U);
    *((int *)t11) = -1;
    t10 = (0 - 102);
    t43 = (t10 * -1);
    t43 = (t43 + 1);
    t11 = (t9 + 12U);
    *((unsigned int *)t11) = t43;
    t11 = (t33 + 0U);
    t12 = (t11 + 0U);
    *((int *)t12) = 127;
    t12 = (t11 + 4U);
    *((int *)t12) = 103;
    t12 = (t11 + 8U);
    *((int *)t12) = -1;
    t13 = (103 - 127);
    t43 = (t13 * -1);
    t43 = (t43 + 1);
    t12 = (t11 + 12U);
    *((unsigned int *)t12) = t43;
    t6 = xsi_base_array_concat(t6, t31, t8, (char)97, t1, t32, (char)97, t3, t33, (char)101);
    t12 = (t0 + 2968U);
    t14 = *((char **)t12);
    t12 = (t14 + 0);
    t43 = (103U + 25U);
    memcpy(t12, t6, t43);
    goto LAB25;

LAB30:    xsi_set_current_line(95, ng0);
    t2 = (t0 + 8813);
    xsi_report(t2, 4U, 0);
    xsi_set_current_line(96, ng0);
    t1 = (t0 + 3328U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((int *)t1) = 1;
    xsi_set_current_line(97, ng0);
    t1 = (t0 + 3208U);
    t2 = *((char **)t1);
    t10 = *((int *)t2);
    t1 = (t0 + 3448U);
    t3 = *((char **)t1);
    t1 = (t3 + 0);
    *((int *)t1) = t10;
    goto LAB28;

LAB32:    t2 = (t0 + 3208U);
    t5 = *((char **)t2);
    t19 = *((int *)t5);
    t38 = (t19 > 0);
    t36 = t38;
    goto LAB34;

LAB35:    xsi_set_current_line(109, ng0);
    t1 = (t0 + 8821);
    xsi_report(t1, 15U, 0);
    goto LAB28;

LAB37:    xsi_set_current_line(120, ng0);
    t6 = (t0 + 2968U);
    t8 = *((char **)t6);
    t6 = (t0 + 8836);
    t22 = *((int *)t6);
    t25 = (t22 - 1);
    t28 = (16 * t25);
    t44 = (127 - t28);
    t34 = (127 - t44);
    t9 = (t0 + 8836);
    t45 = *((int *)t9);
    t46 = (16 * t45);
    t47 = (127 - t46);
    t48 = (t47 + 1);
    xsi_vhdl_check_range_of_slice(127, 0, -1, t44, t48, -1);
    t35 = (t34 * 1U);
    t39 = (0 + t35);
    t11 = (t8 + t39);
    t12 = (t0 + 3088U);
    t14 = *((char **)t12);
    t12 = (t0 + 3208U);
    t15 = *((char **)t12);
    t49 = *((int *)t15);
    t50 = (t49 * 16);
    t51 = (t50 - 1);
    t40 = (95 - t51);
    t12 = (t0 + 3208U);
    t17 = *((char **)t12);
    t52 = *((int *)t17);
    t53 = (t52 - 1);
    t54 = (16 * t53);
    xsi_vhdl_check_range_of_slice(95, 0, -1, t51, t54, -1);
    t41 = (t40 * 1U);
    t42 = (0 + t41);
    t12 = (t14 + t42);
    t18 = (t0 + 8836);
    t55 = *((int *)t18);
    t56 = (t55 - 1);
    t57 = (16 * t56);
    t58 = (127 - t57);
    t20 = (t0 + 8836);
    t59 = *((int *)t20);
    t60 = (16 * t59);
    t61 = (127 - t60);
    t62 = (t61 + 1);
    t63 = (t62 - t58);
    t43 = (t63 * -1);
    t43 = (t43 + 1);
    t64 = (1U * t43);
    memcpy(t12, t11, t64);
    xsi_set_current_line(122, ng0);
    t1 = (t0 + 3208U);
    t2 = *((char **)t1);
    t10 = *((int *)t2);
    t13 = (t10 - 1);
    t1 = (t0 + 3208U);
    t3 = *((char **)t1);
    t1 = (t3 + 0);
    *((int *)t1) = t13;
    xsi_set_current_line(123, ng0);
    t1 = (t0 + 8844);
    t3 = ((STD_STANDARD) + 384);
    t5 = (t0 + 3208U);
    t6 = *((char **)t5);
    t10 = *((int *)t6);
    t5 = xsi_int_to_mem(t10);
    t8 = xsi_string_variable_get_image(t31, t3, t5);
    t11 = ((STD_STANDARD) + 984);
    t12 = (t33 + 0U);
    t14 = (t12 + 0U);
    *((int *)t14) = 1;
    t14 = (t12 + 4U);
    *((int *)t14) = 9;
    t14 = (t12 + 8U);
    *((int *)t14) = 1;
    t13 = (9 - 1);
    t34 = (t13 * 1);
    t34 = (t34 + 1);
    t14 = (t12 + 12U);
    *((unsigned int *)t14) = t34;
    t9 = xsi_base_array_concat(t9, t32, t11, (char)97, t1, t33, (char)97, t8, t31, (char)101);
    t14 = (t31 + 12U);
    t34 = *((unsigned int *)t14);
    t35 = (9U + t34);
    xsi_report(t9, t35, 0);
    xsi_set_current_line(124, ng0);
    t1 = (t0 + 3208U);
    t2 = *((char **)t1);
    t10 = *((int *)t2);
    t36 = (t10 < 1);
    if (t36 != 0)
        goto LAB40;

LAB42:
LAB41:
LAB38:    t1 = (t0 + 8836);
    t16 = *((int *)t1);
    t2 = (t0 + 8840);
    t19 = *((int *)t2);
    if (t16 == t19)
        goto LAB39;

LAB44:    t10 = (t16 + 1);
    t16 = t10;
    t3 = (t0 + 8836);
    *((int *)t3) = t16;
    goto LAB36;

LAB40:    xsi_set_current_line(125, ng0);
    goto LAB26;

LAB43:    goto LAB41;

}


extern void work_a_2331319070_3212880686_init()
{
	static char *pe[] = {(void *)work_a_2331319070_3212880686_p_0};
	xsi_register_didat("work_a_2331319070_3212880686", "isim/tb_keygen_isim_beh.exe.sim/work/a_2331319070_3212880686.didat");
	xsi_register_executes(pe);
}
