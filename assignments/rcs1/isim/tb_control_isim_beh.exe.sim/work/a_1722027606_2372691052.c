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
static const char *ng0 = "/nas/lrz/home/ge74men/EIT-VHDL-SDL/assignments/rcs1/tb_control.vhd";



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
    unsigned int t11;
    char *t12;
    char *t13;
    unsigned char t14;
    unsigned char t15;
    char *t16;
    unsigned char t17;
    unsigned char t18;
    unsigned char t19;
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
    t2 = (t0 + 6624);
    t10 = 1;
    if (4U == 4U)
        goto LAB18;

LAB19:    t10 = 0;

LAB20:    if (t10 == 1)
        goto LAB15;

LAB16:    t9 = (unsigned char)0;

LAB17:    if (t9 != 0)
        goto LAB12;

LAB14:    xsi_set_current_line(128, ng0);
    t2 = (t0 + 4024);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(129, ng0);
    t2 = (t0 + 6636);
    xsi_report(t2, 8U, 0);

LAB13:    xsi_set_current_line(133, ng0);
    t2 = (t0 + 3960);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(134, ng0);
    t2 = (t0 + 2288U);
    t3 = *((char **)t2);
    t4 = *((int64 *)t3);
    t2 = (t0 + 3320);
    xsi_process_wait(t2, t4);

LAB26:    *((char **)t1) = &&LAB27;
    goto LAB1;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

LAB12:    xsi_set_current_line(125, ng0);
    t12 = (t0 + 6628);
    xsi_report(t12, 8U, 0);
    xsi_set_current_line(126, ng0);
    t2 = (t0 + 4024);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    goto LAB13;

LAB15:    t12 = (t0 + 1192U);
    t13 = *((char **)t12);
    t14 = *((unsigned char *)t13);
    t15 = (t14 == (unsigned char)2);
    t9 = t15;
    goto LAB17;

LAB18:    t11 = 0;

LAB21:    if (t11 < 4U)
        goto LAB22;
    else
        goto LAB20;

LAB22:    t7 = (t3 + t11);
    t8 = (t2 + t11);
    if (*((unsigned char *)t7) != *((unsigned char *)t8))
        goto LAB19;

LAB23:    t11 = (t11 + 1);
    goto LAB21;

LAB24:    xsi_set_current_line(135, ng0);
    t2 = (t0 + 1832U);
    t3 = *((char **)t2);
    t2 = (t0 + 6644);
    t17 = 1;
    if (4U == 4U)
        goto LAB43;

LAB44:    t17 = 0;

LAB45:    if (t17 == 1)
        goto LAB40;

LAB41:    t15 = (unsigned char)0;

LAB42:    if (t15 == 1)
        goto LAB37;

LAB38:    t14 = (unsigned char)0;

LAB39:    if (t14 == 1)
        goto LAB34;

LAB35:    t10 = (unsigned char)0;

LAB36:    if (t10 == 1)
        goto LAB31;

LAB32:    t9 = (unsigned char)0;

LAB33:    if (t9 != 0)
        goto LAB28;

LAB30:    xsi_set_current_line(145, ng0);
    t2 = (t0 + 4024);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(146, ng0);
    t2 = (t0 + 6656);
    xsi_report(t2, 8U, 0);

LAB29:    xsi_set_current_line(150, ng0);
    t2 = (t0 + 3960);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(151, ng0);
    t2 = (t0 + 2288U);
    t3 = *((char **)t2);
    t4 = *((int64 *)t3);
    t2 = (t0 + 3320);
    xsi_process_wait(t2, t4);

LAB51:    *((char **)t1) = &&LAB52;
    goto LAB1;

LAB25:    goto LAB24;

LAB27:    goto LAB25;

LAB28:    xsi_set_current_line(142, ng0);
    t12 = (t0 + 6648);
    xsi_report(t12, 8U, 0);
    xsi_set_current_line(143, ng0);
    t2 = (t0 + 4024);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    goto LAB29;

LAB31:    t12 = (t0 + 1672U);
    t25 = *((char **)t12);
    t26 = *((unsigned char *)t25);
    t27 = (t26 == (unsigned char)3);
    t9 = t27;
    goto LAB33;

LAB34:    t12 = (t0 + 1512U);
    t22 = *((char **)t12);
    t23 = *((unsigned char *)t22);
    t24 = (t23 == (unsigned char)2);
    t10 = t24;
    goto LAB36;

LAB37:    t12 = (t0 + 1352U);
    t16 = *((char **)t12);
    t20 = *((unsigned char *)t16);
    t21 = (t20 == (unsigned char)2);
    t14 = t21;
    goto LAB39;

LAB40:    t12 = (t0 + 1192U);
    t13 = *((char **)t12);
    t18 = *((unsigned char *)t13);
    t19 = (t18 == (unsigned char)3);
    t15 = t19;
    goto LAB42;

LAB43:    t11 = 0;

LAB46:    if (t11 < 4U)
        goto LAB47;
    else
        goto LAB45;

LAB47:    t7 = (t3 + t11);
    t8 = (t2 + t11);
    if (*((unsigned char *)t7) != *((unsigned char *)t8))
        goto LAB44;

LAB48:    t11 = (t11 + 1);
    goto LAB46;

LAB49:    xsi_set_current_line(152, ng0);
    t2 = (t0 + 1832U);
    t3 = *((char **)t2);
    t2 = (t0 + 6664);
    t17 = 1;
    if (4U == 4U)
        goto LAB68;

LAB69:    t17 = 0;

LAB70:    if (t17 == 1)
        goto LAB65;

LAB66:    t15 = (unsigned char)0;

LAB67:    if (t15 == 1)
        goto LAB62;

LAB63:    t14 = (unsigned char)0;

LAB64:    if (t14 == 1)
        goto LAB59;

LAB60:    t10 = (unsigned char)0;

LAB61:    if (t10 == 1)
        goto LAB56;

LAB57:    t9 = (unsigned char)0;

LAB58:    if (t9 != 0)
        goto LAB53;

LAB55:    xsi_set_current_line(162, ng0);
    t2 = (t0 + 4024);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(163, ng0);
    t2 = (t0 + 6676);
    xsi_report(t2, 8U, 0);

LAB54:    xsi_set_current_line(167, ng0);
    t2 = (t0 + 2288U);
    t3 = *((char **)t2);
    t4 = *((int64 *)t3);
    t2 = (t0 + 3320);
    xsi_process_wait(t2, t4);

LAB76:    *((char **)t1) = &&LAB77;
    goto LAB1;

LAB50:    goto LAB49;

LAB52:    goto LAB50;

LAB53:    xsi_set_current_line(159, ng0);
    t12 = (t0 + 6668);
    xsi_report(t12, 8U, 0);
    xsi_set_current_line(160, ng0);
    t2 = (t0 + 4024);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    goto LAB54;

LAB56:    t12 = (t0 + 1672U);
    t25 = *((char **)t12);
    t26 = *((unsigned char *)t25);
    t27 = (t26 == (unsigned char)3);
    t9 = t27;
    goto LAB58;

LAB59:    t12 = (t0 + 1512U);
    t22 = *((char **)t12);
    t23 = *((unsigned char *)t22);
    t24 = (t23 == (unsigned char)3);
    t10 = t24;
    goto LAB61;

LAB62:    t12 = (t0 + 1352U);
    t16 = *((char **)t12);
    t20 = *((unsigned char *)t16);
    t21 = (t20 == (unsigned char)2);
    t14 = t21;
    goto LAB64;

LAB65:    t12 = (t0 + 1192U);
    t13 = *((char **)t12);
    t18 = *((unsigned char *)t13);
    t19 = (t18 == (unsigned char)2);
    t15 = t19;
    goto LAB67;

LAB68:    t11 = 0;

LAB71:    if (t11 < 4U)
        goto LAB72;
    else
        goto LAB70;

LAB72:    t7 = (t3 + t11);
    t8 = (t2 + t11);
    if (*((unsigned char *)t7) != *((unsigned char *)t8))
        goto LAB69;

LAB73:    t11 = (t11 + 1);
    goto LAB71;

LAB74:    xsi_set_current_line(168, ng0);
    t2 = (t0 + 1832U);
    t3 = *((char **)t2);
    t2 = (t0 + 6684);
    t17 = 1;
    if (4U == 4U)
        goto LAB93;

LAB94:    t17 = 0;

LAB95:    if (t17 == 1)
        goto LAB90;

LAB91:    t15 = (unsigned char)0;

LAB92:    if (t15 == 1)
        goto LAB87;

LAB88:    t14 = (unsigned char)0;

LAB89:    if (t14 == 1)
        goto LAB84;

LAB85:    t10 = (unsigned char)0;

LAB86:    if (t10 == 1)
        goto LAB81;

LAB82:    t9 = (unsigned char)0;

LAB83:    if (t9 != 0)
        goto LAB78;

LAB80:    xsi_set_current_line(178, ng0);
    t2 = (t0 + 4024);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(179, ng0);
    t2 = (t0 + 6697);
    xsi_report(t2, 9U, 0);

LAB79:    xsi_set_current_line(183, ng0);
    t2 = (t0 + 2288U);
    t3 = *((char **)t2);
    t4 = *((int64 *)t3);
    t2 = (t0 + 3320);
    xsi_process_wait(t2, t4);

LAB101:    *((char **)t1) = &&LAB102;
    goto LAB1;

LAB75:    goto LAB74;

LAB77:    goto LAB75;

LAB78:    xsi_set_current_line(175, ng0);
    t12 = (t0 + 6688);
    xsi_report(t12, 9U, 0);
    xsi_set_current_line(176, ng0);
    t2 = (t0 + 4024);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    goto LAB79;

LAB81:    t12 = (t0 + 1672U);
    t25 = *((char **)t12);
    t26 = *((unsigned char *)t25);
    t27 = (t26 == (unsigned char)3);
    t9 = t27;
    goto LAB83;

LAB84:    t12 = (t0 + 1512U);
    t22 = *((char **)t12);
    t23 = *((unsigned char *)t22);
    t24 = (t23 == (unsigned char)3);
    t10 = t24;
    goto LAB86;

LAB87:    t12 = (t0 + 1352U);
    t16 = *((char **)t12);
    t20 = *((unsigned char *)t16);
    t21 = (t20 == (unsigned char)2);
    t14 = t21;
    goto LAB89;

LAB90:    t12 = (t0 + 1192U);
    t13 = *((char **)t12);
    t18 = *((unsigned char *)t13);
    t19 = (t18 == (unsigned char)2);
    t15 = t19;
    goto LAB92;

LAB93:    t11 = 0;

LAB96:    if (t11 < 4U)
        goto LAB97;
    else
        goto LAB95;

LAB97:    t7 = (t3 + t11);
    t8 = (t2 + t11);
    if (*((unsigned char *)t7) != *((unsigned char *)t8))
        goto LAB94;

LAB98:    t11 = (t11 + 1);
    goto LAB96;

LAB99:    xsi_set_current_line(184, ng0);
    t2 = (t0 + 1832U);
    t3 = *((char **)t2);
    t2 = (t0 + 6706);
    t17 = 1;
    if (4U == 4U)
        goto LAB118;

LAB119:    t17 = 0;

LAB120:    if (t17 == 1)
        goto LAB115;

LAB116:    t15 = (unsigned char)0;

LAB117:    if (t15 == 1)
        goto LAB112;

LAB113:    t14 = (unsigned char)0;

LAB114:    if (t14 == 1)
        goto LAB109;

LAB110:    t10 = (unsigned char)0;

LAB111:    if (t10 == 1)
        goto LAB106;

LAB107:    t9 = (unsigned char)0;

LAB108:    if (t9 != 0)
        goto LAB103;

LAB105:    xsi_set_current_line(194, ng0);
    t2 = (t0 + 4024);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(195, ng0);
    t2 = (t0 + 6718);
    xsi_report(t2, 8U, 0);

LAB104:    xsi_set_current_line(199, ng0);
    t2 = (t0 + 2288U);
    t3 = *((char **)t2);
    t4 = *((int64 *)t3);
    t2 = (t0 + 3320);
    xsi_process_wait(t2, t4);

LAB126:    *((char **)t1) = &&LAB127;
    goto LAB1;

LAB100:    goto LAB99;

LAB102:    goto LAB100;

LAB103:    xsi_set_current_line(191, ng0);
    t12 = (t0 + 6710);
    xsi_report(t12, 8U, 0);
    xsi_set_current_line(192, ng0);
    t2 = (t0 + 4024);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    goto LAB104;

LAB106:    t12 = (t0 + 1672U);
    t25 = *((char **)t12);
    t26 = *((unsigned char *)t25);
    t27 = (t26 == (unsigned char)3);
    t9 = t27;
    goto LAB108;

LAB109:    t12 = (t0 + 1512U);
    t22 = *((char **)t12);
    t23 = *((unsigned char *)t22);
    t24 = (t23 == (unsigned char)3);
    t10 = t24;
    goto LAB111;

LAB112:    t12 = (t0 + 1352U);
    t16 = *((char **)t12);
    t20 = *((unsigned char *)t16);
    t21 = (t20 == (unsigned char)2);
    t14 = t21;
    goto LAB114;

LAB115:    t12 = (t0 + 1192U);
    t13 = *((char **)t12);
    t18 = *((unsigned char *)t13);
    t19 = (t18 == (unsigned char)2);
    t15 = t19;
    goto LAB117;

LAB118:    t11 = 0;

LAB121:    if (t11 < 4U)
        goto LAB122;
    else
        goto LAB120;

LAB122:    t7 = (t3 + t11);
    t8 = (t2 + t11);
    if (*((unsigned char *)t7) != *((unsigned char *)t8))
        goto LAB119;

LAB123:    t11 = (t11 + 1);
    goto LAB121;

LAB124:    xsi_set_current_line(200, ng0);
    t2 = (t0 + 1832U);
    t3 = *((char **)t2);
    t2 = (t0 + 6726);
    t17 = 1;
    if (4U == 4U)
        goto LAB143;

LAB144:    t17 = 0;

LAB145:    if (t17 == 1)
        goto LAB140;

LAB141:    t15 = (unsigned char)0;

LAB142:    if (t15 == 1)
        goto LAB137;

LAB138:    t14 = (unsigned char)0;

LAB139:    if (t14 == 1)
        goto LAB134;

LAB135:    t10 = (unsigned char)0;

LAB136:    if (t10 == 1)
        goto LAB131;

LAB132:    t9 = (unsigned char)0;

LAB133:    if (t9 != 0)
        goto LAB128;

LAB130:    xsi_set_current_line(210, ng0);
    t2 = (t0 + 4024);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(211, ng0);
    t2 = (t0 + 6738);
    xsi_report(t2, 8U, 0);

LAB129:    xsi_set_current_line(215, ng0);
    t2 = (t0 + 2288U);
    t3 = *((char **)t2);
    t4 = *((int64 *)t3);
    t2 = (t0 + 3320);
    xsi_process_wait(t2, t4);

LAB151:    *((char **)t1) = &&LAB152;
    goto LAB1;

LAB125:    goto LAB124;

LAB127:    goto LAB125;

LAB128:    xsi_set_current_line(207, ng0);
    t12 = (t0 + 6730);
    xsi_report(t12, 8U, 0);
    xsi_set_current_line(208, ng0);
    t2 = (t0 + 4024);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    goto LAB129;

LAB131:    t12 = (t0 + 1672U);
    t25 = *((char **)t12);
    t26 = *((unsigned char *)t25);
    t27 = (t26 == (unsigned char)3);
    t9 = t27;
    goto LAB133;

LAB134:    t12 = (t0 + 1512U);
    t22 = *((char **)t12);
    t23 = *((unsigned char *)t22);
    t24 = (t23 == (unsigned char)3);
    t10 = t24;
    goto LAB136;

LAB137:    t12 = (t0 + 1352U);
    t16 = *((char **)t12);
    t20 = *((unsigned char *)t16);
    t21 = (t20 == (unsigned char)2);
    t14 = t21;
    goto LAB139;

LAB140:    t12 = (t0 + 1192U);
    t13 = *((char **)t12);
    t18 = *((unsigned char *)t13);
    t19 = (t18 == (unsigned char)2);
    t15 = t19;
    goto LAB142;

LAB143:    t11 = 0;

LAB146:    if (t11 < 4U)
        goto LAB147;
    else
        goto LAB145;

LAB147:    t7 = (t3 + t11);
    t8 = (t2 + t11);
    if (*((unsigned char *)t7) != *((unsigned char *)t8))
        goto LAB144;

LAB148:    t11 = (t11 + 1);
    goto LAB146;

LAB149:    xsi_set_current_line(216, ng0);
    t2 = (t0 + 1832U);
    t3 = *((char **)t2);
    t2 = (t0 + 6746);
    t17 = 1;
    if (4U == 4U)
        goto LAB168;

LAB169:    t17 = 0;

LAB170:    if (t17 == 1)
        goto LAB165;

LAB166:    t15 = (unsigned char)0;

LAB167:    if (t15 == 1)
        goto LAB162;

LAB163:    t14 = (unsigned char)0;

LAB164:    if (t14 == 1)
        goto LAB159;

LAB160:    t10 = (unsigned char)0;

LAB161:    if (t10 == 1)
        goto LAB156;

LAB157:    t9 = (unsigned char)0;

LAB158:    if (t9 != 0)
        goto LAB153;

LAB155:    xsi_set_current_line(226, ng0);
    t2 = (t0 + 4024);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(227, ng0);
    t2 = (t0 + 6758);
    xsi_report(t2, 8U, 0);

LAB154:    xsi_set_current_line(231, ng0);
    t2 = (t0 + 2288U);
    t3 = *((char **)t2);
    t4 = *((int64 *)t3);
    t2 = (t0 + 3320);
    xsi_process_wait(t2, t4);

LAB176:    *((char **)t1) = &&LAB177;
    goto LAB1;

LAB150:    goto LAB149;

LAB152:    goto LAB150;

LAB153:    xsi_set_current_line(223, ng0);
    t12 = (t0 + 6750);
    xsi_report(t12, 8U, 0);
    xsi_set_current_line(224, ng0);
    t2 = (t0 + 4024);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    goto LAB154;

LAB156:    t12 = (t0 + 1672U);
    t25 = *((char **)t12);
    t26 = *((unsigned char *)t25);
    t27 = (t26 == (unsigned char)3);
    t9 = t27;
    goto LAB158;

LAB159:    t12 = (t0 + 1512U);
    t22 = *((char **)t12);
    t23 = *((unsigned char *)t22);
    t24 = (t23 == (unsigned char)3);
    t10 = t24;
    goto LAB161;

LAB162:    t12 = (t0 + 1352U);
    t16 = *((char **)t12);
    t20 = *((unsigned char *)t16);
    t21 = (t20 == (unsigned char)2);
    t14 = t21;
    goto LAB164;

LAB165:    t12 = (t0 + 1192U);
    t13 = *((char **)t12);
    t18 = *((unsigned char *)t13);
    t19 = (t18 == (unsigned char)2);
    t15 = t19;
    goto LAB167;

LAB168:    t11 = 0;

LAB171:    if (t11 < 4U)
        goto LAB172;
    else
        goto LAB170;

LAB172:    t7 = (t3 + t11);
    t8 = (t2 + t11);
    if (*((unsigned char *)t7) != *((unsigned char *)t8))
        goto LAB169;

LAB173:    t11 = (t11 + 1);
    goto LAB171;

LAB174:    xsi_set_current_line(232, ng0);
    t2 = (t0 + 1832U);
    t3 = *((char **)t2);
    t2 = (t0 + 6766);
    t17 = 1;
    if (4U == 4U)
        goto LAB193;

LAB194:    t17 = 0;

LAB195:    if (t17 == 1)
        goto LAB190;

LAB191:    t15 = (unsigned char)0;

LAB192:    if (t15 == 1)
        goto LAB187;

LAB188:    t14 = (unsigned char)0;

LAB189:    if (t14 == 1)
        goto LAB184;

LAB185:    t10 = (unsigned char)0;

LAB186:    if (t10 == 1)
        goto LAB181;

LAB182:    t9 = (unsigned char)0;

LAB183:    if (t9 != 0)
        goto LAB178;

LAB180:    xsi_set_current_line(242, ng0);
    t2 = (t0 + 4024);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(243, ng0);
    t2 = (t0 + 6778);
    xsi_report(t2, 8U, 0);

LAB179:    xsi_set_current_line(247, ng0);
    t2 = (t0 + 2288U);
    t3 = *((char **)t2);
    t4 = *((int64 *)t3);
    t2 = (t0 + 3320);
    xsi_process_wait(t2, t4);

LAB201:    *((char **)t1) = &&LAB202;
    goto LAB1;

LAB175:    goto LAB174;

LAB177:    goto LAB175;

LAB178:    xsi_set_current_line(239, ng0);
    t12 = (t0 + 6770);
    xsi_report(t12, 8U, 0);
    xsi_set_current_line(240, ng0);
    t2 = (t0 + 4024);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    goto LAB179;

LAB181:    t12 = (t0 + 1672U);
    t25 = *((char **)t12);
    t26 = *((unsigned char *)t25);
    t27 = (t26 == (unsigned char)3);
    t9 = t27;
    goto LAB183;

LAB184:    t12 = (t0 + 1512U);
    t22 = *((char **)t12);
    t23 = *((unsigned char *)t22);
    t24 = (t23 == (unsigned char)3);
    t10 = t24;
    goto LAB186;

LAB187:    t12 = (t0 + 1352U);
    t16 = *((char **)t12);
    t20 = *((unsigned char *)t16);
    t21 = (t20 == (unsigned char)2);
    t14 = t21;
    goto LAB189;

LAB190:    t12 = (t0 + 1192U);
    t13 = *((char **)t12);
    t18 = *((unsigned char *)t13);
    t19 = (t18 == (unsigned char)2);
    t15 = t19;
    goto LAB192;

LAB193:    t11 = 0;

LAB196:    if (t11 < 4U)
        goto LAB197;
    else
        goto LAB195;

LAB197:    t7 = (t3 + t11);
    t8 = (t2 + t11);
    if (*((unsigned char *)t7) != *((unsigned char *)t8))
        goto LAB194;

LAB198:    t11 = (t11 + 1);
    goto LAB196;

LAB199:    xsi_set_current_line(248, ng0);
    t2 = (t0 + 1832U);
    t3 = *((char **)t2);
    t2 = (t0 + 6786);
    t17 = 1;
    if (4U == 4U)
        goto LAB218;

LAB219:    t17 = 0;

LAB220:    if (t17 == 1)
        goto LAB215;

LAB216:    t15 = (unsigned char)0;

LAB217:    if (t15 == 1)
        goto LAB212;

LAB213:    t14 = (unsigned char)0;

LAB214:    if (t14 == 1)
        goto LAB209;

LAB210:    t10 = (unsigned char)0;

LAB211:    if (t10 == 1)
        goto LAB206;

LAB207:    t9 = (unsigned char)0;

LAB208:    if (t9 != 0)
        goto LAB203;

LAB205:    xsi_set_current_line(258, ng0);
    t2 = (t0 + 4024);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(259, ng0);
    t2 = (t0 + 6798);
    xsi_report(t2, 8U, 0);

LAB204:    xsi_set_current_line(263, ng0);
    t2 = (t0 + 2288U);
    t3 = *((char **)t2);
    t4 = *((int64 *)t3);
    t2 = (t0 + 3320);
    xsi_process_wait(t2, t4);

LAB226:    *((char **)t1) = &&LAB227;
    goto LAB1;

LAB200:    goto LAB199;

LAB202:    goto LAB200;

LAB203:    xsi_set_current_line(255, ng0);
    t12 = (t0 + 6790);
    xsi_report(t12, 8U, 0);
    xsi_set_current_line(256, ng0);
    t2 = (t0 + 4024);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    goto LAB204;

LAB206:    t12 = (t0 + 1672U);
    t25 = *((char **)t12);
    t26 = *((unsigned char *)t25);
    t27 = (t26 == (unsigned char)3);
    t9 = t27;
    goto LAB208;

LAB209:    t12 = (t0 + 1512U);
    t22 = *((char **)t12);
    t23 = *((unsigned char *)t22);
    t24 = (t23 == (unsigned char)3);
    t10 = t24;
    goto LAB211;

LAB212:    t12 = (t0 + 1352U);
    t16 = *((char **)t12);
    t20 = *((unsigned char *)t16);
    t21 = (t20 == (unsigned char)2);
    t14 = t21;
    goto LAB214;

LAB215:    t12 = (t0 + 1192U);
    t13 = *((char **)t12);
    t18 = *((unsigned char *)t13);
    t19 = (t18 == (unsigned char)2);
    t15 = t19;
    goto LAB217;

LAB218:    t11 = 0;

LAB221:    if (t11 < 4U)
        goto LAB222;
    else
        goto LAB220;

LAB222:    t7 = (t3 + t11);
    t8 = (t2 + t11);
    if (*((unsigned char *)t7) != *((unsigned char *)t8))
        goto LAB219;

LAB223:    t11 = (t11 + 1);
    goto LAB221;

LAB224:    xsi_set_current_line(264, ng0);
    t2 = (t0 + 1832U);
    t3 = *((char **)t2);
    t2 = (t0 + 6806);
    t17 = 1;
    if (4U == 4U)
        goto LAB243;

LAB244:    t17 = 0;

LAB245:    if (t17 == 1)
        goto LAB240;

LAB241:    t15 = (unsigned char)0;

LAB242:    if (t15 == 1)
        goto LAB237;

LAB238:    t14 = (unsigned char)0;

LAB239:    if (t14 == 1)
        goto LAB234;

LAB235:    t10 = (unsigned char)0;

LAB236:    if (t10 == 1)
        goto LAB231;

LAB232:    t9 = (unsigned char)0;

LAB233:    if (t9 != 0)
        goto LAB228;

LAB230:    xsi_set_current_line(274, ng0);
    t2 = (t0 + 4024);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(275, ng0);
    t2 = (t0 + 6818);
    xsi_report(t2, 8U, 0);

LAB229:    xsi_set_current_line(279, ng0);
    t2 = (t0 + 3960);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(280, ng0);
    t2 = (t0 + 2288U);
    t3 = *((char **)t2);
    t4 = *((int64 *)t3);
    t2 = (t0 + 3320);
    xsi_process_wait(t2, t4);

LAB251:    *((char **)t1) = &&LAB252;
    goto LAB1;

LAB225:    goto LAB224;

LAB227:    goto LAB225;

LAB228:    xsi_set_current_line(271, ng0);
    t12 = (t0 + 6810);
    xsi_report(t12, 8U, 0);
    xsi_set_current_line(272, ng0);
    t2 = (t0 + 4024);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    goto LAB229;

LAB231:    t12 = (t0 + 1672U);
    t25 = *((char **)t12);
    t26 = *((unsigned char *)t25);
    t27 = (t26 == (unsigned char)2);
    t9 = t27;
    goto LAB233;

LAB234:    t12 = (t0 + 1512U);
    t22 = *((char **)t12);
    t23 = *((unsigned char *)t22);
    t24 = (t23 == (unsigned char)3);
    t10 = t24;
    goto LAB236;

LAB237:    t12 = (t0 + 1352U);
    t16 = *((char **)t12);
    t20 = *((unsigned char *)t16);
    t21 = (t20 == (unsigned char)3);
    t14 = t21;
    goto LAB239;

LAB240:    t12 = (t0 + 1192U);
    t13 = *((char **)t12);
    t18 = *((unsigned char *)t13);
    t19 = (t18 == (unsigned char)2);
    t15 = t19;
    goto LAB242;

LAB243:    t11 = 0;

LAB246:    if (t11 < 4U)
        goto LAB247;
    else
        goto LAB245;

LAB247:    t7 = (t3 + t11);
    t8 = (t2 + t11);
    if (*((unsigned char *)t7) != *((unsigned char *)t8))
        goto LAB244;

LAB248:    t11 = (t11 + 1);
    goto LAB246;

LAB249:    xsi_set_current_line(281, ng0);
    t2 = (t0 + 1832U);
    t3 = *((char **)t2);
    t2 = (t0 + 6826);
    t17 = 1;
    if (4U == 4U)
        goto LAB268;

LAB269:    t17 = 0;

LAB270:    if (t17 == 1)
        goto LAB265;

LAB266:    t15 = (unsigned char)0;

LAB267:    if (t15 == 1)
        goto LAB262;

LAB263:    t14 = (unsigned char)0;

LAB264:    if (t14 == 1)
        goto LAB259;

LAB260:    t10 = (unsigned char)0;

LAB261:    if (t10 == 1)
        goto LAB256;

LAB257:    t9 = (unsigned char)0;

LAB258:    if (t9 != 0)
        goto LAB253;

LAB255:    xsi_set_current_line(291, ng0);
    t2 = (t0 + 4024);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(292, ng0);
    t2 = (t0 + 6839);
    xsi_report(t2, 9U, 0);

LAB254:    xsi_set_current_line(296, ng0);
    t2 = (t0 + 3960);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(297, ng0);
    t2 = (t0 + 2288U);
    t3 = *((char **)t2);
    t4 = *((int64 *)t3);
    t2 = (t0 + 3320);
    xsi_process_wait(t2, t4);

LAB276:    *((char **)t1) = &&LAB277;
    goto LAB1;

LAB250:    goto LAB249;

LAB252:    goto LAB250;

LAB253:    xsi_set_current_line(288, ng0);
    t12 = (t0 + 6830);
    xsi_report(t12, 9U, 0);
    xsi_set_current_line(289, ng0);
    t2 = (t0 + 4024);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    goto LAB254;

LAB256:    t12 = (t0 + 1672U);
    t25 = *((char **)t12);
    t26 = *((unsigned char *)t25);
    t27 = (t26 == (unsigned char)3);
    t9 = t27;
    goto LAB258;

LAB259:    t12 = (t0 + 1512U);
    t22 = *((char **)t12);
    t23 = *((unsigned char *)t22);
    t24 = (t23 == (unsigned char)2);
    t10 = t24;
    goto LAB261;

LAB262:    t12 = (t0 + 1352U);
    t16 = *((char **)t12);
    t20 = *((unsigned char *)t16);
    t21 = (t20 == (unsigned char)2);
    t14 = t21;
    goto LAB264;

LAB265:    t12 = (t0 + 1192U);
    t13 = *((char **)t12);
    t18 = *((unsigned char *)t13);
    t19 = (t18 == (unsigned char)3);
    t15 = t19;
    goto LAB267;

LAB268:    t11 = 0;

LAB271:    if (t11 < 4U)
        goto LAB272;
    else
        goto LAB270;

LAB272:    t7 = (t3 + t11);
    t8 = (t2 + t11);
    if (*((unsigned char *)t7) != *((unsigned char *)t8))
        goto LAB269;

LAB273:    t11 = (t11 + 1);
    goto LAB271;

LAB274:    xsi_set_current_line(298, ng0);
    t2 = (t0 + 1832U);
    t3 = *((char **)t2);
    t2 = (t0 + 6848);
    t17 = 1;
    if (4U == 4U)
        goto LAB293;

LAB294:    t17 = 0;

LAB295:    if (t17 == 1)
        goto LAB290;

LAB291:    t15 = (unsigned char)0;

LAB292:    if (t15 == 1)
        goto LAB287;

LAB288:    t14 = (unsigned char)0;

LAB289:    if (t14 == 1)
        goto LAB284;

LAB285:    t10 = (unsigned char)0;

LAB286:    if (t10 == 1)
        goto LAB281;

LAB282:    t9 = (unsigned char)0;

LAB283:    if (t9 != 0)
        goto LAB278;

LAB280:    xsi_set_current_line(308, ng0);
    t2 = (t0 + 4024);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(309, ng0);
    t2 = (t0 + 6861);
    xsi_report(t2, 9U, 0);

LAB279:    xsi_set_current_line(313, ng0);

LAB301:    *((char **)t1) = &&LAB302;
    goto LAB1;

LAB275:    goto LAB274;

LAB277:    goto LAB275;

LAB278:    xsi_set_current_line(305, ng0);
    t12 = (t0 + 6852);
    xsi_report(t12, 9U, 0);
    xsi_set_current_line(306, ng0);
    t2 = (t0 + 4024);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    goto LAB279;

LAB281:    t12 = (t0 + 1672U);
    t25 = *((char **)t12);
    t26 = *((unsigned char *)t25);
    t27 = (t26 == (unsigned char)3);
    t9 = t27;
    goto LAB283;

LAB284:    t12 = (t0 + 1512U);
    t22 = *((char **)t12);
    t23 = *((unsigned char *)t22);
    t24 = (t23 == (unsigned char)3);
    t10 = t24;
    goto LAB286;

LAB287:    t12 = (t0 + 1352U);
    t16 = *((char **)t12);
    t20 = *((unsigned char *)t16);
    t21 = (t20 == (unsigned char)2);
    t14 = t21;
    goto LAB289;

LAB290:    t12 = (t0 + 1192U);
    t13 = *((char **)t12);
    t18 = *((unsigned char *)t13);
    t19 = (t18 == (unsigned char)2);
    t15 = t19;
    goto LAB292;

LAB293:    t11 = 0;

LAB296:    if (t11 < 4U)
        goto LAB297;
    else
        goto LAB295;

LAB297:    t7 = (t3 + t11);
    t8 = (t2 + t11);
    if (*((unsigned char *)t7) != *((unsigned char *)t8))
        goto LAB294;

LAB298:    t11 = (t11 + 1);
    goto LAB296;

LAB299:    goto LAB2;

LAB300:    goto LAB299;

LAB302:    goto LAB300;

}


extern void work_a_1722027606_2372691052_init()
{
	static char *pe[] = {(void *)work_a_1722027606_2372691052_p_0,(void *)work_a_1722027606_2372691052_p_1};
	xsi_register_didat("work_a_1722027606_2372691052", "isim/tb_control_isim_beh.exe.sim/work/a_1722027606_2372691052.didat");
	xsi_register_executes(pe);
}
