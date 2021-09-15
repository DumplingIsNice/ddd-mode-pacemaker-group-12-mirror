/*
 * fsm.h
 *
 *  Created on: 7 Sep 2021
 *      Author: Hao Lin
 */

#ifndef FSM_H_
#define FSM_H_

#include "project.h"

// Timing Parameters timeout values in milliseconds
#define	AVI_VALUE		30
#define	AEI_VALUE		80
#define	PVARP_VALUE		5
#define	VRP_VALUE		15
#define	LRI_VALUE		95
#define	URI_VALUE		90

// Macros
// Note: These values began as garbage values
// MUST RESET!!
#define tAVI      data._FSM_Rev4_local_tAVI
#define tAEI      data._FSM_Rev4_local__region2_rAEI_tAEI
#define tPVARP    data._FSM_Rev4_local__region0_PVARP_tPVARP
#define tVRP      data._FSM_Rev4_local__region1_VRP_tVRP
#define tRI       data._FSM_Rev4_local_tRI

// Note: These values are actually defined in reset(&data)
#define T_PVARP   data.D_T_PVARP
#define T_VRP     data.D_T_VRP
#define T_AEI     data.D_T_AEI
#define T_AVI     data.D_T_AVI
#define T_URI     data.D_T_URI
#define T_LRI     data.D_T_LRI
#define DELTA_T   1

/*
 * Automatically generated C code by
 * KIELER SCCharts - The Key to Efficient Modeling
 *
 * http://rtsys.informatik.uni-kiel.de/kieler
 */

typedef struct {
  char PVARP_Elapsed;
  char VRP_Elapsed;
  char AEI_Elapsed;
  char AVI_Elapsed;
  char URI_Elapsed;
  char LRI_Elapsed;
  double globalDeltaT;
  int AVI_CONFIG;
  int AEI_CONFIG;
  int PVARP_CONFIG;
  int VRP_CONFIG;
  int LRI_CONFIG;
  int URI_CONFIG;
  double deltaT;
  double sleepT;
  char VS;
  char AS;
  char VP;
  char AP;
  char _reg_VRP_Elapsed;
  char _pre_VRP_Elapsed;
  char _reg_VP;
  char _pre_VP;
  char _reg_VS;
  char _pre_VS;
  char _reg_PVARP_Elapsed;
  char _pre_PVARP_Elapsed;
  char _reg_AP;
  char _pre_AP;
  char _reg_AS;
  char _pre_AS;
  double _FSM_Rev4_local__region0_PVARP_tPVARP;
  double _FSM_Rev4_local__region1_VRP_tVRP;
  double _FSM_Rev4_local__region2_rAEI_tAEI;
  char _FSM_Rev4_local__CFSterm;
  char _FSM_Rev4_local__Atrig;
  char _FSM_Rev4_local__Atrig1;
  char _FSM_Rev4_local__Atrig2;
  char _FSM_Rev4_local__Atrig3;
  char _FSM_Rev4_local__Atrig4;
  char _FSM_Rev4_local__Atrig5;
  char _FSM_Rev4_local__Atrig6;
  char _FSM_Rev4_local__Atrig7;
  char _FSM_Rev4_local__Atrig8;
  char _FSM_Rev4_local__Atrig9;
  char _FSM_Rev4_local__Atrig10;
  char _FSM_Rev4_local__Atrig11;
  char _FSM_Rev4_local__Atrig12;
  char _FSM_Rev4_local__Atrig13;
  char _FSM_Rev4_local__Atrig14;
  char _FSM_Rev4_local__Atrig15;
  double _FSM_Rev4_local_tAVI;
  char _FSM_Rev4_local__Atrig16;
  char _FSM_Rev4_local__Atrig17;
  char _FSM_Rev4_local__Atrig18;
  char _FSM_Rev4_local__Atrig19;
  char _FSM_Rev4_local__Atrig20;
  double _FSM_Rev4_local_tRI;
  char _FSM_Rev4_local__Atrig21;
  char _FSM_Rev4_local__Atrig22;
  char _FSM_Rev4_local__Atrig23;
  char _FSM_Rev4_local__Atrig24;
  char _g4;
  char _g6;
  char _g7;
  char _g8;
  char _g10;
  char _g12;
  char _g13;
  char _g14;
  char _g15;
  char _g16;
  char _g18;
  char _g19;
  char _g22;
  char _g23;
  char _g24;
  char _g25;
  char _g28;
  char _g29;
  char _g32;
  char _g33;
  char _g34;
  char _g35;
  char _g36;
  char _g37;
  char _g38;
  char _g41;
  char _g42;
  char _g44;
  char _g46;
  char _g47;
  char _g48;
  char _g49;
  char _g50;
  char _g52;
  char _g53;
  char _g56;
  char _g57;
  char _g58;
  char _g61;
  char _g64;
  char _g65;
  char _g67;
  char _g69;
  char _g70;
  char _g71;
  char _g72;
  char _g73;
  char _g75;
  char _g76;
  char _g79;
  char _g80;
  char _g81;
  char _g82;
  char _g85;
  char _g86;
  char _g89;
  char _g90;
  char _g91;
  char _g92;
  char _g93;
  char _g94;
  char _g95;
  char _g98;
  char _g99;
  char _g101;
  char _g103;
  char _g104;
  char _g105;
  char _g106;
  char _g107;
  char _g109;
  char _g110;
  char _g113;
  char _g114;
  char _g115;
  char _g118;
  char _g120;
  char _g121;
  char _g122;
  char _g124;
  char _g126;
  char _g127;
  char _g128;
  char _g129;
  char _g130;
  char _g132;
  char _g133;
  char _g136;
  char _g137;
  char _g138;
  char _g139;
  char _g140;
  char _g141;
  char _g142;
  char _g145;
  char _g146;
  char _g149;
  char _g150;
  char _g151;
  char _g152;
  char _g153;
  char _g154;
  char _g155;
  char _g158;
  char _g159;
  char _g162;
  char _g163;
  char _g164;
  char _g165;
  char _g168;
  char _g169;
  char _g172;
  char _g173;
  char _g174;
  char _g175;
  char _g176;
  char _g177;
  char _g178;
  char _g179;
  char _g180;
  char _g183;
  char _g186;
  char _g187;
  char _g188;
  char _g190;
  char _g192;
  char _g193;
  char _g194;
  char _g195;
  char _g196;
  char _g198;
  char _g199;
  char _g202;
  char _g203;
  char _g204;
  char _g205;
  char _g206;
  char _g207;
  char _g208;
  char _g209;
  char _g210;
  char _g211;
  char _g212;
  char _g213;
  char _g215;
  char _g216;
  char _g217;
  char _g218;
  char _g221;
  char _g222;
  char _g223;
  char _g225;
  char _g227;
  char _g228;
  char _g229;
  char _g230;
  char _g231;
  char _g233;
  char _g234;
  char _g237;
  char _g238;
  char _g239;
  char _g240;
  char _g241;
  char _g242;
  char _g243;
  char _g244;
  char _g245;
  char _g246;
  char _g247;
  char _g249;
  char _g250;
  char _g251;
  char _g254;
  char _g257;
  char _g258;
  char _g259;
  char _g261;
  char _g263;
  char _g264;
  char _g265;
  char _g266;
  char _g267;
  char _g269;
  char _g270;
  char _g273;
  char _g274;
  char _g275;
  char _g276;
  char _g277;
  char _g278;
  char _g279;
  char _g280;
  char _g281;
  char _g284;
  char _g285;
  char _g286;
  char _g288;
  char _g290;
  char _g291;
  char _g292;
  char _g293;
  char _g294;
  char _g296;
  char _g297;
  char _g300;
  char _g301;
  char _g302;
  char _g303;
  char _g304;
  char _g305;
  char _g308;
  char _g309;
  char _g310;
  char _g312;
  char _g314;
  char _g315;
  char _g316;
  char _g317;
  char _g318;
  char _g320;
  char _g321;
  char _g324;
  char _g325;
  char _g326;
  char _g327;
  char _g328;
  char _g329;
  char _g331;
  char _g332;
  char _g356;
  char _g360;
  char _g368;
  char _g372;
  char _g376;
  char _g380;
  char _GO;
  char _cg37;
  char _cg5;
  char _cg7;
  char _cg9;
  char _cg10;
  char _cg14;
  char _cg13;
  char _cg16;
  char _cg19;
  char _cg22;
  char _cg26;
  char _cg28;
  char _cg35;
  char _cg32;
  char _cg39;
  char _cg41;
  char _cg43;
  char _cg44;
  char _cg48;
  char _cg47;
  char _cg50;
  char _cg53;
  char _cg56;
  char _cg94;
  char _cg62;
  char _cg64;
  char _cg66;
  char _cg67;
  char _cg71;
  char _cg70;
  char _cg73;
  char _cg76;
  char _cg79;
  char _cg83;
  char _cg85;
  char _cg92;
  char _cg89;
  char _cg96;
  char _cg98;
  char _cg100;
  char _cg101;
  char _cg105;
  char _cg104;
  char _cg107;
  char _cg110;
  char _cg113;
  char _cg154;
  char _cg179;
  char _cg119;
  char _cg121;
  char _cg123;
  char _cg124;
  char _cg128;
  char _cg127;
  char _cg130;
  char _cg133;
  char _cg139;
  char _cg136;
  char _cg141;
  char _cg180;
  char _cg143;
  char _cg145;
  char _cg152;
  char _cg149;
  char _cg156;
  char _cg158;
  char _cg162;
  char _cg166;
  char _cg168;
  char _cg177;
  char _cg172;
  char _cg175;
  char _cg210;
  char _cg215;
  char _cg243;
  char _cg249;
  char _cg184;
  char _cg188;
  char _cg186;
  char _cg189;
  char _cg190;
  char _cg195;
  char _cg192;
  char _cg196;
  char _cg198;
  char _cg194;
  char _cg199;
  char _cg208;
  char _cg202;
  char _cg204;
  char _cg206;
  char _cg211;
  char _cg217;
  char _cg219;
  char _cg223;
  char _cg221;
  char _cg224;
  char _cg225;
  char _cg230;
  char _cg227;
  char _cg231;
  char _cg233;
  char _cg229;
  char _cg234;
  char _cg241;
  char _cg237;
  char _cg239;
  char _cg244;
  char _cg279;
  char _cg304;
  char _cg328;
  char _cg331;
  char _cg255;
  char _cg259;
  char _cg257;
  char _cg260;
  char _cg261;
  char _cg266;
  char _cg263;
  char _cg267;
  char _cg269;
  char _cg265;
  char _cg270;
  char _cg277;
  char _cg273;
  char _cg275;
  char _cg280;
  char _cg282;
  char _cg286;
  char _cg284;
  char _cg287;
  char _cg288;
  char _cg293;
  char _cg290;
  char _cg294;
  char _cg296;
  char _cg292;
  char _cg297;
  char _cg302;
  char _cg300;
  char _cg306;
  char _cg310;
  char _cg308;
  char _cg311;
  char _cg312;
  char _cg317;
  char _cg314;
  char _cg318;
  char _cg320;
  char _cg316;
  char _cg321;
  char _cg326;
  char _cg324;
  char _cg342;
  char _cg340;
  char _cg346;
  char _g8_e1;
  char _g15_e2;
  char _g23_e3;
  char _g29_e1;
  char _g34_e2;
  char _g42_e1;
  char _g49_e2;
  char _g57_e3;
  char _g65_e1;
  char _g72_e2;
  char _g80_e3;
  char _g86_e1;
  char _g91_e2;
  char _g99_e1;
  char _g106_e2;
  char _g114_e3;
  char _g122_e1;
  char _g129_e2;
  char _g138_e3;
  char _g146_e1;
  char _g151_e2;
  char _g159_e1;
  char _g163_e2;
  char _g169_e1;
  char _g174_e2;
  char _g187_e1;
  char _g193_e2;
  char _g203_e3;
  char _g222_e1;
  char _g228_e2;
  char _g238_e3;
  char _g258_e1;
  char _g264_e2;
  char _g274_e3;
  char _g285_e1;
  char _g291_e2;
  char _g301_e3;
  char _g309_e1;
  char _g315_e2;
  char _g325_e3;
  char _TERM;
  char _pg57_e3;
  char _pg49_e2;
  char _pg6;
  char _pg16;
  char _pg10;
  char _pg19;
  char _pg57;
  char _pg25;
  char _pg35;
  char _pg58;
  char _pg114_e3;
  char _pg99;
  char _pg86_e1;
  char _pg76;
  char _pg67;
  char _pg73;
  char _pg114;
  char _pg82;
  char _pg92;
  char _pg115;
  char _pg136;
  char _pg105;
  char _pg129;
  char _pg138;
  char _pg151;
  char _pg122_e1;
  char _pg138_e3;
  char _pg179;
  char _pg169_e1;
  char _pg133;
  char _pg120;
  char _pg124;
  char _pg130;
  char _pg152;
  char _pg228;
  char _pg188;
  char _pg141;
  char _pg222_e1;
  char _pg228_e2;
  char _pg210;
  char _pg212;
  char _pg223;
  char _pg211;
  char _pg216;
  char _pg241;
  char _pg325_e3;
  char _pg266;
  char _pg259;
  char _pg309;
  char _pg267;
  char _pg288;
  char _pg286;
  char _pg254;
  char _pg297;
  char _pg304;
  char _pg280;
  char _pg281;
  char _pg317;
  char _pg318;
  char _pg331;
  char _pg356;
} TickData;

void reset(TickData* d);
void logic(TickData* d);
void tick(TickData* d);

// Initial state for fsm
void data_init(TickData* p_data);
// Custom input reset
void reset_inputs(TickData* d);
// Logs input value(s)
void handle_inputs(TickData* d);
// Logs output value(s)
void handle_outputs(TickData* d);

#endif /* FSM_H_ */