/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030dd700; name: FUN_030dd700
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_030dd700(float param_1,float param_2,float *param_3,float *param_4,long param_5,
                 undefined1 (*param_6) [16],long param_7,long param_8,float *param_9,
                 undefined4 *param_10,long param_11,long param_12,long param_13,undefined1 *param_14
                 )

{
  long lVar1;
  byte bVar2;
  ushort uVar3;
  undefined2 uVar4;
  undefined1 (*pauVar5) [16];
  undefined1 auVar6 [14];
  undefined1 auVar7 [14];
  ulong uVar8;
  int iVar9;
  long lVar10;
  undefined1 (*pauVar11) [16];
  float *pfVar12;
  long lVar13;
  float fVar14;
  float fVar15;
  float fVar24;
  float fVar26;
  float fVar27;
  undefined1 auVar16 [16];
  float fVar25;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  float fVar31;
  float fVar35;
  float fVar37;
  float fVar40;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  float fVar36;
  float fVar38;
  float fVar39;
  undefined1 auVar34 [16];
  float fVar41;
  int iVar42;
  float fVar43;
  float fVar48;
  int iVar49;
  float fVar50;
  float fVar51;
  undefined1 auVar44 [16];
  float fVar52;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined8 uVar53;
  float fVar59;
  float fVar60;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  float fVar61;
  float fVar62;
  undefined8 uVar63;
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  float fVar72;
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  float fVar73;
  float fVar74;
  float fVar75;
  undefined8 uVar76;
  float fVar82;
  float fVar84;
  float fVar85;
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  float fVar83;
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  float fVar86;
  float fVar87;
  undefined8 uVar88;
  undefined1 auVar89 [16];
  float fVar92;
  undefined1 auVar90 [16];
  float fVar93;
  undefined1 auVar91 [16];
  float fVar94;
  float fVar95;
  float fVar102;
  float fVar104;
  float fVar105;
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  float fVar103;
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  float fVar106;
  float fVar108;
  float fVar109;
  float fVar110;
  undefined1 auVar107 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 local_170 [16];
  undefined1 auStack_160 [16];
  undefined1 local_150 [16];
  undefined8 local_140;
  undefined8 uStack_138;
  undefined1 local_130 [16];
  undefined1 auStack_120 [16];
  undefined1 local_110 [16];
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  float local_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  
  *param_14 = 1;
  auVar16 = NEON_fmov(0xbf800000,4);
  fVar14 = *param_9 + auVar16._0_4_;
  fVar24 = param_9[1] + auVar16._4_4_;
  fVar27 = param_9[2] + auVar16._8_4_;
  fVar29 = param_9[3] + auVar16._12_4_;
  fVar106 = *param_3 + param_3[0xc] * fVar14;
  fVar108 = param_3[1] + param_3[0xd] * fVar24;
  fVar109 = param_3[2] + param_3[0xe] * fVar27;
  fVar110 = param_3[3] + param_3[0xf] * fVar29;
  fVar73 = param_4[4] + fVar14 * param_4[0x10];
  fVar82 = param_4[5] + fVar24 * param_4[0x11];
  fVar84 = param_4[6] + fVar27 * param_4[0x12];
  fVar85 = param_4[7] + fVar29 * param_4[0x13];
  fVar15 = *param_4 + fVar14 * param_4[0xc];
  fVar25 = param_4[1] + fVar24 * param_4[0xd];
  fVar28 = param_4[2] + fVar27 * param_4[0xe];
  fVar30 = param_4[3] + fVar29 * param_4[0xf];
  fVar94 = param_3[4] + fVar14 * param_3[0x10];
  fVar102 = param_3[5] + fVar24 * param_3[0x11];
  fVar104 = param_3[6] + fVar27 * param_3[0x12];
  fVar105 = param_3[7] + fVar29 * param_3[0x13];
  auVar112._0_8_ = CONCAT44(fVar108 * param_2,fVar106 * param_2);
  auVar112._8_4_ = fVar109 * param_2;
  auVar112._12_4_ = fVar110 * param_2;
  fVar14 = param_2 * 0.5;
  local_e0 = fVar15 * param_2 + *(float *)param_6[2];
  fStack_dc = fVar25 * param_2 + *(float *)(param_6[2] + 4);
  fStack_d8 = fVar28 * param_2 + *(float *)(param_6[2] + 8);
  fStack_d4 = fVar30 * param_2 + *(float *)(param_6[2] + 0xc);
  uStack_f8 = auVar112._8_8_;
  auVar64._0_4_ = fVar94 * fVar14;
  auVar64._4_4_ = fVar102 * fVar14;
  auVar64._8_4_ = fVar104 * fVar14;
  auVar67._0_4_ = fVar73 * fVar14;
  auVar67._4_4_ = fVar82 * fVar14;
  auVar67._8_4_ = fVar84 * fVar14;
  auVar64._12_4_ = 0x3f800000;
  auVar67._12_4_ = 0x3f800000;
  auVar77._8_8_ = _UNK_03889108;
  auVar77._0_8_ = _DAT_03889100;
  auVar113._0_4_ = -*(float *)param_6[3];
  auVar113._4_4_ = -*(float *)(param_6[3] + 4);
  auVar113._8_4_ = -*(float *)(param_6[3] + 8);
  auVar54._0_4_ = -*(float *)param_6[4];
  auVar54._4_4_ = -*(float *)(param_6[4] + 4);
  auVar54._8_4_ = -*(float *)(param_6[4] + 8);
  auVar54._12_4_ = *(undefined4 *)(param_6[4] + 0xc);
  auVar89 = a64_TBL(ZEXT816(0),auVar67,auVar77);
  auVar113._12_4_ = *(undefined4 *)(param_6[3] + 0xc);
  auVar96._8_8_ = _UNK_03888d78;
  auVar96._0_8_ = _DAT_03888d70;
  auVar107 = a64_TBL(ZEXT816(0),auVar64,auVar96);
  auVar65 = a64_TBL(ZEXT816(0),auVar64,auVar77);
  auVar16 = a64_TBL(ZEXT816(0),auVar67,auVar96);
  auVar78._8_8_ = _UNK_03888e28;
  auVar78._0_8_ = _DAT_03888e20;
  auVar97._8_8_ = _UNK_038890f8;
  auVar97._0_8_ = _DAT_038890f0;
  auVar111 = a64_TBL(ZEXT816(0),auVar113,auVar97);
  auVar44 = a64_TBL(ZEXT816(0),auVar113,auVar78);
  auVar98 = a64_TBL(ZEXT816(0),auVar54,auVar97);
  auVar55 = a64_TBL(ZEXT816(0),auVar54,auVar78);
  auVar56._0_4_ = auVar44._0_4_ * auVar65._0_4_ - auVar111._0_4_ * auVar107._0_4_;
  auVar56._4_4_ = auVar44._4_4_ * auVar65._4_4_ - auVar111._4_4_ * auVar107._4_4_;
  auVar56._8_4_ = auVar44._8_4_ * auVar65._8_4_ - auVar111._8_4_ * auVar107._8_4_;
  auVar56._12_4_ = auVar44._12_4_ * auVar65._12_4_ - auVar111._12_4_ * auVar107._12_4_;
  auVar66._8_8_ = _UNK_038895d8;
  auVar66._0_8_ = _DAT_038895d0;
  auVar79._0_4_ = auVar55._0_4_ * auVar89._0_4_ - auVar98._0_4_ * auVar16._0_4_;
  auVar79._4_4_ = auVar55._4_4_ * auVar89._4_4_ - auVar98._4_4_ * auVar16._4_4_;
  auVar79._8_4_ = auVar55._8_4_ * auVar89._8_4_ - auVar98._8_4_ * auVar16._8_4_;
  auVar79._12_4_ = auVar55._12_4_ * auVar89._12_4_ - auVar98._12_4_ * auVar16._12_4_;
  auVar57 = a64_TBL(ZEXT816(0),auVar56,auVar66);
  auVar67 = a64_TBL(ZEXT816(0),auVar79,auVar66);
  fVar52 = auVar57._12_4_ - (auVar44._12_4_ * auVar107._12_4_ + auVar111._12_4_ * auVar65._12_4_);
  fVar40 = auVar67._12_4_ - (auVar55._12_4_ * auVar16._12_4_ + auVar98._12_4_ * auVar89._12_4_);
  fVar41 = -(auVar57._0_4_ - (auVar44._0_4_ * auVar107._0_4_ + auVar111._0_4_ * auVar65._0_4_));
  fVar48 = -(auVar57._4_4_ - (auVar44._4_4_ * auVar107._4_4_ + auVar111._4_4_ * auVar65._4_4_));
  fVar51 = -(auVar57._8_4_ - (auVar44._8_4_ * auVar107._8_4_ + auVar111._8_4_ * auVar65._8_4_));
  fVar27 = -(auVar67._0_4_ - (auVar55._0_4_ * auVar16._0_4_ + auVar98._0_4_ * auVar89._0_4_));
  fVar29 = -(auVar67._4_4_ - (auVar55._4_4_ * auVar16._4_4_ + auVar98._4_4_ * auVar89._4_4_));
  fVar37 = -(auVar67._8_4_ - (auVar55._8_4_ * auVar16._8_4_ + auVar98._8_4_ * auVar89._8_4_));
  auVar111._0_4_ = fVar41 * fVar41;
  auVar111._4_4_ = fVar48 * fVar48;
  auVar111._8_4_ = fVar51 * fVar51;
  auVar111._12_4_ = fVar52 * fVar52;
  auVar16 = NEON_ext(auVar111,auVar111,8,1);
  auVar68._0_4_ = fVar27 * fVar27;
  auVar68._4_4_ = fVar29 * fVar29;
  auVar68._8_4_ = fVar37 * fVar37;
  auVar68._12_4_ = fVar40 * fVar40;
  auVar44 = NEON_ext(auVar68,auVar68,8,1);
  fVar14 = auVar16._0_4_ + auVar16._4_4_;
  fVar24 = auVar44._0_4_ + auVar44._4_4_;
  uVar53 = CONCAT44(auVar111._0_4_ + auVar111._4_4_ + fVar14,
                    auVar111._0_4_ + auVar111._4_4_ + fVar14);
  uVar63 = CONCAT44(auVar68._0_4_ + auVar68._4_4_ + fVar24,auVar68._0_4_ + auVar68._4_4_ + fVar24);
  uVar76 = NEON_frsqrte(uVar53,4);
  uVar88 = NEON_frsqrte(uVar63,4);
  fVar14 = (float)uVar76;
  fVar24 = (float)((ulong)uVar76 >> 0x20);
  fVar86 = (float)uVar88;
  fVar92 = (float)((ulong)uVar88 >> 0x20);
  uVar76 = NEON_frsqrts(uVar53,CONCAT44(fVar24 * fVar24,fVar14 * fVar14),4);
  uVar88 = NEON_frsqrts(uVar63,CONCAT44(fVar92 * fVar92,fVar86 * fVar86),4);
  fVar14 = fVar14 * (float)uVar76;
  fVar24 = fVar24 * (float)((ulong)uVar76 >> 0x20);
  fVar86 = fVar86 * (float)uVar88;
  fVar92 = fVar92 * (float)((ulong)uVar88 >> 0x20);
  uVar53 = NEON_frsqrts(uVar53,CONCAT44(fVar24 * fVar24,fVar14 * fVar14),4);
  uVar63 = NEON_frsqrts(uVar63,CONCAT44(fVar92 * fVar92,fVar86 * fVar86),4);
  fVar14 = (float)uVar53 * fVar14;
  fVar24 = (float)((ulong)uVar53 >> 0x20) * fVar24;
  fVar86 = (float)uVar63 * fVar86;
  fVar92 = (float)((ulong)uVar63 >> 0x20) * fVar92;
  auVar107._0_8_ = CONCAT44(fVar48 * fVar24,fVar41 * fVar14);
  auVar107._8_4_ = fVar51 * fVar14;
  auVar107._12_4_ = fVar52 * fVar24;
  auVar89._0_8_ = CONCAT44(fVar29 * fVar92,fVar27 * fVar86);
  auVar89._8_4_ = fVar37 * fVar86;
  auVar89._12_4_ = fVar40 * fVar92;
  uStack_c8 = auVar107._8_8_;
  uStack_e8 = auVar89._8_8_;
  local_100 = auVar112._0_8_;
  local_f0 = auVar89._0_8_;
  local_d0 = auVar107._0_8_;
  local_c0 = auVar112._0_8_;
  uStack_b8 = uStack_f8;
  FUN_032c9fc0(local_130,&local_d0);
  local_140 = CONCAT44(fStack_dc,local_e0);
  auVar44._8_4_ = fStack_d8;
  auVar44._0_8_ = local_140;
  auVar44._12_4_ = fStack_d4;
  uStack_138 = auVar44._8_8_;
  FUN_032c9fc0(local_170,&local_f0);
  auVar16 = *param_6;
  auVar44 = param_6[1];
  auVar57 = NEON_ext(auVar16,auVar16,8,1);
  auVar55._8_8_ = uStack_c8;
  auVar55._0_8_ = local_d0;
  fVar14 = auVar16._0_4_;
  fVar51 = (float)local_d0;
  fVar24 = auVar16._4_4_;
  fVar52 = (float)((ulong)local_d0 >> 0x20);
  fVar27 = auVar16._8_4_;
  fVar86 = (float)uStack_c8;
  fVar29 = auVar16._12_4_;
  fVar92 = (float)((ulong)uStack_c8 >> 0x20);
  auVar55 = NEON_ext(auVar55,auVar55,8,1);
  uVar63 = NEON_ext(local_d0,auVar55._0_8_,4,1);
  fVar72 = auVar55._4_4_ * auVar55._4_4_;
  uVar53 = NEON_ext(auVar16._0_8_,auVar57._0_8_,4,1);
  fVar74 = fVar14 * fVar51 + fVar24 * fVar52 + fVar27 * fVar86;
  fVar83 = fVar14 * fVar51 + fVar24 * fVar52 + fVar27 * fVar86;
  fVar95 = SUB164(ZEXT816(0xbf000000bf000000),0);
  fVar61 = fVar72 + fVar95;
  fVar26 = SUB164(ZEXT816(0xbf000000bf000000),4);
  fVar72 = fVar72 + fVar26;
  auVar16._8_8_ = uStack_e8;
  auVar16._0_8_ = local_f0;
  fVar37 = auVar44._0_4_;
  fVar36 = (float)local_f0;
  fVar40 = auVar44._4_4_;
  fVar43 = (float)((ulong)local_f0 >> 0x20);
  fVar41 = auVar44._8_4_;
  fVar50 = (float)uStack_e8;
  fVar48 = auVar44._12_4_;
  fVar39 = (float)((ulong)uStack_e8 >> 0x20);
  auVar90._0_4_ = fVar51 * (float)uVar53 - fVar14 * (float)uVar63;
  auVar90._4_4_ = fVar52 * (float)((ulong)uVar53 >> 0x20) - fVar24 * (float)((ulong)uVar63 >> 0x20);
  auVar90._8_4_ = fVar86 * fVar14 - fVar27 * fVar51;
  auVar90._12_4_ = fVar92 * fVar24 - fVar29 * fVar52;
  auVar55 = NEON_ext(auVar90,auVar90,4,1);
  auVar16 = NEON_ext(auVar16,auVar16,8,1);
  fVar87 = fVar37 * fVar36 + fVar40 * fVar43 + fVar41 * fVar50;
  fVar93 = fVar37 * fVar36 + fVar40 * fVar43 + fVar41 * fVar50;
  fVar103 = auVar16._4_4_ * auVar16._4_4_;
  uVar53 = NEON_ext(local_f0,auVar16._0_8_,4,1);
  fVar95 = fVar103 + fVar95;
  fVar103 = fVar103 + fVar26;
  fVar14 = fVar14 * fVar61 + fVar51 * fVar74 + auVar55._0_4_ * fVar92;
  fVar24 = fVar24 * fVar72 + fVar52 * fVar83 + auVar55._4_4_ * fVar92;
  fVar27 = fVar27 * fVar61 + fVar86 * fVar74 + auVar90._0_4_ * fVar92;
  fVar92 = fVar29 * fVar72 + fVar92 * fVar83 + auVar90._4_4_ * fVar92;
  iVar9 = 0;
  pauVar11 = param_6 + 0xe;
  pfVar12 = (float *)(param_5 + 0x20);
  auVar16 = NEON_ext(auVar44,auVar44,8,1);
  fVar51 = (float)local_100 + (fVar14 + fVar14) * fVar29;
  fVar52 = local_100._4_4_ + (fVar24 + fVar24) * fVar29;
  fVar86 = (float)uStack_f8 + (fVar27 + fVar27) * fVar29;
  fVar92 = uStack_f8._4_4_ + (fVar92 + fVar92) * fVar29;
  uVar63 = NEON_ext(auVar44._0_8_,auVar16._0_8_,4,1);
  auVar80._0_4_ = (float)uVar63 * fVar36 - fVar37 * (float)uVar53;
  auVar80._4_4_ = (float)((ulong)uVar63 >> 0x20) * fVar43 - fVar40 * (float)((ulong)uVar53 >> 0x20);
  auVar80._8_4_ = fVar37 * fVar50 - fVar41 * fVar36;
  auVar80._12_4_ = fVar40 * fVar39 - fVar48 * fVar43;
  auVar16 = NEON_ext(auVar80,auVar80,4,1);
  fVar14 = fVar37 * fVar95 + fVar36 * fVar87 + auVar16._0_4_ * fVar39;
  fVar24 = fVar40 * fVar103 + fVar43 * fVar93 + auVar16._4_4_ * fVar39;
  fVar27 = fVar41 * fVar95 + fVar50 * fVar87 + auVar80._0_4_ * fVar39;
  fVar29 = fVar48 * fVar103 + fVar39 * fVar93 + auVar80._4_4_ * fVar39;
  auVar98._0_4_ = (fVar14 + fVar14) * fVar48;
  auVar98._4_4_ = (fVar24 + fVar24) * fVar48;
  auVar98._8_4_ = (fVar27 + fVar27) * fVar48;
  auVar98._12_4_ = (fVar29 + fVar29) * fVar48;
  fVar14 = (float)local_140 + auVar98._0_4_;
  fVar24 = local_140._4_4_ + auVar98._4_4_;
  fVar27 = (float)uStack_138 + auVar98._8_4_;
  fVar29 = uStack_138._4_4_ + auVar98._12_4_;
  auVar65._0_4_ = fVar14 - fVar51;
  auVar65._4_4_ = fVar24 - fVar52;
  auVar65._8_4_ = fVar27 - fVar86;
  auVar65._12_4_ = fVar29 - fVar92;
  lVar13 = 0;
  auVar57 = auVar65;
  do {
    uVar3 = *(ushort *)(*pauVar11 + 10);
    fVar40 = (float)((uint)uVar3 << 0x10);
    uVar4 = *(undefined2 *)(*pauVar11 + 8);
    *(undefined1 *)(param_13 + lVar13) = 0;
    auVar6._2_12_ = auVar57._4_12_;
    auVar6._0_2_ = uVar4;
    fVar41 = (float)(auVar6._0_4_ << 0x10);
    auVar57 = ZEXT416((uint)fVar41);
    auVar7._2_12_ = auVar98._4_12_;
    auVar7._0_2_ = uVar3;
    fVar37 = (float)(auVar7._0_4_ << 0x10);
    if (fVar40 <= fVar41) {
      fVar37 = fVar41;
    }
    fVar48 = fVar37;
    if (1.0 < fVar37) {
      fVar48 = 1.0;
    }
    auVar98 = ZEXT816(0);
    if (0.0 <= fVar37) {
      auVar98 = ZEXT416((uint)fVar48);
    }
    lVar10 = lVar13 * 4;
    lVar1 = lVar13 + 1;
    *(undefined4 *)(param_11 + lVar10) = 0;
    *(int *)(param_12 + lVar10) = auVar98._0_4_;
    *(undefined4 *)(param_8 + lVar10) = 0x3f800000;
    *param_10 = (int)lVar1;
    if (7 < (byte)(*pauVar11)[0xd]) goto LAB_030ddba0;
    fVar41 = fVar41 * param_1;
    fVar37 = local_170._0_4_;
    fVar36 = local_170._4_4_;
    fVar39 = auStack_160._0_4_;
    fVar72 = auStack_160._4_4_;
    fVar48 = local_130._0_4_;
    fVar43 = local_130._4_4_;
    fVar50 = auStack_120._0_4_;
    fVar61 = auStack_120._4_4_;
    fVar87 = local_110._0_4_;
    fVar74 = local_110._4_4_;
    fVar93 = local_150._0_4_;
    fVar83 = local_150._4_4_;
    switch((*pauVar11)[0xd]) {
    case 0:
      *param_10 = (int)lVar13;
      return;
    case 1:
      auVar45._0_4_ = fVar51 - (float)local_100;
      auVar45._4_4_ = fVar52 - local_100._4_4_;
      auVar45._8_4_ = fVar86 - (float)uStack_f8;
      auVar45._12_4_ = fVar92 - uStack_f8._4_4_;
      auVar16 = *(undefined1 (*) [16])(&DAT_03aae430 + (long)iVar9 * 2);
      iVar9 = iVar9 + 1;
      auVar99._0_4_ = fVar14 - (float)local_140;
      auVar99._4_4_ = fVar24 - local_140._4_4_;
      auVar99._8_4_ = fVar27 - (float)uStack_138;
      auVar99._12_4_ = fVar29 - uStack_138._4_4_;
      auVar55 = NEON_ext(local_130,local_130,8,1);
      auVar44 = NEON_ext(auStack_120,auStack_120,8,1);
      auVar98 = NEON_ext(local_170,local_170,8,1);
      auVar112 = NEON_ext(auStack_160,auStack_160,8,1);
      auVar113 = NEON_ext(local_110,local_110,8,1);
      auVar67 = NEON_ext(local_150,local_150,8,1);
      auVar57 = NEON_ext(auVar16,auVar16,8,1);
      uVar53 = NEON_ext(auVar16._0_8_,auVar57._0_8_,4,1);
      auVar89 = NEON_ext(auVar45,auVar45,4,1);
      auVar57 = NEON_ext(auVar99,auVar99,4,1);
      fVar31 = (float)((ulong)uVar53 >> 0x20);
      fVar60 = auVar16._0_4_;
      fVar62 = auVar16._4_4_;
      fVar38 = auVar16._8_4_;
      fVar95 = (float)uVar53 * auVar45._0_4_ - fVar60 * auVar89._0_4_;
      fVar103 = fVar31 * auVar45._4_4_ - fVar62 * auVar89._4_4_;
      fVar26 = fVar60 * auVar45._8_4_ - fVar38 * auVar45._0_4_;
      fVar59 = fVar60 * auVar57._0_4_ - (float)uVar53 * auVar99._0_4_;
      fVar31 = fVar62 * auVar57._4_4_ - fVar31 * auVar99._4_4_;
      fVar35 = fVar38 * auVar99._0_4_ - fVar60 * auVar99._8_4_;
      auVar100._0_4_ = auVar65._0_4_ * fVar60;
      auVar100._4_4_ = auVar65._4_4_ * fVar62;
      auVar100._8_4_ = auVar65._8_4_ * fVar38;
      auVar100._12_4_ = auVar65._12_4_ * auVar16._12_4_;
      auVar89 = NEON_ext(auVar100,auVar100,8,1);
      auVar57._0_8_ =
           CONCAT44(auVar44._0_4_ * fVar95 + fVar50 * fVar103 + fVar61 * fVar26,
                    auVar55._0_4_ * fVar95 + fVar48 * fVar103 + fVar43 * fVar26);
      auVar57._8_4_ = auVar113._0_4_ * fVar95 + fVar87 * fVar103 + fVar74 * fVar26;
      auVar57._12_4_ = auVar113._4_4_ * fVar95 + fVar74 * fVar103 + auVar113._4_4_ * fVar26;
      auVar91._0_12_ = auVar16._0_12_;
      auVar91._12_4_ =
           fVar41 * *(float *)*pauVar11 +
           fVar40 * param_1 *
           ((auVar89._0_4_ + auVar100._0_4_ + auVar100._4_4_) - *(float *)*pauVar11);
      auVar98._0_8_ =
           CONCAT44(auVar112._0_4_ * fVar59 + fVar39 * fVar31 + fVar72 * fVar35,
                    auVar98._0_4_ * fVar59 + fVar37 * fVar31 + fVar36 * fVar35);
      auVar98._8_4_ = auVar67._0_4_ * fVar59 + fVar93 * fVar31 + fVar83 * fVar35;
      auVar98._12_4_ = auVar67._4_4_ * fVar59 + fVar83 * fVar31 + auVar67._4_4_ * fVar35;
      *(long *)(pfVar12 + -6) = auVar91._8_8_;
      *(long *)(pfVar12 + -8) = auVar16._0_8_;
      *(long *)(pfVar12 + -2) = auVar57._8_8_;
      *(undefined8 *)(pfVar12 + -4) = auVar57._0_8_;
      *(long *)(pfVar12 + 2) = auVar98._8_8_;
      *(undefined8 *)pfVar12 = auVar98._0_8_;
      break;
    case 2:
      auVar112 = NEON_ext(auStack_120,auStack_120,8,1);
      auVar57 = NEON_ext(local_130,local_130,8,1);
      auVar89 = NEON_ext(local_110,local_110,8,1);
      auVar98 = NEON_ext(local_170,local_170,8,1);
      auVar67 = NEON_ext(auStack_160,auStack_160,8,1);
      auVar69._0_4_ = *(float *)param_6[8] - (float)local_100;
      auVar69._4_4_ = *(float *)(param_6[8] + 4) - local_100._4_4_;
      auVar69._8_4_ = *(float *)(param_6[8] + 8) - (float)uStack_f8;
      auVar69._12_4_ = *(float *)(param_6[8] + 0xc) - uStack_f8._4_4_;
      auVar17._0_4_ = *(float *)param_6[8] - (float)local_140;
      auVar17._4_4_ = *(float *)(param_6[8] + 4) - local_140._4_4_;
      auVar17._8_4_ = *(float *)(param_6[8] + 8) - (float)uStack_138;
      auVar17._12_4_ = *(float *)(param_6[8] + 0xc) - uStack_138._4_4_;
      auVar44 = NEON_ext(auVar69,auVar69,4,1);
      auVar16 = param_6[((ulong)((byte)(*pauVar11)[0xc] >> 2) & 3) + 9];
      auVar55 = NEON_ext(auVar16,auVar16,8,1);
      auVar113 = NEON_ext(local_150,local_150,8,1);
      uVar53 = NEON_ext(auVar16._0_8_,auVar55._0_8_,4,1);
      fVar38 = auVar16._0_4_;
      fVar60 = auVar16._4_4_;
      fVar62 = auVar16._8_4_;
      fVar103 = (float)((ulong)uVar53 >> 0x20);
      auVar55 = NEON_ext(auVar17,auVar17,4,1);
      fVar59 = (float)uVar53 * auVar69._0_4_ - fVar38 * auVar44._0_4_;
      fVar31 = fVar103 * auVar69._4_4_ - fVar60 * auVar44._4_4_;
      fVar35 = fVar38 * auVar69._8_4_ - fVar62 * auVar69._0_4_;
      fVar95 = fVar38 * auVar55._0_4_ - (float)uVar53 * auVar17._0_4_;
      fVar103 = fVar60 * auVar55._4_4_ - fVar103 * auVar17._4_4_;
      fVar26 = fVar62 * auVar17._0_4_ - fVar38 * auVar17._8_4_;
      fVar43 = auVar57._0_4_ * fVar59 + fVar48 * fVar31 + fVar43 * fVar35;
      fVar50 = auVar112._0_4_ * fVar59 + fVar50 * fVar31 + fVar61 * fVar35;
      fVar61 = auVar89._0_4_ * fVar59 + fVar87 * fVar31 + fVar74 * fVar35;
      fVar74 = auVar89._4_4_ * fVar59 + fVar74 * fVar31 + auVar89._4_4_ * fVar35;
      fVar37 = auVar98._0_4_ * fVar95 + fVar37 * fVar103 + fVar36 * fVar26;
      fVar48 = auVar67._0_4_ * fVar95 + fVar39 * fVar103 + fVar72 * fVar26;
      auVar57._0_8_ = CONCAT44(fVar48,fVar37);
      auVar57._8_4_ = auVar113._0_4_ * fVar95 + fVar93 * fVar103 + fVar83 * fVar26;
      fVar36 = *(float *)(*pauVar11 + 4);
      auVar46._0_4_ = fVar106 * fVar38 + fVar15 * (0.0 - fVar38) + fVar94 * fVar43 + fVar73 * fVar37
      ;
      auVar46._4_4_ =
           fVar108 * fVar60 + fVar25 * (0.0 - fVar60) + fVar102 * fVar50 + fVar82 * fVar48;
      auVar46._8_4_ =
           fVar109 * fVar62 + fVar28 * (0.0 - fVar62) + fVar104 * fVar61 + fVar84 * auVar57._8_4_;
      auVar46._12_4_ =
           fVar110 * auVar16._12_4_ + fVar30 * (0.0 - auVar16._12_4_) +
           fVar105 * fVar74 +
           fVar85 * (auVar113._4_4_ * fVar95 + fVar83 * fVar103 + auVar113._4_4_ * fVar26);
      auVar44 = NEON_ext(auVar46,auVar46,8,1);
      fVar40 = fVar40 * (auVar46._0_4_ + auVar46._4_4_ + auVar44._0_4_);
      auVar101._0_12_ = auVar16._0_12_;
      auVar101._12_4_ = fVar41 * *(float *)*pauVar11 - fVar40;
      *(long *)(pfVar12 + -6) = auVar101._8_8_;
      *(long *)(pfVar12 + -8) = auVar16._0_8_;
      pfVar12[-2] = fVar61;
      pfVar12[-1] = fVar74;
      pfVar12[-4] = fVar43;
      pfVar12[-3] = fVar50;
      fVar40 = fVar41 * fVar36 - fVar40;
      auVar98 = ZEXT416((uint)fVar40);
      auVar57._12_4_ = fVar40;
      *(long *)(pfVar12 + 2) = auVar57._8_8_;
      *(undefined8 *)pfVar12 = auVar57._0_8_;
      break;
    case 3:
      auVar44 = NEON_ext(auStack_120,auStack_120,8,1);
      auVar112 = NEON_ext(auStack_160,auStack_160,8,1);
      auVar55 = NEON_ext(local_110,local_110,8,1);
      auVar16 = NEON_ext(local_130,local_130,8,1);
      auVar57 = NEON_ext(local_170,local_170,8,1);
      auVar67 = NEON_ext(local_150,local_150,8,1);
      pauVar5 = param_6 + ((ulong)((byte)(*pauVar11)[0xc] >> 2) & 3) + 9;
      fVar95 = *(float *)*pauVar5;
      fVar103 = *(float *)(*pauVar5 + 4);
      fVar26 = *(float *)(*pauVar5 + 8);
      fVar59 = -fVar95;
      fVar31 = -fVar103;
      fVar35 = -fVar26;
      fVar48 = auVar16._0_4_ * fVar26 + fVar48 * fVar95 + fVar43 * fVar103;
      fVar43 = auVar44._0_4_ * fVar26 + fVar50 * fVar95 + fVar61 * fVar103;
      fVar50 = auVar55._0_4_ * fVar26 + fVar87 * fVar95 + fVar74 * fVar103;
      fVar61 = auVar55._4_4_ * fVar26 + fVar74 * fVar95 + auVar55._4_4_ * fVar103;
      fVar37 = auVar57._0_4_ * fVar35 + fVar37 * fVar59 + fVar36 * fVar31;
      fVar36 = auVar112._0_4_ * fVar35 + fVar39 * fVar59 + fVar72 * fVar31;
      fVar39 = auVar67._0_4_ * fVar35 + fVar93 * fVar59 + fVar83 * fVar31;
      fVar72 = auVar67._4_4_ * fVar35 + fVar83 * fVar59 + auVar67._4_4_ * fVar31;
      fVar74 = *(float *)*pauVar11;
      fVar83 = *(float *)(*pauVar11 + 4);
      auVar70._0_4_ = fVar94 * fVar48 + fVar73 * fVar37;
      auVar70._4_4_ = fVar102 * fVar43 + fVar82 * fVar36;
      auVar70._8_4_ = fVar104 * fVar50 + fVar84 * fVar39;
      auVar70._12_4_ = fVar105 * fVar61 + fVar85 * fVar72;
      auVar16 = NEON_ext(auVar70,auVar70,8,1);
      pfVar12[-6] = 0.0;
      pfVar12[-5] = 0.0;
      pfVar12[-2] = fVar50;
      pfVar12[-1] = fVar61;
      pfVar12[-4] = fVar48;
      pfVar12[-3] = fVar43;
      pfVar12[2] = fVar39;
      pfVar12[3] = fVar72;
      *pfVar12 = fVar37;
      pfVar12[1] = fVar36;
      fVar40 = fVar40 * (auVar70._0_4_ + auVar70._4_4_ + auVar16._0_4_);
      pfVar12[-5] = fVar41 * fVar74 - fVar40;
      fVar41 = fVar41 * fVar83;
      auVar98 = ZEXT416((uint)fVar41);
      fVar41 = fVar41 - fVar40;
      auVar57 = ZEXT416((uint)fVar41);
      pfVar12[-8] = 0.0;
      pfVar12[-7] = 0.0;
      pfVar12[3] = fVar41;
      break;
    case 4:
      bVar2 = (*pauVar11)[0xc];
      fVar95 = 1.0;
      auVar16 = param_6[((ulong)(bVar2 >> 2) & 3) + 9];
      *(byte *)(param_13 + lVar13) = bVar2 & 2 | 1;
      if ((bVar2 & 1) != 0) {
        fVar95 = -1.0;
        *(undefined4 *)(param_8 + lVar13 * 4) = 0xbf800000;
      }
      auVar55 = NEON_ext(auVar16,auVar16,4,1);
      auVar47._0_4_ = *(float *)param_6[8] - (float)local_100;
      auVar47._4_4_ = *(float *)(param_6[8] + 4) - local_100._4_4_;
      auVar47._8_4_ = *(float *)(param_6[8] + 8) - (float)uStack_f8;
      auVar47._12_4_ = *(float *)(param_6[8] + 0xc) - uStack_f8._4_4_;
      auVar58._0_4_ = *(float *)param_6[0xc] - (float)local_140;
      auVar58._4_4_ = *(float *)(param_6[0xc] + 4) - local_140._4_4_;
      auVar58._8_4_ = *(float *)(param_6[0xc] + 8) - (float)uStack_138;
      auVar58._12_4_ = *(float *)(param_6[0xc] + 0xc) - uStack_138._4_4_;
      auVar44 = NEON_ext(auVar47,auVar47,4,1);
      fVar62 = auVar16._0_4_;
      fVar75 = auVar16._4_4_;
      fVar103 = auVar16._8_4_;
      fVar26 = auVar55._0_4_ * auVar47._0_4_ - fVar62 * auVar44._0_4_;
      fVar59 = auVar55._4_4_ * auVar47._4_4_ - fVar75 * auVar44._4_4_;
      fVar31 = fVar62 * auVar47._8_4_ - fVar103 * auVar47._0_4_;
      auVar44 = NEON_ext(auVar58,auVar58,4,1);
      fVar35 = fVar62 * auVar44._0_4_ - auVar55._0_4_ * auVar58._0_4_;
      fVar38 = fVar75 * auVar44._4_4_ - auVar55._4_4_ * auVar58._4_4_;
      fVar60 = fVar103 * auVar58._0_4_ - fVar62 * auVar58._8_4_;
      auVar55 = NEON_ext(auStack_120,auStack_120,8,1);
      auVar44 = NEON_ext(local_130,local_130,8,1);
      auVar57 = NEON_ext(local_110,local_110,8,1);
      fVar48 = auVar44._0_4_ * fVar26 + fVar48 * fVar59 + fVar43 * fVar31;
      fVar43 = auVar55._0_4_ * fVar26 + fVar50 * fVar59 + fVar61 * fVar31;
      fVar50 = auVar57._0_4_ * fVar26 + fVar87 * fVar59 + fVar74 * fVar31;
      fVar61 = auVar57._4_4_ * fVar26 + fVar74 * fVar59 + auVar57._4_4_ * fVar31;
      auVar55 = NEON_ext(auStack_160,auStack_160,8,1);
      auVar44 = NEON_ext(local_170,local_170,8,1);
      auVar57 = NEON_ext(local_150,local_150,8,1);
      fVar36 = auVar44._0_4_ * fVar35 + fVar37 * fVar38 + fVar36 * fVar60;
      fVar39 = auVar55._0_4_ * fVar35 + fVar39 * fVar38 + fVar72 * fVar60;
      fVar72 = auVar57._0_4_ * fVar35 + fVar93 * fVar38 + fVar83 * fVar60;
      auVar71._0_4_ = fVar106 * fVar62 + fVar15 * (0.0 - fVar62) + fVar94 * fVar48 + fVar73 * fVar36
      ;
      auVar71._4_4_ =
           fVar108 * fVar75 + fVar25 * (0.0 - fVar75) + fVar102 * fVar43 + fVar82 * fVar39;
      auVar71._8_4_ =
           fVar109 * fVar103 + fVar28 * (0.0 - fVar103) + fVar104 * fVar50 + fVar84 * fVar72;
      auVar71._12_4_ =
           fVar110 * auVar16._12_4_ + fVar30 * (0.0 - auVar16._12_4_) +
           fVar105 * fVar61 +
           fVar85 * (auVar57._4_4_ * fVar35 + fVar83 * fVar38 + auVar57._4_4_ * fVar60);
      auVar44 = NEON_ext(auVar71,auVar71,8,1);
      fVar74 = *(float *)(*pauVar11 + 4);
      fVar37 = param_1;
      if (0.0 <= fVar95 * *(float *)*pauVar11) {
        fVar37 = fVar41;
      }
      fVar40 = fVar40 * (auVar71._0_4_ + auVar71._4_4_ + auVar44._0_4_);
      auVar18._0_12_ = auVar16._0_12_;
      auVar18._12_4_ = *(float *)*pauVar11 * fVar37 - fVar40;
      *(long *)(pfVar12 + -6) = auVar18._8_8_;
      *(long *)(pfVar12 + -8) = auVar16._0_8_;
      pfVar12[-2] = fVar50;
      pfVar12[-1] = fVar61;
      pfVar12[-4] = fVar48;
      pfVar12[-3] = fVar43;
      fVar37 = param_1;
      if (fVar74 <= 0.0) {
        fVar37 = fVar41;
      }
      pfVar12[2] = fVar72;
      pfVar12[3] = fVar74 * fVar37 - fVar40;
      *pfVar12 = fVar36;
      pfVar12[1] = fVar39;
      goto LAB_030de4b8;
    case 5:
      *param_14 = 0;
      bVar2 = (*pauVar11)[0xc];
      *(byte *)(param_13 + lVar13) = bVar2 & 2 | 1;
      pauVar5 = param_6 + ((ulong)(bVar2 >> 2) & 3) + 9;
      fVar95 = *(float *)*pauVar5;
      fVar103 = *(float *)(*pauVar5 + 4);
      fVar26 = *(float *)(*pauVar5 + 8);
      fVar59 = 1.0;
      if ((bVar2 & 1) != 0) {
        fVar59 = -1.0;
        *(undefined4 *)(param_8 + lVar13 * 4) = 0xbf800000;
      }
      auVar55 = NEON_ext(auStack_120,auStack_120,8,1);
      auVar44 = NEON_ext(local_130,local_130,8,1);
      auVar57 = NEON_ext(local_170,local_170,8,1);
      auVar112 = NEON_ext(auStack_160,auStack_160,8,1);
      auVar67 = NEON_ext(local_110,local_110,8,1);
      fVar31 = -fVar95;
      fVar38 = -fVar103;
      fVar60 = -fVar26;
      auVar16 = NEON_ext(local_150,local_150,8,1);
      fVar62 = *(float *)*pauVar11;
      fVar75 = *(float *)(*pauVar11 + 4);
      fVar35 = *(float *)(param_7 + lVar10);
      fVar48 = auVar44._0_4_ * fVar26 + fVar48 * fVar95 + fVar43 * fVar103;
      fVar43 = auVar55._0_4_ * fVar26 + fVar50 * fVar95 + fVar61 * fVar103;
      fVar50 = auVar67._0_4_ * fVar26 + fVar87 * fVar95 + fVar74 * fVar103;
      fVar61 = auVar67._4_4_ * fVar26 + fVar74 * fVar95 + auVar67._4_4_ * fVar103;
      fVar37 = auVar57._0_4_ * fVar60 + fVar37 * fVar31 + fVar36 * fVar38;
      fVar36 = auVar112._0_4_ * fVar60 + fVar39 * fVar31 + fVar72 * fVar38;
      fVar39 = auVar16._0_4_ * fVar60 + fVar93 * fVar31 + fVar83 * fVar38;
      fVar72 = auVar16._4_4_ * fVar60 + fVar83 * fVar31 + auVar16._4_4_ * fVar38;
      pfVar12[-2] = fVar50;
      pfVar12[-1] = fVar61;
      pfVar12[-4] = fVar48;
      pfVar12[-3] = fVar43;
      pfVar12[2] = fVar39;
      pfVar12[3] = fVar72;
      *pfVar12 = fVar37;
      pfVar12[1] = fVar36;
      pfVar12[-8] = 0.0;
      pfVar12[-7] = 0.0;
      pfVar12[-6] = 0.0;
      pfVar12[-5] = 0.0;
      auVar19._0_4_ = fVar94 * fVar48 + fVar73 * fVar37;
      auVar19._4_4_ = fVar102 * fVar43 + fVar82 * fVar36;
      auVar19._8_4_ = fVar104 * fVar50 + fVar84 * fVar39;
      auVar19._12_4_ = fVar105 * fVar61 + fVar85 * fVar72;
      auVar16 = NEON_ext(auVar19,auVar19,8,1);
      fVar37 = param_1;
      if (0.0 <= fVar59 * fVar62) {
        fVar37 = fVar41;
      }
      fVar48 = param_1;
      if (fVar75 <= 0.0) {
        fVar48 = fVar41;
      }
      fVar40 = fVar40 * (auVar19._0_4_ + auVar19._4_4_ + auVar16._0_4_);
      fVar41 = fVar75 * fVar48 - fVar40;
      auVar98 = ZEXT416((uint)fVar41);
      pfVar12[-5] = fVar62 * fVar37 - fVar40;
      auVar57 = ZEXT416((uint)-fVar35);
      pfVar12[3] = fVar41;
      *(float *)(param_11 + lVar10) = -fVar35;
      break;
    case 6:
      bVar2 = (*pauVar11)[0xc];
      uVar8 = (ulong)(bVar2 >> 2 & 3);
      auVar81 = param_6[uVar8 + 9];
      pauVar5 = param_6 + uVar8 + 5;
      uVar8 = (ulong)(bVar2 >> 4) & 3;
      fVar37 = auVar81._0_4_ + *(float *)*pauVar5;
      fVar48 = auVar81._4_4_ + *(float *)(*pauVar5 + 4);
      fVar36 = auVar81._8_4_ + *(float *)(*pauVar5 + 8);
      fVar72 = auVar81._12_4_;
      fVar43 = fVar37 * fVar37 + fVar48 * fVar48 + fVar36 * fVar36;
      fVar50 = fVar37 * fVar37 + fVar48 * fVar48 + fVar36 * fVar36;
      uVar53 = CONCAT44(fVar50,fVar43);
      uVar63 = NEON_frsqrte(uVar53,4);
      fVar39 = (float)uVar63;
      fVar61 = (float)((ulong)uVar63 >> 0x20);
      uVar63 = NEON_frsqrts(uVar53,CONCAT44(fVar61 * fVar61,fVar39 * fVar39),4);
      fVar39 = fVar39 * (float)uVar63;
      fVar61 = fVar61 * (float)((ulong)uVar63 >> 0x20);
      uVar53 = NEON_frsqrts(uVar53,CONCAT44(fVar61 * fVar61,fVar39 * fVar39),4);
      iVar42 = -(uint)(fVar43 <= 0.0);
      iVar49 = -(uint)(fVar50 <= 0.0);
      fVar43 = fVar43 * (float)uVar53 * fVar39;
      fVar50 = fVar50 * (float)((ulong)uVar53 >> 0x20) * fVar61;
      fVar43 = (float)CONCAT13((byte)((uint)fVar43 >> 0x18) & ~(byte)((uint)iVar42 >> 0x18),
                               CONCAT12((byte)((uint)fVar43 >> 0x10) & ~(byte)((uint)iVar42 >> 0x10)
                                        ,CONCAT11((byte)((uint)fVar43 >> 8) &
                                                  ~(byte)((uint)iVar42 >> 8),
                                                  SUB41(fVar43,0) & ~(byte)iVar42)));
      uVar53 = CONCAT17((byte)((uint)fVar50 >> 0x18) & ~(byte)((uint)iVar49 >> 0x18),
                        CONCAT16((byte)((uint)fVar50 >> 0x10) & ~(byte)((uint)iVar49 >> 0x10),
                                 CONCAT15((byte)((uint)fVar50 >> 8) & ~(byte)((uint)iVar49 >> 8),
                                          CONCAT14(SUB41(fVar50,0) & ~(byte)iVar49,fVar43))));
      fVar50 = 0.0;
      if (1e-16 < fVar43) {
        uVar63 = NEON_frecpe(uVar53,4);
        uVar76 = NEON_frecps(uVar53,uVar63,4);
        fVar39 = (float)uVar63 * (float)uVar76;
        fVar61 = (float)((ulong)uVar63 >> 0x20) * (float)((ulong)uVar76 >> 0x20);
        uVar53 = NEON_frecps(uVar53,CONCAT44(fVar61,fVar39),4);
        fVar39 = fVar39 * (float)uVar53;
        fVar61 = fVar61 * (float)((ulong)uVar53 >> 0x20);
        fVar50 = fVar43 * 0.5;
        auVar81._0_4_ = fVar37 * fVar39;
        auVar81._4_4_ = fVar48 * fVar61;
        auVar81._8_4_ = fVar36 * fVar39;
        auVar81._12_4_ = (fVar72 + *(float *)(*pauVar5 + 0xc)) * fVar61;
      }
      auVar44 = NEON_ext(auVar81,auVar81,4,1);
      auVar16 = param_6[uVar8 + 9];
      auVar55 = NEON_ext(auVar16,auVar16,8,1);
      uVar53 = NEON_ext(auVar16._0_8_,auVar55._0_8_,4,1);
      fVar36 = auVar81._0_4_;
      fVar43 = auVar81._4_4_;
      fVar72 = auVar81._8_4_;
      fVar37 = fVar36 * (float)uVar53 - auVar16._0_4_ * auVar44._0_4_;
      fVar48 = fVar43 * (float)((ulong)uVar53 >> 0x20) - auVar16._4_4_ * auVar44._4_4_;
      auVar20._0_8_ = CONCAT44(fVar48,fVar37);
      auVar20._8_4_ = fVar72 * auVar16._0_4_ - auVar16._8_4_ * fVar36;
      auVar20._12_4_ = auVar81._12_4_ * auVar16._4_4_ - auVar16._12_4_ * fVar43;
      auVar16 = NEON_ext(auVar20,auVar20,4,1);
      uVar53 = NEON_ext(auVar16._0_8_,auVar20._0_8_,4,1);
      fVar39 = auVar16._0_4_;
      fVar61 = auVar16._4_4_;
      pauVar5 = param_6 + uVar8 + 5;
      auVar21._0_4_ = auVar44._0_4_ * fVar39 - fVar36 * (float)uVar53;
      auVar21._4_4_ = auVar44._4_4_ * fVar61 - fVar43 * (float)((ulong)uVar53 >> 0x20);
      auVar21._8_4_ = fVar36 * fVar37 - fVar72 * fVar39;
      auVar21._12_4_ = fVar43 * fVar48 - auVar81._12_4_ * fVar61;
      auVar16 = NEON_ext(auVar21,auVar21,4,1);
      auVar22._0_4_ = *(float *)*pauVar5 * fVar39;
      auVar22._4_4_ = *(float *)(*pauVar5 + 4) * fVar61;
      auVar22._8_4_ = *(float *)(*pauVar5 + 8) * fVar37;
      auVar22._12_4_ = *(float *)(*pauVar5 + 0xc) * fVar48;
      auVar44 = NEON_ext(auVar22,auVar22,8,1);
      auVar32._0_4_ = *(float *)*pauVar5 * auVar16._0_4_;
      auVar32._4_4_ = *(float *)(*pauVar5 + 4) * auVar16._4_4_;
      auVar32._8_4_ = *(float *)(*pauVar5 + 8) * auVar21._0_4_;
      auVar32._12_4_ = *(float *)(*pauVar5 + 0xc) * auVar21._4_4_;
      auVar16 = NEON_ext(auVar32,auVar32,8,1);
      atan2f(auVar22._0_4_ + auVar22._4_4_ + auVar44._0_4_,
             auVar32._0_4_ + auVar32._4_4_ + auVar16._0_4_);
      fVar37 = 1.0;
      *(byte *)(param_13 + lVar13) = (*pauVar11)[0xc] & 2 | 1;
      if ((bVar2 & 1) != 0) {
        fVar37 = -1.0;
        *(undefined4 *)(param_8 + lVar13 * 4) = 0xbf800000;
      }
      auVar44 = NEON_ext(auStack_120,auStack_120,8,1);
      auVar16 = NEON_ext(local_130,local_130,8,1);
      auVar55 = NEON_ext(local_110,local_110,8,1);
      auVar57 = NEON_ext(auStack_160,auStack_160,8,1);
      fVar48 = auVar16._0_4_ * fVar72 + local_130._0_4_ * fVar36 + local_130._4_4_ * fVar43;
      fVar39 = auVar44._0_4_ * fVar72 + auStack_120._0_4_ * fVar36 + auStack_120._4_4_ * fVar43;
      fVar61 = auVar55._0_4_ * fVar72 + local_110._0_4_ * fVar36 + local_110._4_4_ * fVar43;
      fVar74 = auVar55._4_4_ * fVar72 + local_110._4_4_ * fVar36 + auVar55._4_4_ * fVar43;
      auVar16 = NEON_ext(local_170,local_170,8,1);
      auVar44 = NEON_ext(local_150,local_150,8,1);
      fVar95 = *(float *)*pauVar11;
      fVar103 = *(float *)(*pauVar11 + 4);
      fVar36 = -fVar36;
      fVar43 = -fVar43;
      fVar72 = -fVar72;
      pfVar12[-6] = 0.0;
      pfVar12[-5] = 0.0;
      fVar50 = fVar50 * fVar41 * fVar50;
      fVar83 = auVar16._0_4_ * fVar72 + local_170._0_4_ * fVar36 + local_170._4_4_ * fVar43;
      fVar87 = auVar57._0_4_ * fVar72 + auStack_160._0_4_ * fVar36 + auStack_160._4_4_ * fVar43;
      fVar93 = auVar44._0_4_ * fVar72 + local_150._0_4_ * fVar36 + local_150._4_4_ * fVar43;
      fVar36 = auVar44._4_4_ * fVar72 + local_150._4_4_ * fVar36 + auVar44._4_4_ * fVar43;
      pfVar12[-2] = fVar61;
      pfVar12[-1] = fVar74;
      pfVar12[-4] = fVar48;
      pfVar12[-3] = fVar39;
      pfVar12[2] = fVar93;
      pfVar12[3] = fVar36;
      *pfVar12 = fVar83;
      pfVar12[1] = fVar87;
      fVar41 = param_1;
      if (0.0 <= fVar37 * fVar95) {
        fVar41 = fVar50;
      }
      auVar33._0_4_ = fVar94 * fVar48 + fVar73 * fVar83;
      auVar33._4_4_ = fVar102 * fVar39 + fVar82 * fVar87;
      auVar33._8_4_ = fVar104 * fVar61 + fVar84 * fVar93;
      auVar33._12_4_ = fVar105 * fVar74 + fVar85 * fVar36;
      auVar16 = NEON_ext(auVar33,auVar33,8,1);
      fVar40 = fVar40 * (auVar33._0_4_ + auVar33._4_4_ + auVar16._0_4_);
      auVar98 = ZEXT416((uint)fVar40);
      pfVar12[-5] = fVar95 * fVar41 - fVar40;
      fVar37 = param_1;
      if (fVar103 <= 0.0) {
        fVar37 = fVar50;
      }
      pfVar12[-8] = 0.0;
      pfVar12[-7] = 0.0;
      pfVar12[3] = fVar103 * fVar37 - fVar40;
      *param_14 = 0;
      auVar57 = ZEXT416((uint)-*(float *)(param_7 + lVar10));
      *(float *)(param_11 + lVar10) = -*(float *)(param_7 + lVar10);
      break;
    case 7:
      bVar2 = (*pauVar11)[0xc];
      auVar16 = param_6[(ulong)(bVar2 >> 4 & 3) + 9];
      auVar44 = param_6[((ulong)(bVar2 >> 2) & 3) + 5];
      *(byte *)(param_13 + lVar13) = bVar2 & 2 | 1;
      auVar55 = NEON_ext(auVar16,auVar16,8,1);
      auVar57 = NEON_ext(auVar44,auVar44,8,1);
      uVar53 = NEON_ext(auVar16._0_8_,auVar55._0_8_,4,1);
      uVar63 = NEON_ext(auVar44._0_8_,auVar57._0_8_,4,1);
      auVar23._0_4_ = auVar16._0_4_ * (float)uVar63 - auVar44._0_4_ * (float)uVar53;
      auVar23._4_4_ =
           auVar16._4_4_ * (float)((ulong)uVar63 >> 0x20) -
           auVar44._4_4_ * (float)((ulong)uVar53 >> 0x20);
      auVar23._8_4_ = auVar16._8_4_ * auVar44._0_4_ - auVar44._8_4_ * auVar16._0_4_;
      auVar23._12_4_ = auVar16._12_4_ * auVar44._4_4_ - auVar44._12_4_ * auVar16._4_4_;
      auVar16 = NEON_ext(auVar23,auVar23,4,1);
      fVar31 = auVar16._0_4_;
      fVar35 = auVar16._4_4_;
      fVar95 = fVar31 * fVar31 + fVar35 * fVar35 + auVar23._0_4_ * auVar23._0_4_;
      fVar26 = fVar31 * fVar31 + fVar35 * fVar35 + auVar23._0_4_ * auVar23._0_4_;
      uVar53 = CONCAT44(fVar26,fVar95);
      uVar63 = NEON_frsqrte(uVar53,4);
      fVar103 = (float)uVar63;
      fVar59 = (float)((ulong)uVar63 >> 0x20);
      uVar63 = NEON_frsqrts(uVar53,CONCAT44(fVar59 * fVar59,fVar103 * fVar103),4);
      fVar103 = fVar103 * (float)uVar63;
      fVar59 = fVar59 * (float)((ulong)uVar63 >> 0x20);
      iVar42 = -(uint)(fVar95 <= 0.0);
      iVar49 = -(uint)(fVar26 <= 0.0);
      uVar53 = NEON_frsqrts(uVar53,CONCAT44(fVar59 * fVar59,fVar103 * fVar103),4);
      fVar103 = (float)uVar53 * fVar103;
      fVar59 = (float)((ulong)uVar53 >> 0x20) * fVar59;
      fVar95 = (float)CONCAT13((byte)((uint)fVar103 >> 0x18) & ~(byte)((uint)iVar42 >> 0x18),
                               CONCAT12((byte)((uint)fVar103 >> 0x10) &
                                        ~(byte)((uint)iVar42 >> 0x10),
                                        CONCAT11((byte)((uint)fVar103 >> 8) &
                                                 ~(byte)((uint)iVar42 >> 8),
                                                 SUB41(fVar103,0) & ~(byte)iVar42)));
      fVar31 = fVar31 * fVar95;
      fVar35 = fVar35 * (float)(CONCAT17((byte)((uint)fVar59 >> 0x18) &
                                         ~(byte)((uint)iVar49 >> 0x18),
                                         CONCAT16((byte)((uint)fVar59 >> 0x10) &
                                                  ~(byte)((uint)iVar49 >> 0x10),
                                                  CONCAT15((byte)((uint)fVar59 >> 8) &
                                                           ~(byte)((uint)iVar49 >> 8),
                                                           CONCAT14(SUB41(fVar59,0) & ~(byte)iVar49,
                                                                    fVar95)))) >> 0x20);
      fVar95 = auVar23._0_4_ * fVar95;
      fVar103 = 1.0;
      if ((bVar2 & 1) != 0) {
        fVar103 = -1.0;
        *(undefined4 *)(param_8 + lVar13 * 4) = 0xbf800000;
      }
      auVar44 = NEON_ext(auStack_120,auStack_120,8,1);
      auVar16 = NEON_ext(local_130,local_130,8,1);
      auVar55 = NEON_ext(local_110,local_110,8,1);
      auVar112 = NEON_ext(auStack_160,auStack_160,8,1);
      auVar57 = NEON_ext(local_170,local_170,8,1);
      fVar26 = -fVar31;
      fVar59 = -fVar35;
      fVar38 = -fVar95;
      auVar67 = NEON_ext(local_150,local_150,8,1);
      fVar43 = auVar16._0_4_ * fVar95 + fVar48 * fVar31 + fVar43 * fVar35;
      fVar50 = auVar44._0_4_ * fVar95 + fVar50 * fVar31 + fVar61 * fVar35;
      fVar61 = auVar55._0_4_ * fVar95 + fVar87 * fVar31 + fVar74 * fVar35;
      fVar74 = auVar55._4_4_ * fVar95 + fVar74 * fVar31 + auVar55._4_4_ * fVar35;
      fVar87 = *(float *)*pauVar11;
      fVar95 = *(float *)(*pauVar11 + 4);
      pfVar12[-8] = 0.0;
      pfVar12[-7] = 0.0;
      pfVar12[-2] = fVar61;
      pfVar12[-1] = fVar74;
      pfVar12[-4] = fVar43;
      pfVar12[-3] = fVar50;
      fVar48 = param_1;
      if (0.0 <= fVar103 * fVar87) {
        fVar48 = fVar41;
      }
      fVar37 = auVar57._0_4_ * fVar38 + fVar37 * fVar26 + fVar36 * fVar59;
      fVar36 = auVar112._0_4_ * fVar38 + fVar39 * fVar26 + fVar72 * fVar59;
      fVar39 = auVar67._0_4_ * fVar38 + fVar93 * fVar26 + fVar83 * fVar59;
      fVar72 = auVar67._4_4_ * fVar38 + fVar83 * fVar26 + auVar67._4_4_ * fVar59;
      pfVar12[2] = fVar39;
      pfVar12[3] = fVar72;
      *pfVar12 = fVar37;
      pfVar12[1] = fVar36;
      auVar34._0_4_ = fVar94 * fVar43 + fVar73 * fVar37;
      auVar34._4_4_ = fVar102 * fVar50 + fVar82 * fVar36;
      auVar34._8_4_ = fVar104 * fVar61 + fVar84 * fVar39;
      auVar34._12_4_ = fVar105 * fVar74 + fVar85 * fVar72;
      auVar16 = NEON_ext(auVar34,auVar34,8,1);
      fVar40 = fVar40 * (auVar34._0_4_ + auVar34._4_4_ + auVar16._0_4_);
      pfVar12[-6] = 0.0;
      pfVar12[-5] = 0.0;
      pfVar12[-5] = fVar87 * fVar48 - fVar40;
      fVar37 = param_1;
      if (fVar95 <= 0.0) {
        fVar37 = fVar41;
      }
      pfVar12[3] = fVar95 * fVar37 - fVar40;
LAB_030de4b8:
      auVar98 = ZEXT416(0);
      *param_14 = 0;
      auVar57 = ZEXT416((uint)-*(float *)(param_7 + lVar10));
      *(float *)(param_11 + lVar10) = -*(float *)(param_7 + lVar10);
    }
LAB_030ddba0:
    pauVar11 = pauVar11 + 1;
    pfVar12 = pfVar12 + 0xc;
    lVar13 = lVar1;
    if (lVar1 == 6) {
      return;
    }
  } while( true );
}


