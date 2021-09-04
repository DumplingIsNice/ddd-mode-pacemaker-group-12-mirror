/*
 * Automatically generated C code by
 * KIELER SCCharts - The Key to Efficient Modeling
 *
 * http://rtsys.informatik.uni-kiel.de/kieler
 */

#include <stdio.h>

#include "library.hpp"

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
  d->_g94 = d->_pg98;
  d->_g98 = d->_GO || d->_g94;
  if (d->_g98) {
    d->_pre_VRP_Elapsed = d->_reg_VRP_Elapsed;
  }
  d->_g101 = d->_pg151_e2;
  d->_g105 = !d->_g101;
  d->_cg121 = (d->VS || d->_pre_VP) && d->_pre_VRP_Elapsed;
  d->_g110 = d->_g101 && !d->_cg121;
  if (d->_g110) {
    d->_FSM_Rev4_local_tAEI += d->deltaT;
  }
  d->_g107 = d->_pg134;
  d->_cg137 = (d->VS || d->_pre_VP) && d->_pre_VRP_Elapsed;
  d->_g95 = d->_g107 && !d->_cg137;
  d->_cg139 = d->_FSM_Rev4_local_tAEI >= d->AEI_CONFIG;
  d->_g113 = d->_g95 && d->_cg139;
  if (d->_g113) {
    d->_FSM_Rev4_local__Atrig8 = 1;
  }
  d->_cg123 = d->_FSM_Rev4_local__Atrig8;
  d->_g270 = d->_g101 && d->_cg121 || d->_g110 && d->_cg123;
  d->_g121 = d->_pg125;
  d->_g127 = d->_pg123;
  d->_g128_e2 = !(d->_g121 || d->_g127);
  d->_cg127 = (d->VS || d->_pre_VP) && d->_pre_VRP_Elapsed;
  d->_cg133 = (d->VS || d->_pre_VP) && d->_pre_VRP_Elapsed;
  d->_g129 = d->_g127 && !d->_cg127 || d->_g121 && !d->_cg133;
  d->_cg129 = d->_FSM_Rev4_local_tAEI < d->AEI_CONFIG;
  d->_g130 = d->_g129 && d->_cg129;
  if (d->_g130) {
    d->sleepT = (d->sleepT < (d->AEI_CONFIG - d->_FSM_Rev4_local_tAEI)) ? d->sleepT : (d->AEI_CONFIG - d->_FSM_Rev4_local_tAEI);
  }
  d->_cg130 = d->_FSM_Rev4_local__Atrig8;
  d->_g129 = d->_g129 && !d->_cg129;
  d->_cg131 = d->_FSM_Rev4_local__Atrig8;
  d->_g127 = d->_g127 && d->_cg127 || d->_g130 && d->_cg130 || d->_g129 && d->_cg131 || d->_g121 && d->_cg133;
  d->_g133 = !d->_g107;
  d->_g137 = d->_g107 && d->_cg137 || d->_g113;
  d->_g140 = (d->_g105 || d->_g270) && (d->_g128_e2 || d->_g127) && (d->_g133 || d->_g137) && (d->_g270 || d->_g127 || d->_g137);
  d->_cg141 = (d->VS || d->_pre_VP) && d->_pre_VRP_Elapsed;
  d->_g122 = d->_pg139;
  d->_g138 = !d->_g122;
  d->_cg145 = (d->VS || d->_pre_VP) && d->_pre_VRP_Elapsed;
  d->_g128 = d->_pg118;
  d->_cg150 = (d->VS || d->_pre_VP) && d->_pre_VRP_Elapsed;
  d->_g122_e1 = d->_g128 && !d->_cg150;
  d->_cg152 = d->AEI_Elapsed == 1;
  d->_g128_e2 = d->_g122_e1 && d->_cg152;
  if (d->_g128_e2) {
    d->_FSM_Rev4_local__Atrig9 = 1;
  }
  d->_g138_e3 = d->_g122 && !d->_cg145;
  if (d->_g138_e3) {
    d->_FSM_Rev4_local_tAEI += d->deltaT;
  }
  d->_cg147 = d->_FSM_Rev4_local__Atrig9;
  d->_g145 = d->_g122 && d->_cg145 || d->_g138_e3 && d->_cg147;
  d->_g151_e2 = !d->_g128;
  d->_g153 = d->_g128 && d->_cg150 || d->_g128_e2;
  d->_g150 = (d->_g138 || d->_g145) && (d->_g151_e2 || d->_g153) && (d->_g145 || d->_g153);
  d->_cg154 = (d->VS || d->_pre_VP) && d->_pre_VRP_Elapsed;
  d->_g146 = d->_pg152;
  d->_cg157 = (d->VS || d->_pre_VP) && d->_pre_VRP_Elapsed;
  d->_g146_e1 = d->_GO || d->_g140 && d->_cg141 || d->_g150 && d->_cg154 || d->_g146 && d->_cg157;
  if (d->_g146_e1) {
    d->_FSM_Rev4_local_tAEI = 0;
    d->_FSM_Rev4_local__CFSterm = 0;
    d->_FSM_Rev4_local_tAEI = d->globalDeltaT;
    d->AEI_Elapsed = 0;
    d->_FSM_Rev4_local__Atrig8 = 0;
  }
  d->_cg119 = d->_FSM_Rev4_local__Atrig8;
  d->_g151_e2 = d->_g146_e1 && !d->_cg119 || d->_g110 && !d->_cg123;
  d->_cg124 = d->_FSM_Rev4_local_tAEI < d->AEI_CONFIG;
  d->_g151 = d->_g146_e1 && d->_cg124;
  if (d->_g151) {
    d->sleepT = (d->sleepT < (d->AEI_CONFIG - d->_FSM_Rev4_local_tAEI)) ? d->sleepT : (d->AEI_CONFIG - d->_FSM_Rev4_local_tAEI);
  }
  d->_cg125 = d->_FSM_Rev4_local__Atrig8;
  d->_g123 = d->_g151 && !d->_cg125 || d->_g130 && !d->_cg130;
  d->_g130 = d->_g146_e1 && !d->_cg124;
  d->_cg134 = d->_FSM_Rev4_local__Atrig8;
  d->_g125 = d->_g129 && !d->_cg131 || d->_g130 && !d->_cg134;
  d->_g134 = d->_g146_e1 || d->_g95 && !d->_cg139;
  d->_g131 = d->_g140 && !d->_cg141;
  if (d->_g131) {
    d->AEI_Elapsed = 1;
    d->_FSM_Rev4_local__Atrig9 = 0;
  }
  d->_cg143 = d->_FSM_Rev4_local__Atrig9;
  d->_g139 = d->_g131 && !d->_cg143 || d->_g138_e3 && !d->_cg147;
  d->_g118 = d->_g131 || d->_g122_e1 && !d->_cg152;
  d->_g141 = d->_g150 && !d->_cg154;
  if (d->_g141) {
    d->_FSM_Rev4_local__CFSterm = 1;
    d->AEI_Elapsed = 0;
  }
  d->_g147 = d->_g146 && !d->_cg157;
  if (d->_g147) {
    d->_FSM_Rev4_local_tAEI += d->deltaT;
  }
  d->_g152 = d->_g141 || d->_g147;
  d->_g142 = d->_pg154;
  d->_g154 = d->_GO || d->_g142;
  if (d->_g154) {
    d->_pre_PVARP_Elapsed = d->_reg_PVARP_Elapsed;
  }
  d->_g157 = d->_pg158;
  d->_g158 = d->_GO || d->_g157;
  if (d->_g158) {
    d->_pre_AP = d->_reg_AP;
  }
  d->_g155 = d->_pg171;
  d->_g278 = !d->_g155;
  d->_cg164 = (d->AS || d->_pre_AP) && d->_pre_PVARP_Elapsed;
  d->_g282 = d->_g155 && !d->_cg164;
  if (d->_g282) {
    d->_FSM_Rev4_local_tAVI += d->deltaT;
  }
  d->_g180 = d->_pg168;
  d->_cg180 = (d->AS || d->_pre_AP) && d->_pre_PVARP_Elapsed;
  d->_g182 = d->_g180 && !d->_cg180;
  d->_cg182 = d->_FSM_Rev4_local_tAVI >= d->AVI_CONFIG;
  d->_g183 = d->_g182 && d->_cg182;
  if (d->_g183) {
    d->_FSM_Rev4_local__Atrig10 = 1;
  }
  d->_cg166 = d->_FSM_Rev4_local__Atrig10;
  d->_g164 = d->_g155 && d->_cg164 || d->_g282 && d->_cg166;
  d->_g176 = d->_pg166;
  d->_g170 = d->_pg165_e1;
  d->_g171_e2 = !(d->_g176 || d->_g170);
  d->_cg170 = (d->AS || d->_pre_AP) && d->_pre_PVARP_Elapsed;
  d->_cg176 = (d->AS || d->_pre_AP) && d->_pre_PVARP_Elapsed;
  d->_g172 = d->_g170 && !d->_cg170 || d->_g176 && !d->_cg176;
  d->_cg172 = d->_FSM_Rev4_local_tAVI < d->AVI_CONFIG;
  d->_g173 = d->_g172 && d->_cg172;
  if (d->_g173) {
    d->sleepT = (d->sleepT < (d->AVI_CONFIG - d->_FSM_Rev4_local_tAVI)) ? d->sleepT : (d->AVI_CONFIG - d->_FSM_Rev4_local_tAVI);
  }
  d->_cg173 = d->_FSM_Rev4_local__Atrig10;
  d->_g172 = d->_g172 && !d->_cg172;
  d->_cg174 = d->_FSM_Rev4_local__Atrig10;
  d->_g170 = d->_g170 && d->_cg170 || d->_g173 && d->_cg173 || d->_g172 && d->_cg174 || d->_g176 && d->_cg176;
  d->_g176 = !d->_g180;
  d->_g183 = d->_g180 && d->_cg180 || d->_g183;
  d->_g180 = (d->_g278 || d->_g164) && (d->_g171_e2 || d->_g170) && (d->_g176 || d->_g183) && (d->_g164 || d->_g170 || d->_g183);
  d->_cg184 = (d->AS || d->_pre_AP) && d->_pre_PVARP_Elapsed;
  d->_g181_e3 = d->_pg177;
  d->_cg187 = (d->AS || d->_pre_AP) && d->_pre_PVARP_Elapsed;
  d->_g181 = d->_GO || d->_g180 && d->_cg184 || d->_g181_e3 && d->_cg187;
  if (d->_g181) {
    d->_FSM_Rev4_local_tAVI = 0;
    d->_FSM_Rev4_local_tAVI = d->globalDeltaT;
    d->AVI_Elapsed = 0;
    d->_FSM_Rev4_local__Atrig10 = 0;
  }
  d->_cg162 = d->_FSM_Rev4_local__Atrig10;
  d->_g171 = d->_g181 && !d->_cg162 || d->_g282 && !d->_cg166;
  d->_cg167 = d->_FSM_Rev4_local_tAVI < d->AVI_CONFIG;
  d->_g165 = d->_g181 && d->_cg167;
  if (d->_g165) {
    d->sleepT = (d->sleepT < (d->AVI_CONFIG - d->_FSM_Rev4_local_tAVI)) ? d->sleepT : (d->AVI_CONFIG - d->_FSM_Rev4_local_tAVI);
  }
  d->_cg168 = d->_FSM_Rev4_local__Atrig10;
  d->_g165_e1 = d->_g165 && !d->_cg168 || d->_g173 && !d->_cg173;
  d->_g171_e2 = d->_g181 && !d->_cg167;
  d->_cg177 = d->_FSM_Rev4_local__Atrig10;
  d->_g166 = d->_g172 && !d->_cg174 || d->_g171_e2 && !d->_cg177;
  d->_g168 = d->_g181 || d->_g182 && !d->_cg182;
  d->_g173 = d->_g180 && !d->_cg184;
  if (d->_g173) {
    d->AVI_Elapsed = 1;
  }
  d->_g174 = d->_g181_e3 && !d->_cg187;
  if (d->_g174) {
    d->_FSM_Rev4_local_tAVI += d->deltaT;
  }
  d->_g177 = d->_g173 || d->_g174;
  d->_g182 = d->_pg225_e2;
  d->_g161 = !d->_g182;
  d->_cg194 = (d->VS || d->_pre_VP) && d->_pre_VRP_Elapsed;
  d->_g184 = d->_g182 && !d->_cg194;
  if (d->_g184) {
    d->_FSM_Rev4_local_tRI += d->deltaT;
  }
  d->_g187 = d->_pg198;
  d->_cg210 = (d->VS || d->_pre_VP) && d->_pre_VRP_Elapsed;
  d->_g185 = d->_g187 && !d->_cg210;
  d->_cg212 = d->_FSM_Rev4_local_tRI >= d->URI_CONFIG;
  d->_g188 = d->_g185 && d->_cg212;
  if (d->_g188) {
    d->_FSM_Rev4_local__Atrig11 = 1;
  }
  d->_cg196 = d->_FSM_Rev4_local__Atrig11;
  d->_g194 = d->_g182 && d->_cg194 || d->_g184 && d->_cg196;
  d->_g206 = d->_pg196;
  d->_g200 = d->_pg235;
  d->_g201_e2 = !(d->_g206 || d->_g200);
  d->_cg200 = (d->VS || d->_pre_VP) && d->_pre_VRP_Elapsed;
  d->_cg206 = (d->VS || d->_pre_VP) && d->_pre_VRP_Elapsed;
  d->_g202 = d->_g200 && !d->_cg200 || d->_g206 && !d->_cg206;
  d->_cg202 = d->_FSM_Rev4_local_tRI < d->URI_CONFIG;
  d->_g203 = d->_g202 && d->_cg202;
  if (d->_g203) {
    d->sleepT = (d->sleepT < (d->URI_CONFIG - d->_FSM_Rev4_local_tRI)) ? d->sleepT : (d->URI_CONFIG - d->_FSM_Rev4_local_tRI);
  }
  d->_cg203 = d->_FSM_Rev4_local__Atrig11;
  d->_g202 = d->_g202 && !d->_cg202;
  d->_cg204 = d->_FSM_Rev4_local__Atrig11;
  d->_g200 = d->_g200 && d->_cg200 || d->_g203 && d->_cg203 || d->_g202 && d->_cg204 || d->_g206 && d->_cg206;
  d->_g206 = !d->_g187;
  d->_g213 = d->_g187 && d->_cg210 || d->_g188;
  d->_g210 = (d->_g161 || d->_g194) && (d->_g201_e2 || d->_g200) && (d->_g206 || d->_g213) && (d->_g194 || d->_g200 || d->_g213);
  d->_cg214 = (d->VS || d->_pre_VP) && d->_pre_VRP_Elapsed;
  d->_g211 = d->_pg204;
  d->_g201 = !d->_g211;
  d->_cg218 = (d->VS || d->_pre_VP) && d->_pre_VRP_Elapsed;
  d->_g211_e3 = d->_g211 && !d->_cg218;
  if (d->_g211_e3) {
    d->_FSM_Rev4_local_tRI += d->deltaT;
  }
  d->_g195_e1 = d->_pg220;
  d->_cg234 = (d->VS || d->_pre_VP) && d->_pre_VRP_Elapsed;
  d->_g201_e2 = d->_g195_e1 && !d->_cg234;
  d->_cg236 = d->_FSM_Rev4_local_tRI >= d->LRI_CONFIG;
  d->_g195 = d->_g201_e2 && d->_cg236;
  if (d->_g195) {
    d->_FSM_Rev4_local__Atrig12 = 1;
  }
  d->_cg220 = d->_FSM_Rev4_local__Atrig12;
  d->_g218 = d->_g211 && d->_cg218 || d->_g211_e3 && d->_cg220;
  d->_g230 = d->_pg214;
  d->_g224 = d->_pg212;
  d->_g225_e2 = !(d->_g230 || d->_g224);
  d->_cg224 = (d->VS || d->_pre_VP) && d->_pre_VRP_Elapsed;
  d->_cg230 = (d->VS || d->_pre_VP) && d->_pre_VRP_Elapsed;
  d->_g226 = d->_g224 && !d->_cg224 || d->_g230 && !d->_cg230;
  d->_cg226 = d->_FSM_Rev4_local_tRI < d->LRI_CONFIG;
  d->_g227 = d->_g226 && d->_cg226;
  if (d->_g227) {
    d->sleepT = (d->sleepT < (d->LRI_CONFIG - d->_FSM_Rev4_local_tRI)) ? d->sleepT : (d->LRI_CONFIG - d->_FSM_Rev4_local_tRI);
  }
  d->_cg227 = d->_FSM_Rev4_local__Atrig12;
  d->_g226 = d->_g226 && !d->_cg226;
  d->_cg228 = d->_FSM_Rev4_local__Atrig12;
  d->_g230 = d->_g224 && d->_cg224 || d->_g227 && d->_cg227 || d->_g226 && d->_cg228 || d->_g230 && d->_cg230;
  d->_g224 = !d->_g195_e1;
  d->_g237 = d->_g195_e1 && d->_cg234 || d->_g195;
  d->_g234 = (d->_g201 || d->_g218) && (d->_g225_e2 || d->_g230) && (d->_g224 || d->_g237) && (d->_g218 || d->_g230 || d->_g237);
  d->_cg238 = (d->VS || d->_pre_VP) && d->_pre_VRP_Elapsed;
  d->_g219_e1 = d->_pg231;
  d->_cg241 = (d->VS || d->_pre_VP) && d->_pre_VRP_Elapsed;
  d->_g219 = d->_GO || d->_g210 && d->_cg214 || d->_g234 && d->_cg238 || d->_g219_e1 && d->_cg241;
  if (d->_g219) {
    d->_FSM_Rev4_local_tRI = 0;
    d->_FSM_Rev4_local_tRI = d->globalDeltaT;
    d->URI_Elapsed = 0;
    d->LRI_Elapsed = 0;
    d->_FSM_Rev4_local__Atrig11 = 0;
  }
  d->_cg192 = d->_FSM_Rev4_local__Atrig11;
  d->_g225_e2 = d->_g219 && !d->_cg192 || d->_g184 && !d->_cg196;
  d->_cg197 = d->_FSM_Rev4_local_tRI < d->URI_CONFIG;
  d->_g235_e3 = d->_g219 && d->_cg197;
  if (d->_g235_e3) {
    d->sleepT = (d->sleepT < (d->URI_CONFIG - d->_FSM_Rev4_local_tRI)) ? d->sleepT : (d->URI_CONFIG - d->_FSM_Rev4_local_tRI);
  }
  d->_cg198 = d->_FSM_Rev4_local__Atrig11;
  d->_g235 = d->_g235_e3 && !d->_cg198 || d->_g203 && !d->_cg203;
  d->_g225 = d->_g219 && !d->_cg197;
  d->_cg207 = d->_FSM_Rev4_local__Atrig11;
  d->_g196 = d->_g202 && !d->_cg204 || d->_g225 && !d->_cg207;
  d->_g198 = d->_g219 || d->_g185 && !d->_cg212;
  d->_g203 = d->_g210 && !d->_cg214;
  if (d->_g203) {
    d->URI_Elapsed = 1;
    d->_FSM_Rev4_local__Atrig12 = 0;
  }
  d->_cg216 = d->_FSM_Rev4_local__Atrig12;
  d->_g204 = d->_g203 && !d->_cg216 || d->_g211_e3 && !d->_cg220;
  d->_cg221 = d->_FSM_Rev4_local_tRI < d->LRI_CONFIG;
  d->_g207 = d->_g203 && d->_cg221;
  if (d->_g207) {
    d->sleepT = (d->sleepT < (d->LRI_CONFIG - d->_FSM_Rev4_local_tRI)) ? d->sleepT : (d->LRI_CONFIG - d->_FSM_Rev4_local_tRI);
  }
  d->_cg222 = d->_FSM_Rev4_local__Atrig12;
  d->_g212 = d->_g207 && !d->_cg222 || d->_g227 && !d->_cg227;
  d->_g191 = d->_g203 && !d->_cg221;
  d->_cg231 = d->_FSM_Rev4_local__Atrig12;
  d->_g214 = d->_g226 && !d->_cg228 || d->_g191 && !d->_cg231;
  d->_g220 = d->_g203 || d->_g201_e2 && !d->_cg236;
  d->_g222 = d->_g234 && !d->_cg238;
  if (d->_g222) {
    d->LRI_Elapsed = 1;
  }
  d->_g227 = d->_g219_e1 && !d->_cg241;
  if (d->_g227) {
    d->_FSM_Rev4_local_tRI += d->deltaT;
  }
  d->_g231 = d->_g222 || d->_g227;
  d->_g228 = d->_pg215;
  d->_g215 = d->_GO || d->_g228;
  if (d->_g215) {
    d->VP = 0;
    d->AP = 0;
  }
  d->_g236 = d->_pg242;
  d->_cg250 = d->LRI_Elapsed;
  d->_g238 = d->_g236 && !d->_cg250;
  d->_cg252 = d->URI_Elapsed && d->AVI_Elapsed;
  d->_g241 = d->_g236 && d->_cg250 || d->_g238 && d->_cg252;
  if (d->_g241) {
    d->VP |= 1;
  }
  d->_g242 = d->_GO || d->_g241 || d->_g238 && !d->_cg252;
  d->_g239 = d->_pg250;
  d->_cg256 = d->AEI_Elapsed;
  d->_g266 = d->_g239 && d->_cg256;
  if (d->_g266) {
    d->AP |= 1;
  }
  d->_g250 = d->_GO || d->_g266 || d->_g239 && !d->_cg256;
  if (d->_g98) {
    d->_reg_VRP_Elapsed = d->VRP_Elapsed;
  }
  d->_reg_VP = d->VP;
  if (d->_g154) {
    d->_reg_PVARP_Elapsed = d->PVARP_Elapsed;
  }
  if (d->_g158) {
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
  d->_reg_PVARP_Elapsed = 0;
  d->_reg_AP = 0;
  d->_FSM_Rev4_local__region0_PVARP_tPVARP = 0;
  d->_FSM_Rev4_local__region1_VRP_tVRP = 0;
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
  d->_pg98 = 0;
  d->_pg151_e2 = 0;
  d->_pg134 = 0;
  d->_pg125 = 0;
  d->_pg123 = 0;
  d->_pg139 = 0;
  d->_pg118 = 0;
  d->_pg152 = 0;
  d->_pg154 = 0;
  d->_pg158 = 0;
  d->_pg171 = 0;
  d->_pg168 = 0;
  d->_pg166 = 0;
  d->_pg165_e1 = 0;
  d->_pg177 = 0;
  d->_pg225_e2 = 0;
  d->_pg198 = 0;
  d->_pg196 = 0;
  d->_pg235 = 0;
  d->_pg204 = 0;
  d->_pg220 = 0;
  d->_pg214 = 0;
  d->_pg212 = 0;
  d->_pg231 = 0;
  d->_pg215 = 0;
  d->_pg242 = 0;
  d->_pg250 = 0;
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
  d->_pg98 = d->_g98;
  d->_pg151_e2 = d->_g151_e2;
  d->_pg134 = d->_g134;
  d->_pg125 = d->_g125;
  d->_pg123 = d->_g123;
  d->_pg139 = d->_g139;
  d->_pg118 = d->_g118;
  d->_pg152 = d->_g152;
  d->_pg154 = d->_g154;
  d->_pg158 = d->_g158;
  d->_pg171 = d->_g171;
  d->_pg168 = d->_g168;
  d->_pg166 = d->_g166;
  d->_pg165_e1 = d->_g165_e1;
  d->_pg177 = d->_g177;
  d->_pg225_e2 = d->_g225_e2;
  d->_pg198 = d->_g198;
  d->_pg196 = d->_g196;
  d->_pg235 = d->_g235;
  d->_pg204 = d->_g204;
  d->_pg220 = d->_g220;
  d->_pg214 = d->_g214;
  d->_pg212 = d->_g212;
  d->_pg231 = d->_g231;
  d->_pg215 = d->_g215;
  d->_pg242 = d->_g242;
  d->_pg250 = d->_g250;
  d->_GO = 0;
}

