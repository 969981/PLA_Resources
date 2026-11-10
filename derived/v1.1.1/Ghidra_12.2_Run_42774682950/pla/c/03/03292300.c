/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03292300; name: FUN_03292300
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03292300(float param_1,float *param_2,undefined8 *param_3,int param_4,uint param_5,
                 float *param_6,undefined8 param_7)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined8 *puVar7;
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
  undefined1 auVar21 [16];
  undefined8 uVar22;
  undefined *puVar23;
  uint uVar24;
  uint uVar25;
  long lVar26;
  int iVar27;
  int iVar28;
  long lVar29;
  uint uVar30;
  uint uVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  undefined8 uVar43;
  undefined1 auVar45 [16];
  float fVar53;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined8 uVar44;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  undefined4 uVar61;
  float fVar62;
  undefined4 uVar63;
  float fVar64;
  byte bVar71;
  byte bVar72;
  int iVar65;
  float fVar66;
  float fVar67;
  undefined1 auVar68 [12];
  byte bVar73;
  byte bVar76;
  byte bVar77;
  int iVar74;
  float fVar75;
  byte bVar78;
  undefined1 auVar69 [16];
  float fVar79;
  undefined1 auVar70 [16];
  float fVar80;
  undefined8 uVar81;
  float fVar83;
  undefined1 auVar82 [16];
  float fVar84;
  float fVar86;
  undefined1 auVar85 [16];
  float fVar87;
  undefined1 uVar88;
  undefined1 uVar89;
  undefined1 uVar90;
  float fVar91;
  float fVar92;
  undefined8 uVar93;
  float fVar94;
  float local_1e0;
  float fStack_1dc;
  float fStack_1d8;
  float fStack_1d4;
  float local_1a0;
  float fStack_19c;
  float fStack_198;
  float fStack_194;
  float local_190;
  float fStack_18c;
  undefined8 local_140;
  undefined8 uStack_138;
  float local_130;
  float fStack_12c;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  float fStack_108;
  float fStack_104;
  long local_f8;
  undefined4 local_f0;
  int local_ec;
  long local_e8;
  uint local_e0;
  float local_dc;
  undefined8 local_d8;
  long local_d0;
  float fStack_c8;
  float fStack_c4;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long local_98;
  undefined8 local_90;
  
  puVar23 = PTR_PTR_0434a080;
  uVar22 = _UNK_03888d18;
  local_98 = 0;
  local_90 = 0x8000000000000000;
  fVar32 = (float)param_3[1];
  fVar33 = (float)((ulong)param_3[1] >> 0x20);
  fVar39 = (float)*param_3;
  fVar41 = (float)((ulong)*param_3 >> 0x20);
  fVar54 = fVar39 - *param_2;
  fVar57 = fVar41 - param_2[1];
  fVar60 = fVar32 - param_2[2];
  fVar84 = fVar54 * fVar54 + fVar57 * fVar57 + fVar60 * fVar60;
  fVar86 = fVar54 * fVar54 + fVar57 * fVar57 + fVar60 * fVar60;
  uVar44 = CONCAT44(fVar86,fVar84);
  uVar81 = NEON_frsqrte(uVar44,4);
  fVar80 = (float)uVar81;
  fVar83 = (float)((ulong)uVar81 >> 0x20);
  uVar81 = NEON_frsqrts(uVar44,CONCAT44(fVar83 * fVar83,fVar80 * fVar80),4);
  fVar80 = fVar80 * (float)uVar81;
  fVar83 = fVar83 * (float)((ulong)uVar81 >> 0x20);
  uVar81 = NEON_frsqrts(uVar44,CONCAT44(fVar83 * fVar83,fVar80 * fVar80),4);
  fVar80 = (float)uVar81 * fVar80;
  fVar83 = (float)((ulong)uVar81 >> 0x20) * fVar83;
  iVar65 = -(uint)(fVar84 <= 0.0);
  iVar74 = -(uint)(fVar86 <= 0.0);
  fVar84 = fVar84 * fVar80;
  fVar86 = fVar86 * fVar83;
  bVar71 = (byte)((uint)iVar65 >> 8);
  bVar72 = (byte)((uint)iVar65 >> 0x10);
  bVar73 = (byte)((uint)iVar65 >> 0x18);
  bVar76 = (byte)((uint)iVar74 >> 8);
  bVar77 = (byte)((uint)iVar74 >> 0x10);
  bVar78 = (byte)((uint)iVar74 >> 0x18);
  fVar62 = (float)CONCAT13((byte)((uint)fVar84 >> 0x18) & ~bVar73,
                           CONCAT12((byte)((uint)fVar84 >> 0x10) & ~bVar72,
                                    CONCAT11((byte)((uint)fVar84 >> 8) & ~bVar71,
                                             SUB41(fVar84,0) & ~(byte)iVar65)));
  uVar81 = CONCAT17((byte)((uint)fVar86 >> 0x18) & ~bVar78,
                    CONCAT16((byte)((uint)fVar86 >> 0x10) & ~bVar77,
                             CONCAT15((byte)((uint)fVar86 >> 8) & ~bVar76,
                                      CONCAT14(SUB41(fVar86,0) & ~(byte)iVar74,fVar62))));
  lVar26 = (long)&local_90 + 4;
  uStack_118 = DAT_0388a148;
  local_120 = DAT_0388a140;
  local_130 = (float)_DAT_03889a80;
  fVar84 = local_130;
  fStack_12c = (float)((ulong)_DAT_03889a80 >> 0x20);
  fVar35 = fStack_12c;
  local_130 = (float)_DAT_03888d10;
  fVar86 = local_130;
  fStack_12c = (float)((ulong)_DAT_03888d10 >> 0x20);
  fVar38 = fStack_12c;
  fVar40 = (float)_UNK_03888d18;
  if (0.0 < fVar62) {
    fVar64 = (float)CONCAT13((byte)((uint)fVar80 >> 0x18) & ~bVar73,
                             CONCAT12((byte)((uint)fVar80 >> 0x10) & ~bVar72,
                                      CONCAT11((byte)((uint)fVar80 >> 8) & ~bVar71,
                                               SUB41(fVar80,0) & ~(byte)iVar65)));
    fVar54 = fVar54 * fVar64;
    fVar80 = (float)(CONCAT17((byte)((uint)fVar83 >> 0x18) & ~bVar78,
                              CONCAT16((byte)((uint)fVar83 >> 0x10) & ~bVar77,
                                       CONCAT15((byte)((uint)fVar83 >> 8) & ~bVar76,
                                                CONCAT14(SUB41(fVar83,0) & ~(byte)iVar74,fVar64))))
                    >> 0x20);
    fVar57 = fVar57 * fVar80;
    fVar60 = fVar60 * fVar64;
    fVar80 = (fVar33 - param_2[3]) * fVar80;
    uStack_128 = _UNK_03888d18;
    if (0.99999 <= ABS(fVar60 * fVar40 + fVar54 * local_130 + fVar57 * fStack_12c)) {
      uVar61 = (undefined4)_UNK_03889a88;
      uVar63 = (undefined4)((ulong)_UNK_03889a88 >> 0x20);
      fVar54 = fVar84;
      fVar57 = fVar35;
      goto LAB_032923b8;
    }
    auVar46._4_4_ = fVar57;
    auVar46._0_4_ = fVar54;
    auVar46._8_4_ = fVar60;
    auVar46._12_4_ = fVar80;
    auVar48._4_4_ = fVar57;
    auVar48._0_4_ = fVar54;
    auVar48._8_4_ = fVar60;
    auVar48._12_4_ = fVar80;
    auVar46 = NEON_ext(auVar46,auVar48,4,1);
    auVar82._0_4_ = fVar54 * (float)DAT_0388a140 + auVar46._0_4_ * (float)_DAT_0388a4f0;
    auVar82._4_4_ =
         fVar57 * (float)((ulong)DAT_0388a140 >> 0x20) +
         auVar46._4_4_ * (float)((ulong)_DAT_0388a4f0 >> 0x20);
    auVar82._8_4_ = fVar60 * (float)DAT_0388a148 + fVar54 * (float)_UNK_0388a4f8;
    auVar82._12_4_ =
         fVar80 * (float)((ulong)DAT_0388a148 >> 0x20) +
         fVar57 * (float)((ulong)_UNK_0388a4f8 >> 0x20);
    auVar48 = NEON_ext(auVar82,auVar82,4,1);
    fVar83 = auVar48._0_4_;
    fVar64 = auVar48._4_4_;
    fVar84 = auVar82._0_4_ * auVar82._0_4_ + fVar83 * fVar83 + fVar64 * fVar64;
    fVar87 = auVar82._0_4_ * auVar82._0_4_ + fVar83 * fVar83 + fVar64 * fVar64;
    uVar44 = CONCAT44(fVar87,fVar84);
    uVar93 = NEON_frsqrte(uVar44,4);
    fVar35 = (float)uVar93;
    fVar94 = (float)((ulong)uVar93 >> 0x20);
    uVar93 = NEON_frsqrts(uVar44,CONCAT44(fVar94 * fVar94,fVar35 * fVar35),4);
    fVar35 = fVar35 * (float)uVar93;
    fVar94 = fVar94 * (float)((ulong)uVar93 >> 0x20);
    iVar65 = -(uint)(fVar84 <= 0.0);
    iVar74 = -(uint)(fVar87 <= 0.0);
    uVar44 = NEON_frsqrts(uVar44,CONCAT44(fVar94 * fVar94,fVar35 * fVar35),4);
    fVar35 = (float)uVar44 * fVar35;
    fVar94 = (float)((ulong)uVar44 >> 0x20) * fVar94;
    fVar87 = (float)CONCAT13((byte)((uint)fVar35 >> 0x18) & ~(byte)((uint)iVar65 >> 0x18),
                             CONCAT12((byte)((uint)fVar35 >> 0x10) & ~(byte)((uint)iVar65 >> 0x10),
                                      CONCAT11((byte)((uint)fVar35 >> 8) &
                                               ~(byte)((uint)iVar65 >> 8),
                                               SUB41(fVar35,0) & ~(byte)iVar65)));
    fVar84 = fVar83 * fVar87;
    fVar94 = (float)(CONCAT17((byte)((uint)fVar94 >> 0x18) & ~(byte)((uint)iVar74 >> 0x18),
                              CONCAT16((byte)((uint)fVar94 >> 0x10) & ~(byte)((uint)iVar74 >> 0x10),
                                       CONCAT15((byte)((uint)fVar94 >> 8) &
                                                ~(byte)((uint)iVar74 >> 8),
                                                CONCAT14(SUB41(fVar94,0) & ~(byte)iVar74,fVar87))))
                    >> 0x20);
    fVar35 = fVar64 * fVar94;
    uVar88 = (undefined1)((uint)fVar35 >> 8);
    uVar89 = (undefined1)((uint)fVar35 >> 0x10);
    uVar90 = (undefined1)((uint)fVar35 >> 0x18);
    uVar44 = NEON_ext(CONCAT17(uVar90,CONCAT16(uVar89,CONCAT15(uVar88,CONCAT14(SUB41(fVar35,0),
                                                                               fVar84)))),
                      CONCAT44(auVar82._4_4_ * fVar94,auVar82._0_4_ * fVar87),4,1);
    auVar85._0_8_ = CONCAT44(fVar64 * fVar94,fVar83 * fVar87);
    auVar85._8_4_ = auVar82._0_4_ * fVar87;
    auVar85._12_4_ = auVar82._4_4_ * fVar94;
    uStack_128 = CONCAT44(fVar80,fVar60);
    uStack_118 = auVar85._8_8_;
    auVar70._0_8_ =
         CONCAT44(auVar46._4_4_ * fVar64 * fVar94 - fVar57 * (float)((ulong)uVar44 >> 0x20),
                  auVar46._0_4_ * fVar83 * fVar87 - fVar54 * (float)uVar44);
    auVar70._8_4_ = fVar54 * auVar85._8_4_ - fVar60 * fVar84;
    auVar70._12_4_ =
         fVar57 * auVar85._12_4_ -
         fVar80 * (float)(CONCAT17(uVar90,CONCAT16(uVar89,CONCAT15(uVar88,CONCAT14(SUB41(fVar35,0),
                                                                                   fVar84)))) >>
                         0x20);
    auVar46 = NEON_ext(auVar70,auVar70,4,1);
    local_140 = auVar46._0_8_;
    uStack_138 = auVar70._0_8_;
    local_130 = fVar54;
    fStack_12c = fVar57;
    local_120 = auVar85._0_8_;
  }
  else {
    uStack_128 = _UNK_03889a88;
    uVar61 = (undefined4)_UNK_03888d28;
    uVar63 = (undefined4)((ulong)_UNK_03888d28 >> 0x20);
    fVar54 = (float)_DAT_03888d20;
    fVar57 = (float)((ulong)_DAT_03888d20 >> 0x20);
    local_130 = fVar84;
    fStack_12c = fVar35;
LAB_032923b8:
    uStack_138 = CONCAT44(uVar63,uVar61);
    local_140 = CONCAT44(fVar57,fVar54);
  }
  fVar54 = -fVar62;
  fVar60 = (float)((ulong)uVar81 >> 0x20);
  fVar57 = -fVar60;
  auVar69._0_8_ = CONCAT44(fVar57,fVar54);
  auVar69._8_8_ = auVar69._0_8_;
  auVar68 = auVar69._0_12_;
  fVar84 = (fVar39 + *param_2) * 0.5;
  fVar35 = (fVar41 + param_2[1]) * 0.5;
  fVar39 = (fVar32 + param_2[2]) * 0.5;
  fVar41 = (fVar33 + param_2[3]) * 0.5;
  iVar74 = param_4 + -1;
  iVar65 = ((param_5 & 0xfffffffe) + iVar74) * param_5 + 2;
  uStack_b8 = _UNK_03889968;
  local_c0 = _DAT_03889960;
  uStack_a8 = _UNK_03888d18;
  uStack_b0 = _DAT_03888d10;
  if (iVar65 < 1) {
    uVar30 = 0;
    iVar65 = 0;
  }
  else {
    local_98 = FUN_032bd1d4(PTR_PTR_0434a080,iVar65,0x10,0,0,lVar26);
    auVar68._4_4_ = fVar57;
    auVar68._0_4_ = fVar54;
    auVar68._8_4_ = fVar54;
    uVar81 = CONCAT44(fVar60,fVar62);
    uVar30 = local_90._4_4_;
    iVar65 = (uint)local_90;
  }
  lVar29 = local_98;
  fVar32 = param_1 + (float)uVar81 * 0.5;
  fVar54 = param_1 + (float)((ulong)uVar81 >> 0x20) * 0.5;
  fVar64 = (float)((ulong)uVar22 >> 0x20);
  iVar28 = (int)param_5 >> 1;
  uVar31 = iVar65 + 1;
  fVar33 = fVar32 * fVar86;
  fVar57 = fVar54 * fVar38;
  fVar60 = fVar32 * fVar40;
  fVar62 = (float)uStack_118;
  fVar87 = (float)((ulong)uStack_118 >> 0x20);
  fVar80 = (float)local_120;
  fVar83 = (float)((ulong)local_120 >> 0x20);
  fVar94 = (float)uStack_128;
  fVar79 = (float)((ulong)uStack_128 >> 0x20);
  auVar45._8_4_ = fVar39 + fVar94 * fVar60 + (float)uStack_138 * fVar33 + fVar62 * fVar57;
  auVar45._12_4_ = fVar41 + fVar79 * fVar60 + uStack_138._4_4_ * fVar33 + fVar87 * fVar57;
  if ((int)(uVar30 & 0x3fffffff) <= iVar65) {
    if (0x3ffffffe < iVar65) {
      FUN_032bd0a8(uVar31);
      uVar30 = local_90._4_4_;
    }
    uVar30 = (uVar30 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar30) {
      uVar30 = 0x3fffffff;
    }
    uVar25 = uVar31;
    if ((int)uVar31 <= (int)uVar30) {
      uVar25 = uVar30;
    }
    local_98 = FUN_032bd1d4(puVar23,uVar25,0x10,lVar29,iVar65,lVar26);
    iVar65 = (uint)local_90;
  }
  uVar81 = CONCAT44(fVar35 + fStack_12c * fVar60 + local_140._4_4_ * fVar33 + fVar83 * fVar57,
                    fVar84 + local_130 * fVar60 + (float)local_140 * fVar33 + fVar80 * fVar57);
  auVar45._0_8_ = uVar81;
  fVar33 = auVar68._0_4_ * fVar86 * 0.5;
  fVar57 = auVar68._4_4_ * fVar38 * 0.5;
  fVar60 = auVar68._8_4_ * fVar40 * 0.5;
  puVar7 = (undefined8 *)(local_98 + (long)iVar65 * 0x10);
  puVar7[1] = auVar45._8_8_;
  *puVar7 = uVar81;
  uVar93 = _UNK_03889a88;
  uVar44 = _DAT_03889a80;
  uVar81 = NEON_scvtf(CONCAT44(iVar28,iVar28),4);
  uVar43 = NEON_frecpe(uVar81,4);
  uVar22 = NEON_frecps(uVar81,uVar43,4);
  fVar42 = (float)uVar43 * (float)uVar22;
  fVar53 = (float)((ulong)uVar43 >> 0x20) * (float)((ulong)uVar22 >> 0x20);
  uVar81 = NEON_frecps(uVar81,CONCAT44(fVar53,fVar42),4);
  fVar91 = fVar42 * (float)uVar81 * 1.5707964;
  fVar92 = fVar53 * (float)((ulong)uVar81 >> 0x20) * 1.5707964;
  uVar81 = NEON_scvtf(CONCAT44(param_5,param_5),4);
  uVar43 = NEON_frecpe(uVar81,4);
  uVar22 = NEON_frecps(uVar81,uVar43,4);
  fVar42 = (float)uVar43 * (float)uVar22;
  fVar53 = (float)((ulong)uVar43 >> 0x20) * (float)((ulong)uVar22 >> 0x20);
  uVar81 = NEON_frecps(uVar81,CONCAT44(fVar53,fVar42),4);
  fVar42 = fVar42 * (float)uVar81 * 6.2831855;
  fVar53 = fVar53 * (float)((ulong)uVar81 >> 0x20) * 6.2831855;
  if (1 < (int)param_5) {
    iVar65 = iVar28;
    local_90._0_4_ = uVar31;
    do {
      iVar65 = iVar65 + -1;
      uVar81 = NEON_scvtf(CONCAT44(iVar65,iVar65),4);
      local_d0 = CONCAT44(fVar92 * (float)((ulong)uVar81 >> 0x20),fVar91 * (float)uVar81);
      FUN_032caa90(&local_110,&local_c0,&local_d0);
      auVar9._8_4_ = fStack_108;
      auVar9._0_8_ = local_110;
      auVar8._8_4_ = fStack_108;
      auVar8._0_8_ = local_110;
      fVar34 = (float)local_110;
      fVar36 = (float)((ulong)local_110 >> 0x20);
      auVar8._12_4_ = fStack_104;
      auVar9._12_4_ = fStack_104;
      auVar46 = NEON_ext(auVar8,auVar9,8,1);
      local_1e0 = (float)uVar44;
      fStack_1dc = (float)((ulong)uVar44 >> 0x20);
      fStack_1d8 = (float)uVar93;
      fStack_1d4 = (float)((ulong)uVar93 >> 0x20);
      fVar58 = auVar46._4_4_ * auVar46._4_4_;
      uVar81 = NEON_ext(local_110,auVar46._0_8_,4,1);
      fVar66 = fVar34 * local_1e0 + fVar36 * fStack_1dc + fStack_108 * fStack_1d8;
      fVar75 = fVar34 * local_1e0 + fVar36 * fStack_1dc + fStack_108 * fStack_1d8;
      fVar55 = fVar58 + -0.5;
      fVar58 = fVar58 + -0.5;
      uVar30 = 0;
      auVar47._0_4_ = fVar34 * fVar86 - (float)uVar81 * local_1e0;
      auVar47._4_4_ = fVar36 * fVar38 - (float)((ulong)uVar81 >> 0x20) * fStack_1dc;
      auVar47._8_4_ = fStack_108 * fVar40 - fVar34 * fStack_1d8;
      auVar47._12_4_ = fStack_104 * fVar64 - fVar36 * fStack_1d4;
      auVar46 = NEON_ext(auVar47,auVar47,4,1);
      fVar34 = fVar55 * local_1e0 + fVar34 * fVar66 + auVar46._0_4_ * fStack_104;
      fVar36 = fVar58 * fStack_1dc + fVar36 * fVar75 + auVar46._4_4_ * fStack_104;
      fVar55 = fVar55 * fStack_1d8 + fStack_108 * fVar66 + auVar47._0_4_ * fStack_104;
      fVar58 = fVar58 * fStack_1d4 + fStack_104 * fVar75 + auVar47._4_4_ * fStack_104;
      fVar34 = fVar34 + fVar34;
      fVar36 = fVar36 + fVar36;
      fVar55 = fVar55 + fVar55;
      fVar58 = fVar58 + fVar58;
      auVar10._4_4_ = fVar36;
      auVar10._0_4_ = fVar34;
      auVar10._8_4_ = fVar55;
      auVar10._12_4_ = fVar58;
      auVar11._4_4_ = fVar36;
      auVar11._0_4_ = fVar34;
      auVar11._8_4_ = fVar55;
      auVar11._12_4_ = fVar58;
      auVar46 = NEON_ext(auVar10,auVar11,4,1);
      do {
        uVar81 = NEON_scvtf(CONCAT44(uVar30,uVar30),4);
        local_d8 = CONCAT44(fVar53 * (float)((ulong)uVar81 >> 0x20),fVar42 * (float)uVar81);
        FUN_032caa90(&local_d0,&uStack_b0,&local_d8);
        uVar25 = (uint)local_90;
        lVar29 = local_98;
        auVar13._8_4_ = fStack_c8;
        auVar13._0_8_ = local_d0;
        auVar12._8_4_ = fStack_c8;
        auVar12._0_8_ = local_d0;
        fVar66 = (float)local_d0;
        fVar37 = (float)((ulong)local_d0 >> 0x20);
        auVar12._12_4_ = fStack_c4;
        auVar13._12_4_ = fStack_c4;
        auVar48 = NEON_ext(auVar12,auVar13,8,1);
        fVar59 = auVar48._4_4_ * auVar48._4_4_;
        uVar81 = NEON_ext(local_d0,auVar48._0_8_,4,1);
        fVar56 = fVar59 + -0.5;
        fVar67 = fVar34 * fVar66 + fVar36 * fVar37 + fVar55 * fStack_c8;
        uVar31 = (uint)local_90 + 1;
        local_190 = auVar46._0_4_;
        fStack_18c = auVar46._4_4_;
        auVar49._0_4_ = local_190 * fVar66 - fVar34 * (float)uVar81;
        auVar49._4_4_ = fStack_18c * fVar37 - fVar36 * (float)((ulong)uVar81 >> 0x20);
        auVar49._8_4_ = fVar34 * fStack_c8 - fVar55 * fVar66;
        auVar49._12_4_ = fVar36 * fStack_c4 - fVar58 * fVar37;
        auVar48 = NEON_ext(auVar49,auVar49,4,1);
        fVar75 = fVar34 * fVar56 + fVar66 * fVar67 + auVar48._0_4_ * fStack_c4;
        fVar37 = fVar36 * (fVar59 + -0.5) +
                 fVar37 * (fVar34 * fVar66 + fVar36 * fVar37 + fVar55 * fStack_c8) +
                 auVar48._4_4_ * fStack_c4;
        fVar56 = fVar55 * fVar56 + fStack_c8 * fVar67 + auVar49._0_4_ * fStack_c4;
        fVar66 = param_1 * (fVar75 + fVar75) - fVar33;
        fVar75 = param_1 * (fVar37 + fVar37) - fVar57;
        fVar37 = param_1 * (fVar56 + fVar56) - fVar60;
        if ((int)(local_90._4_4_ & 0x3fffffff) <= (int)(uint)local_90) {
          if (0x3ffffffe < (int)(uint)local_90) {
            FUN_032bd0a8(uVar31);
          }
          uVar24 = (local_90._4_4_ & 0x3fffffff) << 1;
          if (0x3ffffffe < uVar24) {
            uVar24 = 0x3fffffff;
          }
          uVar6 = uVar31;
          if ((int)uVar31 <= (int)uVar24) {
            uVar6 = uVar24;
          }
          local_98 = FUN_032bd1d4(puVar23,uVar6,0x10,lVar29,uVar25,lVar26);
        }
        uVar30 = uVar30 + 1;
        puVar7 = (undefined8 *)(local_98 + (long)(int)(uint)local_90 * 0x10);
        puVar7[1] = CONCAT44(fVar41 + fVar79 * fVar37 + uStack_138._4_4_ * fVar66 + fVar87 * fVar75,
                             fVar39 + fVar94 * fVar37 + (float)uStack_138 * fVar66 + fVar62 * fVar75
                            );
        *puVar7 = CONCAT44(fVar35 + fStack_12c * fVar37 + local_140._4_4_ * fVar66 + fVar83 * fVar75
                           ,fVar84 + local_130 * fVar37 +
                                     (float)local_140 * fVar66 + fVar80 * fVar75);
        local_90._0_4_ = uVar31;
      } while (param_5 != uVar30);
    } while (0 < iVar65);
  }
  local_90._0_4_ = uVar31;
  if ((0 < iVar74) && (0 < (int)param_5)) {
    uVar81 = NEON_scvtf(CONCAT44(param_4,param_4),4);
    uVar44 = NEON_frecpe(uVar81,4);
    uVar22 = NEON_frecps(uVar81,uVar44,4);
    fVar34 = (float)uVar44 * (float)uVar22;
    fVar36 = (float)((ulong)uVar44 >> 0x20) * (float)((ulong)uVar22 >> 0x20);
    uVar81 = NEON_frecps(uVar81,CONCAT44(fVar36,fVar34),4);
    fStack_198 = (float)_UNK_03889a88;
    fStack_194 = (float)((ulong)_UNK_03889a88 >> 0x20);
    local_1a0 = (float)_DAT_03889a80;
    fStack_19c = (float)((ulong)_DAT_03889a80 >> 0x20);
    do {
      uVar30 = 0;
      uVar22 = NEON_scvtf(CONCAT44(iVar74,iVar74),4);
      fVar55 = fVar34 * (float)uVar81 * (float)uVar22;
      do {
        uVar44 = NEON_scvtf(CONCAT44(uVar30,uVar30),4);
        local_d0 = CONCAT44(fVar53 * (float)((ulong)uVar44 >> 0x20),fVar42 * (float)uVar44);
        FUN_032caa90(&local_110,&uStack_b0,&local_d0);
        uVar25 = (uint)local_90;
        lVar29 = local_98;
        auVar15._8_4_ = fStack_108;
        auVar15._0_8_ = local_110;
        auVar14._8_4_ = fStack_108;
        auVar14._0_8_ = local_110;
        fVar58 = (float)local_110;
        fVar75 = (float)((ulong)local_110 >> 0x20);
        auVar14._12_4_ = fStack_104;
        auVar15._12_4_ = fStack_104;
        auVar46 = NEON_ext(auVar14,auVar15,8,1);
        fVar56 = auVar46._4_4_ * auVar46._4_4_;
        uVar44 = NEON_ext(local_110,auVar46._0_8_,4,1);
        fVar37 = fVar56 + -0.5;
        fVar59 = fVar58 * local_1a0 + fVar75 * fStack_19c + fStack_108 * fStack_198;
        uVar31 = (uint)local_90 + 1;
        auVar50._0_4_ = fVar58 * fVar86 - (float)uVar44 * local_1a0;
        auVar50._4_4_ = fVar75 * fVar38 - (float)((ulong)uVar44 >> 0x20) * fStack_19c;
        auVar50._8_4_ = fStack_108 * fVar40 - fVar58 * fStack_198;
        auVar50._12_4_ = fStack_104 * fVar64 - fVar75 * fStack_194;
        auVar46 = NEON_ext(auVar50,auVar50,4,1);
        fVar66 = fVar37 * local_1a0 + fVar58 * fVar59 + auVar46._0_4_ * fStack_104;
        fVar75 = (fVar56 + -0.5) * fStack_19c +
                 fVar75 * (fVar58 * local_1a0 + fVar75 * fStack_19c + fStack_108 * fStack_198) +
                 auVar46._4_4_ * fStack_104;
        fVar37 = fVar37 * fStack_198 + fStack_108 * fVar59 + auVar50._0_4_ * fStack_104;
        fVar58 = fVar33 + (-fVar33 - fVar33) * fVar55 + param_1 * (fVar66 + fVar66);
        fVar66 = fVar57 + (-fVar57 - fVar57) *
                          fVar36 * (float)((ulong)uVar81 >> 0x20) * (float)((ulong)uVar22 >> 0x20) +
                 param_1 * (fVar75 + fVar75);
        fVar75 = fVar60 + (-fVar60 - fVar60) * fVar55 + param_1 * (fVar37 + fVar37);
        if ((int)(local_90._4_4_ & 0x3fffffff) <= (int)(uint)local_90) {
          if (0x3ffffffe < (int)(uint)local_90) {
            FUN_032bd0a8(uVar31);
          }
          uVar24 = (local_90._4_4_ & 0x3fffffff) << 1;
          if (0x3ffffffe < uVar24) {
            uVar24 = 0x3fffffff;
          }
          uVar6 = uVar31;
          if ((int)uVar31 <= (int)uVar24) {
            uVar6 = uVar24;
          }
          local_98 = FUN_032bd1d4(puVar23,uVar6,0x10,lVar29,uVar25,lVar26);
        }
        uVar30 = uVar30 + 1;
        puVar7 = (undefined8 *)(local_98 + (long)(int)(uint)local_90 * 0x10);
        puVar7[1] = CONCAT44(fVar41 + fVar79 * fVar75 + uStack_138._4_4_ * fVar58 + fVar87 * fVar66,
                             fVar39 + fVar94 * fVar75 + (float)uStack_138 * fVar58 + fVar62 * fVar66
                            );
        *puVar7 = CONCAT44(fVar35 + fStack_12c * fVar75 + local_140._4_4_ * fVar58 + fVar83 * fVar66
                           ,fVar84 + local_130 * fVar75 +
                                     (float)local_140 * fVar58 + fVar80 * fVar66);
        local_90._0_4_ = uVar31;
      } while (param_5 != uVar30);
      iVar74 = iVar74 + -1;
    } while (0 < iVar74);
  }
  uVar22 = _UNK_03889a88;
  uVar81 = _DAT_03889a80;
  if (1 < (int)param_5) {
    iVar65 = 0;
    do {
      uVar44 = NEON_scvtf(CONCAT44(iVar65,iVar65),4);
      local_d0 = CONCAT44(-(fVar92 * (float)((ulong)uVar44 >> 0x20)),-(fVar91 * (float)uVar44));
      FUN_032caa90(&local_110,&local_c0,&local_d0);
      auVar17._8_4_ = fStack_108;
      auVar17._0_8_ = local_110;
      auVar16._8_4_ = fStack_108;
      auVar16._0_8_ = local_110;
      fVar34 = (float)local_110;
      fVar36 = (float)((ulong)local_110 >> 0x20);
      auVar16._12_4_ = fStack_104;
      auVar17._12_4_ = fStack_104;
      auVar46 = NEON_ext(auVar16,auVar17,8,1);
      local_1e0 = (float)uVar81;
      fStack_1dc = (float)((ulong)uVar81 >> 0x20);
      fStack_1d8 = (float)uVar22;
      fStack_1d4 = (float)((ulong)uVar22 >> 0x20);
      fVar58 = auVar46._4_4_ * auVar46._4_4_;
      uVar44 = NEON_ext(local_110,auVar46._0_8_,4,1);
      fVar66 = fVar34 * local_1e0 + fVar36 * fStack_1dc + fStack_108 * fStack_1d8;
      fVar75 = fVar34 * local_1e0 + fVar36 * fStack_1dc + fStack_108 * fStack_1d8;
      fVar55 = fVar58 + -0.5;
      fVar58 = fVar58 + -0.5;
      uVar30 = 0;
      auVar51._0_4_ = fVar34 * fVar86 - (float)uVar44 * local_1e0;
      auVar51._4_4_ = fVar36 * fVar38 - (float)((ulong)uVar44 >> 0x20) * fStack_1dc;
      auVar51._8_4_ = fStack_108 * fVar40 - fVar34 * fStack_1d8;
      auVar51._12_4_ = fStack_104 * fVar64 - fVar36 * fStack_1d4;
      auVar46 = NEON_ext(auVar51,auVar51,4,1);
      fVar34 = fVar55 * local_1e0 + fVar34 * fVar66 + auVar46._0_4_ * fStack_104;
      fVar36 = fVar58 * fStack_1dc + fVar36 * fVar75 + auVar46._4_4_ * fStack_104;
      fVar55 = fVar55 * fStack_1d8 + fStack_108 * fVar66 + auVar51._0_4_ * fStack_104;
      fVar58 = fVar58 * fStack_1d4 + fStack_104 * fVar75 + auVar51._4_4_ * fStack_104;
      fVar34 = fVar34 + fVar34;
      fVar36 = fVar36 + fVar36;
      fVar55 = fVar55 + fVar55;
      fVar58 = fVar58 + fVar58;
      auVar18._4_4_ = fVar36;
      auVar18._0_4_ = fVar34;
      auVar18._8_4_ = fVar55;
      auVar18._12_4_ = fVar58;
      auVar19._4_4_ = fVar36;
      auVar19._0_4_ = fVar34;
      auVar19._8_4_ = fVar55;
      auVar19._12_4_ = fVar58;
      auVar46 = NEON_ext(auVar18,auVar19,4,1);
      do {
        uVar44 = NEON_scvtf(CONCAT44(uVar30,uVar30),4);
        local_d8 = CONCAT44(fVar53 * (float)((ulong)uVar44 >> 0x20),fVar42 * (float)uVar44);
        FUN_032caa90(&local_d0,&uStack_b0,&local_d8);
        uVar25 = (uint)local_90;
        lVar29 = local_98;
        auVar21._8_4_ = fStack_c8;
        auVar21._0_8_ = local_d0;
        auVar20._8_4_ = fStack_c8;
        auVar20._0_8_ = local_d0;
        fVar66 = (float)local_d0;
        fVar37 = (float)((ulong)local_d0 >> 0x20);
        auVar20._12_4_ = fStack_c4;
        auVar21._12_4_ = fStack_c4;
        auVar48 = NEON_ext(auVar20,auVar21,8,1);
        fVar59 = auVar48._4_4_ * auVar48._4_4_;
        uVar44 = NEON_ext(local_d0,auVar48._0_8_,4,1);
        fVar56 = fVar59 + -0.5;
        fVar67 = fVar34 * fVar66 + fVar36 * fVar37 + fVar55 * fStack_c8;
        uVar31 = (uint)local_90 + 1;
        local_190 = auVar46._0_4_;
        fStack_18c = auVar46._4_4_;
        auVar52._0_4_ = local_190 * fVar66 - fVar34 * (float)uVar44;
        auVar52._4_4_ = fStack_18c * fVar37 - fVar36 * (float)((ulong)uVar44 >> 0x20);
        auVar52._8_4_ = fVar34 * fStack_c8 - fVar55 * fVar66;
        auVar52._12_4_ = fVar36 * fStack_c4 - fVar58 * fVar37;
        auVar48 = NEON_ext(auVar52,auVar52,4,1);
        fVar75 = fVar34 * fVar56 + fVar66 * fVar67 + auVar48._0_4_ * fStack_c4;
        fVar37 = fVar36 * (fVar59 + -0.5) +
                 fVar37 * (fVar34 * fVar66 + fVar36 * fVar37 + fVar55 * fStack_c8) +
                 auVar48._4_4_ * fStack_c4;
        fVar56 = fVar55 * fVar56 + fStack_c8 * fVar67 + auVar52._0_4_ * fStack_c4;
        fVar66 = fVar33 + param_1 * (fVar75 + fVar75);
        fVar75 = fVar57 + param_1 * (fVar37 + fVar37);
        fVar37 = fVar60 + param_1 * (fVar56 + fVar56);
        if ((int)(local_90._4_4_ & 0x3fffffff) <= (int)(uint)local_90) {
          if (0x3ffffffe < (int)(uint)local_90) {
            FUN_032bd0a8(uVar31);
          }
          uVar24 = (local_90._4_4_ & 0x3fffffff) << 1;
          if (0x3ffffffe < uVar24) {
            uVar24 = 0x3fffffff;
          }
          uVar6 = uVar31;
          if ((int)uVar31 <= (int)uVar24) {
            uVar6 = uVar24;
          }
          local_98 = FUN_032bd1d4(puVar23,uVar6,0x10,lVar29,uVar25,lVar26);
        }
        uVar30 = uVar30 + 1;
        puVar7 = (undefined8 *)(local_98 + (long)(int)(uint)local_90 * 0x10);
        puVar7[1] = CONCAT44(fVar41 + fVar79 * fVar37 + uStack_138._4_4_ * fVar66 + fVar87 * fVar75,
                             fVar39 + fVar94 * fVar37 + (float)uStack_138 * fVar66 + fVar62 * fVar75
                            );
        *puVar7 = CONCAT44(fVar35 + fStack_12c * fVar37 + local_140._4_4_ * fVar66 + fVar83 * fVar75
                           ,fVar84 + local_130 * fVar37 +
                                     (float)local_140 * fVar66 + fVar80 * fVar75);
        local_90._0_4_ = uVar31;
      } while (param_5 != uVar30);
      iVar65 = iVar65 + 1;
    } while (iVar65 < iVar28);
  }
  uVar31 = (uint)local_90;
  lVar29 = local_98;
  fVar86 = -fVar32 * fVar86;
  fVar38 = -fVar54 * fVar38;
  fVar40 = -fVar32 * fVar40;
  uVar30 = (uint)local_90 + 1;
  if ((int)(local_90._4_4_ & 0x3fffffff) <= (int)(uint)local_90) {
    if (0x3ffffffe < (int)(uint)local_90) {
      FUN_032bd0a8(uVar30);
    }
    uVar25 = (local_90._4_4_ & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar25) {
      uVar25 = 0x3fffffff;
    }
    uVar24 = uVar30;
    if ((int)uVar30 <= (int)uVar25) {
      uVar24 = uVar25;
    }
    local_98 = FUN_032bd1d4(puVar23,uVar24,0x10,lVar29,uVar31,lVar26);
  }
  puVar7 = (undefined8 *)(local_98 + (long)(int)(uint)local_90 * 0x10);
  puVar7[1] = CONCAT44(fVar41 + fVar79 * fVar40 + uStack_138._4_4_ * fVar86 + fVar87 * fVar38,
                       fVar39 + fVar94 * fVar40 + (float)uStack_138 * fVar86 + fVar62 * fVar38);
  *puVar7 = CONCAT44(fVar35 + fStack_12c * fVar40 + local_140._4_4_ * fVar86 + fVar83 * fVar38,
                     fVar84 + local_130 * fVar40 + (float)local_140 * fVar86 + fVar80 * fVar38);
  local_90 = CONCAT44(local_90._4_4_,uVar30);
  if (-1 < (int)uVar31) {
    lVar26 = 0;
    do {
      lVar29 = lVar26 * 0x10;
      lVar26 = lVar26 + 1;
      fVar84 = *param_6;
      fVar86 = param_6[1];
      uVar22 = *(undefined8 *)(param_6 + 4);
      puVar7 = (undefined8 *)(local_98 + lVar29);
      fVar33 = (float)puVar7[1];
      uVar81 = *puVar7;
      fVar32 = (float)uVar81;
      fVar40 = (float)((ulong)uVar81 >> 0x20);
      fVar35 = param_6[8];
      fVar38 = param_6[9];
      fVar39 = param_6[0xc];
      fVar41 = param_6[0xd];
      puVar7 = (undefined8 *)(local_98 + lVar29);
      puVar7[1] = CONCAT44(param_6[0xf] +
                           param_6[0xb] * fVar33 +
                           param_6[3] * fVar32 +
                           (float)((ulong)*(undefined8 *)(param_6 + 6) >> 0x20) * fVar40,
                           param_6[0xe] +
                           param_6[10] * fVar33 +
                           param_6[2] * fVar32 + (float)*(undefined8 *)(param_6 + 6) * fVar40);
      *puVar7 = CONCAT44(fVar41 + fVar38 * fVar33 +
                                  fVar86 * fVar32 + (float)((ulong)uVar22 >> 0x20) * fVar40,
                         fVar39 + fVar35 * fVar33 + fVar84 * fVar32 + (float)uVar22 * fVar40);
    } while (lVar26 < (int)uVar30);
  }
  local_d0 = 0;
  fStack_c8 = 0.0;
  fStack_c4 = -0.0;
  if ((int)param_5 < 1) {
    uVar30 = 0;
  }
  else {
    uVar30 = 1;
    while( true ) {
      fVar84 = (float)(uVar30 - 1);
      iVar65 = 1;
      if (param_5 != uVar30) {
        iVar65 = uVar30 + 1;
      }
      if (((uint)fStack_c4 & 0x3fffffff) <= (uint)fVar84) {
        local_d0 = FUN_02fada68(puVar23,uVar30,local_d0,fVar84,&fStack_c4);
        fVar84 = fStack_c8;
      }
      puVar1 = (undefined4 *)(local_d0 + (long)(int)fVar84 * 0x10);
      *puVar1 = 0;
      puVar1[1] = uVar30;
      puVar1[2] = iVar65;
      puVar1[3] = 0xffffffff;
      fStack_c8 = (float)uVar30;
      if (param_5 == uVar30) break;
      uVar30 = uVar30 + 1;
    }
    uVar30 = param_5;
  }
  iVar65 = param_4 + (param_5 & 0xfffffffe) + -2;
  if (iVar65 < 1) {
    iVar74 = 1;
  }
  else {
    if ((int)param_5 < 1) goto LAB_03293000;
    iVar28 = 0;
    iVar4 = 0;
    iVar27 = 1;
    local_130 = (float)param_5;
    do {
      iVar74 = iVar27 + param_5;
      uVar31 = 1;
      do {
        iVar5 = iVar4 + uVar31;
        uVar25 = 0;
        if (uVar31 != param_5) {
          uVar25 = uVar31;
        }
        iVar3 = uVar30 + 1;
        if ((int)uVar30 < (int)((uint)fStack_c4 & 0x3fffffff)) {
          fStack_c8 = (float)uVar30;
        }
        else {
          local_d0 = FUN_02fada68(puVar23,iVar3,local_d0,uVar30,&fStack_c4);
        }
        piVar2 = (int *)(local_d0 + (long)(int)fStack_c8 * 0x10);
        *piVar2 = iVar5;
        piVar2[1] = (int)local_130 + uVar31;
        piVar2[2] = uVar25 + iVar74;
        piVar2[3] = -1;
        uVar30 = uVar30 + 2;
        fStack_c8 = (float)iVar3;
        if ((int)((uint)fStack_c4 & 0x3fffffff) <= iVar3) {
          local_d0 = FUN_02fada68(puVar23,uVar30,local_d0,iVar3,&fStack_c4);
        }
        piVar2 = (int *)(local_d0 + (long)(int)fStack_c8 * 0x10);
        uVar31 = uVar31 + 1;
        *piVar2 = uVar25 + iVar27;
        piVar2[1] = iVar5;
        piVar2[2] = uVar25 + iVar74;
        piVar2[3] = -1;
        fStack_c8 = (float)uVar30;
      } while (uVar31 - param_5 != 1);
      local_130 = (float)((int)local_130 + param_5);
      iVar28 = iVar28 + 1;
      iVar4 = iVar4 + param_5;
      iVar27 = iVar74;
    } while (iVar28 != iVar65);
  }
  if (0 < (int)param_5) {
    uVar31 = 0;
    do {
      fVar84 = (float)(uVar30 + uVar31);
      uVar25 = uVar31 + 1;
      iVar65 = 0;
      if (uVar31 - param_5 != -1) {
        iVar65 = uVar31 + 1;
      }
      uVar24 = (int)fVar84 + 1;
      if ((int)((uint)fStack_c4 & 0x3fffffff) <= (int)fVar84) {
        local_d0 = FUN_02fada68(puVar23,uVar24,local_d0,fVar84,&fStack_c4);
        fVar84 = fStack_c8;
      }
      piVar2 = (int *)(local_d0 + (long)(int)fVar84 * 0x10);
      *piVar2 = iVar65 + iVar74;
      piVar2[1] = iVar74 + uVar31;
      piVar2[2] = iVar74 + param_5;
      piVar2[3] = -1;
      fStack_c8 = (float)uVar24;
      uVar31 = uVar25;
    } while (uVar25 != param_5);
  }
LAB_03293000:
  FUN_0333e3f0(&local_110);
  if (local_ec < 0) {
    FUN_032bcf84(puVar23,&local_f8,0x10);
  }
  uVar61 = local_90._4_4_;
  if (local_90 < 0) {
    FUN_032bcf84(puVar23,&local_98,0x10);
    uVar61 = local_90._4_4_;
  }
  lVar29 = local_98;
  uVar63 = local_f0;
  lVar26 = local_f8;
  local_f8 = local_98;
  local_f0 = (uint)local_90;
  local_98 = lVar26;
  local_90 = CONCAT44(local_ec,uVar63);
  local_ec = uVar61;
  if ((int)local_dc < 0) {
    FUN_032bcf84(puVar23,&local_e8,0x10);
  }
  fVar84 = fStack_c4;
  if ((int)fStack_c4 < 0) {
    FUN_032bcf84(puVar23,&local_d0,0x10);
    fVar84 = fStack_c4;
  }
  uVar30 = local_e0;
  lVar26 = local_e8;
  local_e8 = local_d0;
  local_d0 = lVar26;
  local_e0 = (uint)fStack_c8;
  fStack_c8 = (float)uVar30;
  fStack_c4 = local_dc;
  local_dc = fVar84;
  FUN_0333e7f0(param_7,&local_110,0);
  FUN_0333e688(&local_110);
  fStack_c8 = 0.0;
  if ((-1 < (int)fStack_c4) && (local_d0 != 0)) {
    FUN_032cf244(puVar23,local_d0,0x10,(uint)fStack_c4 & 0x3fffffff);
  }
  lVar26 = local_90;
  uVar30 = local_90._4_4_;
  local_90 = (ulong)local_90._4_4_ << 0x20;
  if ((-1 < lVar26) && (local_98 != 0)) {
    FUN_032cf244(puVar23,local_98,0x10,uVar30 & 0x3fffffff);
  }
  return;
}


