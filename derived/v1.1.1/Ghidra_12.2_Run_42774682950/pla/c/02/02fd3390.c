/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02fd3390; name: FUN_02fd3390
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02fd3390(long *param_1,float *param_2,long *param_3)

{
  uint uVar1;
  float *pfVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  char cVar7;
  short sVar8;
  undefined2 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  bool bVar15;
  long *plVar16;
  long *plVar17;
  undefined8 *puVar18;
  undefined4 *puVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  ulong uVar22;
  long lVar23;
  undefined4 *puVar24;
  uint uVar25;
  long lVar26;
  undefined8 *puVar27;
  byte bVar28;
  byte bVar29;
  undefined1 uVar30;
  int iVar31;
  uint uVar32;
  undefined1 auVar34 [12];
  undefined1 auVar41 [12];
  undefined1 auVar42 [12];
  int iVar55;
  int iVar56;
  int iVar57;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  uint uVar33;
  undefined1 auVar35 [12];
  undefined1 auVar36 [12];
  undefined1 auVar37 [12];
  undefined1 auVar38 [12];
  undefined1 auVar39 [12];
  undefined1 auVar40 [12];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  int iVar58;
  int iVar67;
  int iVar68;
  int iVar69;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  int iVar70;
  float fVar71;
  int iVar78;
  int iVar80;
  int iVar82;
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  float fVar79;
  float fVar81;
  float fVar83;
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  int iVar84;
  float fVar85;
  int iVar86;
  float fVar87;
  float fVar88;
  int iVar89;
  float fVar90;
  int iVar92;
  float fVar93;
  long lVar91;
  int iVar94;
  int iVar99;
  int iVar100;
  int iVar101;
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  int iVar102;
  float fVar103;
  int iVar109;
  float fVar110;
  int iVar111;
  float fVar112;
  int iVar113;
  float fVar114;
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  float fVar115;
  undefined8 uVar116;
  float fVar122;
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  float fVar121;
  float fVar123;
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined8 uVar124;
  long local_a40;
  byte local_9a0;
  byte bStack_99f;
  byte bStack_99e;
  byte bStack_99d;
  byte bStack_99c;
  byte bStack_99b;
  byte bStack_99a;
  byte bStack_999;
  byte bStack_998;
  byte bStack_997;
  byte bStack_996;
  byte bStack_995;
  byte bStack_994;
  byte bStack_993;
  byte bStack_992;
  byte bStack_991;
  undefined4 local_960 [256];
  undefined8 *local_560;
  undefined4 local_550 [256];
  undefined4 *local_150;
  undefined2 local_138 [8];
  undefined8 local_128;
  undefined8 local_120;
  long local_118;
  uint local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  ulong local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined1 local_b4;
  undefined2 local_b0;
  undefined4 local_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 local_a0;
  undefined4 local_98;
  uint local_90;
  undefined1 local_8c;
  undefined2 local_88;
  undefined4 local_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 uStack_78;
  
  uVar14 = _UNK_03889708;
  uVar13 = _DAT_03889700;
  if (*param_1 == 0) {
    local_a40 = 0;
  }
  else {
    local_a40 = *param_1 + (long)param_1;
  }
  local_960[0] = 1;
  local_560 = (undefined8 *)((ulong)local_960 | 4);
  puVar19 = (undefined4 *)((ulong)local_550 | 4);
  puVar20 = (undefined8 *)((ulong)&local_f0 | 4);
  puVar21 = (undefined8 *)((ulong)local_138 | 4);
  puVar27 = (undefined8 *)((ulong)&local_100 | 4);
  uVar22 = 1;
  do {
    puVar18 = (undefined8 *)((long)local_560 - 4);
    pfVar2 = (float *)(local_a40 + (ulong)*(uint *)((long)local_560 - 4) * 0x80);
    local_9a0 = (byte)uVar13;
    bStack_99f = (byte)((ulong)uVar13 >> 8);
    bStack_99e = (byte)((ulong)uVar13 >> 0x10);
    bStack_99d = (byte)((ulong)uVar13 >> 0x18);
    bStack_99c = (byte)((ulong)uVar13 >> 0x20);
    bStack_99b = (byte)((ulong)uVar13 >> 0x28);
    bStack_99a = (byte)((ulong)uVar13 >> 0x30);
    bStack_999 = (byte)((ulong)uVar13 >> 0x38);
    bStack_998 = (byte)uVar14;
    bStack_997 = (byte)((ulong)uVar14 >> 8);
    bStack_996 = (byte)((ulong)uVar14 >> 0x10);
    bStack_995 = (byte)((ulong)uVar14 >> 0x18);
    bStack_994 = (byte)((ulong)uVar14 >> 0x20);
    bStack_993 = (byte)((ulong)uVar14 >> 0x28);
    bStack_992 = (byte)((ulong)uVar14 >> 0x30);
    bStack_991 = (byte)((ulong)uVar14 >> 0x38);
    if ((int)uVar22 < 2) {
      iVar31 = -(uint)(*param_2 <= pfVar2[4]);
      iVar55 = -(uint)(param_2[1] <= pfVar2[5]);
      iVar56 = -(uint)(param_2[2] <= pfVar2[6]);
      iVar57 = -(uint)(param_2[3] <= pfVar2[7]);
      iVar58 = -(uint)(*pfVar2 <= param_2[4]);
      iVar67 = -(uint)(pfVar2[1] <= param_2[5]);
      iVar68 = -(uint)(pfVar2[2] <= param_2[6]);
      iVar69 = -(uint)(pfVar2[3] <= param_2[7]);
      iVar70 = -(uint)((float)*(undefined8 *)(param_2 + 8) <= pfVar2[0xc]);
      iVar78 = -(uint)((float)((ulong)*(undefined8 *)(param_2 + 8) >> 0x20) <= pfVar2[0xd]);
      iVar80 = -(uint)((float)*(undefined8 *)(param_2 + 10) <= pfVar2[0xe]);
      iVar82 = -(uint)((float)((ulong)*(undefined8 *)(param_2 + 10) >> 0x20) <= pfVar2[0xf]);
      iVar84 = -(uint)((float)*(undefined8 *)(pfVar2 + 8) <= param_2[0xc]);
      iVar86 = -(uint)((float)((ulong)*(undefined8 *)(pfVar2 + 8) >> 0x20) <= param_2[0xd]);
      iVar89 = -(uint)((float)*(undefined8 *)(pfVar2 + 10) <= param_2[0xe]);
      iVar92 = -(uint)((float)((ulong)*(undefined8 *)(pfVar2 + 10) >> 0x20) <= param_2[0xf]);
      iVar94 = -(uint)(param_2[0x10] <= pfVar2[0x14]);
      iVar99 = -(uint)(param_2[0x11] <= pfVar2[0x15]);
      iVar100 = -(uint)(param_2[0x12] <= pfVar2[0x16]);
      iVar101 = -(uint)(param_2[0x13] <= pfVar2[0x17]);
      iVar102 = -(uint)(pfVar2[0x10] <= param_2[0x14]);
      iVar109 = -(uint)(pfVar2[0x11] <= param_2[0x15]);
      iVar111 = -(uint)(pfVar2[0x12] <= param_2[0x16]);
      iVar113 = -(uint)(pfVar2[0x13] <= param_2[0x17]);
      iVar31 = CONCAT13((byte)((uint)iVar58 >> 0x18) & (byte)((uint)iVar31 >> 0x18) &
                        (byte)((uint)iVar70 >> 0x18) & (byte)((uint)iVar84 >> 0x18) &
                        (byte)((uint)iVar94 >> 0x18) & (byte)((uint)iVar102 >> 0x18) & bStack_99d,
                        CONCAT12((byte)((uint)iVar58 >> 0x10) & (byte)((uint)iVar31 >> 0x10) &
                                 (byte)((uint)iVar70 >> 0x10) & (byte)((uint)iVar84 >> 0x10) &
                                 (byte)((uint)iVar94 >> 0x10) & (byte)((uint)iVar102 >> 0x10) &
                                 bStack_99e,
                                 CONCAT11((byte)((uint)iVar58 >> 8) & (byte)((uint)iVar31 >> 8) &
                                          (byte)((uint)iVar70 >> 8) & (byte)((uint)iVar84 >> 8) &
                                          (byte)((uint)iVar94 >> 8) & (byte)((uint)iVar102 >> 8) &
                                          bStack_99f,
                                          (byte)iVar58 & (byte)iVar31 & (byte)iVar70 & (byte)iVar84
                                          & (byte)iVar94 & (byte)iVar102 & local_9a0)));
      auVar37._0_8_ =
           CONCAT17((byte)((uint)iVar67 >> 0x18) & (byte)((uint)iVar55 >> 0x18) &
                    (byte)((uint)iVar78 >> 0x18) & (byte)((uint)iVar86 >> 0x18) &
                    (byte)((uint)iVar99 >> 0x18) & (byte)((uint)iVar109 >> 0x18) & bStack_999,
                    CONCAT16((byte)((uint)iVar67 >> 0x10) & (byte)((uint)iVar55 >> 0x10) &
                             (byte)((uint)iVar78 >> 0x10) & (byte)((uint)iVar86 >> 0x10) &
                             (byte)((uint)iVar99 >> 0x10) & (byte)((uint)iVar109 >> 0x10) &
                             bStack_99a,
                             CONCAT15((byte)((uint)iVar67 >> 8) & (byte)((uint)iVar55 >> 8) &
                                      (byte)((uint)iVar78 >> 8) & (byte)((uint)iVar86 >> 8) &
                                      (byte)((uint)iVar99 >> 8) & (byte)((uint)iVar109 >> 8) &
                                      bStack_99b,
                                      CONCAT14((byte)iVar67 & (byte)iVar55 & (byte)iVar78 &
                                               (byte)iVar86 & (byte)iVar99 & (byte)iVar109 &
                                               bStack_99c,iVar31))));
      auVar37[8] = (byte)iVar68 & (byte)iVar56 & (byte)iVar80 & (byte)iVar89 & (byte)iVar100 &
                   (byte)iVar111 & bStack_998;
      auVar37[9] = (byte)((uint)iVar68 >> 8) & (byte)((uint)iVar56 >> 8) & (byte)((uint)iVar80 >> 8)
                   & (byte)((uint)iVar89 >> 8) & (byte)((uint)iVar100 >> 8) &
                   (byte)((uint)iVar111 >> 8) & bStack_997;
      auVar37[10] = (byte)((uint)iVar68 >> 0x10) & (byte)((uint)iVar56 >> 0x10) &
                    (byte)((uint)iVar80 >> 0x10) & (byte)((uint)iVar89 >> 0x10) &
                    (byte)((uint)iVar100 >> 0x10) & (byte)((uint)iVar111 >> 0x10) & bStack_996;
      auVar37[0xb] = (byte)((uint)iVar68 >> 0x18) & (byte)((uint)iVar56 >> 0x18) &
                     (byte)((uint)iVar80 >> 0x18) & (byte)((uint)iVar89 >> 0x18) &
                     (byte)((uint)iVar100 >> 0x18) & (byte)((uint)iVar111 >> 0x18) & bStack_995;
      auVar44[0xc] = (byte)iVar69 & (byte)iVar57 & (byte)iVar82 & (byte)iVar92 & (byte)iVar101 &
                     (byte)iVar113 & bStack_994;
      auVar44._0_12_ = auVar37;
      auVar44[0xd] = (byte)((uint)iVar69 >> 8) & (byte)((uint)iVar57 >> 8) &
                     (byte)((uint)iVar82 >> 8) & (byte)((uint)iVar92 >> 8) &
                     (byte)((uint)iVar101 >> 8) & (byte)((uint)iVar113 >> 8) & bStack_993;
      auVar44[0xe] = (byte)((uint)iVar69 >> 0x10) & (byte)((uint)iVar57 >> 0x10) &
                     (byte)((uint)iVar82 >> 0x10) & (byte)((uint)iVar92 >> 0x10) &
                     (byte)((uint)iVar101 >> 0x10) & (byte)((uint)iVar113 >> 0x10) & bStack_992;
      auVar44[0xf] = (byte)((uint)iVar69 >> 0x18) & (byte)((uint)iVar57 >> 0x18) &
                     (byte)((uint)iVar82 >> 0x18) & (byte)((uint)iVar92 >> 0x18) &
                     (byte)((uint)iVar101 >> 0x18) & (byte)((uint)iVar113 >> 0x18) & bStack_991;
      uVar33 = iVar31 + (int)((ulong)auVar37._0_8_ >> 0x20) + auVar37._8_4_ + auVar44._12_4_;
      iVar31 = *(int *)(&DAT_03aadfe0 + (ulong)uVar33 * 4);
      auVar44 = a64_TBL(ZEXT816(0),*(undefined1 (*) [16])(pfVar2 + 0x18),
                        *(undefined1 (*) [16])(&DAT_03aae120 + (ulong)uVar33 * 0x10));
      if (*(char *)(pfVar2 + 0x1c) == '\0') {
        *(long *)((long)local_560 - 4) = auVar44._0_8_;
        auVar44 = NEON_ext(auVar44,auVar44,8,1);
        *(long *)((long)local_560 + 4) = auVar44._0_8_;
        local_560 = (undefined8 *)((long)puVar18 + (long)iVar31 * 4);
        goto LAB_02fd3448;
      }
      local_560 = puVar18;
      if (uVar33 != 0) {
        iVar55 = 0;
LAB_02fd3cb0:
        switch(iVar55) {
        case 0:
          iVar56 = auVar44._0_4_;
          break;
        case 1:
          iVar56 = auVar44._4_4_;
          break;
        case 2:
          iVar56 = auVar44._8_4_;
          break;
        case 3:
          iVar56 = auVar44._12_4_;
          break;
        default:
          iVar56 = 0;
        }
        *(int *)(param_3 + 0xc) = iVar56 << 9;
        lVar23 = *(long *)(param_3[2] + 0x48);
        if (lVar23 == 0) {
          lVar23 = 0;
        }
        else {
          lVar23 = lVar23 + param_3[2] + 0x48;
        }
        piVar3 = (int *)(lVar23 + 0x60 + (long)iVar56 * 0x40 + (long)*(int *)(lVar23 + 0x60));
        param_3[0xd] = (long)piVar3;
        lVar23 = 0;
        if (*piVar3 != 0) {
          lVar23 = (long)piVar3 + (long)*piVar3;
        }
        param_3[0xe] = lVar23;
        sVar8 = (short)piVar3[0xe];
        if ((char)param_3[0x1d] == '\0') {
          auVar96._0_8_ = CONCAT44((int)sVar8,(int)sVar8);
          auVar96._8_4_ = (int)sVar8;
          auVar96._12_4_ = (int)sVar8;
          param_3[0x11] = auVar96._8_8_;
          param_3[0x10] = auVar96._0_8_;
          sVar8 = *(short *)((long)piVar3 + 0x3a);
          auVar118._0_8_ = CONCAT44((int)sVar8,(int)sVar8);
          auVar118._8_4_ = (int)sVar8;
          auVar118._12_4_ = (int)sVar8;
          param_3[0x13] = auVar118._8_8_;
          param_3[0x12] = auVar118._0_8_;
          sVar8 = (short)piVar3[0xf];
          auVar74._4_4_ = (int)sVar8;
          auVar74._0_4_ = (int)sVar8;
          auVar74._8_4_ = (int)sVar8;
          auVar74._12_4_ = (int)sVar8;
        }
        else {
          auVar96._0_8_ = CONCAT26(sVar8,CONCAT24(sVar8,CONCAT22(sVar8,sVar8)));
          auVar96._8_2_ = sVar8;
          auVar96._10_2_ = sVar8;
          auVar96._12_2_ = sVar8;
          auVar96._14_2_ = sVar8;
          param_3[0x11] = auVar96._8_8_;
          param_3[0x10] = auVar96._0_8_;
          uVar9 = *(undefined2 *)((long)piVar3 + 0x3a);
          auVar118._0_8_ = CONCAT26(uVar9,CONCAT24(uVar9,CONCAT22(uVar9,uVar9)));
          auVar118._8_2_ = uVar9;
          auVar118._10_2_ = uVar9;
          auVar118._12_2_ = uVar9;
          auVar118._14_2_ = uVar9;
          param_3[0x13] = auVar118._8_8_;
          param_3[0x12] = auVar118._0_8_;
          uVar9 = (undefined2)piVar3[0xf];
          auVar74._2_2_ = uVar9;
          auVar74._0_2_ = uVar9;
          auVar74._4_2_ = uVar9;
          auVar74._6_2_ = uVar9;
          auVar74._8_2_ = uVar9;
          auVar74._10_2_ = uVar9;
          auVar74._12_2_ = uVar9;
          auVar74._14_2_ = uVar9;
        }
        fVar10 = *(float *)(param_3 + 0x3c);
        fVar11 = *(float *)((long)param_3 + 0x1e4);
        fVar12 = *(float *)(param_3 + 0x3d);
        param_3[0x15] = auVar74._8_8_;
        param_3[0x14] = auVar74._0_8_;
        fVar71 = (float)piVar3[0xb];
        fVar85 = (float)param_3[0x3a];
        fVar87 = (float)((ulong)param_3[0x3a] >> 0x20);
        fVar90 = (float)param_3[0x3b];
        *(float *)(param_3 + 0x17) = fVar71;
        *(float *)((long)param_3 + 0xbc) = fVar71;
        *(float *)(param_3 + 0x16) = fVar71;
        *(float *)((long)param_3 + 0xb4) = fVar71;
        fVar103 = (float)piVar3[0xc];
        *(float *)(param_3 + 0x19) = fVar103;
        *(float *)((long)param_3 + 0xcc) = fVar103;
        *(float *)(param_3 + 0x18) = fVar103;
        *(float *)((long)param_3 + 0xc4) = fVar103;
        iVar56 = piVar3[0xd];
        lVar26 = CONCAT44(iVar56,iVar56);
        lVar91 = CONCAT44(iVar56,iVar56);
        param_3[0x1b] = lVar91;
        param_3[0x1a] = lVar26;
        local_550[0] = 0;
        local_150 = puVar19;
        fVar79 = fVar71;
        fVar81 = fVar71;
        fVar83 = fVar71;
        fVar110 = fVar103;
        fVar112 = fVar103;
        fVar114 = fVar103;
        do {
          puVar24 = local_150 + -1;
          puVar18 = (undefined8 *)(lVar23 + (ulong)(uint)local_150[-1] * 0x1c);
          uVar116 = *puVar18;
          uVar124 = *(undefined8 *)((long)puVar18 + 4);
          bVar28 = (byte)((ulong)uVar124 >> 8);
          bVar29 = (byte)((ulong)uVar116 >> 8);
          auVar119._0_4_ = auVar96._0_4_ + (CONCAT12(bVar29,(ushort)(byte)uVar116) & 0xffff);
          auVar119._4_4_ = auVar96._4_4_ + (uint)bVar29;
          auVar119._8_4_ = auVar96._8_4_ + (uint)(byte)((ulong)uVar116 >> 0x10);
          auVar119._12_4_ = auVar96._12_4_ + (uint)(byte)((ulong)uVar116 >> 0x18);
          auVar75._0_4_ = auVar96._0_4_ + ((CONCAT12(bVar28,(short)uVar124) & 0xff00ff) & 0xffff);
          auVar75._4_4_ = auVar96._4_4_ + (uint)bVar28;
          auVar75._8_4_ = auVar96._8_4_ + (uint)(byte)((ulong)uVar124 >> 0x10);
          auVar75._12_4_ = auVar96._12_4_ + (uint)(byte)((ulong)uVar124 >> 0x18);
          uVar124 = *(undefined8 *)((long)puVar18 + 0xc);
          auVar105 = NEON_scvtf(auVar119,4);
          bVar28 = (byte)((ulong)uVar124 >> 8);
          auVar96 = NEON_scvtf(auVar75,4);
          fVar115 = fVar71 * auVar105._0_4_;
          fVar121 = fVar79 * auVar105._4_4_;
          fVar122 = fVar81 * auVar105._8_4_;
          fVar123 = fVar83 * auVar105._12_4_;
          fVar71 = fVar71 * auVar96._0_4_;
          fVar79 = fVar79 * auVar96._4_4_;
          fVar81 = fVar81 * auVar96._8_4_;
          fVar83 = fVar83 * auVar96._12_4_;
          uVar116 = puVar18[1];
          bVar29 = (byte)((ulong)uVar116 >> 8);
          auVar97._0_4_ = auVar118._0_4_ + (CONCAT12(bVar29,(ushort)(byte)uVar116) & 0xffff);
          auVar97._4_4_ = auVar118._4_4_ + (uint)bVar29;
          auVar97._8_4_ = auVar118._8_4_ + (uint)(byte)((ulong)uVar116 >> 0x10);
          auVar97._12_4_ = auVar118._12_4_ + (uint)(byte)((ulong)uVar116 >> 0x18);
          auVar62._0_4_ = auVar118._0_4_ + ((CONCAT12(bVar28,(short)uVar124) & 0xff00ff) & 0xffff);
          auVar62._4_4_ = auVar118._4_4_ + (uint)bVar28;
          auVar62._8_4_ = auVar118._8_4_ + (uint)(byte)((ulong)uVar124 >> 0x10);
          auVar62._12_4_ = auVar118._12_4_ + (uint)(byte)((ulong)uVar124 >> 0x18);
          auVar96 = NEON_scvtf(auVar97,4);
          uVar124 = *(undefined8 *)((long)puVar18 + 0x14);
          auVar118 = NEON_scvtf(auVar62,4);
          bVar28 = (byte)((ulong)uVar124 >> 8);
          uVar116 = puVar18[2];
          bVar29 = (byte)((ulong)uVar116 >> 8);
          auVar106._0_4_ = auVar74._0_4_ + (CONCAT12(bVar29,(ushort)(byte)uVar116) & 0xffff);
          auVar106._4_4_ = auVar74._4_4_ + (uint)bVar29;
          auVar106._8_4_ = auVar74._8_4_ + (uint)(byte)((ulong)uVar116 >> 0x10);
          auVar106._12_4_ = auVar74._12_4_ + (uint)(byte)((ulong)uVar116 >> 0x18);
          auVar105._0_4_ = auVar74._0_4_ + ((CONCAT12(bVar28,(short)uVar124) & 0xff00ff) & 0xffff);
          auVar105._4_4_ = auVar74._4_4_ + (uint)bVar28;
          auVar105._8_4_ = auVar74._8_4_ + (uint)(byte)((ulong)uVar124 >> 0x10);
          auVar105._12_4_ = auVar74._12_4_ + (uint)(byte)((ulong)uVar124 >> 0x18);
          auVar107 = NEON_scvtf(auVar106,4);
          auVar74 = NEON_scvtf(auVar105,4);
          iVar102 = -(uint)(fVar121 <= fVar10);
          iVar109 = -(uint)(fVar122 <= fVar10);
          iVar111 = -(uint)(fVar123 <= fVar10);
          fVar88 = (float)((ulong)lVar26 >> 0x20);
          fVar93 = (float)((ulong)lVar91 >> 0x20);
          iVar82 = -(uint)(fVar85 <= fVar79);
          iVar84 = -(uint)(fVar85 <= fVar81);
          iVar86 = -(uint)(fVar85 <= fVar83);
          iVar67 = -(uint)(fVar87 <= fVar110 * auVar118._4_4_);
          iVar68 = -(uint)(fVar87 <= fVar112 * auVar118._8_4_);
          iVar69 = -(uint)(fVar87 <= fVar114 * auVar118._12_4_);
          iVar70 = -(uint)(fVar121 <= fVar79);
          iVar78 = -(uint)(fVar122 <= fVar81);
          iVar80 = -(uint)(fVar123 <= fVar83);
          iVar89 = -(uint)(fVar110 * auVar96._4_4_ <= fVar11);
          iVar92 = -(uint)(fVar112 * auVar96._8_4_ <= fVar11);
          iVar94 = -(uint)(fVar114 * auVar96._12_4_ <= fVar11);
          iVar56 = -(uint)(fVar90 <= fVar88 * auVar74._4_4_);
          iVar57 = -(uint)(fVar90 <= (float)lVar91 * auVar74._8_4_);
          iVar58 = -(uint)(fVar90 <= fVar93 * auVar74._12_4_);
          iVar99 = -(uint)(fVar88 * auVar107._4_4_ <= fVar12);
          iVar100 = -(uint)((float)lVar91 * auVar107._8_4_ <= fVar12);
          iVar101 = -(uint)(fVar93 * auVar107._12_4_ <= fVar12);
          uVar33 = (uint)(byte)(-(fVar85 <= fVar71) & -(fVar115 <= fVar10) & -(fVar115 <= fVar71) &
                                -(fVar103 * auVar96._0_4_ <= fVar11) &
                                -(fVar87 <= fVar103 * auVar118._0_4_) &
                                -((float)lVar26 * auVar107._0_4_ <= fVar12) &
                               -(fVar90 <= (float)lVar26 * auVar74._0_4_));
          auVar38._0_8_ =
               CONCAT17((byte)((uint)iVar82 >> 0x18) & (byte)((uint)iVar102 >> 0x18) &
                        (byte)((uint)iVar70 >> 0x18) & (byte)((uint)iVar89 >> 0x18) &
                        (byte)((uint)iVar67 >> 0x18) & (byte)((uint)iVar99 >> 0x18) &
                        (byte)((uint)iVar56 >> 0x18),
                        (uint7)CONCAT14((byte)iVar82 & (byte)iVar102 & (byte)iVar70 & (byte)iVar89 &
                                        (byte)iVar67 & (byte)iVar99 & (byte)iVar56,uVar33));
          auVar38[8] = (byte)iVar84 & (byte)iVar109 & (byte)iVar78 & (byte)iVar92 & (byte)iVar68 &
                       (byte)iVar100 & (byte)iVar57;
          auVar38[9] = (byte)((uint)iVar84 >> 8) & (byte)((uint)iVar109 >> 8) &
                       (byte)((uint)iVar78 >> 8) & (byte)((uint)iVar92 >> 8) &
                       (byte)((uint)iVar68 >> 8) & (byte)((uint)iVar100 >> 8) &
                       (byte)((uint)iVar57 >> 8);
          auVar38[10] = (byte)((uint)iVar84 >> 0x10) & (byte)((uint)iVar109 >> 0x10) &
                        (byte)((uint)iVar78 >> 0x10) & (byte)((uint)iVar92 >> 0x10) &
                        (byte)((uint)iVar68 >> 0x10) & (byte)((uint)iVar100 >> 0x10) &
                        (byte)((uint)iVar57 >> 0x10);
          auVar38[0xb] = (byte)((uint)iVar84 >> 0x18) & (byte)((uint)iVar109 >> 0x18) &
                         (byte)((uint)iVar78 >> 0x18) & (byte)((uint)iVar92 >> 0x18) &
                         (byte)((uint)iVar68 >> 0x18) & (byte)((uint)iVar100 >> 0x18) &
                         (byte)((uint)iVar57 >> 0x18);
          auVar107[0xc] =
               (byte)iVar86 & (byte)iVar111 & (byte)iVar80 & (byte)iVar94 & (byte)iVar69 &
               (byte)iVar101 & (byte)iVar58;
          auVar107._0_12_ = auVar38;
          auVar107[0xd] =
               (byte)((uint)iVar86 >> 8) & (byte)((uint)iVar111 >> 8) & (byte)((uint)iVar80 >> 8) &
               (byte)((uint)iVar94 >> 8) & (byte)((uint)iVar69 >> 8) & (byte)((uint)iVar101 >> 8) &
               (byte)((uint)iVar58 >> 8);
          auVar107[0xe] =
               (byte)((uint)iVar86 >> 0x10) & (byte)((uint)iVar111 >> 0x10) &
               (byte)((uint)iVar80 >> 0x10) & (byte)((uint)iVar94 >> 0x10) &
               (byte)((uint)iVar69 >> 0x10) & (byte)((uint)iVar101 >> 0x10) &
               (byte)((uint)iVar58 >> 0x10);
          auVar107[0xf] =
               (byte)((uint)iVar86 >> 0x18) & (byte)((uint)iVar111 >> 0x18) &
               (byte)((uint)iVar80 >> 0x18) & (byte)((uint)iVar94 >> 0x18) &
               (byte)((uint)iVar69 >> 0x18) & (byte)((uint)iVar101 >> 0x18) &
               (byte)((uint)iVar58 >> 0x18);
          uVar116 = puVar18[3];
          uVar30 = (undefined1)((ulong)uVar116 >> 8);
          auVar63._6_2_ = 0;
          auVar63._0_6_ =
               (uint6)CONCAT14(uVar30,(uint)CONCAT12(uVar30,(ushort)(byte)uVar116)) & 0xffff0000ffff
          ;
          auVar63[8] = (char)((ulong)uVar116 >> 0x10);
          auVar63._9_3_ = 0;
          auVar63[0xc] = (char)((ulong)uVar116 >> 0x18);
          auVar63._13_3_ = 0;
          bVar28 = (byte)((int)(uVar33 << 0x1f) >> 0x1f);
          iVar56 = CONCAT13(bVar28 & bStack_99d,
                            CONCAT12(bVar28 & bStack_99e,
                                     CONCAT11(bVar28 & bStack_99f,bVar28 & local_9a0)));
          bVar28 = (byte)(((int)((ulong)auVar38._0_8_ >> 0x20) << 0x1f) >> 0x1f);
          auVar39._0_8_ =
               CONCAT17(bVar28 & bStack_999,
                        CONCAT16(bVar28 & bStack_99a,
                                 CONCAT15(bVar28 & bStack_99b,CONCAT14(bVar28 & bStack_99c,iVar56)))
                       );
          bVar28 = (byte)((auVar38._8_4_ << 0x1f) >> 0x1f);
          auVar39[8] = bVar28 & bStack_998;
          auVar39[9] = bVar28 & bStack_997;
          auVar39[10] = bVar28 & bStack_996;
          auVar39[0xb] = bVar28 & bStack_995;
          bVar28 = (byte)((auVar107._12_4_ << 0x1f) >> 0x1f);
          auVar49[0xc] = bVar28 & bStack_994;
          auVar49._0_12_ = auVar39;
          auVar49[0xd] = bVar28 & bStack_993;
          auVar49[0xe] = bVar28 & bStack_992;
          auVar49[0xf] = bVar28 & bStack_991;
          uVar33 = iVar56 + (int)((ulong)auVar39._0_8_ >> 0x20) + auVar39._8_4_ + auVar49._12_4_;
          iVar56 = *(int *)(&DAT_03aadfe0 + (ulong)uVar33 * 4);
          auVar74 = a64_TBL(ZEXT816(0),auVar63,
                            *(undefined1 (*) [16])(&DAT_03aae120 + (ulong)uVar33 * 0x10));
          if (*(byte *)((long)puVar18 + 0x1b) < *(byte *)((long)puVar18 + 0x1a)) {
            cVar7 = *(char *)((long)param_3 + 0x101);
            local_150 = puVar24;
            if (uVar33 != 0 && cVar7 == '\0') {
              iVar57 = 0;
              do {
                switch(iVar57) {
                case 0:
                  iVar58 = auVar74._0_4_;
                  break;
                case 1:
                  iVar58 = auVar74._4_4_;
                  break;
                case 2:
                  iVar58 = auVar74._8_4_;
                  break;
                case 3:
                  iVar58 = auVar74._12_4_;
                  break;
                default:
                  iVar58 = 0;
                }
                uVar33 = 0;
                uVar25 = *(uint *)(param_3[0xd] + 8 +
                                  (long)iVar58 * 4 + (long)*(int *)(param_3[0xd] + 8));
                uVar32 = 1;
                if ((uVar25 >> 8 & 0xff) <= uVar25 >> 0x18 &&
                    (uVar25 >> 0x10 & 0xff) != uVar25 >> 0x18) {
                  uVar32 = 2;
                }
                local_100 = *(undefined8 *)param_3[4];
                uStack_f8 = ((undefined8 *)param_3[4])[1];
                do {
                  lVar23 = param_3[2];
                  plVar17 = (long *)param_3[3];
                  uVar25 = *(uint *)(param_3 + 0xc) | iVar58 << 1;
                  uVar6 = ((uVar25 | uVar33) + 1 <<
                          (ulong)(-((uint)*(byte *)(lVar23 + 0x1c) + *(int *)((long)plVar17 + 0x1c))
                                 & 0x1f)) - 1 |
                          (&DAT_03aa74b0)[*(int *)((long)plVar17 + 0x1c)] & *(uint *)(plVar17 + 3);
                  plVar16 = *(long **)*param_3;
                  if (plVar16 == (long *)0x0) {
                    lVar23 = *plVar17;
                    local_98 = 0xffffff;
                    plVar17 = (long *)param_3[0x1f];
                    local_b0 = 0xffff;
                    local_ac = 0;
                    local_88 = 0xffff;
                    local_84 = 0;
                    uStack_a8 = 0;
                    uStack_a4 = 0;
                    uStack_80 = 0;
                    uStack_7c = 0;
                    if (lVar23 == 0) {
                      local_a0 = 0xffffffffffffffff;
                    }
                    else {
                      local_a0 = *(undefined8 *)(lVar23 + 0xb0);
                      local_98 = *(undefined4 *)(lVar23 + 0x50);
                    }
LAB_02fd41a4:
                    local_c0 = CONCAT44(local_c0._4_4_,0xffffff);
                    local_d0 = local_d0 & 0xffffffff00000000;
                    uStack_78 = 6;
                    local_8c = 0xf;
                    local_b4 = 0xf;
                    local_b8 = 0xffffffff;
                    local_c8 = 0xffffffffffffffff;
                    local_d8 = 0;
                    local_e0 = 0;
                    uStack_e8 = 0;
                    local_f0 = 0;
                    local_90 = uVar6;
                    (**(code **)(*plVar17 + 0x28))(plVar17,&local_f0);
                    bVar15 = false;
                    if ((char)param_3[0x20] != '\0') {
                      bVar15 = *(int *)(param_3[0x1f] + 0xc) != 0;
                    }
                    *(byte *)((long)param_3 + 0x101) = *(byte *)((long)param_3 + 0x101) | bVar15;
                  }
                  else {
                    lVar26 = *(long *)(lVar23 + 0x48);
                    if (lVar26 == 0) {
                      lVar26 = 0;
                    }
                    else {
                      lVar26 = lVar26 + lVar23 + 0x48;
                    }
                    piVar3 = (int *)(lVar26 + 0x40);
                    if (*(int *)(lVar26 + 0x44) == 2) {
                      lVar26 = (long)*piVar3;
                    }
                    else {
                      iVar68 = *piVar3;
                      iVar69 = 0;
                      iVar67 = *(int *)(lVar26 + 0x44) + -1;
                      while( true ) {
                        uVar1 = iVar67 + iVar69;
                        if ((int)uVar1 < 0) {
                          uVar1 = uVar1 + 1;
                        }
                        uVar5 = (int)uVar1 >> 1;
                        lVar91 = (long)((ulong)uVar1 << 0x20) >> 0x21;
                        uVar1 = *(uint *)((long)piVar3 +
                                         (-(ulong)(uVar5 >> 0x1f) & 0xfffffff800000000 |
                                         (ulong)uVar5 << 3) + (long)iVar68);
                        lVar26 = lVar91 + 1;
                        if ((uVar1 <= uVar25) &&
                           (uVar25 < *(uint *)((long)piVar3 + lVar26 * 8 + (long)iVar68))) break;
                        iVar70 = (int)lVar26;
                        if (uVar25 <= uVar1) {
                          iVar67 = uVar5 - 1;
                          iVar70 = iVar69;
                        }
                        iVar69 = iVar70;
                      }
                      lVar26 = lVar91 * 8 + (long)iVar68;
                    }
                    (**(code **)(*plVar16 + 0x40))
                              (plVar16,*(undefined2 *)((long)piVar3 + lVar26 + 4),6,*plVar17,
                               plVar17[1],lVar23,uVar6,0,&local_100);
                    lVar23 = *param_3;
                    if (*(long *)(lVar23 + 8) == 0) {
LAB_02fd4100:
                      local_98 = 0xffffff;
                      lVar26 = *(long *)param_3[3];
                      plVar17 = (long *)param_3[0x1f];
                      local_b0 = *(undefined2 *)(lVar23 + 0x10);
                      uStack_a4 = *(undefined4 *)(lVar23 + 0x1c);
                      local_ac = (undefined4)*(undefined8 *)(lVar23 + 0x14);
                      uStack_a8 = (undefined4)((ulong)*(undefined8 *)(lVar23 + 0x14) >> 0x20);
                      if (lVar26 == 0) {
                        local_a0 = 0xffffffffffffffff;
                      }
                      else {
                        local_a0 = *(undefined8 *)(lVar26 + 0xb0);
                        local_98 = *(undefined4 *)(lVar26 + 0x50);
                      }
                      uStack_7c = *(undefined4 *)(puVar27 + 1);
                      local_88 = (undefined2)local_100;
                      local_84 = (undefined4)*puVar27;
                      uStack_80 = (undefined4)((ulong)*puVar27 >> 0x20);
                      goto LAB_02fd41a4;
                    }
                    local_f0 = CONCAT62(local_f0._2_6_,*(undefined2 *)(lVar23 + 0x10));
                    uVar116 = *(undefined8 *)(lVar23 + 0x14);
                    *(undefined4 *)(puVar20 + 1) = *(undefined4 *)(lVar23 + 0x1c);
                    *puVar20 = uVar116;
                    puVar18 = (undefined8 *)param_3[0x1e];
                    local_e0 = *puVar18;
                    local_d8 = puVar18[1];
                    local_d0 = puVar18[2];
                    local_c8 = CONCAT44(local_c8._4_4_,*(undefined4 *)(puVar18 + 3));
                    local_138[0] = (undefined2)local_100;
                    uVar116 = *puVar27;
                    local_c0 = 0;
                    *(undefined4 *)(puVar21 + 1) = *(undefined4 *)(puVar27 + 1);
                    *puVar21 = uVar116;
                    local_128 = *(undefined8 *)param_3[3];
                    local_120 = ((undefined8 *)param_3[3])[1];
                    local_118 = param_3[2];
                    local_108 = 0;
                    local_110 = uVar6;
                    uVar22 = (**(code **)(**(long **)(lVar23 + 8) + 0x40))
                                       (*(long **)(lVar23 + 8),6,1,&local_f0,local_138);
                    if ((uVar22 & 1) != 0) {
                      lVar23 = *param_3;
                      goto LAB_02fd4100;
                    }
                  }
                  uVar33 = uVar33 + 1;
                } while (uVar33 < uVar32);
                iVar57 = iVar57 + 1;
              } while (iVar57 != iVar56);
              cVar7 = *(char *)((long)param_3 + 0x101);
            }
            if (cVar7 != '\0') goto LAB_02fd3c9c;
          }
          else {
            *(long *)(local_150 + -1) = auVar74._0_8_;
            auVar74 = NEON_ext(auVar74,auVar74,8,1);
            *(long *)(local_150 + 1) = auVar74._0_8_;
            local_150 = puVar24 + iVar56;
          }
          if (local_550 == local_150) goto LAB_02fd3c9c;
          auVar74 = *(undefined1 (*) [16])(param_3 + 0x14);
          fVar71 = *(float *)(param_3 + 0x16);
          fVar79 = *(float *)((long)param_3 + 0xb4);
          fVar81 = *(float *)(param_3 + 0x17);
          fVar83 = *(float *)((long)param_3 + 0xbc);
          lVar23 = param_3[0xe];
          auVar96 = *(undefined1 (*) [16])(param_3 + 0x10);
          auVar118 = *(undefined1 (*) [16])(param_3 + 0x12);
          fVar103 = *(float *)(param_3 + 0x18);
          fVar110 = *(float *)((long)param_3 + 0xc4);
          fVar112 = *(float *)(param_3 + 0x19);
          fVar114 = *(float *)((long)param_3 + 0xcc);
          lVar91 = param_3[0x1b];
          lVar26 = param_3[0x1a];
        } while( true );
      }
    }
    else {
      puVar18 = local_560 + -1;
      iVar31 = -(uint)(*param_2 <= pfVar2[4]);
      iVar55 = -(uint)(param_2[1] <= pfVar2[5]);
      iVar56 = -(uint)(param_2[2] <= pfVar2[6]);
      iVar57 = -(uint)(param_2[3] <= pfVar2[7]);
      uVar33 = *(uint *)(local_560 + -1);
      iVar58 = -(uint)(*pfVar2 <= param_2[4]);
      iVar67 = -(uint)(pfVar2[1] <= param_2[5]);
      iVar68 = -(uint)(pfVar2[2] <= param_2[6]);
      iVar69 = -(uint)(pfVar2[3] <= param_2[7]);
      iVar70 = -(uint)((float)*(undefined8 *)(param_2 + 8) <= pfVar2[0xc]);
      iVar78 = -(uint)((float)((ulong)*(undefined8 *)(param_2 + 8) >> 0x20) <= pfVar2[0xd]);
      iVar80 = -(uint)((float)*(undefined8 *)(param_2 + 10) <= pfVar2[0xe]);
      iVar82 = -(uint)((float)((ulong)*(undefined8 *)(param_2 + 10) >> 0x20) <= pfVar2[0xf]);
      iVar84 = -(uint)((float)*(undefined8 *)(pfVar2 + 8) <= param_2[0xc]);
      iVar86 = -(uint)((float)((ulong)*(undefined8 *)(pfVar2 + 8) >> 0x20) <= param_2[0xd]);
      iVar89 = -(uint)((float)*(undefined8 *)(pfVar2 + 10) <= param_2[0xe]);
      iVar92 = -(uint)((float)((ulong)*(undefined8 *)(pfVar2 + 10) >> 0x20) <= param_2[0xf]);
      iVar102 = -(uint)(param_2[0x10] <= pfVar2[0x14]);
      iVar109 = -(uint)(param_2[0x11] <= pfVar2[0x15]);
      iVar111 = -(uint)(param_2[0x12] <= pfVar2[0x16]);
      iVar113 = -(uint)(param_2[0x13] <= pfVar2[0x17]);
      iVar94 = -(uint)(pfVar2[0x10] <= (float)*(undefined8 *)(param_2 + 0x14));
      iVar99 = -(uint)(pfVar2[0x11] <= (float)((ulong)*(undefined8 *)(param_2 + 0x14) >> 0x20));
      iVar100 = -(uint)(pfVar2[0x12] <= (float)*(undefined8 *)(param_2 + 0x16));
      iVar101 = -(uint)(pfVar2[0x13] <= (float)((ulong)*(undefined8 *)(param_2 + 0x16) >> 0x20));
      iVar31 = CONCAT13((byte)((uint)iVar58 >> 0x18) & (byte)((uint)iVar31 >> 0x18) &
                        (byte)((uint)iVar70 >> 0x18) & (byte)((uint)iVar84 >> 0x18) &
                        (byte)((uint)iVar102 >> 0x18) & (byte)((uint)iVar94 >> 0x18) & bStack_99d,
                        CONCAT12((byte)((uint)iVar58 >> 0x10) & (byte)((uint)iVar31 >> 0x10) &
                                 (byte)((uint)iVar70 >> 0x10) & (byte)((uint)iVar84 >> 0x10) &
                                 (byte)((uint)iVar102 >> 0x10) & (byte)((uint)iVar94 >> 0x10) &
                                 bStack_99e,
                                 CONCAT11((byte)((uint)iVar58 >> 8) & (byte)((uint)iVar31 >> 8) &
                                          (byte)((uint)iVar70 >> 8) & (byte)((uint)iVar84 >> 8) &
                                          (byte)((uint)iVar102 >> 8) & (byte)((uint)iVar94 >> 8) &
                                          bStack_99f,
                                          (byte)iVar58 & (byte)iVar31 & (byte)iVar70 & (byte)iVar84
                                          & (byte)iVar102 & (byte)iVar94 & local_9a0)));
      auVar34._0_8_ =
           CONCAT17((byte)((uint)iVar67 >> 0x18) & (byte)((uint)iVar55 >> 0x18) &
                    (byte)((uint)iVar78 >> 0x18) & (byte)((uint)iVar86 >> 0x18) &
                    (byte)((uint)iVar109 >> 0x18) & (byte)((uint)iVar99 >> 0x18) & bStack_999,
                    CONCAT16((byte)((uint)iVar67 >> 0x10) & (byte)((uint)iVar55 >> 0x10) &
                             (byte)((uint)iVar78 >> 0x10) & (byte)((uint)iVar86 >> 0x10) &
                             (byte)((uint)iVar109 >> 0x10) & (byte)((uint)iVar99 >> 0x10) &
                             bStack_99a,
                             CONCAT15((byte)((uint)iVar67 >> 8) & (byte)((uint)iVar55 >> 8) &
                                      (byte)((uint)iVar78 >> 8) & (byte)((uint)iVar86 >> 8) &
                                      (byte)((uint)iVar109 >> 8) & (byte)((uint)iVar99 >> 8) &
                                      bStack_99b,
                                      CONCAT14((byte)iVar67 & (byte)iVar55 & (byte)iVar78 &
                                               (byte)iVar86 & (byte)iVar109 & (byte)iVar99 &
                                               bStack_99c,iVar31))));
      auVar34[8] = (byte)iVar68 & (byte)iVar56 & (byte)iVar80 & (byte)iVar89 & (byte)iVar111 &
                   (byte)iVar100 & bStack_998;
      auVar34[9] = (byte)((uint)iVar68 >> 8) & (byte)((uint)iVar56 >> 8) & (byte)((uint)iVar80 >> 8)
                   & (byte)((uint)iVar89 >> 8) & (byte)((uint)iVar111 >> 8) &
                   (byte)((uint)iVar100 >> 8) & bStack_997;
      auVar34[10] = (byte)((uint)iVar68 >> 0x10) & (byte)((uint)iVar56 >> 0x10) &
                    (byte)((uint)iVar80 >> 0x10) & (byte)((uint)iVar89 >> 0x10) &
                    (byte)((uint)iVar111 >> 0x10) & (byte)((uint)iVar100 >> 0x10) & bStack_996;
      auVar34[0xb] = (byte)((uint)iVar68 >> 0x18) & (byte)((uint)iVar56 >> 0x18) &
                     (byte)((uint)iVar80 >> 0x18) & (byte)((uint)iVar89 >> 0x18) &
                     (byte)((uint)iVar111 >> 0x18) & (byte)((uint)iVar100 >> 0x18) & bStack_995;
      auVar43[0xc] = (byte)iVar69 & (byte)iVar57 & (byte)iVar82 & (byte)iVar92 & (byte)iVar113 &
                     (byte)iVar101 & bStack_994;
      auVar43._0_12_ = auVar34;
      auVar43[0xd] = (byte)((uint)iVar69 >> 8) & (byte)((uint)iVar57 >> 8) &
                     (byte)((uint)iVar82 >> 8) & (byte)((uint)iVar92 >> 8) &
                     (byte)((uint)iVar113 >> 8) & (byte)((uint)iVar101 >> 8) & bStack_993;
      auVar43[0xe] = (byte)((uint)iVar69 >> 0x10) & (byte)((uint)iVar57 >> 0x10) &
                     (byte)((uint)iVar82 >> 0x10) & (byte)((uint)iVar92 >> 0x10) &
                     (byte)((uint)iVar113 >> 0x10) & (byte)((uint)iVar101 >> 0x10) & bStack_992;
      auVar43[0xf] = (byte)((uint)iVar69 >> 0x18) & (byte)((uint)iVar57 >> 0x18) &
                     (byte)((uint)iVar82 >> 0x18) & (byte)((uint)iVar92 >> 0x18) &
                     (byte)((uint)iVar113 >> 0x18) & (byte)((uint)iVar101 >> 0x18) & bStack_991;
      uVar32 = iVar31 + (int)((ulong)auVar34._0_8_ >> 0x20) + auVar34._8_4_ + auVar43._12_4_;
      iVar31 = *(int *)(&DAT_03aadfe0 + (ulong)uVar32 * 4);
      auVar44 = a64_TBL(ZEXT816(0),*(undefined1 (*) [16])(pfVar2 + 0x18),
                        *(undefined1 (*) [16])(&DAT_03aae120 + (ulong)uVar32 * 0x10));
      if (*(char *)(pfVar2 + 0x1c) == '\0') {
        local_560[-1] = auVar44._0_8_;
        auVar44 = NEON_ext(auVar44,auVar44,8,1);
        *local_560 = auVar44._0_8_;
        local_560 = (undefined8 *)((long)puVar18 + (long)iVar31 * 4);
      }
      else {
        local_560 = puVar18;
        if (uVar32 != 0) {
          iVar55 = 0;
LAB_02fd355c:
          switch(iVar55) {
          case 0:
            iVar56 = auVar44._0_4_;
            break;
          case 1:
            iVar56 = auVar44._4_4_;
            break;
          case 2:
            iVar56 = auVar44._8_4_;
            break;
          case 3:
            iVar56 = auVar44._12_4_;
            break;
          default:
            iVar56 = 0;
          }
          *(int *)(param_3 + 0xc) = iVar56 << 9;
          lVar23 = *(long *)(param_3[2] + 0x48);
          if (lVar23 == 0) {
            lVar23 = 0;
          }
          else {
            lVar23 = lVar23 + param_3[2] + 0x48;
          }
          piVar3 = (int *)(lVar23 + 0x60 + (long)iVar56 * 0x40 + (long)*(int *)(lVar23 + 0x60));
          param_3[0xd] = (long)piVar3;
          lVar23 = 0;
          if (*piVar3 != 0) {
            lVar23 = (long)piVar3 + (long)*piVar3;
          }
          param_3[0xe] = lVar23;
          sVar8 = (short)piVar3[0xe];
          if ((char)param_3[0x1d] == '\0') {
            auVar72._0_8_ = CONCAT44((int)sVar8,(int)sVar8);
            auVar72._8_4_ = (int)sVar8;
            auVar72._12_4_ = (int)sVar8;
            param_3[0x11] = auVar72._8_8_;
            param_3[0x10] = auVar72._0_8_;
            sVar8 = *(short *)((long)piVar3 + 0x3a);
            auVar59._0_8_ = CONCAT44((int)sVar8,(int)sVar8);
            auVar59._8_4_ = (int)sVar8;
            auVar59._12_4_ = (int)sVar8;
            param_3[0x13] = auVar59._8_8_;
            param_3[0x12] = auVar59._0_8_;
            sVar8 = (short)piVar3[0xf];
            auVar45._4_4_ = (int)sVar8;
            auVar45._0_4_ = (int)sVar8;
            auVar45._8_4_ = (int)sVar8;
            auVar45._12_4_ = (int)sVar8;
          }
          else {
            auVar72._0_8_ = CONCAT26(sVar8,CONCAT24(sVar8,CONCAT22(sVar8,sVar8)));
            auVar72._8_2_ = sVar8;
            auVar72._10_2_ = sVar8;
            auVar72._12_2_ = sVar8;
            auVar72._14_2_ = sVar8;
            param_3[0x11] = auVar72._8_8_;
            param_3[0x10] = auVar72._0_8_;
            uVar9 = *(undefined2 *)((long)piVar3 + 0x3a);
            auVar59._0_8_ = CONCAT26(uVar9,CONCAT24(uVar9,CONCAT22(uVar9,uVar9)));
            auVar59._8_2_ = uVar9;
            auVar59._10_2_ = uVar9;
            auVar59._12_2_ = uVar9;
            auVar59._14_2_ = uVar9;
            param_3[0x13] = auVar59._8_8_;
            param_3[0x12] = auVar59._0_8_;
            uVar9 = (undefined2)piVar3[0xf];
            auVar45._2_2_ = uVar9;
            auVar45._0_2_ = uVar9;
            auVar45._4_2_ = uVar9;
            auVar45._6_2_ = uVar9;
            auVar45._8_2_ = uVar9;
            auVar45._10_2_ = uVar9;
            auVar45._12_2_ = uVar9;
            auVar45._14_2_ = uVar9;
          }
          fVar10 = *(float *)(param_3 + 0x3c);
          fVar11 = *(float *)((long)param_3 + 0x1e4);
          fVar12 = *(float *)(param_3 + 0x3d);
          param_3[0x15] = auVar45._8_8_;
          param_3[0x14] = auVar45._0_8_;
          fVar71 = (float)piVar3[0xb];
          fVar85 = (float)param_3[0x3a];
          fVar87 = (float)((ulong)param_3[0x3a] >> 0x20);
          fVar90 = (float)param_3[0x3b];
          *(float *)(param_3 + 0x17) = fVar71;
          *(float *)((long)param_3 + 0xbc) = fVar71;
          *(float *)(param_3 + 0x16) = fVar71;
          *(float *)((long)param_3 + 0xb4) = fVar71;
          fVar103 = (float)piVar3[0xc];
          *(float *)(param_3 + 0x19) = fVar103;
          *(float *)((long)param_3 + 0xcc) = fVar103;
          *(float *)(param_3 + 0x18) = fVar103;
          *(float *)((long)param_3 + 0xc4) = fVar103;
          iVar56 = piVar3[0xd];
          lVar26 = CONCAT44(iVar56,iVar56);
          lVar91 = CONCAT44(iVar56,iVar56);
          param_3[0x1b] = lVar91;
          param_3[0x1a] = lVar26;
          local_550[0] = 0;
          local_150 = puVar19;
          fVar79 = fVar71;
          fVar81 = fVar71;
          fVar83 = fVar71;
          fVar110 = fVar103;
          fVar112 = fVar103;
          fVar114 = fVar103;
          do {
            puVar24 = local_150 + -1;
            puVar18 = (undefined8 *)(lVar23 + (ulong)(uint)local_150[-1] * 0x1c);
            uVar116 = *puVar18;
            uVar124 = *(undefined8 *)((long)puVar18 + 4);
            bVar28 = (byte)((ulong)uVar124 >> 8);
            bVar29 = (byte)((ulong)uVar116 >> 8);
            auVar117._0_4_ = auVar72._0_4_ + (CONCAT12(bVar29,(ushort)(byte)uVar116) & 0xffff);
            auVar117._4_4_ = auVar72._4_4_ + (uint)bVar29;
            auVar117._8_4_ = auVar72._8_4_ + (uint)(byte)((ulong)uVar116 >> 0x10);
            auVar117._12_4_ = auVar72._12_4_ + (uint)(byte)((ulong)uVar116 >> 0x18);
            auVar73._0_4_ = auVar72._0_4_ + ((CONCAT12(bVar28,(short)uVar124) & 0xff00ff) & 0xffff);
            auVar73._4_4_ = auVar72._4_4_ + (uint)bVar28;
            auVar73._8_4_ = auVar72._8_4_ + (uint)(byte)((ulong)uVar124 >> 0x10);
            auVar73._12_4_ = auVar72._12_4_ + (uint)(byte)((ulong)uVar124 >> 0x18);
            uVar124 = *(undefined8 *)((long)puVar18 + 0xc);
            auVar118 = NEON_scvtf(auVar117,4);
            bVar28 = (byte)((ulong)uVar124 >> 8);
            auVar74 = NEON_scvtf(auVar73,4);
            fVar115 = fVar71 * auVar118._0_4_;
            fVar121 = fVar79 * auVar118._4_4_;
            fVar122 = fVar81 * auVar118._8_4_;
            fVar123 = fVar83 * auVar118._12_4_;
            fVar71 = fVar71 * auVar74._0_4_;
            fVar79 = fVar79 * auVar74._4_4_;
            fVar81 = fVar81 * auVar74._8_4_;
            fVar83 = fVar83 * auVar74._12_4_;
            uVar116 = puVar18[1];
            bVar29 = (byte)((ulong)uVar116 >> 8);
            auVar95._0_4_ = auVar59._0_4_ + (CONCAT12(bVar29,(ushort)(byte)uVar116) & 0xffff);
            auVar95._4_4_ = auVar59._4_4_ + (uint)bVar29;
            auVar95._8_4_ = auVar59._8_4_ + (uint)(byte)((ulong)uVar116 >> 0x10);
            auVar95._12_4_ = auVar59._12_4_ + (uint)(byte)((ulong)uVar116 >> 0x18);
            auVar60._0_4_ = auVar59._0_4_ + ((CONCAT12(bVar28,(short)uVar124) & 0xff00ff) & 0xffff);
            auVar60._4_4_ = auVar59._4_4_ + (uint)bVar28;
            auVar60._8_4_ = auVar59._8_4_ + (uint)(byte)((ulong)uVar124 >> 0x10);
            auVar60._12_4_ = auVar59._12_4_ + (uint)(byte)((ulong)uVar124 >> 0x18);
            auVar96 = NEON_scvtf(auVar95,4);
            uVar124 = *(undefined8 *)((long)puVar18 + 0x14);
            auVar118 = NEON_scvtf(auVar60,4);
            bVar28 = (byte)((ulong)uVar124 >> 8);
            uVar116 = puVar18[2];
            bVar29 = (byte)((ulong)uVar116 >> 8);
            auVar104._0_4_ = auVar45._0_4_ + (CONCAT12(bVar29,(ushort)(byte)uVar116) & 0xffff);
            auVar104._4_4_ = auVar45._4_4_ + (uint)bVar29;
            auVar104._8_4_ = auVar45._8_4_ + (uint)(byte)((ulong)uVar116 >> 0x10);
            auVar104._12_4_ = auVar45._12_4_ + (uint)(byte)((ulong)uVar116 >> 0x18);
            auVar46._0_4_ = auVar45._0_4_ + ((CONCAT12(bVar28,(short)uVar124) & 0xff00ff) & 0xffff);
            auVar46._4_4_ = auVar45._4_4_ + (uint)bVar28;
            auVar46._8_4_ = auVar45._8_4_ + (uint)(byte)((ulong)uVar124 >> 0x10);
            auVar46._12_4_ = auVar45._12_4_ + (uint)(byte)((ulong)uVar124 >> 0x18);
            auVar105 = NEON_scvtf(auVar104,4);
            auVar74 = NEON_scvtf(auVar46,4);
            iVar102 = -(uint)(fVar121 <= fVar10);
            iVar109 = -(uint)(fVar122 <= fVar10);
            iVar111 = -(uint)(fVar123 <= fVar10);
            fVar88 = (float)((ulong)lVar26 >> 0x20);
            fVar93 = (float)((ulong)lVar91 >> 0x20);
            iVar82 = -(uint)(fVar85 <= fVar79);
            iVar84 = -(uint)(fVar85 <= fVar81);
            iVar86 = -(uint)(fVar85 <= fVar83);
            iVar67 = -(uint)(fVar87 <= fVar110 * auVar118._4_4_);
            iVar68 = -(uint)(fVar87 <= fVar112 * auVar118._8_4_);
            iVar69 = -(uint)(fVar87 <= fVar114 * auVar118._12_4_);
            iVar70 = -(uint)(fVar121 <= fVar79);
            iVar78 = -(uint)(fVar122 <= fVar81);
            iVar80 = -(uint)(fVar123 <= fVar83);
            iVar89 = -(uint)(fVar110 * auVar96._4_4_ <= fVar11);
            iVar92 = -(uint)(fVar112 * auVar96._8_4_ <= fVar11);
            iVar94 = -(uint)(fVar114 * auVar96._12_4_ <= fVar11);
            iVar56 = -(uint)(fVar90 <= fVar88 * auVar74._4_4_);
            iVar57 = -(uint)(fVar90 <= (float)lVar91 * auVar74._8_4_);
            iVar58 = -(uint)(fVar90 <= fVar93 * auVar74._12_4_);
            iVar99 = -(uint)(fVar88 * auVar105._4_4_ <= fVar12);
            iVar100 = -(uint)((float)lVar91 * auVar105._8_4_ <= fVar12);
            iVar101 = -(uint)(fVar93 * auVar105._12_4_ <= fVar12);
            uVar32 = (uint)(byte)(-(fVar85 <= fVar71) & -(fVar115 <= fVar10) & -(fVar115 <= fVar71)
                                  & -(fVar103 * auVar96._0_4_ <= fVar11) &
                                  -(fVar87 <= fVar103 * auVar118._0_4_) &
                                  -((float)lVar26 * auVar105._0_4_ <= fVar12) &
                                 -(fVar90 <= (float)lVar26 * auVar74._0_4_));
            auVar35._0_8_ =
                 CONCAT17((byte)((uint)iVar82 >> 0x18) & (byte)((uint)iVar102 >> 0x18) &
                          (byte)((uint)iVar70 >> 0x18) & (byte)((uint)iVar89 >> 0x18) &
                          (byte)((uint)iVar67 >> 0x18) & (byte)((uint)iVar99 >> 0x18) &
                          (byte)((uint)iVar56 >> 0x18),
                          (uint7)CONCAT14((byte)iVar82 & (byte)iVar102 & (byte)iVar70 & (byte)iVar89
                                          & (byte)iVar67 & (byte)iVar99 & (byte)iVar56,uVar32));
            auVar35[8] = (byte)iVar84 & (byte)iVar109 & (byte)iVar78 & (byte)iVar92 & (byte)iVar68 &
                         (byte)iVar100 & (byte)iVar57;
            auVar35[9] = (byte)((uint)iVar84 >> 8) & (byte)((uint)iVar109 >> 8) &
                         (byte)((uint)iVar78 >> 8) & (byte)((uint)iVar92 >> 8) &
                         (byte)((uint)iVar68 >> 8) & (byte)((uint)iVar100 >> 8) &
                         (byte)((uint)iVar57 >> 8);
            auVar35[10] = (byte)((uint)iVar84 >> 0x10) & (byte)((uint)iVar109 >> 0x10) &
                          (byte)((uint)iVar78 >> 0x10) & (byte)((uint)iVar92 >> 0x10) &
                          (byte)((uint)iVar68 >> 0x10) & (byte)((uint)iVar100 >> 0x10) &
                          (byte)((uint)iVar57 >> 0x10);
            auVar35[0xb] = (byte)((uint)iVar84 >> 0x18) & (byte)((uint)iVar109 >> 0x18) &
                           (byte)((uint)iVar78 >> 0x18) & (byte)((uint)iVar92 >> 0x18) &
                           (byte)((uint)iVar68 >> 0x18) & (byte)((uint)iVar100 >> 0x18) &
                           (byte)((uint)iVar57 >> 0x18);
            auVar47[0xc] = (byte)iVar86 & (byte)iVar111 & (byte)iVar80 & (byte)iVar94 & (byte)iVar69
                           & (byte)iVar101 & (byte)iVar58;
            auVar47._0_12_ = auVar35;
            auVar47[0xd] = (byte)((uint)iVar86 >> 8) & (byte)((uint)iVar111 >> 8) &
                           (byte)((uint)iVar80 >> 8) & (byte)((uint)iVar94 >> 8) &
                           (byte)((uint)iVar69 >> 8) & (byte)((uint)iVar101 >> 8) &
                           (byte)((uint)iVar58 >> 8);
            auVar47[0xe] = (byte)((uint)iVar86 >> 0x10) & (byte)((uint)iVar111 >> 0x10) &
                           (byte)((uint)iVar80 >> 0x10) & (byte)((uint)iVar94 >> 0x10) &
                           (byte)((uint)iVar69 >> 0x10) & (byte)((uint)iVar101 >> 0x10) &
                           (byte)((uint)iVar58 >> 0x10);
            auVar47[0xf] = (byte)((uint)iVar86 >> 0x18) & (byte)((uint)iVar111 >> 0x18) &
                           (byte)((uint)iVar80 >> 0x18) & (byte)((uint)iVar94 >> 0x18) &
                           (byte)((uint)iVar69 >> 0x18) & (byte)((uint)iVar101 >> 0x18) &
                           (byte)((uint)iVar58 >> 0x18);
            uVar116 = puVar18[3];
            uVar30 = (undefined1)((ulong)uVar116 >> 8);
            auVar61._6_2_ = 0;
            auVar61._0_6_ =
                 (uint6)CONCAT14(uVar30,(uint)CONCAT12(uVar30,(ushort)(byte)uVar116)) &
                 0xffff0000ffff;
            auVar61[8] = (char)((ulong)uVar116 >> 0x10);
            auVar61._9_3_ = 0;
            auVar61[0xc] = (char)((ulong)uVar116 >> 0x18);
            auVar61._13_3_ = 0;
            bVar28 = (byte)((int)(uVar32 << 0x1f) >> 0x1f);
            iVar56 = CONCAT13(bVar28 & bStack_99d,
                              CONCAT12(bVar28 & bStack_99e,
                                       CONCAT11(bVar28 & bStack_99f,bVar28 & local_9a0)));
            bVar28 = (byte)(((int)((ulong)auVar35._0_8_ >> 0x20) << 0x1f) >> 0x1f);
            auVar36._0_8_ =
                 CONCAT17(bVar28 & bStack_999,
                          CONCAT16(bVar28 & bStack_99a,
                                   CONCAT15(bVar28 & bStack_99b,CONCAT14(bVar28 & bStack_99c,iVar56)
                                           )));
            bVar28 = (byte)((auVar35._8_4_ << 0x1f) >> 0x1f);
            auVar36[8] = bVar28 & bStack_998;
            auVar36[9] = bVar28 & bStack_997;
            auVar36[10] = bVar28 & bStack_996;
            auVar36[0xb] = bVar28 & bStack_995;
            bVar28 = (byte)((auVar47._12_4_ << 0x1f) >> 0x1f);
            auVar48[0xc] = bVar28 & bStack_994;
            auVar48._0_12_ = auVar36;
            auVar48[0xd] = bVar28 & bStack_993;
            auVar48[0xe] = bVar28 & bStack_992;
            auVar48[0xf] = bVar28 & bStack_991;
            uVar32 = iVar56 + (int)((ulong)auVar36._0_8_ >> 0x20) + auVar36._8_4_ + auVar48._12_4_;
            iVar56 = *(int *)(&DAT_03aadfe0 + (ulong)uVar32 * 4);
            auVar74 = a64_TBL(ZEXT816(0),auVar61,
                              *(undefined1 (*) [16])(&DAT_03aae120 + (ulong)uVar32 * 0x10));
            if (*(byte *)((long)puVar18 + 0x1b) < *(byte *)((long)puVar18 + 0x1a)) {
              cVar7 = *(char *)((long)param_3 + 0x101);
              local_150 = puVar24;
              if (uVar32 != 0 && cVar7 == '\0') {
                iVar57 = 0;
                do {
                  switch(iVar57) {
                  case 0:
                    iVar58 = auVar74._0_4_;
                    break;
                  case 1:
                    iVar58 = auVar74._4_4_;
                    break;
                  case 2:
                    iVar58 = auVar74._8_4_;
                    break;
                  case 3:
                    iVar58 = auVar74._12_4_;
                    break;
                  default:
                    iVar58 = 0;
                  }
                  uVar32 = 0;
                  uVar6 = *(uint *)(param_3[0xd] + 8 +
                                   (long)iVar58 * 4 + (long)*(int *)(param_3[0xd] + 8));
                  uVar25 = 1;
                  if ((uVar6 >> 8 & 0xff) <= uVar6 >> 0x18 &&
                      (uVar6 >> 0x10 & 0xff) != uVar6 >> 0x18) {
                    uVar25 = 2;
                  }
                  local_100 = *(undefined8 *)param_3[4];
                  uStack_f8 = ((undefined8 *)param_3[4])[1];
                  do {
                    lVar23 = param_3[2];
                    plVar17 = (long *)param_3[3];
                    uVar6 = *(uint *)(param_3 + 0xc) | iVar58 << 1;
                    uVar1 = ((uVar6 | uVar32) + 1 <<
                            (ulong)(-((uint)*(byte *)(lVar23 + 0x1c) +
                                     *(int *)((long)plVar17 + 0x1c)) & 0x1f)) - 1 |
                            (&DAT_03aa74b0)[*(int *)((long)plVar17 + 0x1c)] & *(uint *)(plVar17 + 3)
                    ;
                    plVar16 = *(long **)*param_3;
                    if (plVar16 == (long *)0x0) {
                      lVar23 = *plVar17;
                      local_98 = 0xffffff;
                      plVar17 = (long *)param_3[0x1f];
                      local_b0 = 0xffff;
                      local_ac = 0;
                      local_88 = 0xffff;
                      local_84 = 0;
                      uStack_a8 = 0;
                      uStack_a4 = 0;
                      uStack_80 = 0;
                      uStack_7c = 0;
                      if (lVar23 == 0) {
                        local_a0 = 0xffffffffffffffff;
                      }
                      else {
                        local_a0 = *(undefined8 *)(lVar23 + 0xb0);
                        local_98 = *(undefined4 *)(lVar23 + 0x50);
                      }
LAB_02fd3a50:
                      local_c0 = CONCAT44(local_c0._4_4_,0xffffff);
                      local_d0 = local_d0 & 0xffffffff00000000;
                      uStack_78 = 6;
                      local_8c = 0xf;
                      local_b4 = 0xf;
                      local_b8 = 0xffffffff;
                      local_c8 = 0xffffffffffffffff;
                      local_d8 = 0;
                      local_e0 = 0;
                      uStack_e8 = 0;
                      local_f0 = 0;
                      local_90 = uVar1;
                      (**(code **)(*plVar17 + 0x28))(plVar17,&local_f0);
                      bVar15 = false;
                      if ((char)param_3[0x20] != '\0') {
                        bVar15 = *(int *)(param_3[0x1f] + 0xc) != 0;
                      }
                      *(byte *)((long)param_3 + 0x101) = *(byte *)((long)param_3 + 0x101) | bVar15;
                    }
                    else {
                      lVar26 = *(long *)(lVar23 + 0x48);
                      if (lVar26 == 0) {
                        lVar26 = 0;
                      }
                      else {
                        lVar26 = lVar26 + lVar23 + 0x48;
                      }
                      piVar3 = (int *)(lVar26 + 0x40);
                      if (*(int *)(lVar26 + 0x44) == 2) {
                        lVar26 = (long)*piVar3;
                      }
                      else {
                        iVar68 = *piVar3;
                        iVar69 = 0;
                        iVar67 = *(int *)(lVar26 + 0x44) + -1;
                        while( true ) {
                          uVar5 = iVar67 + iVar69;
                          if ((int)uVar5 < 0) {
                            uVar5 = uVar5 + 1;
                          }
                          uVar4 = (int)uVar5 >> 1;
                          lVar91 = (long)((ulong)uVar5 << 0x20) >> 0x21;
                          uVar5 = *(uint *)((long)piVar3 +
                                           (-(ulong)(uVar4 >> 0x1f) & 0xfffffff800000000 |
                                           (ulong)uVar4 << 3) + (long)iVar68);
                          lVar26 = lVar91 + 1;
                          if ((uVar5 <= uVar6) &&
                             (uVar6 < *(uint *)((long)piVar3 + lVar26 * 8 + (long)iVar68))) break;
                          iVar70 = (int)lVar26;
                          if (uVar6 <= uVar5) {
                            iVar67 = uVar4 - 1;
                            iVar70 = iVar69;
                          }
                          iVar69 = iVar70;
                        }
                        lVar26 = lVar91 * 8 + (long)iVar68;
                      }
                      (**(code **)(*plVar16 + 0x40))
                                (plVar16,*(undefined2 *)((long)piVar3 + lVar26 + 4),6,*plVar17,
                                 plVar17[1],lVar23,uVar1,0,&local_100);
                      lVar23 = *param_3;
                      if (*(long *)(lVar23 + 8) == 0) {
LAB_02fd39ac:
                        local_98 = 0xffffff;
                        lVar26 = *(long *)param_3[3];
                        plVar17 = (long *)param_3[0x1f];
                        local_b0 = *(undefined2 *)(lVar23 + 0x10);
                        uStack_a4 = *(undefined4 *)(lVar23 + 0x1c);
                        local_ac = (undefined4)*(undefined8 *)(lVar23 + 0x14);
                        uStack_a8 = (undefined4)((ulong)*(undefined8 *)(lVar23 + 0x14) >> 0x20);
                        if (lVar26 == 0) {
                          local_a0 = 0xffffffffffffffff;
                        }
                        else {
                          local_a0 = *(undefined8 *)(lVar26 + 0xb0);
                          local_98 = *(undefined4 *)(lVar26 + 0x50);
                        }
                        uStack_7c = *(undefined4 *)(puVar27 + 1);
                        local_88 = (undefined2)local_100;
                        local_84 = (undefined4)*puVar27;
                        uStack_80 = (undefined4)((ulong)*puVar27 >> 0x20);
                        goto LAB_02fd3a50;
                      }
                      local_f0 = CONCAT62(local_f0._2_6_,*(undefined2 *)(lVar23 + 0x10));
                      uVar116 = *(undefined8 *)(lVar23 + 0x14);
                      *(undefined4 *)(puVar20 + 1) = *(undefined4 *)(lVar23 + 0x1c);
                      *puVar20 = uVar116;
                      puVar18 = (undefined8 *)param_3[0x1e];
                      local_e0 = *puVar18;
                      local_d8 = puVar18[1];
                      local_d0 = puVar18[2];
                      local_c8 = CONCAT44(local_c8._4_4_,*(undefined4 *)(puVar18 + 3));
                      local_138[0] = (undefined2)local_100;
                      uVar116 = *puVar27;
                      local_c0 = 0;
                      *(undefined4 *)(puVar21 + 1) = *(undefined4 *)(puVar27 + 1);
                      *puVar21 = uVar116;
                      local_128 = *(undefined8 *)param_3[3];
                      local_120 = ((undefined8 *)param_3[3])[1];
                      local_118 = param_3[2];
                      local_108 = 0;
                      local_110 = uVar1;
                      uVar22 = (**(code **)(**(long **)(lVar23 + 8) + 0x40))
                                         (*(long **)(lVar23 + 8),6,1,&local_f0,local_138);
                      if ((uVar22 & 1) != 0) {
                        lVar23 = *param_3;
                        goto LAB_02fd39ac;
                      }
                    }
                    uVar32 = uVar32 + 1;
                  } while (uVar32 < uVar25);
                  iVar57 = iVar57 + 1;
                } while (iVar57 != iVar56);
                cVar7 = *(char *)((long)param_3 + 0x101);
              }
              if (cVar7 != '\0') goto LAB_02fd3548;
            }
            else {
              *(long *)(local_150 + -1) = auVar74._0_8_;
              auVar74 = NEON_ext(auVar74,auVar74,8,1);
              *(long *)(local_150 + 1) = auVar74._0_8_;
              local_150 = puVar24 + iVar56;
            }
            if (local_550 == local_150) goto LAB_02fd3548;
            auVar45 = *(undefined1 (*) [16])(param_3 + 0x14);
            fVar71 = *(float *)(param_3 + 0x16);
            fVar79 = *(float *)((long)param_3 + 0xb4);
            fVar81 = *(float *)(param_3 + 0x17);
            fVar83 = *(float *)((long)param_3 + 0xbc);
            lVar23 = param_3[0xe];
            auVar72 = *(undefined1 (*) [16])(param_3 + 0x10);
            auVar59 = *(undefined1 (*) [16])(param_3 + 0x12);
            fVar103 = *(float *)(param_3 + 0x18);
            fVar110 = *(float *)((long)param_3 + 0xc4);
            fVar112 = *(float *)(param_3 + 0x19);
            fVar114 = *(float *)((long)param_3 + 0xcc);
            lVar91 = param_3[0x1b];
            lVar26 = param_3[0x1a];
          } while( true );
        }
      }
LAB_02fd4348:
      pfVar2 = (float *)(local_a40 + (ulong)uVar33 * 0x80);
      iVar31 = -(uint)(*param_2 <= pfVar2[4]);
      iVar55 = -(uint)(param_2[1] <= pfVar2[5]);
      iVar56 = -(uint)(param_2[2] <= pfVar2[6]);
      iVar57 = -(uint)(param_2[3] <= pfVar2[7]);
      iVar58 = -(uint)(*pfVar2 <= param_2[4]);
      iVar67 = -(uint)(pfVar2[1] <= param_2[5]);
      iVar68 = -(uint)(pfVar2[2] <= param_2[6]);
      iVar69 = -(uint)(pfVar2[3] <= param_2[7]);
      iVar70 = -(uint)((float)*(undefined8 *)(param_2 + 8) <= pfVar2[0xc]);
      iVar78 = -(uint)((float)((ulong)*(undefined8 *)(param_2 + 8) >> 0x20) <= pfVar2[0xd]);
      iVar80 = -(uint)((float)*(undefined8 *)(param_2 + 10) <= pfVar2[0xe]);
      iVar82 = -(uint)((float)((ulong)*(undefined8 *)(param_2 + 10) >> 0x20) <= pfVar2[0xf]);
      iVar84 = -(uint)((float)*(undefined8 *)(pfVar2 + 8) <= param_2[0xc]);
      iVar86 = -(uint)((float)((ulong)*(undefined8 *)(pfVar2 + 8) >> 0x20) <= param_2[0xd]);
      iVar89 = -(uint)((float)*(undefined8 *)(pfVar2 + 10) <= param_2[0xe]);
      iVar92 = -(uint)((float)((ulong)*(undefined8 *)(pfVar2 + 10) >> 0x20) <= param_2[0xf]);
      iVar94 = -(uint)(param_2[0x10] <= pfVar2[0x14]);
      iVar99 = -(uint)(param_2[0x11] <= pfVar2[0x15]);
      iVar100 = -(uint)(param_2[0x12] <= pfVar2[0x16]);
      iVar101 = -(uint)(param_2[0x13] <= pfVar2[0x17]);
      iVar102 = -(uint)(pfVar2[0x10] <= param_2[0x14]);
      iVar109 = -(uint)(pfVar2[0x11] <= param_2[0x15]);
      iVar111 = -(uint)(pfVar2[0x12] <= param_2[0x16]);
      iVar113 = -(uint)(pfVar2[0x13] <= param_2[0x17]);
      iVar31 = CONCAT13((byte)((uint)iVar58 >> 0x18) & (byte)((uint)iVar31 >> 0x18) &
                        (byte)((uint)iVar70 >> 0x18) & (byte)((uint)iVar84 >> 0x18) &
                        (byte)((uint)iVar94 >> 0x18) & (byte)((uint)iVar102 >> 0x18) & bStack_99d,
                        CONCAT12((byte)((uint)iVar58 >> 0x10) & (byte)((uint)iVar31 >> 0x10) &
                                 (byte)((uint)iVar70 >> 0x10) & (byte)((uint)iVar84 >> 0x10) &
                                 (byte)((uint)iVar94 >> 0x10) & (byte)((uint)iVar102 >> 0x10) &
                                 bStack_99e,
                                 CONCAT11((byte)((uint)iVar58 >> 8) & (byte)((uint)iVar31 >> 8) &
                                          (byte)((uint)iVar70 >> 8) & (byte)((uint)iVar84 >> 8) &
                                          (byte)((uint)iVar94 >> 8) & (byte)((uint)iVar102 >> 8) &
                                          bStack_99f,
                                          (byte)iVar58 & (byte)iVar31 & (byte)iVar70 & (byte)iVar84
                                          & (byte)iVar94 & (byte)iVar102 & local_9a0)));
      auVar40._0_8_ =
           CONCAT17((byte)((uint)iVar67 >> 0x18) & (byte)((uint)iVar55 >> 0x18) &
                    (byte)((uint)iVar78 >> 0x18) & (byte)((uint)iVar86 >> 0x18) &
                    (byte)((uint)iVar99 >> 0x18) & (byte)((uint)iVar109 >> 0x18) & bStack_999,
                    CONCAT16((byte)((uint)iVar67 >> 0x10) & (byte)((uint)iVar55 >> 0x10) &
                             (byte)((uint)iVar78 >> 0x10) & (byte)((uint)iVar86 >> 0x10) &
                             (byte)((uint)iVar99 >> 0x10) & (byte)((uint)iVar109 >> 0x10) &
                             bStack_99a,
                             CONCAT15((byte)((uint)iVar67 >> 8) & (byte)((uint)iVar55 >> 8) &
                                      (byte)((uint)iVar78 >> 8) & (byte)((uint)iVar86 >> 8) &
                                      (byte)((uint)iVar99 >> 8) & (byte)((uint)iVar109 >> 8) &
                                      bStack_99b,
                                      CONCAT14((byte)iVar67 & (byte)iVar55 & (byte)iVar78 &
                                               (byte)iVar86 & (byte)iVar99 & (byte)iVar109 &
                                               bStack_99c,iVar31))));
      auVar40[8] = (byte)iVar68 & (byte)iVar56 & (byte)iVar80 & (byte)iVar89 & (byte)iVar100 &
                   (byte)iVar111 & bStack_998;
      auVar40[9] = (byte)((uint)iVar68 >> 8) & (byte)((uint)iVar56 >> 8) & (byte)((uint)iVar80 >> 8)
                   & (byte)((uint)iVar89 >> 8) & (byte)((uint)iVar100 >> 8) &
                   (byte)((uint)iVar111 >> 8) & bStack_997;
      auVar40[10] = (byte)((uint)iVar68 >> 0x10) & (byte)((uint)iVar56 >> 0x10) &
                    (byte)((uint)iVar80 >> 0x10) & (byte)((uint)iVar89 >> 0x10) &
                    (byte)((uint)iVar100 >> 0x10) & (byte)((uint)iVar111 >> 0x10) & bStack_996;
      auVar40[0xb] = (byte)((uint)iVar68 >> 0x18) & (byte)((uint)iVar56 >> 0x18) &
                     (byte)((uint)iVar80 >> 0x18) & (byte)((uint)iVar89 >> 0x18) &
                     (byte)((uint)iVar100 >> 0x18) & (byte)((uint)iVar111 >> 0x18) & bStack_995;
      auVar50[0xc] = (byte)iVar69 & (byte)iVar57 & (byte)iVar82 & (byte)iVar92 & (byte)iVar101 &
                     (byte)iVar113 & bStack_994;
      auVar50._0_12_ = auVar40;
      auVar50[0xd] = (byte)((uint)iVar69 >> 8) & (byte)((uint)iVar57 >> 8) &
                     (byte)((uint)iVar82 >> 8) & (byte)((uint)iVar92 >> 8) &
                     (byte)((uint)iVar101 >> 8) & (byte)((uint)iVar113 >> 8) & bStack_993;
      auVar50[0xe] = (byte)((uint)iVar69 >> 0x10) & (byte)((uint)iVar57 >> 0x10) &
                     (byte)((uint)iVar82 >> 0x10) & (byte)((uint)iVar92 >> 0x10) &
                     (byte)((uint)iVar101 >> 0x10) & (byte)((uint)iVar113 >> 0x10) & bStack_992;
      auVar50[0xf] = (byte)((uint)iVar69 >> 0x18) & (byte)((uint)iVar57 >> 0x18) &
                     (byte)((uint)iVar82 >> 0x18) & (byte)((uint)iVar92 >> 0x18) &
                     (byte)((uint)iVar101 >> 0x18) & (byte)((uint)iVar113 >> 0x18) & bStack_991;
      uVar33 = iVar31 + (int)((ulong)auVar40._0_8_ >> 0x20) + auVar40._8_4_ + auVar50._12_4_;
      iVar31 = *(int *)(&DAT_03aadfe0 + (ulong)uVar33 * 4);
      auVar44 = a64_TBL(ZEXT816(0),*(undefined1 (*) [16])(pfVar2 + 0x18),
                        *(undefined1 (*) [16])(&DAT_03aae120 + (ulong)uVar33 * 0x10));
      if (*(char *)(pfVar2 + 0x1c) == '\0') {
        auVar74 = NEON_ext(auVar44,auVar44,8,1);
        *local_560 = auVar44._0_8_;
        local_560[1] = auVar74._0_8_;
        local_560 = (undefined8 *)((long)local_560 + (long)iVar31 * 4);
LAB_02fd3448:
      }
      else if (uVar33 != 0) {
        iVar55 = 0;
LAB_02fd4428:
        switch(iVar55) {
        case 0:
          iVar56 = auVar44._0_4_;
          break;
        case 1:
          iVar56 = auVar44._4_4_;
          break;
        case 2:
          iVar56 = auVar44._8_4_;
          break;
        case 3:
          iVar56 = auVar44._12_4_;
          break;
        default:
          iVar56 = 0;
        }
        *(int *)(param_3 + 0xc) = iVar56 << 9;
        lVar23 = *(long *)(param_3[2] + 0x48);
        if (lVar23 == 0) {
          lVar23 = 0;
        }
        else {
          lVar23 = lVar23 + param_3[2] + 0x48;
        }
        piVar3 = (int *)(lVar23 + 0x60 + (long)iVar56 * 0x40 + (long)*(int *)(lVar23 + 0x60));
        param_3[0xd] = (long)piVar3;
        lVar23 = 0;
        if (*piVar3 != 0) {
          lVar23 = (long)piVar3 + (long)*piVar3;
        }
        param_3[0xe] = lVar23;
        sVar8 = (short)piVar3[0xe];
        if ((char)param_3[0x1d] == '\0') {
          auVar76._0_8_ = CONCAT44((int)sVar8,(int)sVar8);
          auVar76._8_4_ = (int)sVar8;
          auVar76._12_4_ = (int)sVar8;
          param_3[0x11] = auVar76._8_8_;
          param_3[0x10] = auVar76._0_8_;
          sVar8 = *(short *)((long)piVar3 + 0x3a);
          auVar64._0_8_ = CONCAT44((int)sVar8,(int)sVar8);
          auVar64._8_4_ = (int)sVar8;
          auVar64._12_4_ = (int)sVar8;
          param_3[0x13] = auVar64._8_8_;
          param_3[0x12] = auVar64._0_8_;
          sVar8 = (short)piVar3[0xf];
          auVar51._4_4_ = (int)sVar8;
          auVar51._0_4_ = (int)sVar8;
          auVar51._8_4_ = (int)sVar8;
          auVar51._12_4_ = (int)sVar8;
        }
        else {
          auVar76._0_8_ = CONCAT26(sVar8,CONCAT24(sVar8,CONCAT22(sVar8,sVar8)));
          auVar76._8_2_ = sVar8;
          auVar76._10_2_ = sVar8;
          auVar76._12_2_ = sVar8;
          auVar76._14_2_ = sVar8;
          param_3[0x11] = auVar76._8_8_;
          param_3[0x10] = auVar76._0_8_;
          uVar9 = *(undefined2 *)((long)piVar3 + 0x3a);
          auVar64._0_8_ = CONCAT26(uVar9,CONCAT24(uVar9,CONCAT22(uVar9,uVar9)));
          auVar64._8_2_ = uVar9;
          auVar64._10_2_ = uVar9;
          auVar64._12_2_ = uVar9;
          auVar64._14_2_ = uVar9;
          param_3[0x13] = auVar64._8_8_;
          param_3[0x12] = auVar64._0_8_;
          uVar9 = (undefined2)piVar3[0xf];
          auVar51._2_2_ = uVar9;
          auVar51._0_2_ = uVar9;
          auVar51._4_2_ = uVar9;
          auVar51._6_2_ = uVar9;
          auVar51._8_2_ = uVar9;
          auVar51._10_2_ = uVar9;
          auVar51._12_2_ = uVar9;
          auVar51._14_2_ = uVar9;
        }
        fVar10 = *(float *)(param_3 + 0x3c);
        fVar11 = *(float *)((long)param_3 + 0x1e4);
        fVar12 = *(float *)(param_3 + 0x3d);
        param_3[0x15] = auVar51._8_8_;
        param_3[0x14] = auVar51._0_8_;
        fVar71 = (float)piVar3[0xb];
        fVar85 = (float)param_3[0x3a];
        fVar87 = (float)((ulong)param_3[0x3a] >> 0x20);
        fVar90 = (float)param_3[0x3b];
        *(float *)(param_3 + 0x17) = fVar71;
        *(float *)((long)param_3 + 0xbc) = fVar71;
        *(float *)(param_3 + 0x16) = fVar71;
        *(float *)((long)param_3 + 0xb4) = fVar71;
        fVar103 = (float)piVar3[0xc];
        *(float *)(param_3 + 0x19) = fVar103;
        *(float *)((long)param_3 + 0xcc) = fVar103;
        *(float *)(param_3 + 0x18) = fVar103;
        *(float *)((long)param_3 + 0xc4) = fVar103;
        iVar56 = piVar3[0xd];
        lVar26 = CONCAT44(iVar56,iVar56);
        lVar91 = CONCAT44(iVar56,iVar56);
        param_3[0x1b] = lVar91;
        param_3[0x1a] = lVar26;
        local_550[0] = 0;
        local_150 = puVar19;
        fVar79 = fVar71;
        fVar81 = fVar71;
        fVar83 = fVar71;
        fVar110 = fVar103;
        fVar112 = fVar103;
        fVar114 = fVar103;
        do {
          puVar24 = local_150 + -1;
          puVar18 = (undefined8 *)(lVar23 + (ulong)(uint)local_150[-1] * 0x1c);
          uVar116 = *puVar18;
          uVar124 = *(undefined8 *)((long)puVar18 + 4);
          bVar28 = (byte)((ulong)uVar124 >> 8);
          bVar29 = (byte)((ulong)uVar116 >> 8);
          auVar120._0_4_ = auVar76._0_4_ + (CONCAT12(bVar29,(ushort)(byte)uVar116) & 0xffff);
          auVar120._4_4_ = auVar76._4_4_ + (uint)bVar29;
          auVar120._8_4_ = auVar76._8_4_ + (uint)(byte)((ulong)uVar116 >> 0x10);
          auVar120._12_4_ = auVar76._12_4_ + (uint)(byte)((ulong)uVar116 >> 0x18);
          auVar77._0_4_ = auVar76._0_4_ + ((CONCAT12(bVar28,(short)uVar124) & 0xff00ff) & 0xffff);
          auVar77._4_4_ = auVar76._4_4_ + (uint)bVar28;
          auVar77._8_4_ = auVar76._8_4_ + (uint)(byte)((ulong)uVar124 >> 0x10);
          auVar77._12_4_ = auVar76._12_4_ + (uint)(byte)((ulong)uVar124 >> 0x18);
          uVar124 = *(undefined8 *)((long)puVar18 + 0xc);
          auVar118 = NEON_scvtf(auVar120,4);
          bVar28 = (byte)((ulong)uVar124 >> 8);
          auVar74 = NEON_scvtf(auVar77,4);
          fVar115 = fVar71 * auVar118._0_4_;
          fVar121 = fVar79 * auVar118._4_4_;
          fVar122 = fVar81 * auVar118._8_4_;
          fVar123 = fVar83 * auVar118._12_4_;
          fVar71 = fVar71 * auVar74._0_4_;
          fVar79 = fVar79 * auVar74._4_4_;
          fVar81 = fVar81 * auVar74._8_4_;
          fVar83 = fVar83 * auVar74._12_4_;
          uVar116 = puVar18[1];
          bVar29 = (byte)((ulong)uVar116 >> 8);
          auVar98._0_4_ = auVar64._0_4_ + (CONCAT12(bVar29,(ushort)(byte)uVar116) & 0xffff);
          auVar98._4_4_ = auVar64._4_4_ + (uint)bVar29;
          auVar98._8_4_ = auVar64._8_4_ + (uint)(byte)((ulong)uVar116 >> 0x10);
          auVar98._12_4_ = auVar64._12_4_ + (uint)(byte)((ulong)uVar116 >> 0x18);
          auVar65._0_4_ = auVar64._0_4_ + ((CONCAT12(bVar28,(short)uVar124) & 0xff00ff) & 0xffff);
          auVar65._4_4_ = auVar64._4_4_ + (uint)bVar28;
          auVar65._8_4_ = auVar64._8_4_ + (uint)(byte)((ulong)uVar124 >> 0x10);
          auVar65._12_4_ = auVar64._12_4_ + (uint)(byte)((ulong)uVar124 >> 0x18);
          auVar96 = NEON_scvtf(auVar98,4);
          uVar124 = *(undefined8 *)((long)puVar18 + 0x14);
          auVar118 = NEON_scvtf(auVar65,4);
          bVar28 = (byte)((ulong)uVar124 >> 8);
          uVar116 = puVar18[2];
          bVar29 = (byte)((ulong)uVar116 >> 8);
          auVar108._0_4_ = auVar51._0_4_ + (CONCAT12(bVar29,(ushort)(byte)uVar116) & 0xffff);
          auVar108._4_4_ = auVar51._4_4_ + (uint)bVar29;
          auVar108._8_4_ = auVar51._8_4_ + (uint)(byte)((ulong)uVar116 >> 0x10);
          auVar108._12_4_ = auVar51._12_4_ + (uint)(byte)((ulong)uVar116 >> 0x18);
          auVar52._0_4_ = auVar51._0_4_ + ((CONCAT12(bVar28,(short)uVar124) & 0xff00ff) & 0xffff);
          auVar52._4_4_ = auVar51._4_4_ + (uint)bVar28;
          auVar52._8_4_ = auVar51._8_4_ + (uint)(byte)((ulong)uVar124 >> 0x10);
          auVar52._12_4_ = auVar51._12_4_ + (uint)(byte)((ulong)uVar124 >> 0x18);
          auVar105 = NEON_scvtf(auVar108,4);
          auVar74 = NEON_scvtf(auVar52,4);
          iVar102 = -(uint)(fVar121 <= fVar10);
          iVar109 = -(uint)(fVar122 <= fVar10);
          iVar111 = -(uint)(fVar123 <= fVar10);
          fVar88 = (float)((ulong)lVar26 >> 0x20);
          fVar93 = (float)((ulong)lVar91 >> 0x20);
          iVar82 = -(uint)(fVar85 <= fVar79);
          iVar84 = -(uint)(fVar85 <= fVar81);
          iVar86 = -(uint)(fVar85 <= fVar83);
          iVar67 = -(uint)(fVar87 <= fVar110 * auVar118._4_4_);
          iVar68 = -(uint)(fVar87 <= fVar112 * auVar118._8_4_);
          iVar69 = -(uint)(fVar87 <= fVar114 * auVar118._12_4_);
          iVar70 = -(uint)(fVar121 <= fVar79);
          iVar78 = -(uint)(fVar122 <= fVar81);
          iVar80 = -(uint)(fVar123 <= fVar83);
          iVar89 = -(uint)(fVar110 * auVar96._4_4_ <= fVar11);
          iVar92 = -(uint)(fVar112 * auVar96._8_4_ <= fVar11);
          iVar94 = -(uint)(fVar114 * auVar96._12_4_ <= fVar11);
          iVar56 = -(uint)(fVar90 <= fVar88 * auVar74._4_4_);
          iVar57 = -(uint)(fVar90 <= (float)lVar91 * auVar74._8_4_);
          iVar58 = -(uint)(fVar90 <= fVar93 * auVar74._12_4_);
          iVar99 = -(uint)(fVar88 * auVar105._4_4_ <= fVar12);
          iVar100 = -(uint)((float)lVar91 * auVar105._8_4_ <= fVar12);
          iVar101 = -(uint)(fVar93 * auVar105._12_4_ <= fVar12);
          uVar33 = (uint)(byte)(-(fVar85 <= fVar71) & -(fVar115 <= fVar10) & -(fVar115 <= fVar71) &
                                -(fVar103 * auVar96._0_4_ <= fVar11) &
                                -(fVar87 <= fVar103 * auVar118._0_4_) &
                                -((float)lVar26 * auVar105._0_4_ <= fVar12) &
                               -(fVar90 <= (float)lVar26 * auVar74._0_4_));
          auVar41._0_8_ =
               CONCAT17((byte)((uint)iVar82 >> 0x18) & (byte)((uint)iVar102 >> 0x18) &
                        (byte)((uint)iVar70 >> 0x18) & (byte)((uint)iVar89 >> 0x18) &
                        (byte)((uint)iVar67 >> 0x18) & (byte)((uint)iVar99 >> 0x18) &
                        (byte)((uint)iVar56 >> 0x18),
                        (uint7)CONCAT14((byte)iVar82 & (byte)iVar102 & (byte)iVar70 & (byte)iVar89 &
                                        (byte)iVar67 & (byte)iVar99 & (byte)iVar56,uVar33));
          auVar41[8] = (byte)iVar84 & (byte)iVar109 & (byte)iVar78 & (byte)iVar92 & (byte)iVar68 &
                       (byte)iVar100 & (byte)iVar57;
          auVar41[9] = (byte)((uint)iVar84 >> 8) & (byte)((uint)iVar109 >> 8) &
                       (byte)((uint)iVar78 >> 8) & (byte)((uint)iVar92 >> 8) &
                       (byte)((uint)iVar68 >> 8) & (byte)((uint)iVar100 >> 8) &
                       (byte)((uint)iVar57 >> 8);
          auVar41[10] = (byte)((uint)iVar84 >> 0x10) & (byte)((uint)iVar109 >> 0x10) &
                        (byte)((uint)iVar78 >> 0x10) & (byte)((uint)iVar92 >> 0x10) &
                        (byte)((uint)iVar68 >> 0x10) & (byte)((uint)iVar100 >> 0x10) &
                        (byte)((uint)iVar57 >> 0x10);
          auVar41[0xb] = (byte)((uint)iVar84 >> 0x18) & (byte)((uint)iVar109 >> 0x18) &
                         (byte)((uint)iVar78 >> 0x18) & (byte)((uint)iVar92 >> 0x18) &
                         (byte)((uint)iVar68 >> 0x18) & (byte)((uint)iVar100 >> 0x18) &
                         (byte)((uint)iVar57 >> 0x18);
          auVar53[0xc] = (byte)iVar86 & (byte)iVar111 & (byte)iVar80 & (byte)iVar94 & (byte)iVar69 &
                         (byte)iVar101 & (byte)iVar58;
          auVar53._0_12_ = auVar41;
          auVar53[0xd] = (byte)((uint)iVar86 >> 8) & (byte)((uint)iVar111 >> 8) &
                         (byte)((uint)iVar80 >> 8) & (byte)((uint)iVar94 >> 8) &
                         (byte)((uint)iVar69 >> 8) & (byte)((uint)iVar101 >> 8) &
                         (byte)((uint)iVar58 >> 8);
          auVar53[0xe] = (byte)((uint)iVar86 >> 0x10) & (byte)((uint)iVar111 >> 0x10) &
                         (byte)((uint)iVar80 >> 0x10) & (byte)((uint)iVar94 >> 0x10) &
                         (byte)((uint)iVar69 >> 0x10) & (byte)((uint)iVar101 >> 0x10) &
                         (byte)((uint)iVar58 >> 0x10);
          auVar53[0xf] = (byte)((uint)iVar86 >> 0x18) & (byte)((uint)iVar111 >> 0x18) &
                         (byte)((uint)iVar80 >> 0x18) & (byte)((uint)iVar94 >> 0x18) &
                         (byte)((uint)iVar69 >> 0x18) & (byte)((uint)iVar101 >> 0x18) &
                         (byte)((uint)iVar58 >> 0x18);
          uVar116 = puVar18[3];
          uVar30 = (undefined1)((ulong)uVar116 >> 8);
          auVar66._6_2_ = 0;
          auVar66._0_6_ =
               (uint6)CONCAT14(uVar30,(uint)CONCAT12(uVar30,(ushort)(byte)uVar116)) & 0xffff0000ffff
          ;
          auVar66[8] = (char)((ulong)uVar116 >> 0x10);
          auVar66._9_3_ = 0;
          auVar66[0xc] = (char)((ulong)uVar116 >> 0x18);
          auVar66._13_3_ = 0;
          bVar28 = (byte)((int)(uVar33 << 0x1f) >> 0x1f);
          iVar56 = CONCAT13(bVar28 & bStack_99d,
                            CONCAT12(bVar28 & bStack_99e,
                                     CONCAT11(bVar28 & bStack_99f,bVar28 & local_9a0)));
          bVar28 = (byte)(((int)((ulong)auVar41._0_8_ >> 0x20) << 0x1f) >> 0x1f);
          auVar42._0_8_ =
               CONCAT17(bVar28 & bStack_999,
                        CONCAT16(bVar28 & bStack_99a,
                                 CONCAT15(bVar28 & bStack_99b,CONCAT14(bVar28 & bStack_99c,iVar56)))
                       );
          bVar28 = (byte)((auVar41._8_4_ << 0x1f) >> 0x1f);
          auVar42[8] = bVar28 & bStack_998;
          auVar42[9] = bVar28 & bStack_997;
          auVar42[10] = bVar28 & bStack_996;
          auVar42[0xb] = bVar28 & bStack_995;
          bVar28 = (byte)((auVar53._12_4_ << 0x1f) >> 0x1f);
          auVar54[0xc] = bVar28 & bStack_994;
          auVar54._0_12_ = auVar42;
          auVar54[0xd] = bVar28 & bStack_993;
          auVar54[0xe] = bVar28 & bStack_992;
          auVar54[0xf] = bVar28 & bStack_991;
          uVar33 = iVar56 + (int)((ulong)auVar42._0_8_ >> 0x20) + auVar42._8_4_ + auVar54._12_4_;
          iVar56 = *(int *)(&DAT_03aadfe0 + (ulong)uVar33 * 4);
          auVar74 = a64_TBL(ZEXT816(0),auVar66,
                            *(undefined1 (*) [16])(&DAT_03aae120 + (ulong)uVar33 * 0x10));
          if (*(byte *)((long)puVar18 + 0x1b) < *(byte *)((long)puVar18 + 0x1a)) {
            cVar7 = *(char *)((long)param_3 + 0x101);
            local_150 = puVar24;
            if (uVar33 != 0 && cVar7 == '\0') {
              iVar57 = 0;
              do {
                switch(iVar57) {
                case 0:
                  iVar58 = auVar74._0_4_;
                  break;
                case 1:
                  iVar58 = auVar74._4_4_;
                  break;
                case 2:
                  iVar58 = auVar74._8_4_;
                  break;
                case 3:
                  iVar58 = auVar74._12_4_;
                  break;
                default:
                  iVar58 = 0;
                }
                uVar33 = 0;
                uVar25 = *(uint *)(param_3[0xd] + 8 +
                                  (long)iVar58 * 4 + (long)*(int *)(param_3[0xd] + 8));
                uVar32 = 1;
                if ((uVar25 >> 8 & 0xff) <= uVar25 >> 0x18 &&
                    (uVar25 >> 0x10 & 0xff) != uVar25 >> 0x18) {
                  uVar32 = 2;
                }
                local_100 = *(undefined8 *)param_3[4];
                uStack_f8 = ((undefined8 *)param_3[4])[1];
                do {
                  lVar23 = param_3[2];
                  plVar17 = (long *)param_3[3];
                  uVar25 = *(uint *)(param_3 + 0xc) | iVar58 << 1;
                  uVar6 = ((uVar25 | uVar33) + 1 <<
                          (ulong)(-((uint)*(byte *)(lVar23 + 0x1c) + *(int *)((long)plVar17 + 0x1c))
                                 & 0x1f)) - 1 |
                          (&DAT_03aa74b0)[*(int *)((long)plVar17 + 0x1c)] & *(uint *)(plVar17 + 3);
                  plVar16 = *(long **)*param_3;
                  if (plVar16 == (long *)0x0) {
                    lVar23 = *plVar17;
                    local_98 = 0xffffff;
                    plVar17 = (long *)param_3[0x1f];
                    local_b0 = 0xffff;
                    local_ac = 0;
                    local_88 = 0xffff;
                    local_84 = 0;
                    uStack_a8 = 0;
                    uStack_a4 = 0;
                    uStack_80 = 0;
                    uStack_7c = 0;
                    if (lVar23 == 0) {
                      local_a0 = 0xffffffffffffffff;
                    }
                    else {
                      local_a0 = *(undefined8 *)(lVar23 + 0xb0);
                      local_98 = *(undefined4 *)(lVar23 + 0x50);
                    }
LAB_02fd491c:
                    local_c0 = CONCAT44(local_c0._4_4_,0xffffff);
                    local_d0 = local_d0 & 0xffffffff00000000;
                    uStack_78 = 6;
                    local_8c = 0xf;
                    local_b4 = 0xf;
                    local_b8 = 0xffffffff;
                    local_c8 = 0xffffffffffffffff;
                    local_d8 = 0;
                    local_e0 = 0;
                    uStack_e8 = 0;
                    local_f0 = 0;
                    local_90 = uVar6;
                    (**(code **)(*plVar17 + 0x28))(plVar17,&local_f0);
                    bVar15 = false;
                    if ((char)param_3[0x20] != '\0') {
                      bVar15 = *(int *)(param_3[0x1f] + 0xc) != 0;
                    }
                    *(byte *)((long)param_3 + 0x101) = *(byte *)((long)param_3 + 0x101) | bVar15;
                  }
                  else {
                    lVar26 = *(long *)(lVar23 + 0x48);
                    if (lVar26 == 0) {
                      lVar26 = 0;
                    }
                    else {
                      lVar26 = lVar26 + lVar23 + 0x48;
                    }
                    piVar3 = (int *)(lVar26 + 0x40);
                    if (*(int *)(lVar26 + 0x44) == 2) {
                      lVar26 = (long)*piVar3;
                    }
                    else {
                      iVar68 = *piVar3;
                      iVar69 = 0;
                      iVar67 = *(int *)(lVar26 + 0x44) + -1;
                      while( true ) {
                        uVar1 = iVar67 + iVar69;
                        if ((int)uVar1 < 0) {
                          uVar1 = uVar1 + 1;
                        }
                        uVar5 = (int)uVar1 >> 1;
                        lVar91 = (long)((ulong)uVar1 << 0x20) >> 0x21;
                        uVar1 = *(uint *)((long)piVar3 +
                                         (-(ulong)(uVar5 >> 0x1f) & 0xfffffff800000000 |
                                         (ulong)uVar5 << 3) + (long)iVar68);
                        lVar26 = lVar91 + 1;
                        if ((uVar1 <= uVar25) &&
                           (uVar25 < *(uint *)((long)piVar3 + lVar26 * 8 + (long)iVar68))) break;
                        iVar70 = (int)lVar26;
                        if (uVar25 <= uVar1) {
                          iVar67 = uVar5 - 1;
                          iVar70 = iVar69;
                        }
                        iVar69 = iVar70;
                      }
                      lVar26 = lVar91 * 8 + (long)iVar68;
                    }
                    (**(code **)(*plVar16 + 0x40))
                              (plVar16,*(undefined2 *)((long)piVar3 + lVar26 + 4),6,*plVar17,
                               plVar17[1],lVar23,uVar6,0,&local_100);
                    lVar23 = *param_3;
                    if (*(long *)(lVar23 + 8) == 0) {
LAB_02fd4878:
                      local_98 = 0xffffff;
                      lVar26 = *(long *)param_3[3];
                      plVar17 = (long *)param_3[0x1f];
                      local_b0 = *(undefined2 *)(lVar23 + 0x10);
                      uStack_a4 = *(undefined4 *)(lVar23 + 0x1c);
                      local_ac = (undefined4)*(undefined8 *)(lVar23 + 0x14);
                      uStack_a8 = (undefined4)((ulong)*(undefined8 *)(lVar23 + 0x14) >> 0x20);
                      if (lVar26 == 0) {
                        local_a0 = 0xffffffffffffffff;
                      }
                      else {
                        local_a0 = *(undefined8 *)(lVar26 + 0xb0);
                        local_98 = *(undefined4 *)(lVar26 + 0x50);
                      }
                      uStack_7c = *(undefined4 *)(puVar27 + 1);
                      local_88 = (undefined2)local_100;
                      local_84 = (undefined4)*puVar27;
                      uStack_80 = (undefined4)((ulong)*puVar27 >> 0x20);
                      goto LAB_02fd491c;
                    }
                    local_f0 = CONCAT62(local_f0._2_6_,*(undefined2 *)(lVar23 + 0x10));
                    uVar116 = *(undefined8 *)(lVar23 + 0x14);
                    *(undefined4 *)(puVar20 + 1) = *(undefined4 *)(lVar23 + 0x1c);
                    *puVar20 = uVar116;
                    puVar18 = (undefined8 *)param_3[0x1e];
                    local_e0 = *puVar18;
                    local_d8 = puVar18[1];
                    local_d0 = puVar18[2];
                    local_c8 = CONCAT44(local_c8._4_4_,*(undefined4 *)(puVar18 + 3));
                    local_138[0] = (undefined2)local_100;
                    uVar116 = *puVar27;
                    local_c0 = 0;
                    *(undefined4 *)(puVar21 + 1) = *(undefined4 *)(puVar27 + 1);
                    *puVar21 = uVar116;
                    local_128 = *(undefined8 *)param_3[3];
                    local_120 = ((undefined8 *)param_3[3])[1];
                    local_118 = param_3[2];
                    local_108 = 0;
                    local_110 = uVar6;
                    uVar22 = (**(code **)(**(long **)(lVar23 + 8) + 0x40))
                                       (*(long **)(lVar23 + 8),6,1,&local_f0,local_138);
                    if ((uVar22 & 1) != 0) {
                      lVar23 = *param_3;
                      goto LAB_02fd4878;
                    }
                  }
                  uVar33 = uVar33 + 1;
                } while (uVar33 < uVar32);
                iVar57 = iVar57 + 1;
              } while (iVar57 != iVar56);
              cVar7 = *(char *)((long)param_3 + 0x101);
            }
            if (cVar7 != '\0') goto LAB_02fd4414;
          }
          else {
            *(long *)(local_150 + -1) = auVar74._0_8_;
            auVar74 = NEON_ext(auVar74,auVar74,8,1);
            *(long *)(local_150 + 1) = auVar74._0_8_;
            local_150 = puVar24 + iVar56;
          }
          if (local_550 == local_150) goto LAB_02fd4414;
          auVar51 = *(undefined1 (*) [16])(param_3 + 0x14);
          fVar71 = *(float *)(param_3 + 0x16);
          fVar79 = *(float *)((long)param_3 + 0xb4);
          fVar81 = *(float *)(param_3 + 0x17);
          fVar83 = *(float *)((long)param_3 + 0xbc);
          lVar23 = param_3[0xe];
          auVar76 = *(undefined1 (*) [16])(param_3 + 0x10);
          auVar64 = *(undefined1 (*) [16])(param_3 + 0x12);
          fVar103 = *(float *)(param_3 + 0x18);
          fVar110 = *(float *)((long)param_3 + 0xc4);
          fVar112 = *(float *)(param_3 + 0x19);
          fVar114 = *(float *)((long)param_3 + 0xcc);
          lVar91 = param_3[0x1b];
          lVar26 = param_3[0x1a];
        } while( true );
      }
    }
LAB_02fd344c:
    uVar22 = (ulong)((long)local_560 - (long)local_960) >> 2;
    if ((int)uVar22 == 0) {
      return;
    }
  } while( true );
LAB_02fd3c9c:
  iVar55 = iVar55 + 1;
  if (iVar55 == iVar31) goto LAB_02fd344c;
  goto LAB_02fd3cb0;
LAB_02fd3548:
  iVar55 = iVar55 + 1;
  if (iVar55 == iVar31) goto LAB_02fd4348;
  goto LAB_02fd355c;
LAB_02fd4414:
  iVar55 = iVar55 + 1;
  if (iVar55 == iVar31) goto LAB_02fd344c;
  goto LAB_02fd4428;
}


