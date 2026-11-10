/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0026a058; name: FUN_0026a058
 */


bool FUN_0026a058(undefined8 param_1,undefined8 param_2,char *param_3,undefined4 param_4,
                 ulong param_5,byte param_6,byte param_7)

{
  undefined1 (*pauVar1) [12];
  undefined1 (*pauVar2) [12];
  uint uVar3;
  char cVar4;
  undefined1 (*pauVar5) [12];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined8 uVar21;
  ulong uVar22;
  undefined8 uVar23;
  char *pcVar24;
  code *pcVar25;
  char *pcVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined8 uVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  undefined8 uVar47;
  float fVar48;
  float fVar49;
  byte bVar50;
  int iVar51;
  byte bVar53;
  byte bVar54;
  byte bVar55;
  byte bVar56;
  byte bVar58;
  byte bVar59;
  undefined8 uVar52;
  int iVar57;
  byte bVar60;
  byte bVar61;
  byte bVar63;
  byte bVar64;
  int iVar62;
  byte bVar65;
  byte bVar66;
  byte bVar68;
  byte bVar69;
  int iVar67;
  byte bVar70;
  undefined1 uVar71;
  byte bVar72;
  undefined1 uVar73;
  byte bVar74;
  undefined1 uVar75;
  byte bVar76;
  undefined1 uVar77;
  byte bVar78;
  byte bVar79;
  byte bVar80;
  byte bVar81;
  byte bVar82;
  byte bVar83;
  byte bVar84;
  undefined1 uVar85;
  byte bVar86;
  undefined1 uVar87;
  byte bVar88;
  byte bVar89;
  undefined1 uVar90;
  byte bVar91;
  undefined1 uVar92;
  byte bVar93;
  undefined1 uVar94;
  byte bVar95;
  undefined4 uVar96;
  float fVar97;
  float fVar98;
  float fVar99;
  float fVar100;
  float fVar101;
  float fVar102;
  float fVar103;
  undefined8 uVar104;
  undefined8 uVar105;
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  float fVar109;
  undefined8 uVar110;
  undefined8 uVar111;
  undefined8 uVar112;
  undefined8 uVar113;
  float fVar116;
  float fVar117;
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  float fVar118;
  float fVar119;
  undefined8 uVar120;
  undefined8 uVar121;
  char *local_a0;
  byte local_98;
  
  lVar29 = *(long *)(param_3 + 0xa0);
  fVar97 = *(float *)(param_3 + 0x44);
  lVar30 = *(long *)(param_3 + 0x78);
  iVar51 = *(int *)(lVar29 + 0x7fc);
  uVar3 = *(uint *)(lVar29 + 0x7f4);
  uVar22 = FUN_0026e514(param_3,param_4);
  fVar36 = (float)param_1;
  if ((uVar22 & 1) == 0) {
    if (param_3[1] != '\0') {
      *(float *)(param_3 + 0x50) = *(float *)(param_3 + 0x50) + fVar36;
    }
    cVar4 = param_3[7];
  }
  else {
    *(float *)(param_3 + 0x50) = fVar36;
    cVar4 = param_3[7];
  }
  if (cVar4 != '\0') {
    return false;
  }
  local_98 = (byte)uVar22 & 1;
  if ((0.0 < fVar97) && (*(char *)(*(long *)(*(long *)(param_3 + 0x78) + 0x20) + 0x1700) != '\0')) {
    *(float *)(param_3 + 0x48) = *(float *)(param_3 + 0x48) + fVar36;
  }
  lVar28 = *(long *)(param_3 + 0x3e0);
  lVar31 = *(long *)(param_3 + 1000);
  local_a0 = param_3;
  if ((*(long *)(param_3 + 0x3f0) != 0) &&
     (pcVar25 = *(code **)(*(long *)(param_3 + 0x3f0) + 0x10), pcVar25 != (code *)0x0)) {
    uVar22 = (*pcVar25)(&local_a0);
  }
  if ((lVar28 != 0) && (pcVar25 = *(code **)(lVar28 + 0x10), pcVar25 != (code *)0x0)) {
    uVar22 = (*pcVar25)(&local_a0);
  }
  if ((lVar31 != 0) && (pcVar25 = *(code **)(lVar31 + 0x10), pcVar25 != (code *)0x0)) {
    uVar22 = (*pcVar25)(&local_a0);
  }
  fVar98 = (float)uVar3;
  *(float *)(param_3 + 0x4c) = fVar36;
  fVar99 = (float)(iVar51 + uVar3);
  if ((*param_3 != '\0') && (*(char *)(*(long *)(param_3 + 0xa0) + 0x7e4) != '\0')) {
    fVar99 = *(float *)(param_3 + 0x55c);
    fVar98 = (float)NEON_ucvtf(*(undefined4 *)(lVar29 + 0x7f8));
    fVar98 = fVar99 * (fVar98 / 100.0);
    if (*(char *)(lVar29 + 0x7f0) != '\0') {
      fVar99 = (float)NEON_ucvtf(*(undefined4 *)(lVar29 + 0x7fc));
      fVar99 = fVar98 + fVar99;
    }
  }
  lVar28 = *(long *)(param_3 + 0x238);
  param_3[0xc] = '\0';
  param_3[0xd] = '\0';
  param_3[0xe] = '\0';
  param_3[0xf] = '\0';
  if ((*(char *)(lVar28 + 1) == '\0') ||
     ((*param_3 != '\0' && (*(char *)(*(long *)(param_3 + 0xa0) + 0x7e4) == '\0')))) {
    *(float *)(param_3 + 0x66c) =
         *(float *)(*(long *)(lVar28 + 0x10) + 0x964) * *(float *)(lVar30 + 0x1e8);
    lVar28 = *(long *)(lVar28 + 0x10);
    *(float *)(param_3 + 0x690) = *(float *)(lVar28 + 0x868) * *(float *)(lVar30 + 0xe0);
    *(float *)(param_3 + 0x694) = *(float *)(lVar28 + 0x86c) * *(float *)(lVar30 + 0xe4);
    *(float *)(param_3 + 0x698) = *(float *)(lVar28 + 0x870) * *(float *)(lVar30 + 0xe8);
    uVar23 = FUN_00269b30(uVar22,param_3);
  }
  else {
    iVar51 = 0;
    lVar31 = 0x44;
    if (*(char *)(*(long *)(*(long *)(param_3 + 0x78) + 0x20) + 0x1700) != '\0') {
      lVar31 = 0x48;
    }
    uVar96 = *(undefined4 *)(param_3 + lVar31);
    lVar31 = 0;
    pcVar26 = param_3 + 0x600;
    pcVar24 = *(char **)(lVar28 + 0x290);
    while( true ) {
      if (((pcVar24 != (char *)0x0) && (*pcVar24 != '\0')) &&
         ((param_3[lVar31 + 0x6a8] == '\0' || (pcVar24[1] != '\0')))) {
        uVar22 = FUN_002714e0(uVar96,pcVar26);
        iVar51 = *(int *)(param_3 + 0xc) + 1;
        lVar28 = *(long *)(param_3 + 0x238);
        *(int *)(param_3 + 0xc) = iVar51;
      }
      lVar31 = lVar31 + 1;
      pcVar26 = pcVar26 + 0xc;
      if (lVar31 == 0xe) break;
      pcVar24 = *(char **)(lVar28 + lVar31 * 8 + 0x290);
    }
    pcVar26 = *(char **)(lVar28 + 0x2d8);
    if (((pcVar26 != (char *)0x0) && (*pcVar26 != '\0')) &&
       ((param_3[0x6b1] == '\0' || (pcVar26[1] != '\0')))) {
      *(float *)(param_3 + 0x66c) = *(float *)(lVar30 + 0x1e8) * *(float *)(param_3 + 0x66c);
    }
    pcVar26 = *(char **)(lVar28 + 0x2f0);
    if (((pcVar26 != (char *)0x0) && (*pcVar26 != '\0')) &&
       ((param_3[0x6b4] == '\0' || (pcVar26[1] != '\0')))) {
      *(float *)(param_3 + 0x690) = *(float *)(param_3 + 0x690) * *(float *)(lVar30 + 0xe0);
      *(float *)(param_3 + 0x694) = *(float *)(param_3 + 0x694) * *(float *)(lVar30 + 0xe4);
      *(float *)(param_3 + 0x698) = *(float *)(param_3 + 0x698) * *(float *)(lVar30 + 0xe8);
    }
    if ((0 < iVar51) &&
       (fVar34 = (float)*(int *)(*(long *)(lVar28 + 0x10) + 0x8b8),
       fVar34 < *(float *)(param_3 + 0x648))) {
      *(float *)(param_3 + 0x648) = fVar34;
    }
    uVar23 = FUN_00269b30(uVar22,param_3);
  }
  if (fVar97 == 0.0) {
    *(undefined8 *)(param_3 + 0x3c8) = *(undefined8 *)(param_3 + 0x378);
    *(undefined8 *)(param_3 + 0x3c0) = *(undefined8 *)(param_3 + 0x370);
  }
  if (*(float *)(param_3 + 0x44) != 0.0) {
    pauVar1 = (undefined1 (*) [12])(param_3 + 0x340);
    fVar38 = (float)*(undefined8 *)(param_3 + 0x348);
    fVar100 = (float)((ulong)*(undefined8 *)(param_3 + 0x348) >> 0x20);
    fVar34 = (float)*(undefined8 *)*pauVar1;
    fVar35 = (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
    pauVar5 = (undefined1 (*) [12])(param_3 + 0x350);
    uVar96 = (undefined4)((ulong)*(undefined8 *)(param_3 + 0x358) >> 0x20);
    auVar13._12_4_ = uVar96;
    auVar13._0_12_ = *pauVar5;
    uVar37 = a64_TBL(ZEXT816(0),auVar13,DAT_0388a880);
    auVar14._12_4_ = uVar96;
    auVar14._0_12_ = *pauVar5;
    uVar47 = a64_TBL(ZEXT816(0),auVar14,DAT_0388a6f0);
    pauVar2 = (undefined1 (*) [12])(param_3 + 0x360);
    uVar32 = (undefined4)((ulong)*(undefined8 *)(param_3 + 0x368) >> 0x20);
    auVar17._12_4_ = uVar32;
    auVar17._0_12_ = *pauVar2;
    uVar104 = a64_TBL(ZEXT816(0),auVar17,DAT_0388a680);
    auVar18._12_4_ = uVar32;
    auVar18._0_12_ = *pauVar2;
    uVar110 = a64_TBL(ZEXT816(0),auVar18,DAT_0388a6d8);
    auVar19._12_4_ = uVar32;
    auVar19._0_12_ = *pauVar2;
    uVar21 = a64_TBL(ZEXT816(0),auVar19,DAT_0388a6f0);
    auVar15._12_4_ = uVar96;
    auVar15._0_12_ = *pauVar5;
    uVar111 = a64_TBL(ZEXT816(0),auVar15,DAT_0388a6d8);
    auVar16._12_4_ = uVar96;
    auVar16._0_12_ = *pauVar5;
    uVar105 = a64_TBL(ZEXT816(0),auVar16,DAT_0388a680);
    auVar20._12_4_ = uVar32;
    auVar20._0_12_ = *pauVar2;
    uVar112 = a64_TBL(ZEXT816(0),auVar20,DAT_0388a880);
    uVar96 = SUB124(*pauVar1,8);
    uVar33 = SUB124(*pauVar2,8);
    fVar34 = fVar34 * (float)uVar37 * (float)uVar104 - fVar34 * (float)uVar105 * (float)uVar112;
    fVar35 = fVar35 * (float)((ulong)uVar37 >> 0x20) * (float)((ulong)uVar104 >> 0x20) -
             fVar35 * (float)((ulong)uVar105 >> 0x20) * (float)((ulong)uVar112 >> 0x20);
    uVar71 = (undefined1)((uint)fVar35 >> 8);
    uVar73 = (undefined1)((uint)fVar35 >> 0x10);
    uVar75 = (undefined1)((uint)fVar35 >> 0x18);
    fVar38 = fVar38 * (float)uVar47 * (float)uVar110 - fVar38 * (float)uVar111 * (float)uVar21;
    uVar77 = (undefined1)((uint)fVar38 >> 8);
    uVar85 = (undefined1)((uint)fVar38 >> 0x10);
    uVar87 = (undefined1)((uint)fVar38 >> 0x18);
    fVar100 = fVar100 * (float)((ulong)uVar47 >> 0x20) * (float)((ulong)uVar110 >> 0x20) -
              fVar100 * (float)((ulong)uVar111 >> 0x20) * (float)((ulong)uVar21 >> 0x20);
    uVar90 = (undefined1)((uint)fVar100 >> 8);
    uVar92 = (undefined1)((uint)fVar100 >> 0x10);
    uVar94 = (undefined1)((uint)fVar100 >> 0x18);
    auVar106[4] = SUB41(fVar35,0);
    auVar106._0_4_ = fVar34;
    auVar106[5] = uVar71;
    auVar106[6] = uVar73;
    auVar106[7] = uVar75;
    auVar106[8] = SUB41(fVar38,0);
    auVar106[9] = uVar77;
    auVar106[10] = uVar85;
    auVar106[0xb] = uVar87;
    auVar106[0xc] = SUB41(fVar100,0);
    auVar106[0xd] = uVar90;
    auVar106[0xe] = uVar92;
    auVar106[0xf] = uVar94;
    auVar114[4] = SUB41(fVar35,0);
    auVar114._0_4_ = fVar34;
    auVar114[5] = uVar71;
    auVar114[6] = uVar73;
    auVar114[7] = uVar75;
    auVar114[8] = SUB41(fVar38,0);
    auVar114[9] = uVar77;
    auVar114[10] = uVar85;
    auVar114[0xb] = uVar87;
    auVar114[0xc] = SUB41(fVar100,0);
    auVar114[0xd] = uVar90;
    auVar114[0xe] = uVar92;
    auVar114[0xf] = uVar94;
    auVar106 = NEON_ext(auVar106,auVar114,8,1);
    fVar34 = fVar34 + fVar35 + auVar106._0_4_ + auVar106._4_4_;
    uVar71 = SUB41(fVar34,0);
    uVar73 = (undefined1)((uint)fVar34 >> 8);
    uVar75 = (undefined1)((uint)fVar34 >> 0x10);
    uVar77 = (undefined1)((uint)fVar34 >> 0x18);
    auVar6[4] = uVar71;
    auVar6._0_4_ = fVar34;
    auVar6[5] = uVar73;
    auVar6[6] = uVar75;
    auVar6[7] = uVar77;
    auVar6[8] = uVar71;
    auVar6[9] = uVar73;
    auVar6[10] = uVar75;
    auVar6[0xb] = uVar77;
    auVar6[0xc] = uVar71;
    auVar6[0xd] = uVar73;
    auVar6[0xe] = uVar75;
    auVar6[0xf] = uVar77;
    auVar106 = NEON_frecpe(auVar6,4);
    auVar7[4] = uVar71;
    auVar7._0_4_ = fVar34;
    auVar7[5] = uVar73;
    auVar7[6] = uVar75;
    auVar7[7] = uVar77;
    auVar7[8] = uVar71;
    auVar7[9] = uVar73;
    auVar7[10] = uVar75;
    auVar7[0xb] = uVar77;
    auVar7[0xc] = uVar71;
    auVar7[0xd] = uVar73;
    auVar7[0xe] = uVar75;
    auVar7[0xf] = uVar77;
    auVar114 = NEON_frecps(auVar106,auVar7,4);
    auVar107._0_4_ = auVar106._0_4_ * auVar114._0_4_;
    auVar107._4_4_ = auVar106._4_4_ * auVar114._4_4_;
    auVar107._8_4_ = auVar106._8_4_ * auVar114._8_4_;
    auVar107._12_4_ = auVar106._12_4_ * auVar114._12_4_;
    auVar8[4] = uVar71;
    auVar8._0_4_ = fVar34;
    auVar8[5] = uVar73;
    auVar8[6] = uVar75;
    auVar8[7] = uVar77;
    auVar8[8] = uVar71;
    auVar8[9] = uVar73;
    auVar8[10] = uVar75;
    auVar8[0xb] = uVar77;
    auVar8[0xc] = uVar71;
    auVar8[0xd] = uVar73;
    auVar8[0xe] = uVar75;
    auVar8[0xf] = uVar77;
    auVar106 = NEON_frecps(auVar107,auVar8,4);
    fVar100 = auVar107._0_4_ * auVar106._0_4_;
    fVar101 = auVar107._4_4_ * auVar106._4_4_;
    fVar102 = auVar107._8_4_ * auVar106._8_4_;
    fVar103 = auVar107._12_4_ * auVar106._12_4_;
    uVar32 = SUB124(*pauVar5,8);
    auVar108._4_4_ = SUB124(*pauVar5,0);
    auVar108._0_4_ = SUB124(*pauVar1,0);
    auVar108._8_4_ = SUB124(*pauVar2,0);
    auVar108._12_4_ = 0;
    auVar115._4_4_ = SUB124(*pauVar5,4);
    auVar115._0_4_ = SUB124(*pauVar1,4);
    auVar115._8_4_ = SUB124(*pauVar2,4);
    auVar115._12_4_ = 0;
    uVar47 = a64_TBL(ZEXT816(0),auVar115,DAT_0388a880);
    fVar49 = (float)((ulong)uVar47 >> 0x20);
    uVar104 = a64_TBL(ZEXT816(0),auVar115,DAT_0388a6f0);
    fVar119 = (float)((ulong)uVar104 >> 0x20);
    auVar9._4_4_ = uVar32;
    auVar9._0_4_ = uVar96;
    auVar9._8_4_ = uVar33;
    auVar9._12_4_ = 0;
    uVar120 = a64_TBL(ZEXT816(0),auVar9,DAT_0388a6d8);
    auVar10._4_4_ = uVar32;
    auVar10._0_4_ = uVar96;
    auVar10._8_4_ = uVar33;
    auVar10._12_4_ = 0;
    uVar105 = a64_TBL(ZEXT816(0),auVar10,DAT_0388a680);
    fVar42 = (float)((ulong)uVar105 >> 0x20);
    auVar11._4_4_ = uVar32;
    auVar11._0_4_ = uVar96;
    auVar11._8_4_ = uVar33;
    auVar11._12_4_ = 0;
    uVar121 = a64_TBL(ZEXT816(0),auVar11,DAT_0388a880);
    auVar12._4_4_ = uVar32;
    auVar12._0_4_ = uVar96;
    auVar12._8_4_ = uVar33;
    auVar12._12_4_ = 0;
    uVar21 = a64_TBL(ZEXT816(0),auVar12,DAT_0388a6f0);
    fVar35 = (float)((ulong)uVar21 >> 0x20);
    uVar110 = a64_TBL(ZEXT816(0),auVar108,DAT_0388a880);
    fVar45 = (float)((ulong)uVar120 >> 0x20);
    uVar111 = a64_TBL(ZEXT816(0),auVar108,DAT_0388a6f0);
    uVar37 = a64_TBL(ZEXT816(0),auVar115,DAT_0388a680);
    fVar46 = (float)((ulong)uVar37 >> 0x20);
    uVar113 = a64_TBL(ZEXT816(0),auVar115,DAT_0388a6d8);
    uVar52 = a64_TBL(ZEXT816(0),auVar108,DAT_0388a6d8);
    uVar112 = a64_TBL(ZEXT816(0),auVar108,DAT_0388a680);
    fVar48 = (float)((ulong)uVar113 >> 0x20);
    fVar43 = (float)((ulong)uVar121 >> 0x20);
    fVar41 = (float)((ulong)uVar112 >> 0x20);
    fVar44 = (float)((ulong)uVar52 >> 0x20);
    fVar38 = (float)((ulong)uVar110 >> 0x20);
    fVar39 = (float)((ulong)uVar111 >> 0x20);
    fVar109 = fVar100 * ((float)uVar47 * (float)uVar105 - (float)uVar121 * (float)uVar37);
    fVar116 = fVar101 * (fVar49 * fVar42 - fVar43 * fVar46);
    fVar117 = fVar102 * ((float)uVar104 * (float)uVar120 - (float)uVar21 * (float)uVar113);
    fVar118 = fVar103 * (fVar119 * fVar45 - fVar35 * fVar48);
    fVar40 = fVar100 * ((float)uVar121 * (float)uVar112 - (float)uVar110 * (float)uVar105);
    fVar42 = fVar101 * (fVar43 * fVar41 - fVar38 * fVar42);
    fVar43 = fVar102 * ((float)uVar21 * (float)uVar52 - (float)uVar111 * (float)uVar120);
    fVar45 = fVar103 * (fVar35 * fVar44 - fVar39 * fVar45);
    fVar35 = (float)*(undefined8 *)(param_3 + 0x370);
    fVar100 = fVar100 * ((float)uVar37 * (float)uVar110 - (float)uVar47 * (float)uVar112);
    fVar101 = fVar101 * (fVar46 * fVar38 - fVar49 * fVar41);
    fVar102 = fVar102 * ((float)uVar113 * (float)uVar111 - (float)uVar104 * (float)uVar52);
    fVar103 = fVar103 * (fVar48 * fVar39 - fVar119 * fVar44);
    fVar38 = (float)((ulong)*(undefined8 *)(param_3 + 0x370) >> 0x20);
    iVar51 = -(uint)(fVar34 == 0.0);
    iVar57 = -(uint)(fVar34 == 0.0);
    iVar62 = -(uint)(fVar34 == 0.0);
    iVar67 = -(uint)(fVar34 == 0.0);
    bVar50 = ~(byte)iVar51;
    bVar53 = ~(byte)((uint)iVar51 >> 8);
    bVar54 = ~(byte)((uint)iVar51 >> 0x10);
    bVar55 = ~(byte)((uint)iVar51 >> 0x18);
    bVar56 = ~(byte)iVar57;
    bVar58 = ~(byte)((uint)iVar57 >> 8);
    bVar59 = ~(byte)((uint)iVar57 >> 0x10);
    bVar60 = ~(byte)((uint)iVar57 >> 0x18);
    bVar61 = ~(byte)iVar62;
    bVar63 = ~(byte)((uint)iVar62 >> 8);
    bVar64 = ~(byte)((uint)iVar62 >> 0x10);
    bVar65 = ~(byte)((uint)iVar62 >> 0x18);
    bVar66 = ~(byte)iVar67;
    bVar68 = ~(byte)((uint)iVar67 >> 8);
    bVar69 = ~(byte)((uint)iVar67 >> 0x10);
    bVar70 = ~(byte)((uint)iVar67 >> 0x18);
    bVar72 = SUB41(fVar109,0) & bVar50;
    bVar74 = (byte)((uint)fVar109 >> 8) & bVar53;
    bVar76 = (byte)((uint)fVar109 >> 0x10) & bVar54;
    bVar78 = (byte)((uint)fVar109 >> 0x18) & bVar55;
    bVar79 = SUB41(fVar116,0) & bVar56;
    bVar80 = (byte)((uint)fVar116 >> 8) & bVar58;
    bVar81 = (byte)((uint)fVar116 >> 0x10) & bVar59;
    bVar82 = (byte)((uint)fVar116 >> 0x18) & bVar60;
    bVar83 = SUB41(fVar117,0) & bVar61;
    bVar84 = (byte)((uint)fVar117 >> 8) & bVar63;
    bVar86 = (byte)((uint)fVar117 >> 0x10) & bVar64;
    bVar88 = (byte)((uint)fVar117 >> 0x18) & bVar65;
    bVar89 = SUB41(fVar118,0) & bVar66;
    bVar91 = (byte)((uint)fVar118 >> 8) & bVar68;
    bVar93 = (byte)((uint)fVar118 >> 0x10) & bVar69;
    bVar95 = (byte)((uint)fVar118 >> 0x18) & bVar70;
    fVar41 = (float)CONCAT13((byte)((uint)fVar40 >> 0x18) & bVar55,
                             CONCAT12((byte)((uint)fVar40 >> 0x10) & bVar54,
                                      CONCAT11((byte)((uint)fVar40 >> 8) & bVar53,
                                               SUB41(fVar40,0) & bVar50)));
    fVar44 = (float)CONCAT13((byte)((uint)fVar43 >> 0x18) & bVar65,
                             CONCAT12((byte)((uint)fVar43 >> 0x10) & bVar64,
                                      CONCAT11((byte)((uint)fVar43 >> 8) & bVar63,
                                               SUB41(fVar43,0) & bVar61)));
    fVar34 = (float)*(undefined8 *)(param_3 + 0x378);
    fVar46 = (-(fVar109 * fVar35) - fVar40 * fVar38) - fVar100 * fVar34;
    fVar48 = (-(fVar116 * fVar35) - fVar42 * fVar38) - fVar101 * fVar34;
    fVar43 = (-(fVar117 * fVar35) - fVar43 * fVar38) - fVar102 * fVar34;
    fVar49 = (-(fVar118 * fVar35) - fVar45 * fVar38) - fVar103 * fVar34;
    fVar100 = (float)CONCAT13((byte)((uint)fVar100 >> 0x18) & bVar55,
                              CONCAT12((byte)((uint)fVar100 >> 0x10) & bVar54,
                                       CONCAT11((byte)((uint)fVar100 >> 8) & bVar53,
                                                SUB41(fVar100,0) & bVar50)));
    fVar102 = (float)CONCAT13((byte)((uint)fVar102 >> 0x18) & bVar65,
                              CONCAT12((byte)((uint)fVar102 >> 0x10) & bVar64,
                                       CONCAT11((byte)((uint)fVar102 >> 8) & bVar63,
                                                SUB41(fVar102,0) & bVar61)));
    fVar40 = (float)(CONCAT17((byte)((uint)fVar42 >> 0x18) & bVar60,
                              CONCAT16((byte)((uint)fVar42 >> 0x10) & bVar59,
                                       CONCAT15((byte)((uint)fVar42 >> 8) & bVar58,
                                                CONCAT14(SUB41(fVar42,0) & bVar56,fVar41)))) >> 0x20
                    );
    fVar42 = (float)(CONCAT17((byte)((uint)fVar45 >> 0x18) & bVar70,
                              CONCAT16((byte)((uint)fVar45 >> 0x10) & bVar69,
                                       CONCAT15((byte)((uint)fVar45 >> 8) & bVar68,
                                                CONCAT14(SUB41(fVar45,0) & bVar66,fVar44)))) >> 0x20
                    );
    fVar101 = (float)(CONCAT17((byte)((uint)fVar101 >> 0x18) & bVar60,
                               CONCAT16((byte)((uint)fVar101 >> 0x10) & bVar59,
                                        CONCAT15((byte)((uint)fVar101 >> 8) & bVar58,
                                                 CONCAT14(SUB41(fVar101,0) & bVar56,fVar100)))) >>
                     0x20);
    fVar39 = (float)(CONCAT17((byte)((uint)fVar103 >> 0x18) & bVar70,
                              CONCAT16((byte)((uint)fVar103 >> 0x10) & bVar69,
                                       CONCAT15((byte)((uint)fVar103 >> 8) & bVar68,
                                                CONCAT14(SUB41(fVar103,0) & bVar66,fVar102)))) >>
                    0x20);
    fVar103 = (float)CONCAT13((byte)((uint)fVar46 >> 0x18) & bVar55,
                              CONCAT12((byte)((uint)fVar46 >> 0x10) & bVar54,
                                       CONCAT11((byte)((uint)fVar46 >> 8) & bVar53,
                                                SUB41(fVar46,0) & bVar50)));
    fVar45 = (float)CONCAT13((byte)((uint)fVar43 >> 0x18) & bVar65,
                             CONCAT12((byte)((uint)fVar43 >> 0x10) & bVar64,
                                      CONCAT11((byte)((uint)fVar43 >> 8) & bVar63,
                                               SUB41(fVar43,0) & bVar61)));
    fVar109 = (float)*(undefined8 *)(param_3 + 0x3c0);
    fVar43 = (float)(CONCAT17((byte)((uint)fVar48 >> 0x18) & bVar60,
                              CONCAT16((byte)((uint)fVar48 >> 0x10) & bVar59,
                                       CONCAT15((byte)((uint)fVar48 >> 8) & bVar58,
                                                CONCAT14(SUB41(fVar48,0) & bVar56,fVar103)))) >>
                    0x20);
    fVar46 = (float)(CONCAT17((byte)((uint)fVar49 >> 0x18) & bVar70,
                              CONCAT16((byte)((uint)fVar49 >> 0x10) & bVar69,
                                       CONCAT15((byte)((uint)fVar49 >> 8) & bVar68,
                                                CONCAT14(SUB41(fVar49,0) & bVar66,fVar45)))) >> 0x20
                    );
    fVar48 = (float)((ulong)*(undefined8 *)(param_3 + 0x3c0) >> 0x20);
    fVar49 = (float)*(undefined8 *)(param_3 + 0x3c8);
    *(ulong *)(param_3 + 0x3d8) =
         CONCAT44(((float)CONCAT13(bVar95,CONCAT12(bVar93,CONCAT11(bVar91,bVar89))) * fVar35 +
                   fVar42 * fVar38 + fVar39 * fVar34 + fVar46) -
                  ((float)CONCAT13(bVar95,CONCAT12(bVar93,CONCAT11(bVar91,bVar89))) * fVar109 +
                   fVar42 * fVar48 + fVar39 * fVar49 + fVar46),
                  ((float)CONCAT13(bVar88,CONCAT12(bVar86,CONCAT11(bVar84,bVar83))) * fVar35 +
                   fVar44 * fVar38 + fVar102 * fVar34 + fVar45) -
                  ((float)CONCAT13(bVar88,CONCAT12(bVar86,CONCAT11(bVar84,bVar83))) * fVar109 +
                   fVar44 * fVar48 + fVar102 * fVar49 + fVar45));
    *(ulong *)(param_3 + 0x3d0) =
         CONCAT44(((float)CONCAT13(bVar82,CONCAT12(bVar81,CONCAT11(bVar80,bVar79))) * fVar35 +
                   fVar40 * fVar38 + fVar101 * fVar34 + fVar43) -
                  ((float)CONCAT13(bVar82,CONCAT12(bVar81,CONCAT11(bVar80,bVar79))) * fVar109 +
                   fVar40 * fVar48 + fVar101 * fVar49 + fVar43),
                  ((float)CONCAT13(bVar78,CONCAT12(bVar76,CONCAT11(bVar74,bVar72))) * fVar35 +
                   fVar41 * fVar38 + fVar100 * fVar34 + fVar103) -
                  ((float)CONCAT13(bVar78,CONCAT12(bVar76,CONCAT11(bVar74,bVar72))) * fVar109 +
                   fVar41 * fVar48 + fVar100 * fVar49 + fVar103));
  }
  if ((((*(char *)(lVar29 + 0x75b) != '\0') || (*(char *)(lVar29 + 0x75c) != '\0')) &&
      (*(float *)(param_3 + 0x74) < 1.0)) &&
     ((*(int *)(lVar29 + 0x76c) < 1 ||
      (fVar34 = *(float *)(param_3 + 0x74) + fVar36 / (float)*(int *)(lVar29 + 0x76c),
      *(float *)(param_3 + 0x74) = fVar34, 1.0 < fVar34)))) {
    param_3[0x74] = '\0';
    param_3[0x75] = '\0';
    param_3[0x76] = -0x80;
    param_3[0x77] = '?';
  }
  if (((((param_5 & 1) != 0) || (param_3[0x5fc] != '\0')) &&
      ((param_6 = *(char *)(lVar29 + 0x754) == '\0' & param_6, *(char *)(lVar29 + 0x755) != '\0' ||
       (*(char *)(lVar29 + 0x756) != '\0')))) &&
     ((*(int *)(lVar29 + 0x768) < 1 ||
      (fVar34 = *(float *)(param_3 + 0x70) - fVar36 / (float)*(int *)(lVar29 + 0x768),
      *(float *)(param_3 + 0x70) = fVar34, fVar34 < 0.0)))) {
    param_3[0x70] = '\0';
    param_3[0x71] = '\0';
    param_3[0x72] = '\0';
    param_3[0x73] = '\0';
    return false;
  }
  param_3[0x6bc] = '\0';
  if (((*param_3 == '\0') && (*(char *)(lVar30 + 0xe) != '\0')) && (0 < *(int *)(lVar30 + 0x25c))) {
    *(undefined4 *)(param_3 + 0x68) = *(undefined4 *)(param_3 + 0x44);
    uVar3 = *(uint *)(param_3 + 0xac);
    lVar28 = *(long *)(param_3 + 0xa0);
    iVar51 = *(int *)(lVar28 + 0x804);
    fVar34 = *(float *)(lVar28 + 0x800);
    *(uint *)(param_3 + 0xac) = uVar3 * 0x41c64e6d + 0x3039;
    if (0 < *(int *)(lVar30 + 0x25c)) {
      lVar31 = 0;
      for (lVar27 = 1;
          uVar23 = FUN_0026d010(param_2,param_3 + 1,param_3,
                                (int)((*(float *)(lVar28 + 0x800) -
                                      fVar34 * ((float)iVar51 / 100.0) *
                                      (float)uVar3 * 2.3283064e-10) * *(float *)(param_3 + 0x60) *
                                     *(float *)(*(long *)(lVar30 + 0x250) + lVar31 + 0x58)),0),
          lVar27 < *(int *)(lVar30 + 0x25c); lVar27 = lVar27 + 1) {
        lVar28 = *(long *)(param_3 + 0xa0);
        lVar31 = lVar31 + 0x60;
      }
    }
  }
  if (((param_6 & 1) != 0) && (param_3[3] != '\0')) {
    if (*param_3 == '\0') {
      if (fVar98 <= fVar97) goto LAB_0026a6d8;
    }
    else if ((fVar98 <= fVar97) && (*(char *)(*(long *)(param_3 + 0xa0) + 0x7e4) != '\0')) {
LAB_0026a6d8:
      if (*(char *)(lVar29 + 0x7f0) == '\0') {
        if ((fVar99 <= fVar97) && (*param_3 != '\0')) goto LAB_0026a6f8;
      }
      else if (fVar99 <= fVar97) {
LAB_0026a6f8:
        if (param_3[1] != '\0') goto LAB_0026a724;
      }
      uVar23 = FUN_00269704(param_1,param_2,param_3 + 0x54,param_3 + 0x58,param_3 + 0x5c,param_3 + 1
                            ,param_3,0);
    }
  }
LAB_0026a724:
  if ((0 < *(int *)(*(long *)(param_3 + 0x238) + 0x88)) &&
     (iVar51 = *(int *)(param_3 + 0x28), 0 < iVar51)) {
    lVar31 = 0;
    lVar28 = 0;
    lVar27 = 0x80;
    iVar57 = **(int **)(param_3 + 0xb0);
    while( true ) {
      if (iVar57 != 0) {
        *(float *)(*(long *)(param_3 + 0xb8) + lVar27) =
             *(float *)(*(long *)(param_3 + 0xb8) + lVar27) + fVar36;
        iVar51 = *(int *)(param_3 + 0x28);
      }
      lVar28 = lVar28 + 1;
      lVar31 = lVar31 + 0x20;
      lVar27 = lVar27 + 0x158;
      if (iVar51 <= lVar28) break;
      iVar57 = *(int *)(*(long *)(param_3 + 0xb0) + lVar31);
    }
  }
  if ((*(char *)(lVar29 + 0x752) == '\0') || ((*(char *)(lVar29 + 0x752) == '\x02' & param_7) != 0))
  {
    uVar23 = FUN_0026a984(*(undefined8 *)(param_3 + 0x98),param_3);
  }
  else {
    *(undefined4 *)(param_3 + 0x2c) = *(undefined4 *)(param_3 + 0x28);
  }
  lVar31 = *(long *)(param_3 + 0x3e0);
  lVar28 = *(long *)(param_3 + 1000);
  local_a0 = param_3;
  if ((*(long *)(param_3 + 0x3f0) != 0) &&
     (pcVar25 = *(code **)(*(long *)(param_3 + 0x3f0) + 0x20), pcVar25 != (code *)0x0)) {
    uVar23 = (*pcVar25)(&local_a0);
  }
  if ((lVar31 != 0) && (pcVar25 = *(code **)(lVar31 + 0x20), pcVar25 != (code *)0x0)) {
    uVar23 = (*pcVar25)(&local_a0);
  }
  if ((lVar28 != 0) && (pcVar25 = *(code **)(lVar28 + 0x20), pcVar25 != (code *)0x0)) {
    uVar23 = (*pcVar25)(&local_a0);
  }
  if ((0 < *(int *)(param_3 + 0x28)) || (*(long *)(*(long *)(param_3 + 0x238) + 0x338) != 0)) {
    FUN_0026b4c4(*(undefined4 *)(param_3 + 0x4c),*(undefined4 *)(param_3 + 0x50),uVar23,param_3);
  }
  *(undefined8 *)(param_3 + 0x3c8) = *(undefined8 *)(param_3 + 0x378);
  *(undefined8 *)(param_3 + 0x3c0) = *(undefined8 *)(param_3 + 0x370);
  *(float *)(param_3 + 0x44) = *(float *)(param_3 + 0x44) + fVar36;
  if ((*param_3 == '\0') || (*(char *)(*(long *)(param_3 + 0xa0) + 0x7e4) != '\0')) {
    if ((*(char *)(lVar29 + 0x7f0) == '\0') || (*(char *)(lVar30 + 0xe) != '\0')) {
      if ((((param_5 & 1) != 0) || (param_3[0x5fc] != '\0' || *param_3 != '\0')) &&
         (fVar98 + *(float *)(param_3 + 0x68) + (float)*(int *)(lVar29 + 0x8b8) < fVar97)) {
        return false;
      }
      if ((*(char *)(lVar30 + 0xe) != '\0') && (uVar22 = FUN_0026e6a4(param_3), (uVar22 & 1) != 0))
      {
        return false;
      }
    }
    else if (*(char *)(lVar29 + 0x8a8) != '\x01') {
      fVar99 = fVar99 + (float)*(int *)(lVar29 + 0x8b8);
      if ((*(char *)(lVar29 + 0x755) != '\0') || (*(char *)(lVar29 + 0x756) != '\0')) {
        fVar36 = (float)NEON_ucvtf(*(undefined4 *)(lVar29 + 0x768));
        fVar99 = fVar99 + fVar36;
      }
      iVar51 = *(int *)(*(long *)(param_3 + 0x238) + 0x330);
      if (0 < iVar51) {
        if (iVar51 == 3) {
          iVar51 = FUN_00281690(param_3);
        }
        else {
          if (iVar51 != 2) goto LAB_0026a978;
          iVar51 = FUN_0027c004(param_3);
        }
        fVar99 = fVar99 + (float)iVar51;
      }
LAB_0026a978:
      return fVar97 <= fVar99;
    }
  }
  else if ((param_3[5] == '\x01') &&
          (fVar98 + *(float *)(param_3 + 0x68) + (float)*(int *)(lVar29 + 0x8b8) < fVar97)) {
    return false;
  }
  return true;
}


