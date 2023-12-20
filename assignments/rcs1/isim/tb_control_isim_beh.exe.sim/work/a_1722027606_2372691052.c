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
static const char *ng0 = "/home/ise/my_shared_folder/EIT-VHDL-SDL/assignments/rcs1/tb_control.vhd";



static void work_a_1722027606_2372691052_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int64 t7;
    int64 t8;

LAB0:    t1 = (t0 + 3264U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(104, ng0);
    t2 = (t0 + 3896);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(106, ng0);
    t2 = (t0 + 2288U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 3072);
    xsi_process_wait(t2, t8);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(107, ng0);
    t2 = (t0 + 3896);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(109, ng0);
    t2 = (t0 + 2288U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 3072);
    xsi_process_wait(t2, t8);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    goto LAB2;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

}

static void work_a_1722027606_2372691052_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int64 t4;
    int64 t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned char t9;
    unsigned char t10;
    unsigned char t11;
    unsigned char t12;
    unsigned char t13;
    unsigned int t14;
    char *t15;
    char *t16;
    unsigned char t17;
    unsigned char t18;
    char *t19;
    unsigned char t20;
    unsigned char t21;
    char *t22;
    unsigned char t23;
    unsigned char t24;
    char *t25;
    unsigned char t26;
    unsigned char t27;

LAB0:    t1 = (t0 + 3512U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(117, ng0);
    t2 = (t0 + 2288U);
    t3 = *((char **)t2);
    t4 = *((int64 *)t3);
    t5 = (t4 / 2);
    t2 = (t0 + 3320);
    xsi_process_wait(t2, t5);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(120, ng0);
    t2 = (t0 + 3960);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(121, ng0);
    t2 = (t0 + 2288U);
    t3 = *((char **)t2);
    t4 = *((int64 *)t3);
    t2 = (t0 + 3320);
    xsi_process_wait(t2, t4);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    xsi_set_current_line(122, ng0);
    t2 = (t0 + 1832U);
    t3 = *((char **)t2);
    t2 = (t0 + 6688);
    t13 = 1;
    if (4U == 4U)
        goto LAB27;

LAB28:    t13 = 0;

LAB29:    if (t13 == 1)
        goto LAB24;

LAB25:    t12 = (unsigned char)0;

LAB26:    if (t12 == 1)
        goto LAB21;

LAB22:    t11 = (unsigned char)0;

LAB23:    if (t11 == 1)
        goto LAB18;

LAB19:    t10 = (unsigned char)0;

LAB20:    if (t10 == 1)
        goto LAB15;

LAB16:    t9 = (unsigned char)0;

LAB17:    if (t9 != 0)
        goto LAB12;

LAB14:    xsi_set_current_line(131, ng0);
    t2 = (t0 + 4024);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(132, ng0);
    t2 = (t0 + 6700);
    xsi_report(t2, 8U, 0);

LAB13:    xsi_set_current_line(136, ng0);
    t2 = (t0 + 3960);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(137, ng0);
    t2 = (t0 + 2288U);
    t3 = *((char **)t2);
    t4 = *((int64 *)t3);
    t2 = (t0 + 3320);
    xsi_process_wait(t2, t4);

LAB35:    *((char **)t1) = &&LAB36;
    goto LAB1;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

LAB12:    xsi_set_current_line(128, ng0);
    t15 = (t0 + 6692);
    xsi_report(t15, 8U, 0);
    xsi_set_current_line(129, ng0);
    t2 = (t0 + 4024);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    goto LAB13;

LAB15:    t15 = (t0 + 1672U);
    t25 = *((char **)t15);
    t26 = *((unsigned char *)t25);
    t27 = (t26 == (unsigned char)2);
    t9 = t27;
    goto LAB17;

LAB18:    t15 = (t0 + 1512U);
    t22 = *((char **)t15);
    t23 = *((unsigned char *)t22);
    t24 = (t23 == (unsigned char)3);
    t10 = t24;
    goto LAB20;

LAB21:    t15 = (t0 + 1352U);
    t19 = *((char **)t15);
    t20 = *((unsigned char *)t19);
    t21 = (t20 == (unsigned char)3);
    t11 = t21;
    goto LAB23;

LAB24:    t15 = (t0 + 1192U);
    t16 = *((char **)t15);
    t17 = *((unsigned char *)t16);
    t18 = (t17 == (unsigned char)2);
    t12 = t18;
    goto LAB26;

LAB27:    t14 = 0;

LAB30:    if (t14 < 4U)
        goto LAB31;
    else
        goto LAB29;

LAB31:    t7 = (t3 + t14);
    t8 = (t2 + t14);
    if (*((unsigned char *)t7) != *((unsigned char *)t8))
        goto LAB28;

LAB32:    t14 = (t14 + 1);
    goto LAB30;

LAB33:    xsi_set_current_line(138, ng0);
    t2 = (t0 + 1832U);
    t3 = *((char **)t2);
    t2 = (t0 + 6708);
    t13 = 1;
    if (4U == 4U)
        goto LAB52;

LAB53:    t13 = 0;

LAB54:    if (t13 == 1)
        goto LAB49;

LAB50:    t12 = (unsigned char)0;

LAB51:    if (t12 == 1)
        goto LAB46;

LAB47:    t11 = (unsigned char)0;

LAB48:    if (t11 == 1)
        goto LAB43;

LAB44:    t10 = (unsigned char)0;

LAB45:    if (t10 == 1)
        goto LAB40;

LAB41:    t9 = (unsigned char)0;

LAB42:    if (t9 != 0)
        goto LAB37;

LAB39:    xsi_set_current_line(148, ng0);
    t2 = (t0 + 4024);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(149, ng0);
    t2 = (t0 + 6720);
    xsi_report(t2, 8U, 0);

LAB38:    xsi_set_current_line(153, ng0);
    t2 = (t0 + 3960);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(154, ng0);
    t2 = (t0 + 2288U);
    t3 = *((char **)t2);
    t4 = *((int64 *)t3);
    t2 = (t0 + 3320);
    xsi_process_wait(t2, t4);

LAB60:    *((char **)t1) = &&LAB61;
    goto LAB1;

LAB34:    goto LAB33;

LAB36:    goto LAB34;

LAB37:    xsi_set_current_line(145, ng0);
    t15 = (t0 + 6712);
    xsi_report(t15, 8U, 0);
    xsi_set_current_line(146, ng0);
    t2 = (t0 + 4024);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    goto LAB38;

LAB40:    t15 = (t0 + 1672U);
    t25 = *((char **)t15);
    t26 = *((unsigned char *)t25);
    t27 = (t26 == (unsigned char)3);
    t9 = t27;
    goto LAB42;

LAB43:    t15 = (t0 + 1512U);
    t22 = *((char **)t15);
    t23 = *((unsigned char *)t22);
    t24 = (t23 == (unsigned char)2);
    t10 = t24;
    goto LAB45;

LAB46:    t15 = (t0 + 1352U);
    t19 = *((char **)t15);
    t20 = *((unsigned char *)t19);
    t21 = (t20 == (unsigned char)2);
    t11 = t21;
    goto LAB48;

LAB49:    t15 = (t0 + 1192U);
    t16 = *((char **)t15);
    t17 = *((unsigned char *)t16);
    t18 = (t17 == (unsigned char)3);
    t12 = t18;
    goto LAB51;

LAB52:    t14 = 0;

LAB55:    if (t14 < 4U)
        goto LAB56;
    else
        goto LAB54;

LAB56:    t7 = (t3 + t14);
    t8 = (t2 + t14);
    if (*((unsigned char *)t7) != *((unsigned char *)t8))
        goto LAB53;

LAB57:    t14 = (t14 + 1);
    goto LAB55;

LAB58:    xsi_set_current_line(155, ng0);
    t2 = (t0 + 1832U);
    t3 = *((char **)t2);
    t2 = (t0 + 6728);
    t13 = 1;
    if (4U == 4U)
        goto LAB77;

LAB78:    t13 = 0;

LAB79:    if (t13 == 1)
        goto LAB74;

LAB75:    t12 = (unsigned char)0;

LAB76:    if (t12 == 1)
        goto LAB71;

LAB72:    t11 = (unsigned char)0;

LAB73:    if (t11 == 1)
        goto LAB68;

LAB69:    t10 = (unsigned char)0;

LAB70:    if (t10 == 1)
        goto LAB65;

LAB66:    t9 = (unsigned char)0;

LAB67:    if (t9 != 0)
        goto LAB62;

LAB64:    xsi_set_current_line(165, ng0);
    t2 = (t0 + 4024);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(166, ng0);
    t2 = (t0 + 6740);
    xsi_report(t2, 8U, 0);

LAB63:    xsi_set_current_line(170, ng0);
    t2 = (t0 + 2288U);
    t3 = *((char **)t2);
    t4 = *((int64 *)t3);
    t2 = (t0 + 3320);
    xsi_process_wait(t2, t4);

LAB85:    *((char **)t1) = &&LAB86;
    goto LAB1;

LAB59:    goto LAB58;

LAB61:    goto LAB59;

LAB62:    xsi_set_current_line(162, ng0);
    t15 = (t0 + 6732);
    xsi_report(t15, 8U, 0);
    xsi_set_current_line(163, ng0);
    t2 = (t0 + 4024);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    goto LAB63;

LAB65:    t15 = (t0 + 1672U);
    t25 = *((char **)t15);
    t26 = *((unsigned char *)t25);
    t27 = (t26 == (unsigned char)3);
    t9 = t27;
    goto LAB67;

LAB68:    t15 = (t0 + 1512U);
    t22 = *((char **)t15);
    t23 = *((unsigned char *)t22);
    t24 = (t23 == (unsigned char)3);
    t10 = t24;
    goto LAB70;

LAB71:    t15 = (t0 + 1352U);
    t19 = *((char **)t15);
    t20 = *((unsigned char *)t19);
    t21 = (t20 == (unsigned char)2);
    t11 = t21;
    goto LAB73;

LAB74:    t15 = (t0 + 1192U);
    t16 = *((char **)t15);
    t17 = *((unsigned char *)t16);
    t18 = (t17 == (unsigned char)2);
    t12 = t18;
    goto LAB76;

LAB77:    t14 = 0;

LAB80:    if (t14 < 4U)
        goto LAB81;
    else
        goto LAB79;

LAB81:    t7 = (t3 + t14);
    t8 = (t2 + t14);
    if (*((unsigned char *)t7) != *((unsigned char *)t8))
        goto LAB78;

LAB82:    t14 = (t14 + 1);
    goto LAB80;

LAB83:    xsi_set_current_line(171, ng0);
    t2 = (t0 + 1832U);
    t3 = *((char **)t2);
    t2 = (t0 + 6748);
    t13 = 1;
    if (4U == 4U)
        goto LAB102;

LAB103:    t13 = 0;

LAB104:    if (t13 == 1)
        goto LAB99;

LAB100:    t12 = (unsigned char)0;

LAB101:    if (t12 == 1)
        goto LAB96;

LAB97:    t11 = (unsigned char)0;

LAB98:    if (t11 == 1)
        goto LAB93;

LAB94:    t10 = (unsigned char)0;

LAB95:    if (t10 == 1)
        goto LAB90;

LAB91:    t9 = (unsigned char)0;

LAB92:    if (t9 != 0)
        goto LAB87;

LAB89:    xsi_set_current_line(181, ng0);
    t2 = (t0 + 4024);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(182, ng0);
    t2 = (t0 + 6761);
    xsi_report(t2, 9U, 0);

LAB88:    xsi_set_current_line(186, ng0);
    t2 = (t0 + 2288U);
    t3 = *((char **)t2);
    t4 = *((int64 *)t3);
    t2 = (t0 + 3320);
    xsi_process_wait(t2, t4);

LAB110:    *((char **)t1) = &&LAB111;
    goto LAB1;

LAB84:    goto LAB83;

LAB86:    goto LAB84;

LAB87:    xsi_set_current_line(178, ng0);
    t15 = (t0 + 6752);
    xsi_report(t15, 9U, 0);
    xsi_set_current_line(179, ng0);
    t2 = (t0 + 4024);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    goto LAB88;

LAB90:    t15 = (t0 + 1672U);
    t25 = *((char **)t15);
    t26 = *((unsigned char *)t25);
    t27 = (t26 == (unsigned char)3);
    t9 = t27;
    goto LAB92;

LAB93:    t15 = (t0 + 1512U);
    t22 = *((char **)t15);
    t23 = *((unsigned char *)t22);
    t24 = (t23 == (unsigned char)3);
    t10 = t24;
    goto LAB95;

LAB96:    t15 = (t0 + 1352U);
    t19 = *((char **)t15);
    t20 = *((unsigned char *)t19);
    t21 = (t20 == (unsigned char)2);
    t11 = t21;
    goto LAB98;

LAB99:    t15 = (t0 + 1192U);
    t16 = *((char **)t15);
    t17 = *((unsigned char *)t16);
    t18 = (t17 == (unsigned char)2);
    t12 = t18;
    goto LAB101;

LAB102:    t14 = 0;

LAB105:    if (t14 < 4U)
        goto LAB106;
    else
        goto LAB104;

LAB106:    t7 = (t3 + t14);
    t8 = (t2 + t14);
    if (*((unsigned char *)t7) != *((unsigned char *)t8))
        goto LAB103;

LAB107:    t14 = (t14 + 1);
    goto LAB105;

LAB108:    xsi_set_current_line(187, ng0);
    t2 = (t0 + 1832U);
    t3 = *((char **)t2);
    t2 = (t0 + 6770);
    t13 = 1;
    if (4U == 4U)
        goto LAB127;

LAB128:    t13 = 0;

LAB129:    if (t13 == 1)
        goto LAB124;

LAB125:    t12 = (unsigned char)0;

LAB126:    if (t12 == 1)
        goto LAB121;

LAB122:    t11 = (unsigned char)0;

LAB123:    if (t11 == 1)
        goto LAB118;

LAB119:    t10 = (unsigned char)0;

LAB120:    if (t10 == 1)
        goto LAB115;

LAB116:    t9 = (unsigned char)0;

LAB117:    if (t9 != 0)
        goto LAB112;

LAB114:    xsi_set_current_line(197, ng0);
    t2 = (t0 + 4024);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(198, ng0);
    t2 = (t0 + 6782);
    xsi_report(t2, 8U, 0);

LAB113:    xsi_set_current_line(202, ng0);
    t2 = (t0 + 2288U);
    t3 = *((char **)t2);
    t4 = *((int64 *)t3);
    t2 = (t0 + 3320);
    xsi_process_wait(t2, t4);

LAB135:    *((char **)t1) = &&LAB136;
    goto LAB1;

LAB109:    goto LAB108;

LAB111:    goto LAB109;

LAB112:    xsi_set_current_line(194, ng0);
    t15 = (t0 + 6774);
    xsi_report(t15, 8U, 0);
    xsi_set_current_line(195, ng0);
    t2 = (t0 + 4024);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    goto LAB113;

LAB115:    t15 = (t0 + 1672U);
    t25 = *((char **)t15);
    t26 = *((unsigned char *)t25);
    t27 = (t26 == (unsigned char)3);
    t9 = t27;
    goto LAB117;

LAB118:    t15 = (t0 + 1512U);
    t22 = *((char **)t15);
    t23 = *((unsigned char *)t22);
    t24 = (t23 == (unsigned char)3);
    t10 = t24;
    goto LAB120;

LAB121:    t15 = (t0 + 1352U);
    t19 = *((char **)t15);
    t20 = *((unsigned char *)t19);
    t21 = (t20 == (unsigned char)2);
    t11 = t21;
    goto LAB123;

LAB124:    t15 = (t0 + 1192U);
    t16 = *((char **)t15);
    t17 = *((unsigned char *)t16);
    t18 = (t17 == (unsigned char)2);
    t12 = t18;
    goto LAB126;

LAB127:    t14 = 0;

LAB130:    if (t14 < 4U)
        goto LAB131;
    else
        goto LAB129;

LAB131:    t7 = (t3 + t14);
    t8 = (t2 + t14);
    if (*((unsigned char *)t7) != *((unsigned char *)t8))
        goto LAB128;

LAB132:    t14 = (t14 + 1);
    goto LAB130;

LAB133:    xsi_set_current_line(203, ng0);
    t2 = (t0 + 1832U);
    t3 = *((char **)t2);
    t2 = (t0 + 6790);
    t13 = 1;
    if (4U == 4U)
        goto LAB152;

LAB153:    t13 = 0;

LAB154:    if (t13 == 1)
        goto LAB149;

LAB150:    t12 = (unsigned char)0;

LAB151:    if (t12 == 1)
        goto LAB146;

LAB147:    t11 = (unsigned char)0;

LAB148:    if (t11 == 1)
        goto LAB143;

LAB144:    t10 = (unsigned char)0;

LAB145:    if (t10 == 1)
        goto LAB140;

LAB141:    t9 = (unsigned char)0;

LAB142:    if (t9 != 0)
        goto LAB137;

LAB139:    xsi_set_current_line(213, ng0);
    t2 = (t0 + 4024);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(214, ng0);
    t2 = (t0 + 6802);
    xsi_report(t2, 8U, 0);

LAB138:    xsi_set_current_line(218, ng0);
    t2 = (t0 + 2288U);
    t3 = *((char **)t2);
    t4 = *((int64 *)t3);
    t2 = (t0 + 3320);
    xsi_process_wait(t2, t4);

LAB160:    *((char **)t1) = &&LAB161;
    goto LAB1;

LAB134:    goto LAB133;

LAB136:    goto LAB134;

LAB137:    xsi_set_current_line(210, ng0);
    t15 = (t0 + 6794);
    xsi_report(t15, 8U, 0);
    xsi_set_current_line(211, ng0);
    t2 = (t0 + 4024);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    goto LAB138;

LAB140:    t15 = (t0 + 1672U);
    t25 = *((char **)t15);
    t26 = *((unsigned char *)t25);
    t27 = (t26 == (unsigned char)3);
    t9 = t27;
    goto LAB142;

LAB143:    t15 = (t0 + 1512U);
    t22 = *((char **)t15);
    t23 = *((unsigned char *)t22);
    t24 = (t23 == (unsigned char)3);
    t10 = t24;
    goto LAB145;

LAB146:    t15 = (t0 + 1352U);
    t19 = *((char **)t15);
    t20 = *((unsigned char *)t19);
    t21 = (t20 == (unsigned char)2);
    t11 = t21;
    goto LAB148;

LAB149:    t15 = (t0 + 1192U);
    t16 = *((char **)t15);
    t17 = *((unsigned char *)t16);
    t18 = (t17 == (unsigned char)2);
    t12 = t18;
    goto LAB151;

LAB152:    t14 = 0;

LAB155:    if (t14 < 4U)
        goto LAB156;
    else
        goto LAB154;

LAB156:    t7 = (t3 + t14);
    t8 = (t2 + t14);
    if (*((unsigned char *)t7) != *((unsigned char *)t8))
        goto LAB153;

LAB157:    t14 = (t14 + 1);
    goto LAB155;

LAB158:    xsi_set_current_line(219, ng0);
    t2 = (t0 + 1832U);
    t3 = *((char **)t2);
    t2 = (t0 + 6810);
    t13 = 1;
    if (4U == 4U)
        goto LAB177;

LAB178:    t13 = 0;

LAB179:    if (t13 == 1)
        goto LAB174;

LAB175:    t12 = (unsigned char)0;

LAB176:    if (t12 == 1)
        goto LAB171;

LAB172:    t11 = (unsigned char)0;

LAB173:    if (t11 == 1)
        goto LAB168;

LAB169:    t10 = (unsigned char)0;

LAB170:    if (t10 == 1)
        goto LAB165;

LAB166:    t9 = (unsigned char)0;

LAB167:    if (t9 != 0)
        goto LAB162;

LAB164:    xsi_set_current_line(229, ng0);
    t2 = (t0 + 4024);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(230, ng0);
    t2 = (t0 + 6822);
    xsi_report(t2, 8U, 0);

LAB163:    xsi_set_current_line(234, ng0);
    t2 = (t0 + 2288U);
    t3 = *((char **)t2);
    t4 = *((int64 *)t3);
    t2 = (t0 + 3320);
    xsi_process_wait(t2, t4);

LAB185:    *((char **)t1) = &&LAB186;
    goto LAB1;

LAB159:    goto LAB158;

LAB161:    goto LAB159;

LAB162:    xsi_set_current_line(226, ng0);
    t15 = (t0 + 6814);
    xsi_report(t15, 8U, 0);
    xsi_set_current_line(227, ng0);
    t2 = (t0 + 4024);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    goto LAB163;

LAB165:    t15 = (t0 + 1672U);
    t25 = *((char **)t15);
    t26 = *((unsigned char *)t25);
    t27 = (t26 == (unsigned char)3);
    t9 = t27;
    goto LAB167;

LAB168:    t15 = (t0 + 1512U);
    t22 = *((char **)t15);
    t23 = *((unsigned char *)t22);
    t24 = (t23 == (unsigned char)3);
    t10 = t24;
    goto LAB170;

LAB171:    t15 = (t0 + 1352U);
    t19 = *((char **)t15);
    t20 = *((unsigned char *)t19);
    t21 = (t20 == (unsigned char)2);
    t11 = t21;
    goto LAB173;

LAB174:    t15 = (t0 + 1192U);
    t16 = *((char **)t15);
    t17 = *((unsigned char *)t16);
    t18 = (t17 == (unsigned char)2);
    t12 = t18;
    goto LAB176;

LAB177:    t14 = 0;

LAB180:    if (t14 < 4U)
        goto LAB181;
    else
        goto LAB179;

LAB181:    t7 = (t3 + t14);
    t8 = (t2 + t14);
    if (*((unsigned char *)t7) != *((unsigned char *)t8))
        goto LAB178;

LAB182:    t14 = (t14 + 1);
    goto LAB180;

LAB183:    xsi_set_current_line(235, ng0);
    t2 = (t0 + 1832U);
    t3 = *((char **)t2);
    t2 = (t0 + 6830);
    t13 = 1;
    if (4U == 4U)
        goto LAB202;

LAB203:    t13 = 0;

LAB204:    if (t13 == 1)
        goto LAB199;

LAB200:    t12 = (unsigned char)0;

LAB201:    if (t12 == 1)
        goto LAB196;

LAB197:    t11 = (unsigned char)0;

LAB198:    if (t11 == 1)
        goto LAB193;

LAB194:    t10 = (unsigned char)0;

LAB195:    if (t10 == 1)
        goto LAB190;

LAB191:    t9 = (unsigned char)0;

LAB192:    if (t9 != 0)
        goto LAB187;

LAB189:    xsi_set_current_line(245, ng0);
    t2 = (t0 + 4024);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(246, ng0);
    t2 = (t0 + 6842);
    xsi_report(t2, 8U, 0);

LAB188:    xsi_set_current_line(250, ng0);
    t2 = (t0 + 2288U);
    t3 = *((char **)t2);
    t4 = *((int64 *)t3);
    t2 = (t0 + 3320);
    xsi_process_wait(t2, t4);

LAB210:    *((char **)t1) = &&LAB211;
    goto LAB1;

LAB184:    goto LAB183;

LAB186:    goto LAB184;

LAB187:    xsi_set_current_line(242, ng0);
    t15 = (t0 + 6834);
    xsi_report(t15, 8U, 0);
    xsi_set_current_line(243, ng0);
    t2 = (t0 + 4024);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    goto LAB188;

LAB190:    t15 = (t0 + 1672U);
    t25 = *((char **)t15);
    t26 = *((unsigned char *)t25);
    t27 = (t26 == (unsigned char)3);
    t9 = t27;
    goto LAB192;

LAB193:    t15 = (t0 + 1512U);
    t22 = *((char **)t15);
    t23 = *((unsigned char *)t22);
    t24 = (t23 == (unsigned char)3);
    t10 = t24;
    goto LAB195;

LAB196:    t15 = (t0 + 1352U);
    t19 = *((char **)t15);
    t20 = *((unsigned char *)t19);
    t21 = (t20 == (unsigned char)2);
    t11 = t21;
    goto LAB198;

LAB199:    t15 = (t0 + 1192U);
    t16 = *((char **)t15);
    t17 = *((unsigned char *)t16);
    t18 = (t17 == (unsigned char)2);
    t12 = t18;
    goto LAB201;

LAB202:    t14 = 0;

LAB205:    if (t14 < 4U)
        goto LAB206;
    else
        goto LAB204;

LAB206:    t7 = (t3 + t14);
    t8 = (t2 + t14);
    if (*((unsigned char *)t7) != *((unsigned char *)t8))
        goto LAB203;

LAB207:    t14 = (t14 + 1);
    goto LAB205;

LAB208:    xsi_set_current_line(251, ng0);
    t2 = (t0 + 1832U);
    t3 = *((char **)t2);
    t2 = (t0 + 6850);
    t13 = 1;
    if (4U == 4U)
        goto LAB227;

LAB228:    t13 = 0;

LAB229:    if (t13 == 1)
        goto LAB224;

LAB225:    t12 = (unsigned char)0;

LAB226:    if (t12 == 1)
        goto LAB221;

LAB222:    t11 = (unsigned char)0;

LAB223:    if (t11 == 1)
        goto LAB218;

LAB219:    t10 = (unsigned char)0;

LAB220:    if (t10 == 1)
        goto LAB215;

LAB216:    t9 = (unsigned char)0;

LAB217:    if (t9 != 0)
        goto LAB212;

LAB214:    xsi_set_current_line(261, ng0);
    t2 = (t0 + 4024);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(262, ng0);
    t2 = (t0 + 6862);
    xsi_report(t2, 8U, 0);

LAB213:    xsi_set_current_line(266, ng0);
    t2 = (t0 + 2288U);
    t3 = *((char **)t2);
    t4 = *((int64 *)t3);
    t2 = (t0 + 3320);
    xsi_process_wait(t2, t4);

LAB235:    *((char **)t1) = &&LAB236;
    goto LAB1;

LAB209:    goto LAB208;

LAB211:    goto LAB209;

LAB212:    xsi_set_current_line(258, ng0);
    t15 = (t0 + 6854);
    xsi_report(t15, 8U, 0);
    xsi_set_current_line(259, ng0);
    t2 = (t0 + 4024);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    goto LAB213;

LAB215:    t15 = (t0 + 1672U);
    t25 = *((char **)t15);
    t26 = *((unsigned char *)t25);
    t27 = (t26 == (unsigned char)3);
    t9 = t27;
    goto LAB217;

LAB218:    t15 = (t0 + 1512U);
    t22 = *((char **)t15);
    t23 = *((unsigned char *)t22);
    t24 = (t23 == (unsigned char)3);
    t10 = t24;
    goto LAB220;

LAB221:    t15 = (t0 + 1352U);
    t19 = *((char **)t15);
    t20 = *((unsigned char *)t19);
    t21 = (t20 == (unsigned char)2);
    t11 = t21;
    goto LAB223;

LAB224:    t15 = (t0 + 1192U);
    t16 = *((char **)t15);
    t17 = *((unsigned char *)t16);
    t18 = (t17 == (unsigned char)2);
    t12 = t18;
    goto LAB226;

LAB227:    t14 = 0;

LAB230:    if (t14 < 4U)
        goto LAB231;
    else
        goto LAB229;

LAB231:    t7 = (t3 + t14);
    t8 = (t2 + t14);
    if (*((unsigned char *)t7) != *((unsigned char *)t8))
        goto LAB228;

LAB232:    t14 = (t14 + 1);
    goto LAB230;

LAB233:    xsi_set_current_line(267, ng0);
    t2 = (t0 + 1832U);
    t3 = *((char **)t2);
    t2 = (t0 + 6870);
    t13 = 1;
    if (4U == 4U)
        goto LAB252;

LAB253:    t13 = 0;

LAB254:    if (t13 == 1)
        goto LAB249;

LAB250:    t12 = (unsigned char)0;

LAB251:    if (t12 == 1)
        goto LAB246;

LAB247:    t11 = (unsigned char)0;

LAB248:    if (t11 == 1)
        goto LAB243;

LAB244:    t10 = (unsigned char)0;

LAB245:    if (t10 == 1)
        goto LAB240;

LAB241:    t9 = (unsigned char)0;

LAB242:    if (t9 != 0)
        goto LAB237;

LAB239:    xsi_set_current_line(277, ng0);
    t2 = (t0 + 4024);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(278, ng0);
    t2 = (t0 + 6882);
    xsi_report(t2, 8U, 0);

LAB238:    xsi_set_current_line(282, ng0);
    t2 = (t0 + 3960);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(283, ng0);
    t2 = (t0 + 2288U);
    t3 = *((char **)t2);
    t4 = *((int64 *)t3);
    t2 = (t0 + 3320);
    xsi_process_wait(t2, t4);

LAB260:    *((char **)t1) = &&LAB261;
    goto LAB1;

LAB234:    goto LAB233;

LAB236:    goto LAB234;

LAB237:    xsi_set_current_line(274, ng0);
    t15 = (t0 + 6874);
    xsi_report(t15, 8U, 0);
    xsi_set_current_line(275, ng0);
    t2 = (t0 + 4024);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    goto LAB238;

LAB240:    t15 = (t0 + 1672U);
    t25 = *((char **)t15);
    t26 = *((unsigned char *)t25);
    t27 = (t26 == (unsigned char)2);
    t9 = t27;
    goto LAB242;

LAB243:    t15 = (t0 + 1512U);
    t22 = *((char **)t15);
    t23 = *((unsigned char *)t22);
    t24 = (t23 == (unsigned char)3);
    t10 = t24;
    goto LAB245;

LAB246:    t15 = (t0 + 1352U);
    t19 = *((char **)t15);
    t20 = *((unsigned char *)t19);
    t21 = (t20 == (unsigned char)3);
    t11 = t21;
    goto LAB248;

LAB249:    t15 = (t0 + 1192U);
    t16 = *((char **)t15);
    t17 = *((unsigned char *)t16);
    t18 = (t17 == (unsigned char)2);
    t12 = t18;
    goto LAB251;

LAB252:    t14 = 0;

LAB255:    if (t14 < 4U)
        goto LAB256;
    else
        goto LAB254;

LAB256:    t7 = (t3 + t14);
    t8 = (t2 + t14);
    if (*((unsigned char *)t7) != *((unsigned char *)t8))
        goto LAB253;

LAB257:    t14 = (t14 + 1);
    goto LAB255;

LAB258:    xsi_set_current_line(284, ng0);
    t2 = (t0 + 1832U);
    t3 = *((char **)t2);
    t2 = (t0 + 6890);
    t13 = 1;
    if (4U == 4U)
        goto LAB277;

LAB278:    t13 = 0;

LAB279:    if (t13 == 1)
        goto LAB274;

LAB275:    t12 = (unsigned char)0;

LAB276:    if (t12 == 1)
        goto LAB271;

LAB272:    t11 = (unsigned char)0;

LAB273:    if (t11 == 1)
        goto LAB268;

LAB269:    t10 = (unsigned char)0;

LAB270:    if (t10 == 1)
        goto LAB265;

LAB266:    t9 = (unsigned char)0;

LAB267:    if (t9 != 0)
        goto LAB262;

LAB264:    xsi_set_current_line(294, ng0);
    t2 = (t0 + 4024);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(295, ng0);
    t2 = (t0 + 6903);
    xsi_report(t2, 9U, 0);

LAB263:    xsi_set_current_line(299, ng0);
    t2 = (t0 + 3960);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(300, ng0);
    t2 = (t0 + 2288U);
    t3 = *((char **)t2);
    t4 = *((int64 *)t3);
    t2 = (t0 + 3320);
    xsi_process_wait(t2, t4);

LAB285:    *((char **)t1) = &&LAB286;
    goto LAB1;

LAB259:    goto LAB258;

LAB261:    goto LAB259;

LAB262:    xsi_set_current_line(291, ng0);
    t15 = (t0 + 6894);
    xsi_report(t15, 9U, 0);
    xsi_set_current_line(292, ng0);
    t2 = (t0 + 4024);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    goto LAB263;

LAB265:    t15 = (t0 + 1672U);
    t25 = *((char **)t15);
    t26 = *((unsigned char *)t25);
    t27 = (t26 == (unsigned char)3);
    t9 = t27;
    goto LAB267;

LAB268:    t15 = (t0 + 1512U);
    t22 = *((char **)t15);
    t23 = *((unsigned char *)t22);
    t24 = (t23 == (unsigned char)2);
    t10 = t24;
    goto LAB270;

LAB271:    t15 = (t0 + 1352U);
    t19 = *((char **)t15);
    t20 = *((unsigned char *)t19);
    t21 = (t20 == (unsigned char)2);
    t11 = t21;
    goto LAB273;

LAB274:    t15 = (t0 + 1192U);
    t16 = *((char **)t15);
    t17 = *((unsigned char *)t16);
    t18 = (t17 == (unsigned char)3);
    t12 = t18;
    goto LAB276;

LAB277:    t14 = 0;

LAB280:    if (t14 < 4U)
        goto LAB281;
    else
        goto LAB279;

LAB281:    t7 = (t3 + t14);
    t8 = (t2 + t14);
    if (*((unsigned char *)t7) != *((unsigned char *)t8))
        goto LAB278;

LAB282:    t14 = (t14 + 1);
    goto LAB280;

LAB283:    xsi_set_current_line(301, ng0);
    t2 = (t0 + 1832U);
    t3 = *((char **)t2);
    t2 = (t0 + 6912);
    t13 = 1;
    if (4U == 4U)
        goto LAB302;

LAB303:    t13 = 0;

LAB304:    if (t13 == 1)
        goto LAB299;

LAB300:    t12 = (unsigned char)0;

LAB301:    if (t12 == 1)
        goto LAB296;

LAB297:    t11 = (unsigned char)0;

LAB298:    if (t11 == 1)
        goto LAB293;

LAB294:    t10 = (unsigned char)0;

LAB295:    if (t10 == 1)
        goto LAB290;

LAB291:    t9 = (unsigned char)0;

LAB292:    if (t9 != 0)
        goto LAB287;

LAB289:    xsi_set_current_line(311, ng0);
    t2 = (t0 + 4024);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(312, ng0);
    t2 = (t0 + 6925);
    xsi_report(t2, 9U, 0);

LAB288:    xsi_set_current_line(316, ng0);

LAB310:    *((char **)t1) = &&LAB311;
    goto LAB1;

LAB284:    goto LAB283;

LAB286:    goto LAB284;

LAB287:    xsi_set_current_line(308, ng0);
    t15 = (t0 + 6916);
    xsi_report(t15, 9U, 0);
    xsi_set_current_line(309, ng0);
    t2 = (t0 + 4024);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    goto LAB288;

LAB290:    t15 = (t0 + 1672U);
    t25 = *((char **)t15);
    t26 = *((unsigned char *)t25);
    t27 = (t26 == (unsigned char)3);
    t9 = t27;
    goto LAB292;

LAB293:    t15 = (t0 + 1512U);
    t22 = *((char **)t15);
    t23 = *((unsigned char *)t22);
    t24 = (t23 == (unsigned char)3);
    t10 = t24;
    goto LAB295;

LAB296:    t15 = (t0 + 1352U);
    t19 = *((char **)t15);
    t20 = *((unsigned char *)t19);
    t21 = (t20 == (unsigned char)2);
    t11 = t21;
    goto LAB298;

LAB299:    t15 = (t0 + 1192U);
    t16 = *((char **)t15);
    t17 = *((unsigned char *)t16);
    t18 = (t17 == (unsigned char)2);
    t12 = t18;
    goto LAB301;

LAB302:    t14 = 0;

LAB305:    if (t14 < 4U)
        goto LAB306;
    else
        goto LAB304;

LAB306:    t7 = (t3 + t14);
    t8 = (t2 + t14);
    if (*((unsigned char *)t7) != *((unsigned char *)t8))
        goto LAB303;

LAB307:    t14 = (t14 + 1);
    goto LAB305;

LAB308:    goto LAB2;

LAB309:    goto LAB308;

LAB311:    goto LAB309;

}


extern void work_a_1722027606_2372691052_init()
{
	static char *pe[] = {(void *)work_a_1722027606_2372691052_p_0,(void *)work_a_1722027606_2372691052_p_1};
	xsi_register_didat("work_a_1722027606_2372691052", "isim/tb_control_isim_beh.exe.sim/work/a_1722027606_2372691052.didat");
	xsi_register_executes(pe);
}
