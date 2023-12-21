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
static const char *ng0 = "/nas/lrz/home/ge74men/EIT-VHDL-SDL/assignments/rcs1/tb_idea_single.vhd";
extern char *STD_STANDARD;



static void work_a_1338029099_2372691052_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int64 t7;
    int64 t8;

LAB0:    t1 = (t0 + 4864U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(92, ng0);
    t2 = (t0 + 5744);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(93, ng0);
    t2 = (t0 + 3888U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 4672);
    xsi_process_wait(t2, t8);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(94, ng0);
    t2 = (t0 + 5744);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(95, ng0);
    t2 = (t0 + 3888U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 4672);
    xsi_process_wait(t2, t8);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    goto LAB2;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

}

static void work_a_1338029099_2372691052_p_1(char *t0)
{
    char t34[16];
    char t40[16];
    char t42[16];
    char *t1;
    char *t2;
    char *t3;
    int t4;
    int t5;
    unsigned char t6;
    char *t7;
    char *t8;
    unsigned char t9;
    unsigned char t10;
    char *t11;
    char *t12;
    unsigned char t13;
    unsigned int t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    int64 t19;
    unsigned char t20;
    unsigned int t21;
    char *t22;
    unsigned char t23;
    unsigned int t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    unsigned char t29;
    unsigned int t30;
    char *t31;
    char *t32;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t41;
    char *t43;
    char *t44;
    int t45;
    unsigned int t46;
    unsigned int t47;

LAB0:    t1 = (t0 + 5112U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(101, ng0);
    t2 = (t0 + 10145);
    *((int *)t2) = 1;
    t3 = (t0 + 10149);
    *((int *)t3) = 3;
    t4 = 1;
    t5 = 3;

LAB4:    if (t4 <= t5)
        goto LAB5;

LAB7:    xsi_set_current_line(114, ng0);

LAB64:    *((char **)t1) = &&LAB65;

LAB1:    return;
LAB5:    xsi_set_current_line(102, ng0);

LAB8:    t7 = (t0 + 3432U);
    t8 = *((char **)t7);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)2);
    if (t10 == 1)
        goto LAB12;

LAB13:    t7 = (t0 + 3272U);
    t11 = *((char **)t7);
    t7 = (t0 + 10153);
    t13 = 1;
    if (16U == 4U)
        goto LAB15;

LAB16:    t13 = 0;

LAB17:    t6 = t13;

LAB14:    if (t6 != 0)
        goto LAB9;

LAB11:    xsi_set_current_line(105, ng0);
    t2 = (t0 + 2152U);
    t3 = *((char **)t2);
    t2 = (t0 + 2312U);
    t7 = *((char **)t2);
    t13 = 1;
    if (16U == 16U)
        goto LAB37;

LAB38:    t13 = 0;

LAB39:    if (t13 == 1)
        goto LAB34;

LAB35:    t10 = (unsigned char)0;

LAB36:    if (t10 == 1)
        goto LAB31;

LAB32:    t9 = (unsigned char)0;

LAB33:    if (t9 == 1)
        goto LAB28;

LAB29:    t6 = (unsigned char)0;

LAB30:    if (t6 != 0)
        goto LAB25;

LAB27:    xsi_set_current_line(110, ng0);
    t2 = (t0 + 10166);
    t7 = ((STD_STANDARD) + 384);
    t8 = (t0 + 10145);
    t11 = xsi_int_to_mem(*((int *)t8));
    t12 = xsi_string_variable_get_image(t34, t7, t11);
    t16 = ((STD_STANDARD) + 984);
    t17 = (t42 + 0U);
    t18 = (t17 + 0U);
    *((int *)t18) = 1;
    t18 = (t17 + 4U);
    *((int *)t18) = 9;
    t18 = (t17 + 8U);
    *((int *)t18) = 1;
    t45 = (9 - 1);
    t14 = (t45 * 1);
    t14 = (t14 + 1);
    t18 = (t17 + 12U);
    *((unsigned int *)t18) = t14;
    t15 = xsi_base_array_concat(t15, t40, t16, (char)97, t2, t42, (char)97, t12, t34, (char)101);
    t18 = (t34 + 12U);
    t14 = *((unsigned int *)t18);
    t21 = (9U + t14);
    xsi_report(t15, t21, 0);

LAB26:
LAB6:    t2 = (t0 + 10145);
    t4 = *((int *)t2);
    t3 = (t0 + 10149);
    t5 = *((int *)t3);
    if (t4 == t5)
        goto LAB7;

LAB61:    t45 = (t4 + 1);
    t4 = t45;
    t7 = (t0 + 10145);
    *((int *)t7) = t4;
    goto LAB4;

LAB9:    xsi_set_current_line(103, ng0);
    t17 = (t0 + 3888U);
    t18 = *((char **)t17);
    t19 = *((int64 *)t18);
    t17 = (t0 + 4920);
    xsi_process_wait(t17, t19);

LAB23:    *((char **)t1) = &&LAB24;
    goto LAB1;

LAB10:;
LAB12:    t6 = (unsigned char)1;
    goto LAB14;

LAB15:    t14 = 0;

LAB18:    if (t14 < 16U)
        goto LAB19;
    else
        goto LAB17;

LAB19:    t15 = (t11 + t14);
    t16 = (t7 + t14);
    if (*((unsigned char *)t15) != *((unsigned char *)t16))
        goto LAB16;

LAB20:    t14 = (t14 + 1);
    goto LAB18;

LAB21:    goto LAB8;

LAB22:    goto LAB21;

LAB24:    goto LAB22;

LAB25:    xsi_set_current_line(108, ng0);
    t32 = (t0 + 10157);
    t35 = ((STD_STANDARD) + 384);
    t36 = (t0 + 10145);
    t37 = xsi_int_to_mem(*((int *)t36));
    t38 = xsi_string_variable_get_image(t34, t35, t37);
    t41 = ((STD_STANDARD) + 984);
    t43 = (t42 + 0U);
    t44 = (t43 + 0U);
    *((int *)t44) = 1;
    t44 = (t43 + 4U);
    *((int *)t44) = 9;
    t44 = (t43 + 8U);
    *((int *)t44) = 1;
    t45 = (9 - 1);
    t46 = (t45 * 1);
    t46 = (t46 + 1);
    t44 = (t43 + 12U);
    *((unsigned int *)t44) = t46;
    t39 = xsi_base_array_concat(t39, t40, t41, (char)97, t32, t42, (char)97, t38, t34, (char)101);
    t44 = (t34 + 12U);
    t46 = *((unsigned int *)t44);
    t47 = (9U + t46);
    xsi_report(t39, t47, 0);
    goto LAB26;

LAB28:    t26 = (t0 + 3112U);
    t27 = *((char **)t26);
    t26 = (t0 + 3272U);
    t28 = *((char **)t26);
    t29 = 1;
    if (16U == 16U)
        goto LAB55;

LAB56:    t29 = 0;

LAB57:    t6 = t29;
    goto LAB30;

LAB31:    t17 = (t0 + 2792U);
    t18 = *((char **)t17);
    t17 = (t0 + 2952U);
    t22 = *((char **)t17);
    t23 = 1;
    if (16U == 16U)
        goto LAB49;

LAB50:    t23 = 0;

LAB51:    t9 = t23;
    goto LAB33;

LAB34:    t11 = (t0 + 2472U);
    t12 = *((char **)t11);
    t11 = (t0 + 2632U);
    t15 = *((char **)t11);
    t20 = 1;
    if (16U == 16U)
        goto LAB43;

LAB44:    t20 = 0;

LAB45:    t10 = t20;
    goto LAB36;

LAB37:    t14 = 0;

LAB40:    if (t14 < 16U)
        goto LAB41;
    else
        goto LAB39;

LAB41:    t2 = (t3 + t14);
    t8 = (t7 + t14);
    if (*((unsigned char *)t2) != *((unsigned char *)t8))
        goto LAB38;

LAB42:    t14 = (t14 + 1);
    goto LAB40;

LAB43:    t21 = 0;

LAB46:    if (t21 < 16U)
        goto LAB47;
    else
        goto LAB45;

LAB47:    t11 = (t12 + t21);
    t16 = (t15 + t21);
    if (*((unsigned char *)t11) != *((unsigned char *)t16))
        goto LAB44;

LAB48:    t21 = (t21 + 1);
    goto LAB46;

LAB49:    t24 = 0;

LAB52:    if (t24 < 16U)
        goto LAB53;
    else
        goto LAB51;

LAB53:    t17 = (t18 + t24);
    t25 = (t22 + t24);
    if (*((unsigned char *)t17) != *((unsigned char *)t25))
        goto LAB50;

LAB54:    t24 = (t24 + 1);
    goto LAB52;

LAB55:    t30 = 0;

LAB58:    if (t30 < 16U)
        goto LAB59;
    else
        goto LAB57;

LAB59:    t26 = (t27 + t30);
    t31 = (t28 + t30);
    if (*((unsigned char *)t26) != *((unsigned char *)t31))
        goto LAB56;

LAB60:    t30 = (t30 + 1);
    goto LAB58;

LAB62:    goto LAB2;

LAB63:    goto LAB62;

LAB65:    goto LAB63;

}

static void work_a_1338029099_2372691052_p_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int64 t7;
    char *t8;
    char *t9;
    unsigned char t10;
    unsigned char t11;
    int64 t12;

LAB0:    t1 = (t0 + 5360U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(120, ng0);
    t2 = (t0 + 5808);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(121, ng0);
    t2 = (t0 + 3888U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t2 = (t0 + 5168);
    xsi_process_wait(t2, t7);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(124, ng0);
    t2 = (t0 + 10175);
    t4 = (t0 + 5872);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 128U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(125, ng0);
    t2 = (t0 + 10303);
    t4 = (t0 + 5936);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 16U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(126, ng0);
    t2 = (t0 + 10319);
    t4 = (t0 + 6000);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 16U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(127, ng0);
    t2 = (t0 + 10335);
    t4 = (t0 + 6064);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 16U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(128, ng0);
    t2 = (t0 + 10351);
    t4 = (t0 + 6128);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 16U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(129, ng0);
    t2 = (t0 + 10367);
    t4 = (t0 + 6192);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 16U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(130, ng0);
    t2 = (t0 + 10383);
    t4 = (t0 + 6256);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 16U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(131, ng0);
    t2 = (t0 + 10399);
    t4 = (t0 + 6320);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 16U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(132, ng0);
    t2 = (t0 + 10415);
    t4 = (t0 + 6384);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 16U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(134, ng0);
    t2 = (t0 + 5808);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(135, ng0);
    t2 = (t0 + 3888U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t2 = (t0 + 5168);
    xsi_process_wait(t2, t7);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    xsi_set_current_line(136, ng0);
    t2 = (t0 + 5808);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(137, ng0);

LAB12:    t2 = (t0 + 3432U);
    t3 = *((char **)t2);
    t10 = *((unsigned char *)t3);
    t11 = (t10 == (unsigned char)2);
    if (t11 != 0)
        goto LAB13;

LAB15:    xsi_set_current_line(148, ng0);
    t2 = (t0 + 10431);
    t4 = (t0 + 5872);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 128U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(149, ng0);
    t2 = (t0 + 10559);
    t4 = (t0 + 5936);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 16U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(150, ng0);
    t2 = (t0 + 10575);
    t4 = (t0 + 6000);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 16U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(151, ng0);
    t2 = (t0 + 10591);
    t4 = (t0 + 6064);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 16U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(152, ng0);
    t2 = (t0 + 10607);
    t4 = (t0 + 6128);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 16U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(153, ng0);
    t2 = (t0 + 10623);
    t4 = (t0 + 6192);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 16U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(154, ng0);
    t2 = (t0 + 10639);
    t4 = (t0 + 6256);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 16U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(155, ng0);
    t2 = (t0 + 10655);
    t4 = (t0 + 6320);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 16U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(156, ng0);
    t2 = (t0 + 10671);
    t4 = (t0 + 6384);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 16U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(157, ng0);
    t2 = (t0 + 5808);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(158, ng0);
    t2 = (t0 + 3888U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t2 = (t0 + 5168);
    xsi_process_wait(t2, t7);

LAB22:    *((char **)t1) = &&LAB23;
    goto LAB1;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

LAB13:    xsi_set_current_line(138, ng0);
    t2 = (t0 + 3888U);
    t4 = *((char **)t2);
    t7 = *((int64 *)t4);
    t2 = (t0 + 5168);
    xsi_process_wait(t2, t7);

LAB18:    *((char **)t1) = &&LAB19;
    goto LAB1;

LAB14:;
LAB16:    goto LAB12;

LAB17:    goto LAB16;

LAB19:    goto LAB17;

LAB20:    xsi_set_current_line(159, ng0);
    t2 = (t0 + 5808);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(160, ng0);

LAB24:    t2 = (t0 + 3432U);
    t3 = *((char **)t2);
    t10 = *((unsigned char *)t3);
    t11 = (t10 == (unsigned char)2);
    if (t11 != 0)
        goto LAB25;

LAB27:    xsi_set_current_line(171, ng0);
    t2 = (t0 + 10687);
    t4 = (t0 + 5872);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 128U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(172, ng0);
    t2 = (t0 + 10815);
    t4 = (t0 + 5936);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 16U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(173, ng0);
    t2 = (t0 + 10831);
    t4 = (t0 + 6000);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 16U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(174, ng0);
    t2 = (t0 + 10847);
    t4 = (t0 + 6064);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 16U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(175, ng0);
    t2 = (t0 + 10863);
    t4 = (t0 + 6128);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 16U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(176, ng0);
    t2 = (t0 + 10879);
    t4 = (t0 + 6192);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 16U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(177, ng0);
    t2 = (t0 + 10895);
    t4 = (t0 + 6256);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 16U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(178, ng0);
    t2 = (t0 + 10911);
    t4 = (t0 + 6320);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 16U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(179, ng0);
    t2 = (t0 + 10927);
    t4 = (t0 + 6384);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 16U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(181, ng0);
    t2 = (t0 + 5808);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(182, ng0);
    t2 = (t0 + 3888U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t12 = (t7 * 2);
    t2 = (t0 + 5168);
    xsi_process_wait(t2, t12);

LAB34:    *((char **)t1) = &&LAB35;
    goto LAB1;

LAB21:    goto LAB20;

LAB23:    goto LAB21;

LAB25:    xsi_set_current_line(161, ng0);
    t2 = (t0 + 3888U);
    t4 = *((char **)t2);
    t7 = *((int64 *)t4);
    t2 = (t0 + 5168);
    xsi_process_wait(t2, t7);

LAB30:    *((char **)t1) = &&LAB31;
    goto LAB1;

LAB26:;
LAB28:    goto LAB24;

LAB29:    goto LAB28;

LAB31:    goto LAB29;

LAB32:    xsi_set_current_line(183, ng0);
    t2 = (t0 + 5808);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(184, ng0);

LAB36:    t2 = (t0 + 3432U);
    t3 = *((char **)t2);
    t10 = *((unsigned char *)t3);
    t11 = (t10 == (unsigned char)2);
    if (t11 != 0)
        goto LAB37;

LAB39:    xsi_set_current_line(194, ng0);

LAB46:    *((char **)t1) = &&LAB47;
    goto LAB1;

LAB33:    goto LAB32;

LAB35:    goto LAB33;

LAB37:    xsi_set_current_line(185, ng0);
    t2 = (t0 + 3888U);
    t4 = *((char **)t2);
    t7 = *((int64 *)t4);
    t2 = (t0 + 5168);
    xsi_process_wait(t2, t7);

LAB42:    *((char **)t1) = &&LAB43;
    goto LAB1;

LAB38:;
LAB40:    goto LAB36;

LAB41:    goto LAB40;

LAB43:    goto LAB41;

LAB44:    goto LAB2;

LAB45:    goto LAB44;

LAB47:    goto LAB45;

}


extern void work_a_1338029099_2372691052_init()
{
	static char *pe[] = {(void *)work_a_1338029099_2372691052_p_0,(void *)work_a_1338029099_2372691052_p_1,(void *)work_a_1338029099_2372691052_p_2};
	xsi_register_didat("work_a_1338029099_2372691052", "isim/tb_idea_single_isim_beh.exe.sim/work/a_1338029099_2372691052.didat");
	xsi_register_executes(pe);
}
