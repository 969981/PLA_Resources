/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03290038; name: FUN_03290038
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_03290038(long *param_1,float *param_2)

{
  float *pfVar1;
  float *pfVar2;
  undefined8 *puVar3;
  int iVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined *puVar31;
  long lVar32;
  long lVar33;
  float *pfVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  undefined4 uVar40;
  float fVar41;
  undefined4 uVar42;
  undefined8 uVar43;
  float fVar44;
  float fVar45;
  undefined4 uVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  undefined4 uVar52;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined8 uVar66;
  undefined8 uVar67;
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  
  iVar4 = (int)param_1[1];
  if (iVar4 < 1) {
    return 0x80040200;
  }
  pfVar34 = (float *)*param_1;
  fVar44 = (float)*(undefined8 *)(pfVar34 + 6);
  fVar38 = (float)*(undefined8 *)(pfVar34 + 4);
  fVar41 = (float)((ulong)*(undefined8 *)(pfVar34 + 4) >> 0x20);
  fVar39 = pfVar34[1];
  fVar35 = ((float)*(undefined8 *)(pfVar34 + 0x20) +
           (float)*(undefined8 *)(pfVar34 + 0x1c) * fVar44 +
           (float)*(undefined8 *)(pfVar34 + 0x14) * fVar38 +
           (float)*(undefined8 *)(pfVar34 + 0x18) * fVar41) * fVar39 + 0.0;
  fVar36 = ((float)((ulong)*(undefined8 *)(pfVar34 + 0x20) >> 0x20) +
           (float)((ulong)*(undefined8 *)(pfVar34 + 0x1c) >> 0x20) * fVar44 +
           (float)((ulong)*(undefined8 *)(pfVar34 + 0x14) >> 0x20) * fVar38 +
           (float)((ulong)*(undefined8 *)(pfVar34 + 0x18) >> 0x20) * fVar41) * fVar39 + 0.0;
  fVar37 = ((float)*(undefined8 *)(pfVar34 + 0x22) +
           (float)*(undefined8 *)(pfVar34 + 0x1e) * fVar44 +
           (float)*(undefined8 *)(pfVar34 + 0x16) * fVar38 +
           (float)*(undefined8 *)(pfVar34 + 0x1a) * fVar41) * fVar39 + 0.0;
  fVar38 = ((float)((ulong)*(undefined8 *)(pfVar34 + 0x22) >> 0x20) +
           (float)((ulong)*(undefined8 *)(pfVar34 + 0x1e) >> 0x20) * fVar44 +
           (float)((ulong)*(undefined8 *)(pfVar34 + 0x16) >> 0x20) * fVar38 +
           (float)((ulong)*(undefined8 *)(pfVar34 + 0x1a) >> 0x20) * fVar41) * fVar39 + 0.0;
  fVar39 = fVar39 + 0.0;
  fVar41 = *pfVar34 + 0.0;
  if (iVar4 != 1) {
    fVar48 = (float)*(undefined8 *)(pfVar34 + 0x2a);
    fVar45 = (float)*(undefined8 *)(pfVar34 + 0x28);
    fVar47 = (float)((ulong)*(undefined8 *)(pfVar34 + 0x28) >> 0x20);
    fVar44 = pfVar34[0x25];
    fVar39 = fVar39 + fVar44;
    fVar41 = fVar41 + pfVar34[0x24];
    fVar35 = fVar35 + ((float)*(undefined8 *)(pfVar34 + 0x44) +
                      (float)*(undefined8 *)(pfVar34 + 0x40) * fVar48 +
                      (float)*(undefined8 *)(pfVar34 + 0x38) * fVar45 +
                      (float)*(undefined8 *)(pfVar34 + 0x3c) * fVar47) * fVar44;
    fVar36 = fVar36 + ((float)((ulong)*(undefined8 *)(pfVar34 + 0x44) >> 0x20) +
                      (float)((ulong)*(undefined8 *)(pfVar34 + 0x40) >> 0x20) * fVar48 +
                      (float)((ulong)*(undefined8 *)(pfVar34 + 0x38) >> 0x20) * fVar45 +
                      (float)((ulong)*(undefined8 *)(pfVar34 + 0x3c) >> 0x20) * fVar47) * fVar44;
    fVar37 = fVar37 + ((float)*(undefined8 *)(pfVar34 + 0x46) +
                      (float)*(undefined8 *)(pfVar34 + 0x42) * fVar48 +
                      (float)*(undefined8 *)(pfVar34 + 0x3a) * fVar45 +
                      (float)*(undefined8 *)(pfVar34 + 0x3e) * fVar47) * fVar44;
    fVar38 = fVar38 + ((float)((ulong)*(undefined8 *)(pfVar34 + 0x46) >> 0x20) +
                      (float)((ulong)*(undefined8 *)(pfVar34 + 0x42) >> 0x20) * fVar48 +
                      (float)((ulong)*(undefined8 *)(pfVar34 + 0x3a) >> 0x20) * fVar45 +
                      (float)((ulong)*(undefined8 *)(pfVar34 + 0x3e) >> 0x20) * fVar47) * fVar44;
    if (iVar4 != 2) {
      fVar48 = (float)*(undefined8 *)(pfVar34 + 0x4e);
      fVar45 = (float)*(undefined8 *)(pfVar34 + 0x4c);
      fVar47 = (float)((ulong)*(undefined8 *)(pfVar34 + 0x4c) >> 0x20);
      fVar44 = pfVar34[0x49];
      fVar39 = fVar39 + fVar44;
      fVar35 = fVar35 + ((float)*(undefined8 *)(pfVar34 + 0x68) +
                        (float)*(undefined8 *)(pfVar34 + 100) * fVar48 +
                        (float)*(undefined8 *)(pfVar34 + 0x5c) * fVar45 +
                        (float)*(undefined8 *)(pfVar34 + 0x60) * fVar47) * fVar44;
      fVar36 = fVar36 + ((float)((ulong)*(undefined8 *)(pfVar34 + 0x68) >> 0x20) +
                        (float)((ulong)*(undefined8 *)(pfVar34 + 100) >> 0x20) * fVar48 +
                        (float)((ulong)*(undefined8 *)(pfVar34 + 0x5c) >> 0x20) * fVar45 +
                        (float)((ulong)*(undefined8 *)(pfVar34 + 0x60) >> 0x20) * fVar47) * fVar44;
      fVar37 = fVar37 + ((float)*(undefined8 *)(pfVar34 + 0x6a) +
                        (float)*(undefined8 *)(pfVar34 + 0x66) * fVar48 +
                        (float)*(undefined8 *)(pfVar34 + 0x5e) * fVar45 +
                        (float)*(undefined8 *)(pfVar34 + 0x62) * fVar47) * fVar44;
      fVar38 = fVar38 + ((float)((ulong)*(undefined8 *)(pfVar34 + 0x6a) >> 0x20) +
                        (float)((ulong)*(undefined8 *)(pfVar34 + 0x66) >> 0x20) * fVar48 +
                        (float)((ulong)*(undefined8 *)(pfVar34 + 0x5e) >> 0x20) * fVar45 +
                        (float)((ulong)*(undefined8 *)(pfVar34 + 0x62) >> 0x20) * fVar47) * fVar44;
      fVar41 = fVar41 + pfVar34[0x48];
      fVar44 = fVar39;
      if (iVar4 != 3) {
        lVar32 = (long)iVar4 + -3;
        pfVar34 = pfVar34 + 0x8c;
        do {
          pfVar2 = pfVar34 + -0xc;
          pfVar6 = pfVar34 + -10;
          pfVar5 = pfVar34 + -8;
          pfVar7 = pfVar34 + -6;
          lVar32 = lVar32 + -1;
          fVar49 = (float)*(undefined8 *)(pfVar34 + -0x1a);
          fVar47 = (float)*(undefined8 *)(pfVar34 + -0x1c);
          fVar48 = (float)((ulong)*(undefined8 *)(pfVar34 + -0x1c) >> 0x20);
          pfVar1 = pfVar34 + -4;
          pfVar9 = pfVar34 + -2;
          pfVar8 = pfVar34 + 2;
          uVar10 = *(undefined8 *)pfVar34;
          fVar41 = fVar41 + pfVar34[-0x20];
          fVar45 = pfVar34[-0x1f];
          pfVar34 = pfVar34 + 0x24;
          fVar39 = fVar39 + fVar45;
          fVar44 = fVar44 + fVar45;
          fVar35 = fVar35 + ((float)uVar10 +
                            (float)*(undefined8 *)pfVar1 * fVar49 +
                            (float)*(undefined8 *)pfVar2 * fVar47 +
                            (float)*(undefined8 *)pfVar5 * fVar48) * fVar45;
          fVar36 = fVar36 + ((float)((ulong)uVar10 >> 0x20) +
                            (float)((ulong)*(undefined8 *)pfVar1 >> 0x20) * fVar49 +
                            (float)((ulong)*(undefined8 *)pfVar2 >> 0x20) * fVar47 +
                            (float)((ulong)*(undefined8 *)pfVar5 >> 0x20) * fVar48) * fVar45;
          fVar37 = fVar37 + ((float)*(undefined8 *)pfVar8 +
                            (float)*(undefined8 *)pfVar9 * fVar49 +
                            (float)*(undefined8 *)pfVar6 * fVar47 +
                            (float)*(undefined8 *)pfVar7 * fVar48) * fVar45;
          fVar38 = fVar38 + ((float)((ulong)*(undefined8 *)pfVar8 >> 0x20) +
                            (float)((ulong)*(undefined8 *)pfVar9 >> 0x20) * fVar49 +
                            (float)((ulong)*(undefined8 *)pfVar6 >> 0x20) * fVar47 +
                            (float)((ulong)*(undefined8 *)pfVar7 >> 0x20) * fVar48) * fVar45;
        } while (lVar32 != 0);
      }
      goto LAB_03290184;
    }
  }
  fVar44 = fVar39;
LAB_03290184:
  if (fVar39 <= 0.0) {
    return 0x80040200;
  }
  uVar43 = NEON_frecpe(CONCAT44(fVar44,fVar39),4);
  uVar10 = NEON_frecps(CONCAT44(fVar44,fVar39),uVar43,4);
  param_2[1] = fVar39;
  *param_2 = fVar41;
  param_2[8] = 0.0;
  param_2[9] = 0.0;
  param_2[10] = 0.0;
  param_2[0xb] = 0.0;
  param_2[0xc] = 0.0;
  param_2[0xd] = 0.0;
  param_2[0xe] = 0.0;
  param_2[0xf] = 0.0;
  fVar41 = (float)uVar43 * (float)uVar10;
  fVar45 = (float)((ulong)uVar43 >> 0x20) * (float)((ulong)uVar10 >> 0x20);
  param_2[0x10] = 0.0;
  param_2[0x11] = 0.0;
  param_2[0x12] = 0.0;
  param_2[0x13] = 0.0;
  uVar10 = NEON_frecps(CONCAT44(fVar44,fVar39),CONCAT44(fVar45,fVar41),4);
  fVar41 = fVar41 * (float)uVar10;
  fVar45 = fVar45 * (float)((ulong)uVar10 >> 0x20);
  fVar35 = fVar35 * fVar41;
  fVar36 = fVar36 * fVar45;
  fVar37 = fVar37 * fVar41;
  fVar38 = fVar38 * fVar45;
  *(ulong *)(param_2 + 6) = CONCAT44(fVar38,fVar37);
  *(ulong *)(param_2 + 4) = CONCAT44(fVar36,fVar35);
  puVar31 = PTR_DAT_043723a0;
  uVar30 = _DAT_03889f40;
  uVar29 = _DAT_03889f30;
  uVar28 = _DAT_03889e60;
  uVar27 = _DAT_038897b0;
  uVar43 = _DAT_038895e0;
  uVar10 = _DAT_03888e50;
  if (0 < (int)param_1[1]) {
    uVar42 = (undefined4)_UNK_03889f48;
    uVar21 = (ulong)_UNK_03889f48 >> 0x20;
    uVar46 = (undefined4)_UNK_03889f38;
    uVar22 = (ulong)_UNK_03889f38 >> 0x20;
    uVar50 = (undefined4)_UNK_03889e68;
    uVar23 = (ulong)_UNK_03889e68 >> 0x20;
    uVar40 = (undefined4)_UNK_038897b8;
    uVar24 = (ulong)_UNK_038897b8 >> 0x20;
    lVar33 = 0;
    lVar32 = 0x80;
    uVar51 = (undefined4)_UNK_038895e8;
    uVar25 = (ulong)_UNK_038895e8 >> 0x20;
    uVar52 = (undefined4)_UNK_03888e58;
    uVar26 = (ulong)_UNK_03888e58 >> 0x20;
    do {
      puVar3 = (undefined8 *)(*param_1 + lVar32);
      lVar32 = lVar32 + 0x90;
      fVar39 = *(float *)(puVar3 + -0xe);
      fVar41 = *(float *)((long)puVar3 + -0x6c);
      fVar44 = *(float *)(puVar3 + -0xd);
      fVar13 = *(float *)(puVar3 + -4);
      fVar14 = *(float *)((long)puVar3 + -0x1c);
      fVar15 = *(float *)(puVar3 + -3);
      fVar16 = *(float *)((long)puVar3 + -0x14);
      fVar45 = *(float *)(puVar3 + -2);
      fVar47 = *(float *)((long)puVar3 + -0xc);
      fVar48 = *(float *)(puVar3 + -1);
      fVar49 = *(float *)((long)puVar3 + -4);
      fVar17 = *(float *)(puVar3 + -6);
      fVar18 = *(float *)((long)puVar3 + -0x2c);
      fVar19 = *(float *)(puVar3 + -5);
      fVar20 = *(float *)((long)puVar3 + -0x24);
      fVar55 = (float)puVar3[-0xc];
      fVar56 = (float)((ulong)puVar3[-0xc] >> 0x20);
      fVar57 = (float)puVar3[-0xb];
      lVar33 = lVar33 + 1;
      fVar75 = (float)puVar3[-10];
      fVar76 = (float)((ulong)puVar3[-10] >> 0x20);
      fVar77 = (float)puVar3[-9];
      fVar58 = (float)puVar3[-8];
      fVar60 = (float)((ulong)puVar3[-8] >> 0x20);
      fVar62 = (float)puVar3[-7];
      fVar59 = fVar58 * fVar48 + fVar55 * fVar19 + fVar75 * fVar15;
      fVar61 = fVar60 * fVar48 + fVar56 * fVar19 + fVar76 * fVar15;
      fVar63 = fVar62 * fVar48 + fVar57 * fVar19 + fVar77 * fVar15;
      fVar72 = fVar58 * fVar47 + fVar55 * fVar18 + fVar75 * fVar14;
      fVar73 = fVar60 * fVar47 + fVar56 * fVar18 + fVar76 * fVar14;
      fVar74 = fVar62 * fVar47 + fVar57 * fVar18 + fVar77 * fVar14;
      fVar55 = fVar58 * fVar45 + fVar55 * fVar17 + fVar75 * fVar13;
      fVar56 = fVar60 * fVar45 + fVar56 * fVar17 + fVar76 * fVar13;
      fVar57 = fVar62 * fVar45 + fVar57 * fVar17 + fVar77 * fVar13;
      auVar53._0_4_ =
           ((float)*puVar3 + fVar45 * fVar44 + fVar17 * fVar39 + fVar13 * fVar41) - fVar35;
      auVar53._4_4_ =
           ((float)((ulong)*puVar3 >> 0x20) + fVar47 * fVar44 + fVar18 * fVar39 + fVar14 * fVar41) -
           fVar36;
      auVar53._8_4_ =
           ((float)puVar3[1] + fVar48 * fVar44 + fVar19 * fVar39 + fVar15 * fVar41) - fVar37;
      auVar53._12_4_ =
           ((float)((ulong)puVar3[1] >> 0x20) + fVar49 * fVar44 + fVar20 * fVar39 + fVar16 * fVar41)
           - fVar38;
      auVar64._8_4_ = uVar46;
      auVar64._0_8_ = uVar29;
      auVar64._12_4_ = (int)uVar22;
      auVar64 = a64_TBL(ZEXT816(0),auVar53,auVar64);
      auVar68._0_4_ = auVar53._0_4_ * auVar53._0_4_;
      auVar68._4_4_ = auVar53._4_4_ * auVar53._4_4_;
      auVar68._8_4_ = auVar53._8_4_ * auVar53._8_4_;
      auVar68._12_4_ = auVar53._12_4_ * auVar53._12_4_;
      auVar69._8_4_ = uVar40;
      auVar69._0_8_ = uVar27;
      auVar69._12_4_ = (int)uVar24;
      auVar70 = a64_TBL(ZEXT816(0),auVar68,auVar69);
      auVar71._8_4_ = uVar42;
      auVar71._0_8_ = uVar30;
      auVar71._12_4_ = (int)uVar21;
      auVar69 = a64_TBL(ZEXT816(0),auVar68,auVar71);
      fVar39 = *(float *)((long)puVar3 + -0x7c);
      auVar65._0_4_ = (auVar70._0_4_ + auVar69._0_4_) * fVar39;
      auVar65._4_4_ = (auVar70._4_4_ + auVar69._4_4_) * fVar39;
      auVar65._8_4_ = (auVar70._8_4_ + auVar69._8_4_) * fVar39;
      fVar39 = -fVar39;
      auVar54._0_4_ = auVar53._0_4_ * auVar64._0_4_ * fVar39;
      auVar54._4_4_ = auVar53._4_4_ * auVar64._4_4_ * fVar39;
      auVar54._8_4_ = auVar53._8_4_ * auVar64._8_4_ * fVar39;
      auVar54._12_4_ = auVar53._12_4_ * auVar64._12_4_ * fVar39;
      auVar65._12_4_ = 0;
      auVar70._8_4_ = uVar50;
      auVar70._0_8_ = uVar28;
      auVar70._12_4_ = (int)uVar23;
      auVar64 = a64_TBL(ZEXT816(0),auVar54,auVar70);
      auVar12._8_4_ = uVar52;
      auVar12._0_8_ = uVar10;
      auVar12._12_4_ = (int)uVar26;
      auVar71 = a64_TBL(ZEXT816(0),auVar54,auVar12);
      auVar11._8_4_ = uVar51;
      auVar11._0_8_ = uVar43;
      auVar11._12_4_ = (int)uVar25;
      auVar69 = a64_TBL(ZEXT816(0),auVar54,auVar11);
      auVar69 = auVar69 ^ (auVar69 ^ auVar65) & *(undefined1 (*) [16])(puVar31 + 0xa0);
      auVar64 = auVar64 ^ (auVar64 ^ auVar65) & *(undefined1 (*) [16])(puVar31 + 0x90);
      auVar71 = auVar71 ^ (auVar71 ^ auVar65) & *(undefined1 (*) [16])(puVar31 + 0xc0);
      uVar67 = *(undefined8 *)(param_2 + 0x12);
      uVar66 = *(undefined8 *)(param_2 + 0x10);
      *(ulong *)(param_2 + 10) =
           CONCAT44((float)((ulong)*(undefined8 *)(param_2 + 10) >> 0x20) +
                    fVar49 * fVar57 + fVar20 * fVar55 + fVar16 * fVar56 + auVar64._12_4_,
                    (float)*(undefined8 *)(param_2 + 10) +
                    fVar48 * fVar57 + fVar19 * fVar55 + fVar15 * fVar56 + auVar64._8_4_);
      *(ulong *)(param_2 + 8) =
           CONCAT44((float)((ulong)*(undefined8 *)(param_2 + 8) >> 0x20) +
                    fVar47 * fVar57 + fVar18 * fVar55 + fVar14 * fVar56 + auVar64._4_4_,
                    (float)*(undefined8 *)(param_2 + 8) +
                    fVar45 * fVar57 + fVar17 * fVar55 + fVar13 * fVar56 + auVar64._0_4_);
      *(ulong *)(param_2 + 0xe) =
           CONCAT44(fVar49 * fVar74 + fVar20 * fVar72 + fVar16 * fVar73 + auVar69._12_4_ +
                    (float)((ulong)*(undefined8 *)(param_2 + 0xe) >> 0x20),
                    fVar48 * fVar74 + fVar19 * fVar72 + fVar15 * fVar73 + auVar69._8_4_ +
                    (float)*(undefined8 *)(param_2 + 0xe));
      *(ulong *)(param_2 + 0xc) =
           CONCAT44(fVar47 * fVar74 + fVar18 * fVar72 + fVar14 * fVar73 + auVar69._4_4_ +
                    (float)((ulong)*(undefined8 *)(param_2 + 0xc) >> 0x20),
                    fVar45 * fVar74 + fVar17 * fVar72 + fVar13 * fVar73 + auVar69._0_4_ +
                    (float)*(undefined8 *)(param_2 + 0xc));
      param_2[0x12] =
           fVar48 * fVar63 + fVar19 * fVar59 + fVar15 * fVar61 + auVar71._8_4_ + (float)uVar67;
      param_2[0x13] =
           fVar49 * fVar63 + fVar20 * fVar59 + fVar16 * fVar61 + auVar71._12_4_ +
           (float)((ulong)uVar67 >> 0x20);
      param_2[0x10] =
           fVar45 * fVar63 + fVar17 * fVar59 + fVar13 * fVar61 + auVar71._0_4_ + (float)uVar66;
      param_2[0x11] =
           fVar47 * fVar63 + fVar18 * fVar59 + fVar14 * fVar61 + auVar71._4_4_ +
           (float)((ulong)uVar66 >> 0x20);
    } while (lVar33 < (int)param_1[1]);
  }
  return 0;
}


