/*
 * fsm.c
 *
 *  Created on: 7 Sep 2021
 *      Author: Hao Lin
 */

/*
 * Automatically generated C code by
 * KIELER SCCharts - The Key to Efficient Modeling
 *
 * http://rtsys.informatik.uni-kiel.de/kieler
 */

#include "fsm.h"

void logic(TickData* d) {
  d->_g28 = d->_pg57_e3;
  if (d->_g28) {
    d->_FSM_Rev4_local__region0_PVARP_tPVARP += d->deltaT;
  }
  d->_g29_e1 = !d->_g28;
  d->_g32 = d->_pg49_e2;
  d->_g33 = d->_g32 && d->VS;
  if (d->_g33) {
    d->_FSM_Rev4_local__Atrig2 = 1;
  }
  d->_pre_VP = d->_reg_VP;
  d->_g35 = d->_g32 && !d->VS;
  d->_cg35 = d->_pre_VP;
  d->_g36 = d->_g35 && d->_cg35;
  if (d->_g36) {
    d->_FSM_Rev4_local__Atrig3 = 1;
  }
  d->_cg28 = d->_FSM_Rev4_local__Atrig2 || d->_FSM_Rev4_local__Atrig3;
  d->_g29 = d->_g28 && d->_cg28;
  d->_g32 = !d->_g32;
  d->_g33 = d->_g33 || d->_g36;
  d->_g36 = (d->_g29_e1 || d->_g29) && (d->_g32 || d->_g33) && (d->_g29 || d->_g33);
  d->_cg37 = d->_FSM_Rev4_local__Atrig2;
  d->_g34_e2 = d->_GO || d->_g36 && d->_cg37;
  if (d->_g34_e2) {
    d->_FSM_Rev4_local__region0_PVARP_tPVARP = 0;
    d->PVARP_Elapsed = 0;
    d->_FSM_Rev4_local__Atrig = 0;
  }
  d->_cg5 = d->_FSM_Rev4_local__Atrig;
  d->_g29 = d->_pg6;
  if (d->_g29) {
    d->_FSM_Rev4_local__region0_PVARP_tPVARP += d->deltaT;
  }
  d->_g29_e1 = d->_pg16;
  d->_cg22 = d->_FSM_Rev4_local__region0_PVARP_tPVARP >= d->PVARP_CONFIG;
  d->_g34 = d->_g29_e1 && d->_cg22;
  if (d->_g34) {
    d->_FSM_Rev4_local__Atrig = 1;
  }
  d->_cg7 = d->_FSM_Rev4_local__Atrig;
  d->_g6 = d->_g34_e2 && !d->_cg5 || d->_g29 && !d->_cg7;
  d->_g8 = d->_g29 && d->_cg7;
  d->sleepT = 1000.0;
  d->_cg9 = d->_FSM_Rev4_local__region0_PVARP_tPVARP < d->PVARP_CONFIG;
  d->_g10 = d->_g34_e2 && d->_cg9;
  if (d->_g10) {
    d->sleepT = (d->sleepT < (d->PVARP_CONFIG - d->_FSM_Rev4_local__region0_PVARP_tPVARP)) ? d->sleepT : (d->PVARP_CONFIG - d->_FSM_Rev4_local__region0_PVARP_tPVARP);
  }
  d->_cg10 = d->_FSM_Rev4_local__Atrig;
  d->_g12 = d->_pg10;
  d->_g18 = d->_pg19;
  d->_g13 = d->_g12 || d->_g18;
  d->_cg13 = d->_FSM_Rev4_local__region0_PVARP_tPVARP < d->PVARP_CONFIG;
  d->_g14 = d->_g13 && d->_cg13;
  if (d->_g14) {
    d->sleepT = (d->sleepT < (d->PVARP_CONFIG - d->_FSM_Rev4_local__region0_PVARP_tPVARP)) ? d->sleepT : (d->PVARP_CONFIG - d->_FSM_Rev4_local__region0_PVARP_tPVARP);
  }
  d->_cg14 = d->_FSM_Rev4_local__Atrig;
  d->_g10 = d->_g10 && !d->_cg10 || d->_g14 && !d->_cg14;
  d->_g13 = d->_g13 && !d->_cg13;
  d->_cg16 = d->_FSM_Rev4_local__Atrig;
  d->_g14 = d->_g14 && d->_cg14 || d->_g13 && d->_cg16;
  d->_g19 = d->_g34_e2 && !d->_cg9;
  d->_cg19 = d->_FSM_Rev4_local__Atrig;
  d->_g19 = d->_g13 && !d->_cg16 || d->_g19 && !d->_cg19;
  d->_g16 = d->_g34_e2 || d->_g29_e1 && !d->_cg22;
  d->_g4 = !d->_g29;
  d->_g7 = !(d->_g18 || d->_g12);
  d->_g12 = !d->_g29_e1;
  d->_g18 = (d->_g4 || d->_g8) && (d->_g7 || d->_g14) && (d->_g12 || d->_g34) && (d->_g8 || d->_g14 || d->_g34);
  d->_g22 = d->_pg57;
  if (d->_g22) {
    d->_FSM_Rev4_local__region0_PVARP_tPVARP += d->deltaT;
  }
  d->_g15 = !d->_g22;
  d->_g23_e3 = d->_pg25;
  d->_cg56 = d->_FSM_Rev4_local__region0_PVARP_tPVARP >= d->PVARP_CONFIG;
  d->_g8_e1 = d->_g23_e3 && d->_cg56;
  if (d->_g8_e1) {
    d->_FSM_Rev4_local__Atrig1 = 1;
  }
  d->_cg41 = d->_FSM_Rev4_local__Atrig1;
  d->_g8 = d->_g22 && d->_cg41;
  d->_g23 = d->_pg35;
  d->_g15_e2 = d->_pg58;
  d->_g49_e2 = !(d->_g23 || d->_g15_e2);
  d->_g52 = d->_g15_e2 || d->_g23;
  d->_cg47 = d->_FSM_Rev4_local__region0_PVARP_tPVARP < d->PVARP_CONFIG;
  d->_g46 = d->_g52 && d->_cg47;
  if (d->_g46) {
    d->sleepT = (d->sleepT < (d->PVARP_CONFIG - d->_FSM_Rev4_local__region0_PVARP_tPVARP)) ? d->sleepT : (d->PVARP_CONFIG - d->_FSM_Rev4_local__region0_PVARP_tPVARP);
  }
  d->_cg48 = d->_FSM_Rev4_local__Atrig1;
  d->_g47 = d->_g52 && !d->_cg47;
  d->_cg50 = d->_FSM_Rev4_local__Atrig1;
  d->_g49 = d->_g46 && d->_cg48 || d->_g47 && d->_cg50;
  d->_g57_e3 = !d->_g23_e3;
  d->_g49 = (d->_g15 || d->_g8) && (d->_g49_e2 || d->_g49) && (d->_g57_e3 || d->_g8_e1) && (d->_g8 || d->_g49 || d->_g8_e1);
  d->_g42 = d->_g18 || d->_g49;
  if (d->_g42) {
    d->PVARP_Elapsed = 1;
    d->_FSM_Rev4_local__Atrig2 = 0;
    d->_FSM_Rev4_local__Atrig3 = 0;
  }
  d->_cg26 = d->_FSM_Rev4_local__Atrig2 || d->_FSM_Rev4_local__Atrig3;
  d->_g57_e3 = d->_g42 && !d->_cg26 || d->_g28 && !d->_cg28;
  d->_g49_e2 = d->_g42 || d->_g35 && !d->_cg35;
  d->_g42_e1 = d->_g36 && !d->_cg37;
  if (d->_g42_e1) {
    d->_FSM_Rev4_local__region0_PVARP_tPVARP = d->globalDeltaT;
    d->PVARP_Elapsed = 0;
    d->_FSM_Rev4_local__Atrig1 = 0;
  }
  d->_cg39 = d->_FSM_Rev4_local__Atrig1;
  d->_g57 = d->_g42_e1 && !d->_cg39 || d->_g22 && !d->_cg41;
  d->_cg43 = d->_FSM_Rev4_local__region0_PVARP_tPVARP < d->PVARP_CONFIG;
  d->_g24 = d->_g42_e1 && d->_cg43;
  if (d->_g24) {
    d->sleepT = (d->sleepT < (d->PVARP_CONFIG - d->_FSM_Rev4_local__region0_PVARP_tPVARP)) ? d->sleepT : (d->PVARP_CONFIG - d->_FSM_Rev4_local__region0_PVARP_tPVARP);
  }
  d->_cg44 = d->_FSM_Rev4_local__Atrig1;
  d->_g58 = d->_g24 && !d->_cg44 || d->_g46 && !d->_cg48;
  d->_g28 = d->_g42_e1 && !d->_cg43;
  d->_cg53 = d->_FSM_Rev4_local__Atrig1;
  d->_g35 = d->_g47 && !d->_cg50 || d->_g28 && !d->_cg53;
  d->_g25 = d->_g42_e1 || d->_g23_e3 && !d->_cg56;
  d->_g37 = d->_pg114_e3;
  if (d->_g37) {
    d->_FSM_Rev4_local__region1_VRP_tVRP += d->deltaT;
  }
  d->_g41 = !d->_g37;
  d->_g48 = d->_pg99;
  d->_g44 = d->_g48 && d->VS;
  if (d->_g44) {
    d->_FSM_Rev4_local__Atrig6 = 1;
  }
  d->_g53 = d->_g48 && !d->VS;
  d->_cg92 = d->_pre_VP;
  d->_g50 = d->_g53 && d->_cg92;
  if (d->_g50) {
    d->_FSM_Rev4_local__Atrig7 = 1;
  }
  d->_cg85 = d->_FSM_Rev4_local__Atrig6 || d->_FSM_Rev4_local__Atrig7;
  d->_g38 = d->_g37 && d->_cg85;
  d->_g56 = !d->_g48;
  d->_g89 = d->_g44 || d->_g50;
  d->_g93 = (d->_g41 || d->_g38) && (d->_g56 || d->_g89) && (d->_g38 || d->_g89);
  d->_cg94 = d->_FSM_Rev4_local__Atrig6;
  d->_g90 = d->_GO || d->_g93 && d->_cg94;
  if (d->_g90) {
    d->_FSM_Rev4_local__region1_VRP_tVRP = 0;
    d->VRP_Elapsed = 0;
    d->_FSM_Rev4_local__Atrig4 = 0;
  }
  d->_cg62 = d->_FSM_Rev4_local__Atrig4;
  d->_g91_e2 = d->_pg86_e1;
  if (d->_g91_e2) {
    d->_FSM_Rev4_local__region1_VRP_tVRP += d->deltaT;
  }
  d->_g86 = d->_pg76;
  d->_cg79 = d->_FSM_Rev4_local__region1_VRP_tVRP >= d->VRP_CONFIG;
  d->_g91 = d->_g86 && d->_cg79;
  if (d->_g91) {
    d->_FSM_Rev4_local__Atrig4 = 1;
  }
  d->_cg64 = d->_FSM_Rev4_local__Atrig4;
  d->_g86_e1 = d->_g90 && !d->_cg62 || d->_g91_e2 && !d->_cg64;
  d->_g65 = d->_g91_e2 && d->_cg64;
  d->_cg66 = d->_FSM_Rev4_local__region1_VRP_tVRP < d->VRP_CONFIG;
  d->_g67 = d->_g90 && d->_cg66;
  if (d->_g67) {
    d->sleepT = (d->sleepT < (d->VRP_CONFIG - d->_FSM_Rev4_local__region1_VRP_tVRP)) ? d->sleepT : (d->VRP_CONFIG - d->_FSM_Rev4_local__region1_VRP_tVRP);
  }
  d->_cg67 = d->_FSM_Rev4_local__Atrig4;
  d->_g69 = d->_pg67;
  d->_g75 = d->_pg73;
  d->_g70 = d->_g69 || d->_g75;
  d->_cg70 = d->_FSM_Rev4_local__region1_VRP_tVRP < d->VRP_CONFIG;
  d->_g71 = d->_g70 && d->_cg70;
  if (d->_g71) {
    d->sleepT = (d->sleepT < (d->VRP_CONFIG - d->_FSM_Rev4_local__region1_VRP_tVRP)) ? d->sleepT : (d->VRP_CONFIG - d->_FSM_Rev4_local__region1_VRP_tVRP);
  }
  d->_cg71 = d->_FSM_Rev4_local__Atrig4;
  d->_g67 = d->_g67 && !d->_cg67 || d->_g71 && !d->_cg71;
  d->_g70 = d->_g70 && !d->_cg70;
  d->_cg73 = d->_FSM_Rev4_local__Atrig4;
  d->_g71 = d->_g71 && d->_cg71 || d->_g70 && d->_cg73;
  d->_g76 = d->_g90 && !d->_cg66;
  d->_cg76 = d->_FSM_Rev4_local__Atrig4;
  d->_g73 = d->_g70 && !d->_cg73 || d->_g76 && !d->_cg76;
  d->_g76 = d->_g90 || d->_g86 && !d->_cg79;
  d->_g61 = !d->_g91_e2;
  d->_g64 = !(d->_g75 || d->_g69);
  d->_g75 = !d->_g86;
  d->_g69 = (d->_g61 || d->_g65) && (d->_g64 || d->_g71) && (d->_g75 || d->_g91) && (d->_g65 || d->_g71 || d->_g91);
  d->_g79 = d->_pg114;
  if (d->_g79) {
    d->_FSM_Rev4_local__region1_VRP_tVRP += d->deltaT;
  }
  d->_g65_e1 = !d->_g79;
  d->_g80_e3 = d->_pg82;
  d->_cg113 = d->_FSM_Rev4_local__region1_VRP_tVRP >= d->VRP_CONFIG;
  d->_g65 = d->_g80_e3 && d->_cg113;
  if (d->_g65) {
    d->_FSM_Rev4_local__Atrig5 = 1;
  }
  d->_cg98 = d->_FSM_Rev4_local__Atrig5;
  d->_g72_e2 = d->_g79 && d->_cg98;
  d->_g80 = d->_pg92;
  d->_g72 = d->_pg115;
  d->_g106_e2 = !(d->_g80 || d->_g72);
  d->_g109 = d->_g72 || d->_g80;
  d->_cg104 = d->_FSM_Rev4_local__region1_VRP_tVRP < d->VRP_CONFIG;
  d->_g103 = d->_g109 && d->_cg104;
  if (d->_g103) {
    d->sleepT = (d->sleepT < (d->VRP_CONFIG - d->_FSM_Rev4_local__region1_VRP_tVRP)) ? d->sleepT : (d->VRP_CONFIG - d->_FSM_Rev4_local__region1_VRP_tVRP);
  }
  d->_cg105 = d->_FSM_Rev4_local__Atrig5;
  d->_g104 = d->_g109 && !d->_cg104;
  d->_cg107 = d->_FSM_Rev4_local__Atrig5;
  d->_g106 = d->_g103 && d->_cg105 || d->_g104 && d->_cg107;
  d->_g114_e3 = !d->_g80_e3;
  d->_g106_e2 = (d->_g65_e1 || d->_g72_e2) && (d->_g106_e2 || d->_g106) && (d->_g114_e3 || d->_g65) && (d->_g72_e2 || d->_g106 || d->_g65);
  d->_g99_e1 = d->_g69 || d->_g106_e2;
  if (d->_g99_e1) {
    d->VRP_Elapsed = 1;
    d->_FSM_Rev4_local__Atrig6 = 0;
    d->_FSM_Rev4_local__Atrig7 = 0;
  }
  d->_cg83 = d->_FSM_Rev4_local__Atrig6 || d->_FSM_Rev4_local__Atrig7;
  d->_g114_e3 = d->_g99_e1 && !d->_cg83 || d->_g37 && !d->_cg85;
  d->_g99 = d->_g99_e1 || d->_g53 && !d->_cg92;
  d->_g106 = d->_g93 && !d->_cg94;
  if (d->_g106) {
    d->_FSM_Rev4_local__region1_VRP_tVRP = d->globalDeltaT;
    d->VRP_Elapsed = 0;
    d->_FSM_Rev4_local__Atrig5 = 0;
  }
  d->_cg96 = d->_FSM_Rev4_local__Atrig5;
  d->_g114 = d->_g106 && !d->_cg96 || d->_g79 && !d->_cg98;
  d->_cg100 = d->_FSM_Rev4_local__region1_VRP_tVRP < d->VRP_CONFIG;
  d->_g81 = d->_g106 && d->_cg100;
  if (d->_g81) {
    d->sleepT = (d->sleepT < (d->VRP_CONFIG - d->_FSM_Rev4_local__region1_VRP_tVRP)) ? d->sleepT : (d->VRP_CONFIG - d->_FSM_Rev4_local__region1_VRP_tVRP);
  }
  d->_cg101 = d->_FSM_Rev4_local__Atrig5;
  d->_g115 = d->_g81 && !d->_cg101 || d->_g103 && !d->_cg105;
  d->_g85 = d->_g106 && !d->_cg100;
  d->_cg110 = d->_FSM_Rev4_local__Atrig5;
  d->_g92 = d->_g104 && !d->_cg107 || d->_g85 && !d->_cg110;
  d->_g82 = d->_g106 || d->_g80_e3 && !d->_cg113;
  d->_g94 = d->_pg136;
  if (d->_g94) {
    d->_FSM_Rev4_local__region2_rAEI_tAEI += d->deltaT;
  }
  d->_g98 = !d->_g94;
  d->_g101 = d->_pg105;
  d->_g105 = d->_GO || d->_g101;
  if (d->_g105) {
    d->_pre_VRP_Elapsed = d->_reg_VRP_Elapsed;
  }
  d->_g110 = d->_pg129;
  d->_cg149 = d->_pre_VP && d->_pre_VRP_Elapsed;
  d->_g107 = d->_g110 && d->_cg149;
  if (d->_g107) {
    d->_FSM_Rev4_local__Atrig13 = 1;
  }
  d->_g95 = d->_g110 && !d->_cg149;
  d->_cg152 = d->VS && d->_pre_VRP_Elapsed;
  d->_g113 = d->_g95 && d->_cg152;
  if (d->_g113) {
    d->_FSM_Rev4_local__Atrig14 = 1;
  }
  d->_cg145 = d->_FSM_Rev4_local__Atrig13 || d->_FSM_Rev4_local__Atrig14;
  d->_g360 = d->_g94 && d->_cg145;
  d->_g149 = !d->_g110;
  d->_g153 = d->_g107 || d->_g113;
  d->_g150 = (d->_g98 || d->_g360) && (d->_g149 || d->_g153) && (d->_g360 || d->_g153);
  d->_cg154 = d->_FSM_Rev4_local__Atrig13;
  d->_g146 = d->_pg138;
  if (d->_g146) {
    d->_FSM_Rev4_local__region2_rAEI_tAEI += d->deltaT;
  }
  d->_g146_e1 = !d->_g146;
  d->_g151_e2 = d->_pg151;
  d->_g151 = d->_GO || d->_g151_e2;
  if (d->_g151) {
    d->_pre_VS = d->_reg_VS;
    d->_reg_VS = d->VS;
  }
  d->_g368 = d->_pg122_e1;
  d->_cg162 = d->_pre_VS;
  d->_g163 = d->_g368 && d->_cg162;
  if (d->_g163) {
    d->_FSM_Rev4_local__Atrig15 = 1;
  }
  d->_cg158 = d->_FSM_Rev4_local__Atrig15;
  d->_g159 = d->_g146 && d->_cg158;
  d->_g163_e2 = !d->_g368;
  d->_g159_e1 = (d->_g146_e1 || d->_g159) && (d->_g163_e2 || d->_g163) && (d->_g159 || d->_g163);
  d->_g163 = d->_pg138_e3;
  if (d->_g163) {
    d->_FSM_Rev4_local__region2_rAEI_tAEI += d->deltaT;
  }
  d->_g163_e2 = !d->_g163;
  d->_g159 = d->_pg179;
  d->_cg172 = d->_pre_VP && d->_pre_VRP_Elapsed;
  d->_g173 = d->_g159 && d->_cg172;
  if (d->_g173) {
    d->_FSM_Rev4_local__Atrig10 = 1;
  }
  d->_g175 = d->_g159 && !d->_cg172;
  d->_cg175 = d->VS && d->_pre_VRP_Elapsed;
  d->_g176 = d->_g175 && d->_cg175;
  if (d->_g176) {
    d->_FSM_Rev4_local__Atrig11 = 1;
  }
  d->_g175 = d->_g175 && !d->_cg175;
  d->_cg177 = d->AEI_Elapsed;
  d->_g178 = d->_g175 && d->_cg177;
  if (d->_g178) {
    d->_FSM_Rev4_local__Atrig12 = 1;
  }
  d->_cg168 = d->_FSM_Rev4_local__Atrig10 || d->_FSM_Rev4_local__Atrig11 || d->_FSM_Rev4_local__Atrig12;
  d->_g169 = d->_g163 && d->_cg168;
  d->_g172 = !d->_g159;
  d->_g178 = d->_g173 || d->_g176 || d->_g178;
  d->_g176 = (d->_g163_e2 || d->_g169) && (d->_g172 || d->_g178) && (d->_g169 || d->_g178);
  d->_cg179 = d->_FSM_Rev4_local__Atrig10;
  d->_g173 = d->_GO || d->_g150 && d->_cg154 || d->_g159_e1 || d->_g176 && d->_cg179;
  if (d->_g173) {
    d->_FSM_Rev4_local__region2_rAEI_tAEI = d->globalDeltaT;
    d->AEI_Elapsed = 0;
    d->_FSM_Rev4_local__Atrig8 = 0;
    d->_FSM_Rev4_local__Atrig9 = 0;
  }
  d->_cg119 = d->_FSM_Rev4_local__Atrig8 || d->_FSM_Rev4_local__Atrig9;
  d->_g174_e2 = d->_pg169_e1;
  d->_g169_e1 = d->_GO || d->_g174_e2;
  if (d->_g169_e1) {
    d->_pre_PVARP_Elapsed = d->_reg_PVARP_Elapsed;
  }
  d->_g174 = d->_pg133;
  d->_cg136 = d->AS && d->_pre_PVARP_Elapsed;
  d->_g169 = d->_g174 && d->_cg136;
  if (d->_g169) {
    d->_FSM_Rev4_local__Atrig8 = 1;
  }
  d->_g164 = d->_pg120;
  if (d->_g164) {
    d->_FSM_Rev4_local__region2_rAEI_tAEI += d->deltaT;
  }
  d->_g372 = d->_g174 && !d->_cg136;
  d->_cg139 = d->_FSM_Rev4_local__region2_rAEI_tAEI >= d->AEI_CONFIG;
  d->_g140 = d->_g372 && d->_cg139;
  if (d->_g140) {
    d->_FSM_Rev4_local__Atrig9 = 1;
  }
  d->_cg121 = d->_FSM_Rev4_local__Atrig8 || d->_FSM_Rev4_local__Atrig9;
  d->_g120 = d->_g173 && !d->_cg119 || d->_g164 && !d->_cg121;
  d->_g122 = d->_g164 && d->_cg121;
  d->_cg123 = d->_FSM_Rev4_local__region2_rAEI_tAEI < d->AEI_CONFIG;
  d->_g124 = d->_g173 && d->_cg123;
  if (d->_g124) {
    d->sleepT = (d->sleepT < (d->AEI_CONFIG - d->_FSM_Rev4_local__region2_rAEI_tAEI)) ? d->sleepT : (d->AEI_CONFIG - d->_FSM_Rev4_local__region2_rAEI_tAEI);
  }
  d->_cg124 = d->_FSM_Rev4_local__Atrig8 || d->_FSM_Rev4_local__Atrig9;
  d->_g126 = d->_pg124;
  d->_g132 = d->_pg130;
  d->_g127 = d->_g126 || d->_g132;
  d->_cg127 = d->_FSM_Rev4_local__region2_rAEI_tAEI < d->AEI_CONFIG;
  d->_g128 = d->_g127 && d->_cg127;
  if (d->_g128) {
    d->sleepT = (d->sleepT < (d->AEI_CONFIG - d->_FSM_Rev4_local__region2_rAEI_tAEI)) ? d->sleepT : (d->AEI_CONFIG - d->_FSM_Rev4_local__region2_rAEI_tAEI);
  }
  d->_cg128 = d->_FSM_Rev4_local__Atrig8 || d->_FSM_Rev4_local__Atrig9;
  d->_g124 = d->_g124 && !d->_cg124 || d->_g128 && !d->_cg128;
  d->_g127 = d->_g127 && !d->_cg127;
  d->_cg130 = d->_FSM_Rev4_local__Atrig8 || d->_FSM_Rev4_local__Atrig9;
  d->_g128 = d->_g128 && d->_cg128 || d->_g127 && d->_cg130;
  d->_g133 = d->_g173 && !d->_cg123;
  d->_cg133 = d->_FSM_Rev4_local__Atrig8 || d->_FSM_Rev4_local__Atrig9;
  d->_g130 = d->_g127 && !d->_cg130 || d->_g133 && !d->_cg133;
  d->_g133 = d->_g173 || d->_g372 && !d->_cg139;
  d->_g139 = d->_g169 || d->_g140;
  d->_g118 = !d->_g164;
  d->_g137 = !(d->_g132 || d->_g126);
  d->_g140 = !d->_g174;
  d->_g121 = (d->_g118 || d->_g122) && (d->_g137 || d->_g128) && (d->_g140 || d->_g139) && (d->_g122 || d->_g128 || d->_g139);
  d->_cg141 = d->_FSM_Rev4_local__Atrig8;
  d->_g132 = d->_g176 && !d->_cg179;
  d->_cg180 = d->_FSM_Rev4_local__Atrig11;
  d->_g126 = d->_g121 && d->_cg141 || d->_g132 && !d->_cg180;
  if (d->_g126) {
    d->AEI_Elapsed = 0;
    d->_FSM_Rev4_local__Atrig13 = 0;
    d->_FSM_Rev4_local__Atrig14 = 0;
  }
  d->_cg143 = d->_FSM_Rev4_local__Atrig13 || d->_FSM_Rev4_local__Atrig14;
  d->_g136 = d->_g126 && !d->_cg143 || d->_g94 && !d->_cg145;
  d->_g129 = d->_g126 || d->_g95 && !d->_cg152;
  d->_g122 = d->_g150 && !d->_cg154 || d->_g132 && d->_cg180;
  if (d->_g122) {
    d->AEI_Elapsed = 0;
    d->_FSM_Rev4_local__Atrig15 = 0;
  }
  d->_cg156 = d->_FSM_Rev4_local__Atrig15;
  d->_g138 = d->_g122 && !d->_cg156 || d->_g146 && !d->_cg158;
  d->_g122_e1 = d->_g122 || d->_g368 && !d->_cg162;
  d->_g129_e2 = d->_g121 && !d->_cg141;
  if (d->_g129_e2) {
    d->AEI_Elapsed = 1;
    d->_FSM_Rev4_local__Atrig10 = 0;
    d->_FSM_Rev4_local__Atrig11 = 0;
    d->_FSM_Rev4_local__Atrig12 = 0;
  }
  d->_cg166 = d->_FSM_Rev4_local__Atrig10 || d->_FSM_Rev4_local__Atrig11 || d->_FSM_Rev4_local__Atrig12;
  d->_g138_e3 = d->_g129_e2 && !d->_cg166 || d->_g163 && !d->_cg168;
  d->_g179 = d->_g129_e2 || d->_g175 && !d->_cg177;
  d->_g145 = d->_pg152;
  d->_g152 = d->_GO || d->_g145;
  if (d->_g152) {
    d->_pre_AP = d->_reg_AP;
  }
  d->_g142 = d->_pg228;
  d->_g154 = !d->_g142;
  d->_cg186 = (d->AS || d->_pre_AP) && d->_pre_PVARP_Elapsed;
  d->_g180 = d->_pg188;
  d->_cg202 = (d->AS || d->_pre_AP) && d->_pre_PVARP_Elapsed;
  d->_g158 = d->_g180 && !d->_cg202;
  d->_cg204 = (d->VS || d->_pre_VP) && d->_pre_VRP_Elapsed;
  d->_g162 = d->_g158 && d->_cg204;
  if (d->_g162) {
    d->_FSM_Rev4_local__Atrig16 = 1;
  }
  d->_g155 = d->_pg141;
  d->_g141 = d->_GO || d->_g155;
  if (d->_g141) {
    d->_pre_AS = d->_reg_AS;
    d->_reg_AS = d->AS;
  }
  d->_g168 = d->_g158 && !d->_cg204;
  d->_cg206 = d->_pre_AS;
  d->_g165 = d->_g168 && d->_cg206;
  if (d->_g165) {
    d->_FSM_Rev4_local__Atrig17 = 1;
  }
  d->_g177 = d->_g142 && !d->_cg186;
  if (d->_g177) {
    d->_FSM_Rev4_local_tAVI += d->deltaT;
  }
  d->_g376 = d->_g168 && !d->_cg206;
  d->_cg208 = d->_FSM_Rev4_local_tAVI >= d->AVI_CONFIG;
  d->_g380 = d->_g376 && d->_cg208;
  if (d->_g380) {
    d->_FSM_Rev4_local__Atrig18 = 1;
  }
  d->_cg188 = d->_FSM_Rev4_local__Atrig16 || d->_FSM_Rev4_local__Atrig17 || d->_FSM_Rev4_local__Atrig18;
  d->_g204 = d->_g142 && d->_cg186 || d->_g177 && d->_cg188;
  d->_g206 = d->_pg222_e1;
  d->_g186 = d->_pg228_e2;
  d->_g193_e2 = !(d->_g206 || d->_g186);
  d->_cg192 = (d->AS || d->_pre_AP) && d->_pre_PVARP_Elapsed;
  d->_cg198 = (d->AS || d->_pre_AP) && d->_pre_PVARP_Elapsed;
  d->_g194 = d->_g186 && !d->_cg192 || d->_g206 && !d->_cg198;
  d->_cg194 = d->_FSM_Rev4_local_tAVI < d->AVI_CONFIG;
  d->_g195 = d->_g194 && d->_cg194;
  if (d->_g195) {
    d->sleepT = (d->sleepT < (d->AVI_CONFIG - d->_FSM_Rev4_local_tAVI)) ? d->sleepT : (d->AVI_CONFIG - d->_FSM_Rev4_local_tAVI);
  }
  d->_cg195 = d->_FSM_Rev4_local__Atrig16 || d->_FSM_Rev4_local__Atrig17 || d->_FSM_Rev4_local__Atrig18;
  d->_g194 = d->_g194 && !d->_cg194;
  d->_cg196 = d->_FSM_Rev4_local__Atrig16 || d->_FSM_Rev4_local__Atrig17 || d->_FSM_Rev4_local__Atrig18;
  d->_g192 = d->_g186 && d->_cg192 || d->_g195 && d->_cg195 || d->_g194 && d->_cg196 || d->_g206 && d->_cg198;
  d->_g198 = !d->_g180;
  d->_g209 = d->_g180 && d->_cg202 || d->_g162 || d->_g165 || d->_g380;
  d->_g207 = (d->_g154 || d->_g204) && (d->_g193_e2 || d->_g192) && (d->_g198 || d->_g209) && (d->_g204 || d->_g192 || d->_g209);
  d->_cg210 = (d->AS || d->_pre_AP) && d->_pre_PVARP_Elapsed;
  d->_g205 = d->_pg210;
  d->_cg215 = (d->AS || d->_pre_AP) && d->_pre_PVARP_Elapsed;
  d->_g202 = d->_pg212;
  d->_g203_e3 = !d->_g202;
  d->_cg221 = (d->AS || d->_pre_AP) && d->_pre_PVARP_Elapsed;
  d->_g193 = d->_pg223;
  d->_cg237 = (d->AS || d->_pre_AP) && d->_pre_PVARP_Elapsed;
  d->_g187 = d->_g193 && !d->_cg237;
  d->_cg239 = (d->VS || d->_pre_VP) && d->_pre_VRP_Elapsed;
  d->_g193_e2 = d->_g187 && d->_cg239;
  if (d->_g193_e2) {
    d->_FSM_Rev4_local__Atrig19 = 1;
  }
  d->_g187_e1 = d->_g202 && !d->_cg221;
  if (d->_g187_e1) {
    d->_FSM_Rev4_local_tAVI += d->deltaT;
  }
  d->_g203 = d->_g187 && !d->_cg239;
  d->_cg241 = d->_FSM_Rev4_local_tAVI >= d->AVI_CONFIG;
  d->_g239 = d->_g203 && d->_cg241;
  if (d->_g239) {
    d->_FSM_Rev4_local__Atrig20 = 1;
  }
  d->_cg223 = d->_FSM_Rev4_local__Atrig19 || d->_FSM_Rev4_local__Atrig20;
  d->_g221 = d->_g202 && d->_cg221 || d->_g187_e1 && d->_cg223;
  d->_g233 = d->_pg211;
  d->_g227 = d->_pg216;
  d->_g228_e2 = !(d->_g233 || d->_g227);
  d->_cg227 = (d->AS || d->_pre_AP) && d->_pre_PVARP_Elapsed;
  d->_cg233 = (d->AS || d->_pre_AP) && d->_pre_PVARP_Elapsed;
  d->_g229 = d->_g227 && !d->_cg227 || d->_g233 && !d->_cg233;
  d->_cg229 = d->_FSM_Rev4_local_tAVI < d->AVI_CONFIG;
  d->_g230 = d->_g229 && d->_cg229;
  if (d->_g230) {
    d->sleepT = (d->sleepT < (d->AVI_CONFIG - d->_FSM_Rev4_local_tAVI)) ? d->sleepT : (d->AVI_CONFIG - d->_FSM_Rev4_local_tAVI);
  }
  d->_cg230 = d->_FSM_Rev4_local__Atrig19 || d->_FSM_Rev4_local__Atrig20;
  d->_g229 = d->_g229 && !d->_cg229;
  d->_cg231 = d->_FSM_Rev4_local__Atrig19 || d->_FSM_Rev4_local__Atrig20;
  d->_g233 = d->_g227 && d->_cg227 || d->_g230 && d->_cg230 || d->_g229 && d->_cg231 || d->_g233 && d->_cg233;
  d->_g227 = !d->_g193;
  d->_g240 = d->_g193 && d->_cg237 || d->_g193_e2 || d->_g239;
  d->_g237 = (d->_g203_e3 || d->_g221) && (d->_g228_e2 || d->_g233) && (d->_g227 || d->_g240) && (d->_g221 || d->_g233 || d->_g240);
  d->_cg243 = (d->AS || d->_pre_AP) && d->_pre_PVARP_Elapsed;
  d->_g242 = d->_pg241;
  d->_cg249 = (d->AS || d->_pre_AP) && d->_pre_PVARP_Elapsed;
  d->_g222 = d->_GO || d->_g207 && d->_cg210 || d->_g205 && d->_cg215 || d->_g237 && d->_cg243 || d->_g242 && d->_cg249;
  if (d->_g222) {
    d->_FSM_Rev4_local_tAVI = 0;
    d->_FSM_Rev4_local__CFSterm = 0;
    d->_FSM_Rev4_local_tAVI = d->globalDeltaT;
    d->AVI_Elapsed = 0;
    d->_FSM_Rev4_local__Atrig16 = 0;
    d->_FSM_Rev4_local__Atrig17 = 0;
    d->_FSM_Rev4_local__Atrig18 = 0;
  }
  d->_cg184 = d->_FSM_Rev4_local__Atrig16 || d->_FSM_Rev4_local__Atrig17 || d->_FSM_Rev4_local__Atrig18;
  d->_g228 = d->_g222 && !d->_cg184 || d->_g177 && !d->_cg188;
  d->_cg189 = d->_FSM_Rev4_local_tAVI < d->AVI_CONFIG;
  d->_g238_e3 = d->_g222 && d->_cg189;
  if (d->_g238_e3) {
    d->sleepT = (d->sleepT < (d->AVI_CONFIG - d->_FSM_Rev4_local_tAVI)) ? d->sleepT : (d->AVI_CONFIG - d->_FSM_Rev4_local_tAVI);
  }
  d->_cg190 = d->_FSM_Rev4_local__Atrig16 || d->_FSM_Rev4_local__Atrig17 || d->_FSM_Rev4_local__Atrig18;
  d->_g228_e2 = d->_g238_e3 && !d->_cg190 || d->_g195 && !d->_cg195;
  d->_g238 = d->_g222 && !d->_cg189;
  d->_cg199 = d->_FSM_Rev4_local__Atrig16 || d->_FSM_Rev4_local__Atrig17 || d->_FSM_Rev4_local__Atrig18;
  d->_g222_e1 = d->_g194 && !d->_cg196 || d->_g238 && !d->_cg199;
  d->_g188 = d->_g222 || d->_g376 && !d->_cg208;
  d->_g190 = d->_g207 && !d->_cg210;
  d->_cg211 = d->_FSM_Rev4_local__Atrig16;
  d->_g195 = d->_g190 && d->_cg211;
  if (d->_g195) {
    d->_FSM_Rev4_local__CFSterm = 1;
  }
  d->_g196 = d->_g237 && !d->_cg243;
  d->_cg244 = d->_FSM_Rev4_local__Atrig19;
  d->_g199 = d->_g196 && d->_cg244;
  if (d->_g199) {
    d->_FSM_Rev4_local__CFSterm = 1;
  }
  d->_g208 = d->_g195 || d->_g199;
  if (d->_g208) {
    d->AVI_Elapsed = 0;
  }
  d->_g183 = d->_g205 && !d->_cg215;
  if (d->_g183) {
    d->_FSM_Rev4_local_tAVI += d->deltaT;
  }
  d->_g210 = d->_g208 || d->_g183;
  d->_g243 = d->_g190 && !d->_cg211;
  d->_cg217 = d->_FSM_Rev4_local__Atrig17;
  d->_g245 = d->_g243 && d->_cg217;
  if (d->_g245) {
    d->_FSM_Rev4_local_tAVI = d->globalDeltaT;
    d->_FSM_Rev4_local__Atrig19 = 0;
    d->_FSM_Rev4_local__Atrig20 = 0;
  }
  d->_cg219 = d->_FSM_Rev4_local__Atrig19 || d->_FSM_Rev4_local__Atrig20;
  d->_g212 = d->_g245 && !d->_cg219 || d->_g187_e1 && !d->_cg223;
  d->_cg224 = d->_FSM_Rev4_local_tAVI < d->AVI_CONFIG;
  d->_g215 = d->_g245 && d->_cg224;
  if (d->_g215) {
    d->sleepT = (d->sleepT < (d->AVI_CONFIG - d->_FSM_Rev4_local_tAVI)) ? d->sleepT : (d->AVI_CONFIG - d->_FSM_Rev4_local_tAVI);
  }
  d->_cg225 = d->_FSM_Rev4_local__Atrig19 || d->_FSM_Rev4_local__Atrig20;
  d->_g216 = d->_g215 && !d->_cg225 || d->_g230 && !d->_cg230;
  d->_g213 = d->_g245 && !d->_cg224;
  d->_cg234 = d->_FSM_Rev4_local__Atrig19 || d->_FSM_Rev4_local__Atrig20;
  d->_g211 = d->_g229 && !d->_cg231 || d->_g213 && !d->_cg234;
  d->_g223 = d->_g245 || d->_g203 && !d->_cg241;
  d->_g230 = d->_g196 && !d->_cg244;
  if (d->_g230) {
    d->_FSM_Rev4_local__CFSterm = 1;
  }
  d->_g225 = d->_g243 && !d->_cg217;
  if (d->_g225) {
    d->_FSM_Rev4_local__CFSterm = 1;
  }
  d->_g234 = d->_g230 || d->_g225;
  if (d->_g234) {
    d->AVI_Elapsed = 1;
  }
  d->_g231 = d->_g242 && !d->_cg249;
  if (d->_g231) {
    d->_FSM_Rev4_local_tAVI += d->deltaT;
  }
  d->_g241 = d->_g234 || d->_g231;
  d->_g218 = d->_pg325_e3;
  d->_g244 = !d->_g218;
  d->_cg257 = (d->VS || d->_pre_VP) && d->_pre_VRP_Elapsed;
  d->_g217 = d->_pg266;
  d->_cg273 = (d->VS || d->_pre_VP) && d->_pre_VRP_Elapsed;
  d->_g251 = d->_g217 && !d->_cg273;
  d->_cg275 = d->_pre_VS;
  d->_g246 = d->_g251 && d->_cg275;
  if (d->_g246) {
    d->_FSM_Rev4_local__Atrig21 = 1;
  }
  d->_g249 = d->_g218 && !d->_cg257;
  if (d->_g249) {
    d->_FSM_Rev4_local_tRI += d->deltaT;
  }
  d->_g250 = d->_g251 && !d->_cg275;
  d->_cg277 = d->_FSM_Rev4_local_tRI >= d->URI_CONFIG;
  d->_g247 = d->_g250 && d->_cg277;
  if (d->_g247) {
    d->_FSM_Rev4_local__Atrig22 = 1;
  }
  d->_cg259 = d->_FSM_Rev4_local__Atrig21 || d->_FSM_Rev4_local__Atrig22;
  d->_g275 = d->_g218 && d->_cg257 || d->_g249 && d->_cg259;
  d->_g257 = d->_pg259;
  d->_g263 = d->_pg309;
  d->_g264_e2 = !(d->_g257 || d->_g263);
  d->_cg263 = (d->VS || d->_pre_VP) && d->_pre_VRP_Elapsed;
  d->_cg269 = (d->VS || d->_pre_VP) && d->_pre_VRP_Elapsed;
  d->_g265 = d->_g263 && !d->_cg263 || d->_g257 && !d->_cg269;
  d->_cg265 = d->_FSM_Rev4_local_tRI < d->URI_CONFIG;
  d->_g266 = d->_g265 && d->_cg265;
  if (d->_g266) {
    d->sleepT = (d->sleepT < (d->URI_CONFIG - d->_FSM_Rev4_local_tRI)) ? d->sleepT : (d->URI_CONFIG - d->_FSM_Rev4_local_tRI);
  }
  d->_cg266 = d->_FSM_Rev4_local__Atrig21 || d->_FSM_Rev4_local__Atrig22;
  d->_g265 = d->_g265 && !d->_cg265;
  d->_cg267 = d->_FSM_Rev4_local__Atrig21 || d->_FSM_Rev4_local__Atrig22;
  d->_g263 = d->_g263 && d->_cg263 || d->_g266 && d->_cg266 || d->_g265 && d->_cg267 || d->_g257 && d->_cg269;
  d->_g269 = !d->_g217;
  d->_g273 = d->_g217 && d->_cg273 || d->_g246 || d->_g247;
  d->_g278 = (d->_g244 || d->_g275) && (d->_g264_e2 || d->_g263) && (d->_g269 || d->_g273) && (d->_g275 || d->_g263 || d->_g273);
  d->_cg279 = (d->VS || d->_pre_VP) && d->_pre_VRP_Elapsed;
  d->_g276 = d->_pg267;
  d->_g264_e2 = !d->_g276;
  d->_cg284 = (d->VS || d->_pre_VP) && d->_pre_VRP_Elapsed;
  d->_g264 = d->_g276 && !d->_cg284;
  if (d->_g264) {
    d->_FSM_Rev4_local_tRI += d->deltaT;
  }
  d->_g274 = d->_pg288;
  d->_cg300 = (d->VS || d->_pre_VP) && d->_pre_VRP_Elapsed;
  d->_g274_e3 = d->_g274 && !d->_cg300;
  d->_cg302 = d->_FSM_Rev4_local_tRI >= d->URI_CONFIG;
  d->_g258 = d->_g274_e3 && d->_cg302;
  if (d->_g258) {
    d->_FSM_Rev4_local__Atrig23 = 1;
  }
  d->_cg286 = d->_FSM_Rev4_local__Atrig23;
  d->_g258_e1 = d->_g276 && d->_cg284 || d->_g264 && d->_cg286;
  d->_g284 = d->_pg286;
  d->_g290 = d->_pg254;
  d->_g291_e2 = !(d->_g284 || d->_g290);
  d->_cg290 = (d->VS || d->_pre_VP) && d->_pre_VRP_Elapsed;
  d->_cg296 = (d->VS || d->_pre_VP) && d->_pre_VRP_Elapsed;
  d->_g292 = d->_g290 && !d->_cg290 || d->_g284 && !d->_cg296;
  d->_cg292 = d->_FSM_Rev4_local_tRI < d->URI_CONFIG;
  d->_g293 = d->_g292 && d->_cg292;
  if (d->_g293) {
    d->sleepT = (d->sleepT < (d->URI_CONFIG - d->_FSM_Rev4_local_tRI)) ? d->sleepT : (d->URI_CONFIG - d->_FSM_Rev4_local_tRI);
  }
  d->_cg293 = d->_FSM_Rev4_local__Atrig23;
  d->_g292 = d->_g292 && !d->_cg292;
  d->_cg294 = d->_FSM_Rev4_local__Atrig23;
  d->_g296 = d->_g290 && d->_cg290 || d->_g293 && d->_cg293 || d->_g292 && d->_cg294 || d->_g284 && d->_cg296;
  d->_g290 = !d->_g274;
  d->_g303 = d->_g274 && d->_cg300 || d->_g258;
  d->_g300 = (d->_g264_e2 || d->_g258_e1) && (d->_g291_e2 || d->_g296) && (d->_g290 || d->_g303) && (d->_g258_e1 || d->_g296 || d->_g303);
  d->_cg304 = (d->VS || d->_pre_VP) && d->_pre_VRP_Elapsed;
  d->_g291 = d->_pg297;
  d->_g291_e2 = !d->_g291;
  d->_cg308 = (d->VS || d->_pre_VP) && d->_pre_VRP_Elapsed;
  d->_g285 = d->_g291 && !d->_cg308;
  if (d->_g285) {
    d->_FSM_Rev4_local_tRI += d->deltaT;
  }
  d->_g301_e3 = d->_pg304;
  d->_cg324 = (d->VS || d->_pre_VP) && d->_pre_VRP_Elapsed;
  d->_g285_e1 = d->_g301_e3 && !d->_cg324;
  d->_cg326 = d->_FSM_Rev4_local_tRI >= d->LRI_CONFIG;
  d->_g301 = d->_g285_e1 && d->_cg326;
  if (d->_g301) {
    d->_FSM_Rev4_local__Atrig24 = 1;
  }
  d->_cg310 = d->_FSM_Rev4_local__Atrig24;
  d->_g308 = d->_g291 && d->_cg308 || d->_g285 && d->_cg310;
  d->_g320 = d->_pg280;
  d->_g314 = d->_pg281;
  d->_g315_e2 = !(d->_g320 || d->_g314);
  d->_cg314 = (d->VS || d->_pre_VP) && d->_pre_VRP_Elapsed;
  d->_cg320 = (d->VS || d->_pre_VP) && d->_pre_VRP_Elapsed;
  d->_g316 = d->_g314 && !d->_cg314 || d->_g320 && !d->_cg320;
  d->_cg316 = d->_FSM_Rev4_local_tRI < d->LRI_CONFIG;
  d->_g317 = d->_g316 && d->_cg316;
  if (d->_g317) {
    d->sleepT = (d->sleepT < (d->LRI_CONFIG - d->_FSM_Rev4_local_tRI)) ? d->sleepT : (d->LRI_CONFIG - d->_FSM_Rev4_local_tRI);
  }
  d->_cg317 = d->_FSM_Rev4_local__Atrig24;
  d->_g316 = d->_g316 && !d->_cg316;
  d->_cg318 = d->_FSM_Rev4_local__Atrig24;
  d->_g314 = d->_g314 && d->_cg314 || d->_g317 && d->_cg317 || d->_g316 && d->_cg318 || d->_g320 && d->_cg320;
  d->_g320 = !d->_g301_e3;
  d->_g327 = d->_g301_e3 && d->_cg324 || d->_g301;
  d->_g324 = (d->_g291_e2 || d->_g308) && (d->_g315_e2 || d->_g314) && (d->_g320 || d->_g327) && (d->_g308 || d->_g314 || d->_g327);
  d->_cg328 = (d->VS || d->_pre_VP) && d->_pre_VRP_Elapsed;
  d->_g315_e2 = d->_pg317;
  d->_cg331 = (d->VS || d->_pre_VP) && d->_pre_VRP_Elapsed;
  d->_g325 = d->_GO || d->_g278 && d->_cg279 || d->_g300 && d->_cg304 || d->_g324 && d->_cg328 || d->_g315_e2 && d->_cg331;
  if (d->_g325) {
    d->_FSM_Rev4_local_tRI = 0;
    d->_FSM_Rev4_local_tRI = d->globalDeltaT;
    d->URI_Elapsed = 0;
    d->LRI_Elapsed = 0;
    d->_FSM_Rev4_local__Atrig21 = 0;
    d->_FSM_Rev4_local__Atrig22 = 0;
  }
  d->_cg255 = d->_FSM_Rev4_local__Atrig21 || d->_FSM_Rev4_local__Atrig22;
  d->_g325_e3 = d->_g325 && !d->_cg255 || d->_g249 && !d->_cg259;
  d->_cg260 = d->_FSM_Rev4_local_tRI < d->URI_CONFIG;
  d->_g315 = d->_g325 && d->_cg260;
  if (d->_g315) {
    d->sleepT = (d->sleepT < (d->URI_CONFIG - d->_FSM_Rev4_local_tRI)) ? d->sleepT : (d->URI_CONFIG - d->_FSM_Rev4_local_tRI);
  }
  d->_cg261 = d->_FSM_Rev4_local__Atrig21 || d->_FSM_Rev4_local__Atrig22;
  d->_g309 = d->_g315 && !d->_cg261 || d->_g266 && !d->_cg266;
  d->_g309_e1 = d->_g325 && !d->_cg260;
  d->_cg270 = d->_FSM_Rev4_local__Atrig21 || d->_FSM_Rev4_local__Atrig22;
  d->_g259 = d->_g265 && !d->_cg267 || d->_g309_e1 && !d->_cg270;
  d->_g266 = d->_g325 || d->_g250 && !d->_cg277;
  d->_g261 = d->_g278 && !d->_cg279;
  d->_cg280 = d->_FSM_Rev4_local__Atrig21;
  d->_g270 = d->_g261 && d->_cg280;
  if (d->_g270) {
    d->_FSM_Rev4_local_tRI = d->globalDeltaT;
    d->_FSM_Rev4_local__Atrig23 = 0;
  }
  d->_cg282 = d->_FSM_Rev4_local__Atrig23;
  d->_g267 = d->_g270 && !d->_cg282 || d->_g264 && !d->_cg286;
  d->_cg287 = d->_FSM_Rev4_local_tRI < d->URI_CONFIG;
  d->_g277 = d->_g270 && d->_cg287;
  if (d->_g277) {
    d->sleepT = (d->sleepT < (d->URI_CONFIG - d->_FSM_Rev4_local_tRI)) ? d->sleepT : (d->URI_CONFIG - d->_FSM_Rev4_local_tRI);
  }
  d->_cg288 = d->_FSM_Rev4_local__Atrig23;
  d->_g254 = d->_g277 && !d->_cg288 || d->_g293 && !d->_cg293;
  d->_g279 = d->_g270 && !d->_cg287;
  d->_cg297 = d->_FSM_Rev4_local__Atrig23;
  d->_g286 = d->_g292 && !d->_cg294 || d->_g279 && !d->_cg297;
  d->_g288 = d->_g270 || d->_g274_e3 && !d->_cg302;
  d->_g293 = d->_g300 && !d->_cg304 || d->_g261 && !d->_cg280;
  if (d->_g293) {
    d->URI_Elapsed = 1;
    d->_FSM_Rev4_local__Atrig24 = 0;
  }
  d->_cg306 = d->_FSM_Rev4_local__Atrig24;
  d->_g297 = d->_g293 && !d->_cg306 || d->_g285 && !d->_cg310;
  d->_cg311 = d->_FSM_Rev4_local_tRI < d->LRI_CONFIG;
  d->_g294 = d->_g293 && d->_cg311;
  if (d->_g294) {
    d->sleepT = (d->sleepT < (d->LRI_CONFIG - d->_FSM_Rev4_local_tRI)) ? d->sleepT : (d->LRI_CONFIG - d->_FSM_Rev4_local_tRI);
  }
  d->_cg312 = d->_FSM_Rev4_local__Atrig24;
  d->_g281 = d->_g294 && !d->_cg312 || d->_g317 && !d->_cg317;
  d->_g302 = d->_g293 && !d->_cg311;
  d->_cg321 = d->_FSM_Rev4_local__Atrig24;
  d->_g280 = d->_g316 && !d->_cg318 || d->_g302 && !d->_cg321;
  d->_g304 = d->_g293 || d->_g285_e1 && !d->_cg326;
  d->_g310 = d->_g324 && !d->_cg328;
  if (d->_g310) {
    d->LRI_Elapsed = 1;
  }
  d->_g312 = d->_g315_e2 && !d->_cg331;
  if (d->_g312) {
    d->_FSM_Rev4_local_tRI += d->deltaT;
  }
  d->_g317 = d->_g310 || d->_g312;
  d->_g321 = d->_pg318;
  d->_g318 = d->_GO || d->_g321;
  if (d->_g318) {
    d->VP = 0;
    d->AP = 0;
  }
  d->_g326 = d->_pg331;
  d->_cg340 = d->LRI_Elapsed;
  d->_g305 = d->_g326 && !d->_cg340;
  d->_cg342 = d->URI_Elapsed && d->AVI_Elapsed;
  d->_g328 = d->_g326 && d->_cg340 || d->_g305 && d->_cg342;
  if (d->_g328) {
    d->VP |= 1;
  }
  d->_g331 = d->_GO || d->_g328 || d->_g305 && !d->_cg342;
  d->_g332 = d->_pg356;
  d->_cg346 = d->AEI_Elapsed;
  d->_g329 = d->_g332 && d->_cg346;
  if (d->_g329) {
    d->AP |= 1;
  }
  d->_g356 = d->_GO || d->_g329 || d->_g332 && !d->_cg346;
  if (d->_g105) {
    d->_reg_VRP_Elapsed = d->VRP_Elapsed;
  }
  d->_reg_VP = d->VP;
  if (d->_g169_e1) {
    d->_reg_PVARP_Elapsed = d->PVARP_Elapsed;
  }
  if (d->_g152) {
    d->_reg_AP = d->AP;
  }
}

void reset(TickData* d) {
  d->_GO = 1;
  d->_TERM = 0;
  d->PVARP_Elapsed = 0;
  d->VRP_Elapsed = 0;
  d->AEI_Elapsed = 0;
  d->AVI_Elapsed = 0;
  d->URI_Elapsed = 0;
  d->LRI_Elapsed = 0;
  d->globalDeltaT = 1;
  d->AVI_CONFIG = AVI_VALUE;
  d->AEI_CONFIG = AEI_VALUE;
  d->PVARP_CONFIG = PVARP_VALUE;
  d->VRP_CONFIG = VRP_VALUE;
  d->LRI_CONFIG = LRI_VALUE;
  d->URI_CONFIG = URI_VALUE;
  d->deltaT = 0.0;
  d->sleepT = 0.0;
  d->_reg_VRP_Elapsed = 0;
  d->_reg_VP = 0;
  d->_reg_VS = 0;
  d->_reg_PVARP_Elapsed = 0;
  d->_reg_AP = 0;
  d->_reg_AS = 0;
  d->_FSM_Rev4_local__region0_PVARP_tPVARP = 0;
  d->_FSM_Rev4_local__region1_VRP_tVRP = 0;
  d->_FSM_Rev4_local__region2_rAEI_tAEI = 0;
  d->_pg57_e3 = 0;
  d->_pg49_e2 = 0;
  d->_pg6 = 0;
  d->_pg16 = 0;
  d->_pg10 = 0;
  d->_pg19 = 0;
  d->_pg57 = 0;
  d->_pg25 = 0;
  d->_pg35 = 0;
  d->_pg58 = 0;
  d->_pg114_e3 = 0;
  d->_pg99 = 0;
  d->_pg86_e1 = 0;
  d->_pg76 = 0;
  d->_pg67 = 0;
  d->_pg73 = 0;
  d->_pg114 = 0;
  d->_pg82 = 0;
  d->_pg92 = 0;
  d->_pg115 = 0;
  d->_pg136 = 0;
  d->_pg105 = 0;
  d->_pg129 = 0;
  d->_pg138 = 0;
  d->_pg151 = 0;
  d->_pg122_e1 = 0;
  d->_pg138_e3 = 0;
  d->_pg179 = 0;
  d->_pg169_e1 = 0;
  d->_pg133 = 0;
  d->_pg120 = 0;
  d->_pg124 = 0;
  d->_pg130 = 0;
  d->_pg152 = 0;
  d->_pg228 = 0;
  d->_pg188 = 0;
  d->_pg141 = 0;
  d->_pg222_e1 = 0;
  d->_pg228_e2 = 0;
  d->_pg210 = 0;
  d->_pg212 = 0;
  d->_pg223 = 0;
  d->_pg211 = 0;
  d->_pg216 = 0;
  d->_pg241 = 0;
  d->_pg325_e3 = 0;
  d->_pg266 = 0;
  d->_pg259 = 0;
  d->_pg309 = 0;
  d->_pg267 = 0;
  d->_pg288 = 0;
  d->_pg286 = 0;
  d->_pg254 = 0;
  d->_pg297 = 0;
  d->_pg304 = 0;
  d->_pg280 = 0;
  d->_pg281 = 0;
  d->_pg317 = 0;
  d->_pg318 = 0;
  d->_pg331 = 0;
  d->_pg356 = 0;
}

void tick(TickData* d) {
  logic(d);

  d->_pg57_e3 = d->_g57_e3;
  d->_pg49_e2 = d->_g49_e2;
  d->_pg6 = d->_g6;
  d->_pg16 = d->_g16;
  d->_pg10 = d->_g10;
  d->_pg19 = d->_g19;
  d->_pg57 = d->_g57;
  d->_pg25 = d->_g25;
  d->_pg35 = d->_g35;
  d->_pg58 = d->_g58;
  d->_pg114_e3 = d->_g114_e3;
  d->_pg99 = d->_g99;
  d->_pg86_e1 = d->_g86_e1;
  d->_pg76 = d->_g76;
  d->_pg67 = d->_g67;
  d->_pg73 = d->_g73;
  d->_pg114 = d->_g114;
  d->_pg82 = d->_g82;
  d->_pg92 = d->_g92;
  d->_pg115 = d->_g115;
  d->_pg136 = d->_g136;
  d->_pg105 = d->_g105;
  d->_pg129 = d->_g129;
  d->_pg138 = d->_g138;
  d->_pg151 = d->_g151;
  d->_pg122_e1 = d->_g122_e1;
  d->_pg138_e3 = d->_g138_e3;
  d->_pg179 = d->_g179;
  d->_pg169_e1 = d->_g169_e1;
  d->_pg133 = d->_g133;
  d->_pg120 = d->_g120;
  d->_pg124 = d->_g124;
  d->_pg130 = d->_g130;
  d->_pg152 = d->_g152;
  d->_pg228 = d->_g228;
  d->_pg188 = d->_g188;
  d->_pg141 = d->_g141;
  d->_pg222_e1 = d->_g222_e1;
  d->_pg228_e2 = d->_g228_e2;
  d->_pg210 = d->_g210;
  d->_pg212 = d->_g212;
  d->_pg223 = d->_g223;
  d->_pg211 = d->_g211;
  d->_pg216 = d->_g216;
  d->_pg241 = d->_g241;
  d->_pg325_e3 = d->_g325_e3;
  d->_pg266 = d->_g266;
  d->_pg259 = d->_g259;
  d->_pg309 = d->_g309;
  d->_pg267 = d->_g267;
  d->_pg288 = d->_g288;
  d->_pg286 = d->_g286;
  d->_pg254 = d->_g254;
  d->_pg297 = d->_g297;
  d->_pg304 = d->_g304;
  d->_pg280 = d->_g280;
  d->_pg281 = d->_g281;
  d->_pg317 = d->_g317;
  d->_pg318 = d->_g318;
  d->_pg331 = d->_g331;
  d->_pg356 = d->_g356;
  d->_GO = 0;
}

void data_init(TickData* p_data)
{
	reset(p_data);
	(p_data->globalDeltaT) = DELTA_T;
	(p_data->deltaT) = DELTA_T;
	(p_data->sleepT) = 0;
}

// Custom input reset
void reset_inputs(TickData* d)
{
  (d->AS) = 0;
  (d->VS) = 0;
}

// Logs input value(s)
void handle_inputs(TickData* d)
{
	if (sense_v == A_PULSE)
	{
		(d->AS) = HIGH;
	}
	if (sense_v == V_PULSE)
	{
		(d->VS) = HIGH;
	}
}

// Logs output value(s)
void handle_outputs(TickData* d)
{
	if ((d->AP) == HIGH)
	{
		pulse_v = A_PULSE;
		(d->AP) = LOW;
	}
	if ((d->VP) == HIGH)
	{
		pulse_v = V_PULSE;
		(d->VP) = LOW;
	}
}
