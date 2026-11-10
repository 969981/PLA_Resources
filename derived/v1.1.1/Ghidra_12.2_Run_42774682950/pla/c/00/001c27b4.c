/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001c27b4; name: FUN_001c27b4
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_001c27b4(long param_1)

{
  bool bVar1;
  float *pfVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined *puVar10;
  undefined *puVar11;
  uint uVar12;
  ulong uVar13;
  long lVar14;
  undefined1 (*pauVar15) [16];
  long *plVar16;
  long *plVar17;
  long lVar18;
  undefined8 uVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [12];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  float fVar26;
  float fVar27;
  undefined4 uVar28;
  undefined8 uVar29;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  float fVar39;
  float fVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  float fVar47;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  ulong uVar56;
  ulong uVar57;
  float fVar58;
  float fVar59;
  float fVar62;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  float fVar73;
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [12];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  float fVar80;
  undefined1 auVar79 [16];
  float fVar81;
  int iVar82;
  int iVar83;
  undefined1 auVar84 [12];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  float fVar88;
  undefined1 auVar89 [16];
  float local_3c0;
  float fStack_3bc;
  float fStack_3b8;
  float fStack_3b4;
  float local_3b0;
  float fStack_3ac;
  float fStack_3a8;
  float fStack_3a4;
  float local_3a0;
  float fStack_39c;
  float fStack_398;
  float fStack_394;
  float local_390;
  float fStack_38c;
  float fStack_388;
  float fStack_384;
  undefined1 (*local_360) [16];
  undefined8 local_358;
  undefined8 local_160;
  undefined8 local_158;
  float local_150;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  undefined8 local_140;
  undefined8 uStack_138;
  float local_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  undefined8 local_120;
  undefined8 uStack_118;
  float local_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float local_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  undefined8 local_e0;
  undefined8 uStack_d8;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float local_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  ulong local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  
  if (*(char *)(param_1 + 0x1fc) != '\0') {
    return 0;
  }
  *(undefined1 *)(param_1 + 0x1fd) = 0;
  puVar10 = PTR_DAT_04372370;
  if (*(int *)(param_1 + 0x1f0) == 2) {
    local_360 = (undefined1 (*) [16])0x0;
    local_358 = 0x8000000000000000;
    iVar82 = *(int *)(param_1 + 0x60);
    uVar19 = *(undefined8 *)PTR_PTR_04372408;
    if (iVar82 < 1) {
      local_358 = CONCAT44(0x80000000,iVar82);
      plVar16 = *(long **)(param_1 + 0x58);
      lVar14 = local_358;
    }
    else {
      if (0x3fffffff < iVar82) {
        FUN_032bd0a8(iVar82);
      }
      local_360 = (undefined1 (*) [16])FUN_032bd1d4(uVar19,iVar82,0x10,0,0,(long)&local_358 + 4);
      local_358 = CONCAT44(local_358._4_4_,iVar82);
      plVar16 = *(long **)(param_1 + 0x58);
      lVar14 = local_358;
    }
    pauVar15 = local_360;
    if (plVar16 == (long *)0x0) {
      uVar29 = *(undefined8 *)(puVar10 + 0x50);
    }
    else {
      do {
        auVar85 = NEON_scvtf(*(undefined1 (*) [16])(plVar16 + 4),4);
        fVar26 = *(float *)(param_1 + 0x150);
        fVar35 = *(float *)(param_1 + 0x154);
        fVar70 = *(float *)(param_1 + 0x15c);
        fVar47 = *(float *)(param_1 + 0x130);
        fVar27 = *(float *)(param_1 + 0x134);
        fVar36 = *(float *)(param_1 + 0x13c);
        *(float *)(*pauVar15 + 8) =
             *(float *)(param_1 + 0x138) + *(float *)(param_1 + 0x158) * auVar85._8_4_;
        *(float *)(*pauVar15 + 0xc) = fVar36 + fVar70 * 0.0;
        *(float *)*pauVar15 = fVar47 + fVar26 * auVar85._0_4_;
        *(float *)(*pauVar15 + 4) = fVar27 + fVar35 * auVar85._4_4_;
        plVar16 = (long *)*plVar16;
        pauVar15 = pauVar15 + 1;
      } while (plVar16 != (long *)0x0);
      local_358._0_4_ = (int)lVar14;
      uVar29 = *(undefined8 *)(puVar10 + 0x50);
      iVar82 = (int)local_358;
    }
    local_358._4_4_ = (uint)((ulong)lVar14 >> 0x20);
    uVar12 = local_358._4_4_;
    if (iVar82 < 3) {
      fVar27 = 0.0;
      fVar36 = 0.0;
      fVar37 = 0.0;
      fVar38 = 0.0;
    }
    else {
      fVar26 = *(float *)local_360[1];
      fVar35 = *(float *)(local_360[1] + 4);
      fVar70 = *(float *)(local_360[1] + 8);
      fVar47 = *(float *)(local_360[1] + 0xc);
      fVar27 = 0.0;
      fVar36 = 0.0;
      fVar37 = 0.0;
      fVar38 = 0.0;
      lVar18 = 2;
      do {
        auVar85._0_4_ = fVar26 - *(float *)*local_360;
        auVar85._4_4_ = fVar35 - *(float *)(*local_360 + 4);
        auVar85._8_4_ = fVar70 - *(float *)(*local_360 + 8);
        auVar85._12_4_ = fVar47 - *(float *)(*local_360 + 0xc);
        pauVar15 = local_360 + lVar18;
        fVar26 = *(float *)*pauVar15;
        fVar35 = *(float *)(*pauVar15 + 4);
        fVar70 = *(float *)(*pauVar15 + 8);
        fVar47 = *(float *)(*pauVar15 + 0xc);
        auVar32 = NEON_ext(auVar85,auVar85,4,1);
        auVar60._0_4_ = fVar26 - *(float *)*local_360;
        auVar60._4_4_ = fVar35 - *(float *)(*local_360 + 4);
        auVar60._8_4_ = fVar70 - *(float *)(*local_360 + 8);
        auVar60._12_4_ = fVar47 - *(float *)(*local_360 + 0xc);
        auVar63 = NEON_ext(auVar60,auVar60,4,1);
        auVar44._0_4_ = auVar85._0_4_ * auVar63._0_4_ - auVar60._0_4_ * auVar32._0_4_;
        auVar44._4_4_ = auVar85._4_4_ * auVar63._4_4_ - auVar60._4_4_ * auVar32._4_4_;
        auVar44._8_4_ = auVar85._8_4_ * auVar60._0_4_ - auVar60._8_4_ * auVar85._0_4_;
        auVar44._12_4_ = auVar85._12_4_ * auVar60._4_4_ - auVar60._12_4_ * auVar85._4_4_;
        auVar32 = NEON_ext(auVar44,auVar44,4,1);
        auVar48._12_4_ = *(float *)(param_1 + 0x120) * auVar32._0_4_;
        fVar62 = *(float *)(param_1 + 0x124) * auVar32._4_4_;
        fVar66 = *(float *)(param_1 + 0x128) * auVar44._0_4_;
        fVar58 = ABS(auVar48._12_4_ + fVar62 + fVar66);
        auVar48._12_4_ = ABS(auVar48._12_4_ + fVar62 + fVar66);
        uVar29 = CONCAT44((float)((ulong)uVar29 >> 0x20) + auVar48._12_4_,(float)uVar29 + fVar58);
        fVar58 = (float)*(undefined8 *)(puVar10 + 0x160) * fVar58;
        auVar48._12_4_ = (float)((ulong)*(undefined8 *)(puVar10 + 0x160) >> 0x20) * auVar48._12_4_;
        fVar27 = fVar27 + (auVar85._0_4_ + auVar60._0_4_) * fVar58;
        fVar36 = fVar36 + (auVar85._4_4_ + auVar60._4_4_) * auVar48._12_4_;
        fVar37 = fVar37 + (auVar85._8_4_ + auVar60._8_4_) * fVar58;
        fVar38 = fVar38 + (auVar85._12_4_ + auVar60._12_4_) * auVar48._12_4_;
        bVar1 = lVar18 < iVar82 + -1;
        lVar18 = lVar18 + 1;
      } while (bVar1);
    }
    uVar28 = *(undefined4 *)(puVar10 + 0x60);
    *(undefined1 *)(param_1 + 0x1fc) = 1;
    *(undefined4 *)(param_1 + 0x1b8) = *(undefined4 *)(param_1 + 0x1b8);
    *(undefined4 *)(param_1 + 0x1bc) = *(undefined4 *)(param_1 + 0x1bc);
    *(undefined4 *)(param_1 + 0x1b0) = uVar28;
    *(undefined4 *)(param_1 + 0x1b4) = *(undefined4 *)(param_1 + 0x1b4);
    uVar41 = *(undefined8 *)(puVar10 + 0x200);
    *(undefined8 *)(param_1 + 0x1a8) = *(undefined8 *)(puVar10 + 0x208);
    *(undefined8 *)(param_1 + 0x1a0) = uVar41;
    uVar41 = NEON_frecpe(uVar29,4);
    uVar42 = NEON_frecps(uVar29,uVar41,4);
    fVar26 = (float)uVar41 * (float)uVar42;
    fVar35 = (float)((ulong)uVar41 >> 0x20) * (float)((ulong)uVar42 >> 0x20);
    uVar41 = NEON_frecps(uVar29,CONCAT44(fVar35,fVar26),4);
    *(ulong *)(param_1 + 0x1e8) =
         CONCAT44((float)((ulong)uVar29 >> 0x20) *
                  (float)((ulong)*(undefined8 *)(puVar10 + 0x150) >> 0x20),
                  (float)uVar29 * (float)*(undefined8 *)(puVar10 + 0x150));
    fVar26 = fVar26 * (float)uVar41;
    fVar35 = fVar35 * (float)((ulong)uVar41 >> 0x20);
    auVar85 = *local_360;
    auVar32._0_8_ = CONCAT44(auVar85._4_4_ + fVar36 * fVar35,auVar85._0_4_ + fVar27 * fVar26);
    auVar32._8_4_ = auVar85._8_4_ + fVar37 * fVar26;
    auVar32._12_4_ = auVar85._12_4_ + fVar38 * fVar35;
    *(long *)(param_1 + 0x198) = auVar32._8_8_;
    *(undefined8 *)(param_1 + 400) = auVar32._0_8_;
    local_358 = (ulong)local_358._4_4_ << 0x20;
    if (lVar14 < 0) {
      return 0;
    }
    if (local_360 == (undefined1 (*) [16])0x0) {
      return 0;
    }
    FUN_032cf244(uVar19,local_360,0x10,uVar12 & 0x3fffffff);
    uVar19 = 0x80040200;
    if (*(char *)(param_1 + 0x1fc) != '\0') {
      uVar19 = 0;
    }
    return uVar19;
  }
  if (*(int *)(param_1 + 0x1f0) != 3) {
    uVar19 = *(undefined8 *)(PTR_DAT_04372370 + 0x200);
    uVar29 = *(undefined8 *)(PTR_DAT_04372370 + 0x208);
    uVar41 = *(undefined8 *)(PTR_DAT_04372370 + 0x210);
    uVar42 = *(undefined8 *)(PTR_DAT_04372370 + 0x218);
    *(undefined1 *)(param_1 + 0x1fc) = 1;
    *(undefined8 *)(param_1 + 0x1b8) = uVar29;
    *(undefined8 *)(param_1 + 0x1b0) = uVar19;
    *(undefined8 *)(param_1 + 0x1c8) = uVar42;
    *(undefined8 *)(param_1 + 0x1c0) = uVar41;
    *(undefined8 *)(param_1 + 0x168) = uVar29;
    *(undefined8 *)(param_1 + 0x160) = uVar19;
    uVar19 = *(undefined8 *)(puVar10 + 0x220);
    uVar29 = *(undefined8 *)(puVar10 + 0x228);
    uVar5 = *(undefined8 *)(puVar10 + 0x230);
    uVar6 = *(undefined8 *)(puVar10 + 0x238);
    *(undefined8 *)(param_1 + 0x1d8) = uVar29;
    *(undefined8 *)(param_1 + 0x1d0) = uVar19;
    *(undefined8 *)(param_1 + 0x1e0) = 0;
    *(undefined8 *)(param_1 + 0x1e8) = 0;
    *(undefined8 *)(param_1 + 0x1a0) = 0;
    *(undefined8 *)(param_1 + 0x1a8) = 0;
    *(undefined8 *)(param_1 + 0x178) = uVar42;
    *(undefined8 *)(param_1 + 0x170) = uVar41;
    *(undefined8 *)(param_1 + 0x188) = uVar29;
    *(undefined8 *)(param_1 + 0x180) = uVar19;
    *(undefined8 *)(param_1 + 0x198) = uVar6;
    *(undefined8 *)(param_1 + 400) = uVar5;
    return 0;
  }
  auVar63 = *(undefined1 (*) [16])(param_1 + 0xc0);
  auVar85 = *(undefined1 (*) [16])(PTR_DAT_04372370 + 0x240);
  auVar84 = auVar85._0_12_;
  if (auVar63._12_4_ == auVar85._0_4_) {
    plVar16 = *(long **)(param_1 + 0x58);
    auVar75 = ZEXT816(0);
    *(undefined8 *)(param_1 + 200) = 0;
    *(undefined8 *)(param_1 + 0xc0) = 0;
    if (plVar16 != (long *)0x0) {
      auVar32 = ZEXT816(0);
      do {
        auVar44 = NEON_scvtf(*(undefined1 (*) [16])(plVar16 + 4),4);
        auVar75._0_8_ =
             CONCAT44(auVar32._4_4_ +
                      *(float *)(param_1 + 0x134) + *(float *)(param_1 + 0x154) * auVar44._4_4_,
                      auVar32._0_4_ +
                      *(float *)(param_1 + 0x130) + *(float *)(param_1 + 0x150) * auVar44._0_4_);
        auVar75._8_4_ =
             auVar32._8_4_ +
             *(float *)(param_1 + 0x138) + *(float *)(param_1 + 0x158) * auVar44._8_4_;
        auVar75._12_4_ =
             auVar32._12_4_ + *(float *)(param_1 + 0x13c) + *(float *)(param_1 + 0x15c) * 0.0;
        *(long *)(param_1 + 200) = auVar75._8_8_;
        *(undefined8 *)(param_1 + 0xc0) = auVar75._0_8_;
        plVar16 = (long *)*plVar16;
        auVar32 = auVar75;
      } while (plVar16 != (long *)0x0);
    }
    auVar23 = auVar75._0_12_;
    iVar82 = *(int *)(param_1 + 0x60);
    if (iVar82 != 0) {
      uVar19 = NEON_scvtf(CONCAT44(iVar82,iVar82),4);
      uVar29 = NEON_frecpe(uVar19,4);
      uVar41 = NEON_frecps(uVar19,uVar29,4);
      fVar26 = (float)uVar29 * (float)uVar41;
      fVar35 = (float)((ulong)uVar29 >> 0x20) * (float)((ulong)uVar41 >> 0x20);
      uVar19 = NEON_frecps(uVar19,CONCAT44(fVar35,fVar26),4);
      fVar26 = fVar26 * (float)uVar19;
      fVar35 = fVar35 * (float)((ulong)uVar19 >> 0x20);
      auVar23._0_8_ = CONCAT44(auVar75._4_4_ * fVar35,auVar75._0_4_ * fVar26);
      auVar23._8_4_ = auVar75._8_4_ * fVar26;
      auVar89._12_4_ = auVar75._12_4_ * fVar35;
      auVar89._0_12_ = auVar23;
      *(long *)(param_1 + 200) = auVar89._8_8_;
      *(undefined8 *)(param_1 + 0xc0) = auVar23._0_8_;
    }
    auVar63._12_4_ = 0;
    auVar63._0_12_ = auVar23;
    *(ulong *)(param_1 + 200) = (ulong)auVar23._8_4_;
    *(long *)(param_1 + 0xc0) = auVar23._0_8_;
  }
  fVar27 = 0.0;
  fVar36 = 0.0;
  fVar37 = 0.0;
  fVar38 = 0.0;
  auVar20._0_8_ = *(ulong *)(puVar10 + 0x50);
  auVar20._8_8_ = 0;
  auVar76._0_4_ = -auVar85._0_4_;
  auVar76._4_4_ = -auVar85._4_4_;
  auVar76._8_4_ = -auVar85._8_4_;
  auVar77._12_4_ = -auVar85._12_4_;
  auVar77._0_12_ = auVar76;
  plVar16 = *(long **)(param_1 + 0x70);
  fVar26 = auVar63._0_4_;
  fVar35 = auVar63._4_4_;
  fVar70 = auVar63._8_4_;
  fVar47 = auVar63._12_4_;
  uVar56 = auVar20._0_8_;
  uVar57 = auVar20._0_8_;
  if (plVar16 == (long *)0x0) {
    auVar79 = ZEXT816(0);
    fVar62 = 0.0;
    auVar48._12_4_ = 0.0;
    fVar66 = 0.0;
    fVar58 = 0.0;
  }
  else {
    fVar27 = 0.0;
    fVar36 = 0.0;
    fVar37 = 0.0;
    fVar38 = 0.0;
    auVar45._8_8_ = _UNK_03889f38;
    auVar45._0_8_ = _DAT_03889f30;
    auVar48 = ZEXT816(0);
    plVar17 = plVar16;
    auVar32 = ZEXT816(0);
    do {
      auVar44 = NEON_scvtf(*(undefined1 (*) [16])(plVar17[3] + 0x20),4);
      auVar60 = NEON_scvtf(*(undefined1 (*) [16])(plVar17[4] + 0x20),4);
      fVar58 = *(float *)(param_1 + 0x150);
      fVar62 = *(float *)(param_1 + 0x154);
      fVar66 = *(float *)(param_1 + 0x158);
      fVar39 = *(float *)(param_1 + 0x15c);
      auVar63 = NEON_scvtf(*(undefined1 (*) [16])(plVar17[2] + 0x20),4);
      fVar40 = *(float *)(param_1 + 0x130);
      fVar67 = *(float *)(param_1 + 0x134);
      fVar69 = *(float *)(param_1 + 0x138);
      fVar59 = *(float *)(param_1 + 0x13c);
      auVar61._0_4_ = (fVar40 + fVar58 * auVar63._0_4_) - fVar26;
      auVar61._4_4_ = (fVar67 + fVar62 * auVar63._4_4_) - fVar35;
      auVar61._8_4_ = (fVar69 + fVar66 * auVar63._8_4_) - fVar70;
      auVar61._12_4_ = (fVar59 + fVar39 * 0.0) - fVar47;
      auVar63 = NEON_ext(auVar61,auVar61,4,1);
      auVar53._0_4_ = (fVar40 + fVar58 * auVar60._0_4_) - fVar26;
      auVar53._4_4_ = (fVar67 + fVar62 * auVar60._4_4_) - fVar35;
      auVar53._8_4_ = (fVar69 + fVar66 * auVar60._8_4_) - fVar70;
      auVar53._12_4_ = (fVar59 + fVar39 * 0.0) - fVar47;
      auVar60 = NEON_ext(auVar53,auVar53,4,1);
      auVar64._0_4_ = (fVar40 + fVar58 * auVar44._0_4_) - fVar26;
      auVar64._4_4_ = (fVar67 + fVar62 * auVar44._4_4_) - fVar35;
      auVar64._8_4_ = (fVar69 + fVar66 * auVar44._8_4_) - fVar70;
      auVar64._12_4_ = (fVar59 + fVar39 * 0.0) - fVar47;
      auVar44 = NEON_ext(auVar64,auVar64,4,1);
      auVar65._0_4_ = auVar64._0_4_ - auVar53._0_4_;
      auVar65._4_4_ = auVar64._4_4_ - auVar53._4_4_;
      auVar65._8_4_ = auVar64._8_4_ - auVar53._8_4_;
      auVar65._12_4_ = auVar64._12_4_ - auVar53._12_4_;
      auVar75 = NEON_ext(auVar65,auVar65,4,1);
      auVar89 = NEON_ext(auVar64,auVar64,8,1);
      auVar79 = NEON_fmin(auVar85,auVar61,4);
      auVar85 = NEON_ext(auVar61,auVar61,8,1);
      fVar39 = auVar85._0_4_;
      fVar40 = auVar89._0_4_;
      auVar86._4_4_ = fVar40;
      auVar86._0_4_ = fVar39;
      auVar71._0_4_ = auVar64._0_4_ * auVar60._0_4_ - auVar53._0_4_ * auVar44._0_4_;
      auVar71._4_4_ = auVar64._4_4_ * auVar60._4_4_ - auVar53._4_4_ * auVar44._4_4_;
      auVar71._8_4_ = auVar64._8_4_ * auVar53._0_4_ - auVar53._8_4_ * auVar64._0_4_;
      auVar71._12_4_ = auVar64._12_4_ * auVar53._4_4_ - auVar53._12_4_ * auVar64._4_4_;
      auVar44 = NEON_ext(auVar71,auVar71,4,1);
      auVar89 = NEON_fmax(auVar77,auVar61,4);
      auVar86._12_4_ = auVar53._8_4_;
      auVar86._8_4_ = auVar53._8_4_;
      auVar74._0_4_ = auVar61._0_4_ * auVar75._0_4_ - auVar63._0_4_ * auVar65._0_4_;
      auVar74._4_4_ = auVar61._4_4_ * auVar75._4_4_ - auVar63._4_4_ * auVar65._4_4_;
      auVar74._8_4_ = auVar61._8_4_ * auVar65._0_4_ - auVar61._0_4_ * auVar65._8_4_;
      auVar74._12_4_ = auVar61._12_4_ * auVar65._4_4_ - auVar61._4_4_ * auVar65._12_4_;
      fVar81 = auVar53._4_4_ + auVar61._4_4_ + auVar64._4_4_;
      auVar60 = NEON_ext(auVar74,auVar74,4,1);
      auVar3._4_4_ = auVar64._4_4_;
      auVar3._0_4_ = auVar61._4_4_;
      auVar3._8_4_ = auVar53._4_4_;
      auVar3._12_4_ = auVar53._4_4_;
      auVar75 = a64_TBL(ZEXT816(0),auVar3,auVar45);
      auVar85 = a64_TBL(ZEXT816(0),auVar86,auVar45);
      auVar4._4_4_ = auVar64._0_4_;
      auVar4._0_4_ = auVar61._0_4_;
      auVar4._8_4_ = auVar53._0_4_;
      auVar4._12_4_ = auVar53._0_4_;
      auVar63 = a64_TBL(ZEXT816(0),auVar4,auVar45);
      fVar73 = auVar53._8_4_ + fVar39 + fVar40;
      auVar78._0_4_ = auVar61._4_4_ * (auVar61._4_4_ + auVar75._0_4_);
      auVar78._4_4_ = auVar64._4_4_ * (auVar64._4_4_ + auVar75._4_4_);
      auVar78._8_4_ = auVar53._4_4_ * (auVar53._4_4_ + auVar75._8_4_);
      auVar78._12_4_ = auVar53._4_4_ * (auVar53._4_4_ + auVar75._12_4_);
      auVar87._0_4_ = fVar39 * (fVar39 + auVar85._0_4_);
      auVar87._4_4_ = fVar40 * (fVar40 + auVar85._4_4_);
      auVar87._8_4_ = auVar53._8_4_ * (auVar53._8_4_ + auVar85._8_4_);
      auVar87._12_4_ = auVar53._8_4_ * (auVar53._8_4_ + auVar85._12_4_);
      fVar66 = auVar44._0_4_ + auVar60._0_4_;
      fVar68 = auVar44._4_4_ + auVar60._4_4_;
      auVar72._0_4_ = auVar61._0_4_ * (auVar61._0_4_ + auVar63._0_4_);
      auVar72._4_4_ = auVar64._0_4_ * (auVar64._0_4_ + auVar63._4_4_);
      auVar72._8_4_ = auVar53._0_4_ * (auVar53._0_4_ + auVar63._8_4_);
      auVar72._12_4_ = auVar53._0_4_ * (auVar53._0_4_ + auVar63._12_4_);
      fVar58 = auVar61._0_4_ * auVar44._0_4_;
      fVar62 = auVar61._4_4_ * auVar44._4_4_;
      auVar44 = NEON_ext(auVar72,auVar72,8,1);
      auVar63 = NEON_ext(auVar78,auVar78,8,1);
      auVar75 = NEON_ext(auVar87,auVar87,8,1);
      fVar88 = auVar53._0_4_ + auVar61._0_4_ + auVar64._0_4_;
      fVar66 = fVar66 * fVar66;
      fVar68 = fVar68 * fVar68;
      fVar69 = (auVar71._0_4_ + auVar74._0_4_) * (auVar71._0_4_ + auVar74._0_4_);
      auVar85 = NEON_fmin(auVar79,auVar64,4);
      auVar60 = NEON_fmax(auVar89,auVar64,4);
      fVar59 = fVar58 + fVar62 + auVar61._8_4_ * auVar71._0_4_;
      fVar62 = fVar58 + fVar62 + auVar61._8_4_ * auVar71._0_4_;
      auVar85 = NEON_fmin(auVar85,auVar53,4);
      auVar84 = auVar85._0_12_;
      uVar56 = CONCAT44((float)(uVar56 >> 0x20) + fVar62,(float)uVar56 + fVar59);
      fVar67 = fVar66 + fVar68 + fVar69;
      fVar69 = fVar66 + fVar68 + fVar69;
      uVar29 = CONCAT44(fVar69,fVar67);
      uVar19 = NEON_frsqrte(uVar29,4);
      fVar68 = (float)uVar19;
      fVar80 = (float)((ulong)uVar19 >> 0x20);
      uVar19 = NEON_frsqrts(uVar29,CONCAT44(fVar80 * fVar80,fVar68 * fVar68),4);
      iVar82 = -(uint)(fVar67 <= 0.0);
      iVar83 = -(uint)(fVar69 <= 0.0);
      fVar68 = fVar68 * (float)uVar19;
      fVar80 = fVar80 * (float)((ulong)uVar19 >> 0x20);
      fVar66 = auVar48._0_4_ + fVar59 * (auVar72._0_4_ + auVar72._4_4_ + auVar44._0_4_);
      fVar58 = auVar48._4_4_ + fVar59 * (auVar78._0_4_ + auVar78._4_4_ + auVar63._0_4_);
      auVar79._0_4_ =
           auVar32._0_4_ +
           fVar59 * (auVar53._4_4_ * auVar53._8_4_ + auVar61._4_4_ * fVar39 + auVar64._4_4_ * fVar40
                    + fVar81 * fVar73);
      fVar27 = fVar27 + (auVar61._0_4_ + auVar64._0_4_ + auVar53._0_4_) * fVar59;
      fVar36 = fVar36 + (auVar61._4_4_ + auVar64._4_4_ + auVar53._4_4_) * fVar62;
      fVar37 = fVar37 + (auVar61._8_4_ + auVar64._8_4_ + auVar53._8_4_) * fVar59;
      fVar38 = fVar38 + (auVar61._12_4_ + auVar64._12_4_ + auVar53._12_4_) * fVar62;
      auVar44 = NEON_ext(auVar48,auVar48,8,1);
      plVar17 = (long *)*plVar17;
      uVar19 = NEON_frsqrts(uVar29,CONCAT44(fVar80 * fVar80,fVar68 * fVar68),4);
      fVar62 = auVar44._0_4_ + fVar59 * (auVar87._0_4_ + auVar87._4_4_ + auVar75._0_4_);
      auVar79._4_4_ =
           auVar32._4_4_ +
           fVar59 * (auVar53._8_4_ * auVar53._0_4_ + fVar39 * auVar61._0_4_ + fVar40 * auVar64._0_4_
                    + fVar73 * fVar88);
      auVar44 = NEON_ext(auVar32,auVar32,8,1);
      auVar77 = NEON_fmax(auVar60,auVar53,4);
      auVar76 = auVar77._0_12_;
      auVar79._8_4_ =
           auVar44._0_4_ +
           fVar59 * (fVar81 * fVar88 +
                    auVar53._0_4_ * auVar53._4_4_ +
                    auVar61._0_4_ * auVar61._4_4_ + auVar64._0_4_ * auVar64._4_4_);
      fVar67 = (float)uVar19 * fVar68 * fVar67;
      fVar69 = (float)((ulong)uVar19 >> 0x20) * fVar80 * fVar69;
      auVar79._12_4_ = auVar32._12_4_;
      fVar39 = (float)CONCAT13((byte)((uint)fVar67 >> 0x18) & ~(byte)((uint)iVar82 >> 0x18),
                               CONCAT12((byte)((uint)fVar67 >> 0x10) & ~(byte)((uint)iVar82 >> 0x10)
                                        ,CONCAT11((byte)((uint)fVar67 >> 8) &
                                                  ~(byte)((uint)iVar82 >> 8),
                                                  SUB41(fVar67,0) & ~(byte)iVar82)));
      uVar57 = CONCAT44((float)(uVar57 >> 0x20) +
                        (float)(CONCAT17((byte)((uint)fVar69 >> 0x18) &
                                         ~(byte)((uint)iVar83 >> 0x18),
                                         CONCAT16((byte)((uint)fVar69 >> 0x10) &
                                                  ~(byte)((uint)iVar83 >> 0x10),
                                                  CONCAT15((byte)((uint)fVar69 >> 8) &
                                                           ~(byte)((uint)iVar83 >> 8),
                                                           CONCAT14(SUB41(fVar69,0) & ~(byte)iVar83,
                                                                    fVar39)))) >> 0x20),
                        (float)uVar57 + fVar39);
      auVar48._8_4_ = fVar62;
      auVar48._4_4_ = fVar58;
      auVar48._0_4_ = fVar66;
      auVar32 = auVar79;
    } while (plVar17 != (long *)0x0);
  }
  uVar19 = NEON_frecpe(uVar56,4);
  uVar29 = NEON_frecps(uVar56,uVar19,4);
  fVar39 = (float)uVar19 * (float)uVar29;
  fVar67 = (float)((ulong)uVar19 >> 0x20) * (float)((ulong)uVar29 >> 0x20);
  uVar19 = NEON_frecps(uVar56,CONCAT44(fVar67,fVar39),4);
  fVar39 = fVar39 * (float)uVar19;
  fVar67 = fVar67 * (float)((ulong)uVar19 >> 0x20);
  fVar40 = fVar39 * (float)*(undefined8 *)(puVar10 + 0x170);
  fVar69 = fVar67 * (float)((ulong)*(undefined8 *)(puVar10 + 0x170) >> 0x20);
  fVar27 = fVar27 * fVar40;
  fVar36 = fVar36 * fVar69;
  auVar30._0_8_ = CONCAT44(fVar36,fVar27);
  auVar30._8_4_ = fVar37 * fVar40;
  auVar30._12_4_ = fVar38 * fVar69;
  uStack_118 = auVar30._8_8_;
  fVar26 = fVar26 + fVar27;
  fVar35 = fVar35 + fVar36;
  fVar70 = fVar70 + auVar30._8_4_;
  *(float *)(param_1 + 0x198) = fVar70;
  *(float *)(param_1 + 0x19c) = fVar47 + auVar30._12_4_;
  *(float *)(param_1 + 400) = fVar26;
  *(float *)(param_1 + 0x194) = fVar35;
  puVar11 = PTR_DAT_04372588;
  local_390 = auVar79._0_4_;
  fStack_38c = auVar79._4_4_;
  fStack_388 = auVar79._8_4_;
  fStack_384 = auVar79._12_4_;
  local_120 = auVar30._0_8_;
  if (*(char *)(param_1 + 0xd) == '\0') goto LAB_001c3050;
  local_b0 = auVar20._0_8_;
  if (plVar16 != (long *)0x0) {
    auVar85 = *(undefined1 (*) [16])(param_1 + 0x150);
    auVar32 = *(undefined1 (*) [16])(param_1 + 0x130);
    do {
      auVar44 = NEON_scvtf(*(undefined1 (*) [16])(plVar16[2] + 0x20),4);
      auVar60 = NEON_scvtf(*(undefined1 (*) [16])(plVar16[3] + 0x20),4);
      auVar63 = NEON_scvtf(*(undefined1 (*) [16])(plVar16[4] + 0x20),4);
      fVar47 = auVar85._0_4_;
      fVar27 = auVar85._4_4_;
      fVar36 = auVar85._8_4_;
      fVar37 = auVar85._12_4_;
      fVar38 = auVar32._0_4_;
      fVar68 = fVar38 + fVar47 * auVar44._0_4_;
      fVar40 = auVar32._4_4_;
      fVar73 = fVar40 + fVar27 * auVar44._4_4_;
      fVar69 = auVar32._8_4_;
      fVar80 = fVar69 + fVar36 * auVar44._8_4_;
      fVar59 = auVar32._12_4_;
      fVar81 = fVar59 + fVar37 * 0.0;
      auVar49._0_4_ = (fVar38 + fVar47 * auVar60._0_4_) - fVar68;
      auVar49._4_4_ = (fVar40 + fVar27 * auVar60._4_4_) - fVar73;
      auVar49._8_4_ = (fVar69 + fVar36 * auVar60._8_4_) - fVar80;
      auVar49._12_4_ = (fVar59 + fVar37 * 0.0) - fVar81;
      auVar44 = NEON_ext(auVar49,auVar49,4,1);
      auVar52._0_4_ = (fVar38 + fVar47 * auVar63._0_4_) - fVar68;
      auVar52._4_4_ = (fVar40 + fVar27 * auVar63._4_4_) - fVar73;
      auVar52._8_4_ = (fVar69 + fVar36 * auVar63._8_4_) - fVar80;
      auVar52._12_4_ = (fVar59 + fVar37 * 0.0) - fVar81;
      auVar60 = NEON_ext(auVar52,auVar52,4,1);
      fVar47 = auVar49._0_4_ * auVar60._0_4_ - auVar52._0_4_ * auVar44._0_4_;
      fVar37 = auVar49._4_4_ * auVar60._4_4_ - auVar52._4_4_ * auVar44._4_4_;
      auVar50._0_8_ = CONCAT44(fVar37,fVar47);
      auVar50._8_4_ = auVar49._8_4_ * auVar52._0_4_ - auVar52._8_4_ * auVar49._0_4_;
      auVar50._12_4_ = auVar49._12_4_ * auVar52._4_4_ - auVar52._12_4_ * auVar49._4_4_;
      auVar44 = NEON_ext(auVar50,auVar50,4,1);
      fVar69 = auVar44._0_4_;
      fVar59 = auVar44._4_4_;
      auVar55._0_8_ = auVar44._0_8_;
      auVar55._8_8_ = auVar50._0_8_;
      fVar27 = fVar69 * fVar69 + fVar59 * fVar59 + fVar47 * fVar47;
      fVar38 = fVar69 * fVar69 + fVar59 * fVar59 + fVar47 * fVar47;
      uVar19 = CONCAT44(fVar38,fVar27);
      uVar29 = NEON_frsqrte(uVar19,4);
      fVar36 = (float)uVar29;
      fVar40 = (float)((ulong)uVar29 >> 0x20);
      uVar29 = NEON_frsqrts(uVar19,CONCAT44(fVar40 * fVar40,fVar36 * fVar36),4);
      fVar36 = fVar36 * (float)uVar29;
      fVar40 = fVar40 * (float)((ulong)uVar29 >> 0x20);
      auVar54._0_8_ = CONCAT44(-(uint)(0.0 < fVar38),-(uint)(0.0 < fVar27));
      iVar82 = -(uint)(fVar27 <= 0.0);
      iVar83 = -(uint)(fVar38 <= 0.0);
      uVar19 = NEON_frsqrts(uVar19,CONCAT44(fVar40 * fVar40,fVar36 * fVar36),4);
      auVar54._8_8_ = auVar54._0_8_;
      fVar36 = (float)uVar19 * fVar36;
      fVar40 = (float)((ulong)uVar19 >> 0x20) * fVar40;
      fVar27 = (float)CONCAT13((byte)((uint)fVar36 >> 0x18) & ~(byte)((uint)iVar82 >> 0x18),
                               CONCAT12((byte)((uint)fVar36 >> 0x10) & ~(byte)((uint)iVar82 >> 0x10)
                                        ,CONCAT11((byte)((uint)fVar36 >> 8) &
                                                  ~(byte)((uint)iVar82 >> 8),
                                                  SUB41(fVar36,0) & ~(byte)iVar82)));
      auVar51._0_4_ = fVar69 * fVar27;
      fVar36 = (float)(CONCAT17((byte)((uint)fVar40 >> 0x18) & ~(byte)((uint)iVar83 >> 0x18),
                                CONCAT16((byte)((uint)fVar40 >> 0x10) &
                                         ~(byte)((uint)iVar83 >> 0x10),
                                         CONCAT15((byte)((uint)fVar40 >> 8) &
                                                  ~(byte)((uint)iVar83 >> 8),
                                                  CONCAT14(SUB41(fVar40,0) & ~(byte)iVar83,fVar27)))
                               ) >> 0x20);
      auVar51._4_4_ = fVar59 * fVar36;
      auVar51._8_4_ = fVar47 * fVar27;
      auVar51._12_4_ = fVar37 * fVar36;
      auVar55 = auVar55 ^ (auVar55 ^ auVar51) & auVar54;
      auVar46._0_4_ = fVar68 * auVar55._0_4_;
      auVar46._4_4_ = fVar73 * auVar55._4_4_;
      auVar46._8_4_ = fVar80 * auVar55._8_4_;
      auVar46._12_4_ = fVar81 * auVar55._12_4_;
      auVar44 = NEON_ext(auVar46,auVar46,8,1);
      fVar47 = -(auVar46._0_4_ + auVar46._4_4_ + auVar44._0_4_);
      fVar27 = fVar26 * auVar55._0_4_;
      fVar36 = fVar35 * auVar55._4_4_;
      fVar37 = fVar70 * auVar55._8_4_;
      auVar20._0_8_ =
           NEON_fmax(auVar20._0_8_,
                     CONCAT44(fVar47 + fVar27 + fVar36 + fVar37,fVar47 + fVar27 + fVar36 + fVar37),4
                    );
      plVar16 = (long *)*plVar16;
      local_b0 = auVar20._0_8_;
    } while (plVar16 != (long *)0x0);
  }
  if (0.0 < auVar20._0_4_) {
    if ((3 < (byte)PTR_DAT_04372588[0x50]) || (uVar13 = FUN_03327170(), (uVar13 & 1) != 0)) {
      uVar13 = FUN_03327170();
      if ((uVar13 & 1) == 0) {
        FUN_03326994(&local_360,PTR_DAT_04372588,4);
        lVar14 = FUN_03326338(&local_360,"Invalid COM wrt. triangles ({})",PTR_DAT_04372590,
                              &local_b0);
        *(char **)(lVar14 + 0x38) =
             "../..\\Common/Internal/GeometryProcessing/ConvexHull/hkgpConvexHullInternals.h";
        *(undefined8 *)(lVar14 + 0x40) = 0x7e6;
        FUN_033269dc(&local_360);
      }
      else {
        FUN_03326a7c(&local_360,PTR_DAT_04372588,4);
        lVar14 = FUN_03326338(&local_360,"Invalid COM wrt. triangles ({})",PTR_DAT_04372590,
                              &local_b0);
        *(char **)(lVar14 + 0x38) =
             "../..\\Common/Internal/GeometryProcessing/ConvexHull/hkgpConvexHullInternals.h";
        *(undefined8 *)(lVar14 + 0x40) = 0x7e6;
        FUN_03326adc(&local_360);
      }
    }
    *(undefined1 *)(param_1 + 0x1fd) = 1;
  }
  if (*(char *)(param_1 + 0x1fe) == '\0') {
LAB_001c2fd0:
    fVar26 = (float)local_b0;
  }
  else {
    local_b0 = 0;
    if (*(int *)(param_1 + 0x98) < 1) goto LAB_001c2fd0;
    local_b0 = 0;
    lVar14 = 0;
    do {
      pfVar2 = (float *)(*(long *)(param_1 + 0x90) + lVar14 * 0x10);
      lVar14 = lVar14 + 1;
      local_b0 = NEON_fmax(local_b0,CONCAT44(pfVar2[3] +
                                             fVar26 * *pfVar2 + fVar35 * pfVar2[1] +
                                             fVar70 * pfVar2[2],
                                             pfVar2[3] +
                                             fVar26 * *pfVar2 + fVar35 * pfVar2[1] +
                                             fVar70 * pfVar2[2]),4);
    } while (lVar14 < *(int *)(param_1 + 0x98));
    fVar26 = (float)local_b0;
  }
  if (0.0 < fVar26) {
    if ((3 < (byte)puVar11[0x50]) || (uVar13 = FUN_03327170(), (uVar13 & 1) != 0)) {
      uVar13 = FUN_03327170();
      if ((uVar13 & 1) == 0) {
        FUN_03326994(&local_360,PTR_DAT_04372588,4);
        lVar14 = FUN_03326338(&local_360,"Invalid COM wrt. planes ({})",PTR_DAT_04372590,&local_b0);
        *(char **)(lVar14 + 0x38) =
             "../..\\Common/Internal/GeometryProcessing/ConvexHull/hkgpConvexHullInternals.h";
        *(undefined8 *)(lVar14 + 0x40) = 0x7f4;
        FUN_033269dc(&local_360);
      }
      else {
        FUN_03326a7c(&local_360,PTR_DAT_04372588,4);
        lVar14 = FUN_03326338(&local_360,"Invalid COM wrt. planes ({})",PTR_DAT_04372590,&local_b0);
        *(char **)(lVar14 + 0x38) =
             "../..\\Common/Internal/GeometryProcessing/ConvexHull/hkgpConvexHullInternals.h";
        *(undefined8 *)(lVar14 + 0x40) = 0x7f4;
        FUN_03326adc(&local_360);
      }
    }
    *(undefined1 *)(param_1 + 0x1fd) = 1;
  }
LAB_001c3050:
  *(ulong *)(param_1 + 0x1e8) =
       CONCAT44((float)(uVar57 >> 0x20) * (float)((ulong)*(undefined8 *)(puVar10 + 0x150) >> 0x20),
                (float)uVar57 * (float)*(undefined8 *)(puVar10 + 0x150));
  uVar19 = CONCAT44(auVar76._4_4_ - auVar84._4_4_,auVar76._0_4_ - auVar84._0_4_);
  fVar26 = auVar76._8_4_ - auVar84._8_4_;
  uVar19 = NEON_fmaxp(uVar19,uVar19,4);
  uVar19 = NEON_fmax(CONCAT44(fVar26,fVar26),uVar19,4);
  fVar47 = (float)*(undefined8 *)(puVar10 + 400);
  fVar35 = (float)uVar56 * fVar47;
  fVar26 = (float)uVar19;
  *(ulong *)(param_1 + 0x1e0) =
       CONCAT44((float)(uVar56 >> 0x20) * (float)((ulong)*(undefined8 *)(puVar10 + 400) >> 0x20),
                fVar35);
  puVar11 = PTR_DAT_043723a0;
  uVar19 = *(undefined8 *)(puVar10 + 0x260);
  fVar70 = fVar26 * fVar26 * fVar26;
  if (fVar70 * (float)uVar19 < fVar35) {
    auVar31._8_8_ = _UNK_038897b8;
    auVar31._0_8_ = _DAT_038897b0;
    auVar43._8_8_ = _UNK_03889f48;
    auVar43._0_8_ = _DAT_03889f40;
    auVar21._0_4_ = fVar66 * fVar39 * 0.1;
    auVar21._4_4_ = fVar58 * fVar67 * 0.1;
    auVar21._8_4_ = fVar62 * fVar39 * 0.1;
    auVar21._12_4_ = auVar48._12_4_ * fVar67 * 0.1;
    auVar32 = a64_TBL(ZEXT816(0),auVar21,auVar31);
    auVar85 = a64_TBL(ZEXT816(0),auVar21,auVar43);
    auVar33._0_4_ = auVar32._0_4_ + auVar85._0_4_;
    auVar33._4_4_ = auVar32._4_4_ + auVar85._4_4_;
    auVar33._8_4_ = auVar32._8_4_ + auVar85._8_4_;
    auVar22._0_4_ = local_390 * fVar39 * -0.05;
    auVar22._4_4_ = fStack_38c * fVar67 * -0.05;
    auVar22._8_4_ = fStack_388 * fVar39 * -0.05;
    auVar22._12_4_ = fStack_384 * fVar67 * -0.05;
    auVar33._12_4_ = 0;
    auVar60 = a64_TBL(ZEXT816(0),auVar22,auVar43);
    auVar60 = auVar60 ^ (auVar60 ^ auVar33) & *(undefined1 (*) [16])(PTR_DAT_043723a0 + 0x90);
    auVar24._8_8_ = _UNK_03888fb8;
    auVar24._0_8_ = _DAT_03888fb0;
    auVar44 = a64_TBL(ZEXT816(0),auVar22,auVar24);
    auVar32 = NEON_ext(auVar22,auVar22,8,1);
    auVar32 = auVar32 ^ (auVar32 ^ auVar33) & *(undefined1 (*) [16])(PTR_DAT_043723a0 + 0xa0);
    auVar44 = auVar44 ^ (auVar44 ^ auVar33) & *(undefined1 (*) [16])(PTR_DAT_043723a0 + 0xc0);
    auVar85 = *(undefined1 (*) [16])(puVar10 + 0x60);
    local_158 = 0;
    local_160 = 0;
    FUN_032c920c(&local_360,&local_120);
    FUN_032c920c(&local_b0,&local_160);
    FUN_032c9038(&local_e0,&local_360,&local_360);
    FUN_032c9038(&local_110,&local_b0,&local_b0);
    FUN_032c925c(&local_110);
    auVar63 = NEON_ext(auVar85,auVar85,8,1);
    auVar63 = NEON_ext(auVar63,auVar85,8,1);
    fVar27 = auVar63._0_4_;
    fVar36 = auVar63._4_4_;
    fVar37 = auVar63._8_4_;
    fVar38 = auVar63._12_4_;
    local_3a0 = auVar60._0_4_;
    fStack_39c = auVar60._4_4_;
    fStack_398 = auVar60._8_4_;
    fStack_394 = auVar60._12_4_;
    local_150 = fVar27 * ((float)local_e0 - local_110) + local_3a0;
    fStack_14c = fVar36 * (local_e0._4_4_ - fStack_10c) + fStack_39c;
    fStack_148 = fVar37 * ((float)uStack_d8 - fStack_108) + fStack_398;
    fStack_144 = fVar38 * (uStack_d8._4_4_ - fStack_104) + fStack_394;
    local_3b0 = auVar32._0_4_;
    fStack_3ac = auVar32._4_4_;
    fStack_3a8 = auVar32._8_4_;
    fStack_3a4 = auVar32._12_4_;
    auVar34._0_8_ =
         CONCAT44(fVar36 * (fStack_cc - fStack_fc) + fStack_3ac,
                  fVar27 * (fStack_d0 - fStack_100) + local_3b0);
    auVar34._8_4_ = fVar37 * (fStack_c8 - fStack_f8) + fStack_3a8;
    auVar34._12_4_ = fVar38 * (fStack_c4 - fStack_f4) + fStack_3a4;
    uStack_138 = auVar34._8_8_;
    local_3c0 = auVar44._0_4_;
    fStack_3bc = auVar44._4_4_;
    fStack_3b8 = auVar44._8_4_;
    fStack_3b4 = auVar44._12_4_;
    local_130 = fVar27 * (local_c0 - local_f0) + local_3c0;
    fStack_12c = fVar36 * (fStack_bc - fStack_ec) + fStack_3bc;
    fStack_128 = fVar37 * (fStack_b8 - fStack_e8) + fStack_3b8;
    fStack_124 = fVar38 * (fStack_b4 - fStack_e4) + fStack_3b4;
    local_140 = auVar34._0_8_;
    iVar82 = FUN_032c93dc(&local_150,&local_b0,&local_e0,0x80);
    if (iVar82 < 0) {
      *(undefined1 *)(param_1 + 0x1fd) = 1;
      local_b0 = *(ulong *)(puVar10 + 0x200);
      uStack_a8 = *(undefined8 *)(puVar10 + 0x208);
      uStack_98 = SUB168(*(undefined1 (*) [16])(puVar10 + 0x210),8);
      local_a0 = SUB168(*(undefined1 (*) [16])(puVar10 + 0x210),0);
      local_90 = *(undefined8 *)(puVar10 + 0x220);
      uStack_88 = *(undefined8 *)(puVar10 + 0x228);
      local_e0 = auVar85._0_8_;
      uStack_d8 = auVar85._8_8_;
      FUN_0331fefc(&local_110,&local_360,0x200);
      uVar29 = FUN_0332448c(&local_110,"Failed to diagonalize inertia matrix (");
      uVar29 = FUN_033245a4(uVar29,*(undefined4 *)(param_1 + 0x1f8));
      FUN_0332448c(uVar29,&DAT_039a0269);
      FUN_03320af0(0x45465,&local_360,
                   "../..\\Common/Internal/GeometryProcessing/ConvexHull/hkgpConvexHullInternals.h",
                   0x82d);
      FUN_0331ff7c(&local_110);
    }
    FUN_032c925c(&local_b0);
    FUN_032ca244(&local_b0);
    *(ulong *)(param_1 + 0x1b8) = CONCAT44(fStack_144,fStack_148);
    *(ulong *)(param_1 + 0x1b0) = CONCAT44(fStack_14c,local_150);
    *(undefined8 *)(param_1 + 0x1c8) = uStack_138;
    *(undefined8 *)(param_1 + 0x1c0) = local_140;
    auVar8._8_4_ = fStack_128;
    auVar8._0_8_ = CONCAT44(fStack_12c,local_130);
    auVar8._12_4_ = fStack_124;
    *(long *)(param_1 + 0x1d8) = auVar8._8_8_;
    *(ulong *)(param_1 + 0x1d0) = CONCAT44(fStack_12c,local_130);
    FUN_032c92f0(&local_150,&local_b0);
    auVar25._4_4_ = fStack_14c;
    auVar25._0_4_ = local_150;
    auVar25._8_4_ = fStack_148;
    auVar25._12_4_ = fStack_144;
    auVar7._8_8_ = uStack_138;
    auVar7._0_8_ = local_140;
    auVar9._4_4_ = fStack_12c;
    auVar9._0_4_ = local_130;
    auVar9._8_4_ = fStack_128;
    auVar9._12_4_ = fStack_124;
    auVar25 = auVar25 ^ (auVar25 ^ auVar7) & *(undefined1 (*) [16])(puVar11 + 0x20);
    auVar25 = auVar25 ^ (auVar25 ^ auVar9) & *(undefined1 (*) [16])(puVar11 + 0x40);
    *(long *)(param_1 + 0x1a8) = auVar25._8_8_;
    *(long *)(param_1 + 0x1a0) = auVar25._0_8_;
    FUN_032c925c(&local_b0);
    *(undefined8 *)(param_1 + 0x168) = uStack_a8;
    *(ulong *)(param_1 + 0x160) = local_b0;
    *(undefined8 *)(param_1 + 0x178) = uStack_98;
    *(undefined8 *)(param_1 + 0x170) = local_a0;
    *(undefined8 *)(param_1 + 0x188) = uStack_88;
    *(undefined8 *)(param_1 + 0x180) = local_90;
    uVar29 = NEON_fminp(CONCAT44(ABS(auVar33._4_4_),ABS(auVar33._0_4_)),
                        CONCAT44(ABS(auVar33._4_4_),ABS(auVar33._0_4_)),4);
    uVar29 = NEON_fmin(CONCAT44(ABS(auVar33._8_4_),ABS(auVar33._8_4_)),uVar29,4);
    if (fVar35 * (float)uVar29 <= fVar70 * fVar47 * fVar26 * fVar26 * (float)uVar19) {
      *(undefined1 *)(param_1 + 0x1fd) = 1;
    }
  }
  else {
    uVar19 = *(undefined8 *)(puVar10 + 0x200);
    uVar29 = *(undefined8 *)(puVar10 + 0x210);
    uVar41 = *(undefined8 *)(puVar10 + 0x218);
    *(undefined8 *)(param_1 + 0x168) = *(undefined8 *)(puVar10 + 0x208);
    *(undefined8 *)(param_1 + 0x160) = uVar19;
    uVar19 = *(undefined8 *)(puVar10 + 0x220);
    uVar42 = *(undefined8 *)(puVar10 + 0x228);
    *(undefined1 *)(param_1 + 0x1fd) = 1;
    *(undefined8 *)(param_1 + 0x1a0) = 0;
    *(undefined8 *)(param_1 + 0x1a8) = 0;
    *(undefined8 *)(param_1 + 0x1e0) = 0;
    *(undefined8 *)(param_1 + 0x1b0) = 0;
    *(undefined8 *)(param_1 + 0x1b8) = 0;
    *(undefined8 *)(param_1 + 0x1c0) = 0;
    *(undefined8 *)(param_1 + 0x1c8) = 0;
    *(undefined8 *)(param_1 + 0x1d0) = 0;
    *(undefined8 *)(param_1 + 0x1d8) = 0;
    *(undefined8 *)(param_1 + 0x178) = uVar41;
    *(undefined8 *)(param_1 + 0x170) = uVar29;
    *(undefined8 *)(param_1 + 0x188) = uVar42;
    *(undefined8 *)(param_1 + 0x180) = uVar19;
  }
  *(undefined1 *)(param_1 + 0x1fc) = 1;
  return 0;
}


