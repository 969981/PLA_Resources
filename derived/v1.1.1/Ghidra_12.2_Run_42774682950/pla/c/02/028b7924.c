/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028b7924; name: FUN_028b7924
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_028b7924(float param_1,int *param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  byte *pbVar3;
  byte *pbVar4;
  long lVar5;
  ushort *puVar6;
  uint *puVar7;
  ulong uVar8;
  ulong uVar9;
  uint uVar10;
  float fVar11;
  float fVar16;
  float fVar17;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float fVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  undefined1 auVar23 [12];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  float fVar28;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  float fVar29;
  float fVar35;
  float fVar36;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  float fVar37;
  undefined1 auVar34 [16];
  float fVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar51;
  undefined1 auVar44 [12];
  float fVar52;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  float fVar53;
  undefined1 auVar54 [12];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  float fVar62;
  undefined1 auVar63 [12];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  
  puVar6 = (ushort *)((long)param_2 - (long)*param_2);
  if (*puVar6 < 5) {
    lVar5 = 0;
  }
  else {
    lVar5 = 0;
    if ((ulong)puVar6[2] != 0) {
      puVar7 = (uint *)((long)param_2 + (ulong)puVar6[2]);
      lVar5 = (long)puVar7 + (ulong)*puVar7;
    }
    if (6 < *puVar6) {
      puVar7 = (uint *)0x0;
      if ((ulong)puVar6[3] != 0) {
        puVar7 = (uint *)((long)param_2 + (ulong)puVar6[3]);
        puVar7 = (uint *)((long)puVar7 + (ulong)*puVar7);
      }
      goto LAB_028b7968;
    }
  }
  puVar7 = (uint *)0x0;
LAB_028b7968:
  lVar1 = lVar5 + 4;
  pbVar4 = (byte *)(lVar5 + 6U);
  uVar8 = ~(lVar5 + 6U) + lVar1 + (ulong)*puVar7;
  while (pbVar3 = pbVar4, uVar8 != 0) {
    uVar9 = uVar8 >> 1;
    pbVar4 = pbVar3 + uVar9 + 1;
    uVar8 = uVar8 + ~uVar9;
    if (param_1 <= (float)pbVar3[uVar9]) {
      pbVar4 = pbVar3;
      uVar8 = uVar9;
    }
  }
  iVar19 = (int)((long)pbVar3 - lVar1);
  uVar8 = (long)pbVar3 - lVar1 & 0xffffffff;
  uVar10 = (uint)*(byte *)(lVar1 + (ulong)(iVar19 - 1));
  uVar9 = *(ulong *)((long)puVar7 + (ulong)(iVar19 - 1) * 6 + 4);
  fVar18 = (param_1 - (float)uVar10) / (float)(int)(*(byte *)(lVar1 + uVar8) - uVar10);
  auVar12._0_8_ = CONCAT44((int)(uVar9 >> 0x12),(uint)uVar9 >> 3) & 0x7fff00007fff;
  auVar12._8_4_ = (uint)(uVar9 >> 0x21) & 0x7fff;
  auVar12._12_4_ = 0;
  auVar12 = NEON_ucvtf(auVar12,4);
  fVar38 = (float)_DAT_03889ed0;
  auVar44._0_4_ = fVar38 + auVar12._0_4_ * 4.7938363e-05;
  fVar42 = (float)((ulong)_DAT_03889ed0 >> 0x20);
  auVar44._4_4_ = fVar42 + auVar12._4_4_ * 4.7938363e-05;
  fVar16 = (float)_UNK_03889ed8;
  fVar17 = (float)((ulong)_UNK_03889ed8 >> 0x20);
  auVar44._8_4_ = fVar16 + auVar12._8_4_ * 4.7938363e-05;
  auVar45._12_4_ = fVar17 + auVar12._12_4_ * 4.7938363e-05;
  auVar45._0_12_ = auVar44;
  fVar11 = 1.0 - (auVar44._0_4_ * auVar44._0_4_ + auVar44._4_4_ * auVar44._4_4_ +
                 auVar44._8_4_ * auVar44._8_4_ + auVar45._12_4_ * auVar45._12_4_);
  if (fVar11 <= 0.0) {
    fVar11 = 0.0;
  }
  fVar41 = (float)NEON_frsqrte(fVar11);
  fVar41 = fVar11 - (fVar41 * fVar11 * fVar41 * fVar11 - fVar11) * 0.5;
  fVar62 = (float)NEON_frsqrte(fVar41);
  fVar41 = fVar41 - (fVar62 * fVar41 * fVar62 * fVar41 - fVar11) * 0.5;
  fVar11 = (float)NEON_frsqrte(fVar41);
  fVar11 = fVar11 * fVar41;
  switch((uint)uVar9 & 3) {
  case 0:
    auVar12 = NEON_ext(auVar45,ZEXT416((uint)fVar11),4,1);
    auVar46 = NEON_ext(auVar12,auVar45,0xc,1);
    break;
  case 1:
    auVar13._4_4_ = auVar44._8_4_;
    auVar13._0_4_ = auVar44._0_4_;
    auVar13._8_4_ = auVar44._0_4_;
    auVar13._12_4_ = fVar11;
    auVar12 = NEON_ext(auVar45,auVar45,4,1);
    auVar46 = NEON_ext(auVar13,auVar12,8,1);
    break;
  case 2:
    auVar45 = NEON_ext(auVar45,auVar45,8,1);
    auVar12 = NEON_ext(auVar45,ZEXT416((uint)fVar11),4,1);
    auVar46 = NEON_ext(auVar12,auVar45,4,1);
    break;
  case 3:
    auVar46._12_4_ = fVar11;
    auVar46._0_12_ = auVar44;
  }
  auVar14._0_8_ = -(ulong)((uVar9 & 4) == 0);
  auVar55._0_4_ = -auVar46._0_4_;
  auVar55._4_4_ = -auVar46._4_4_;
  auVar55._8_4_ = -auVar46._8_4_;
  auVar55._12_4_ = -auVar46._12_4_;
  auVar14._8_8_ = auVar14._0_8_;
  auVar15 = auVar55 ^ (auVar55 ^ auVar46) & auVar14;
  if (0.0 < fVar18) {
    uVar8 = *(ulong *)((long)puVar7 + uVar8 * 6 + 4);
    auVar47._0_8_ = CONCAT44((int)(uVar8 >> 0x12),(uint)uVar8 >> 3) & 0x7fff00007fff;
    auVar47._8_4_ = (uint)(uVar8 >> 0x21) & 0x7fff;
    auVar47._12_4_ = 0;
    auVar12 = NEON_ucvtf(auVar47,4);
    auVar54._0_4_ = fVar38 + auVar12._0_4_ * 4.7938363e-05;
    auVar54._4_4_ = fVar42 + auVar12._4_4_ * 4.7938363e-05;
    auVar54._8_4_ = fVar16 + auVar12._8_4_ * 4.7938363e-05;
    auVar56._12_4_ = fVar17 + auVar12._12_4_ * 4.7938363e-05;
    auVar56._0_12_ = auVar54;
    fVar11 = 1.0 - (auVar54._0_4_ * auVar54._0_4_ + auVar54._4_4_ * auVar54._4_4_ +
                   auVar54._8_4_ * auVar54._8_4_ + auVar56._12_4_ * auVar56._12_4_);
    if (fVar11 <= 0.0) {
      fVar11 = 0.0;
    }
    fVar41 = (float)NEON_frsqrte(fVar11);
    fVar41 = fVar11 - (fVar41 * fVar11 * fVar41 * fVar11 - fVar11) * 0.5;
    fVar62 = (float)NEON_frsqrte(fVar41);
    fVar41 = fVar41 - (fVar62 * fVar41 * fVar62 * fVar41 - fVar11) * 0.5;
    fVar11 = (float)NEON_frsqrte(fVar41);
    fVar11 = fVar11 * fVar41;
    switch((uint)uVar8 & 3) {
    case 0:
      auVar12 = NEON_ext(auVar56,ZEXT416((uint)fVar11),4,1);
      auVar57 = NEON_ext(auVar12,auVar56,0xc,1);
      break;
    case 1:
      auVar48._4_4_ = auVar54._8_4_;
      auVar48._0_4_ = auVar54._0_4_;
      auVar48._8_4_ = auVar54._0_4_;
      auVar48._12_4_ = fVar11;
      auVar12 = NEON_ext(auVar56,auVar56,4,1);
      auVar57 = NEON_ext(auVar48,auVar12,8,1);
      break;
    case 2:
      auVar45 = NEON_ext(auVar56,auVar56,8,1);
      auVar12 = NEON_ext(auVar45,ZEXT416((uint)fVar11),4,1);
      auVar57 = NEON_ext(auVar12,auVar45,4,1);
      break;
    case 3:
      auVar57._12_4_ = fVar11;
      auVar57._0_12_ = auVar54;
    }
    auVar49._0_8_ = -(ulong)((uVar8 & 4) == 0);
    auVar50._0_4_ = -auVar57._0_4_;
    auVar50._4_4_ = -auVar57._4_4_;
    auVar50._8_4_ = -auVar57._8_4_;
    auVar50._12_4_ = -auVar57._12_4_;
    auVar49._8_8_ = auVar49._0_8_;
    auVar50 = auVar50 ^ (auVar50 ^ auVar57) & auVar49;
    if (1.0 <= fVar18) {
      return auVar50;
    }
    uVar8 = *(ulong *)((long)puVar7 + (ulong)(iVar19 - 2) * 6 + 4);
    auVar58._0_8_ = CONCAT44((int)(uVar8 >> 0x12),(uint)uVar8 >> 3) & 0x7fff00007fff;
    auVar58._8_4_ = (uint)(uVar8 >> 0x21) & 0x7fff;
    auVar58._12_4_ = 0;
    auVar12 = NEON_ucvtf(auVar58,4);
    auVar63._0_4_ = fVar38 + auVar12._0_4_ * 4.7938363e-05;
    auVar63._4_4_ = fVar42 + auVar12._4_4_ * 4.7938363e-05;
    auVar63._8_4_ = fVar16 + auVar12._8_4_ * 4.7938363e-05;
    auVar64._12_4_ = fVar17 + auVar12._12_4_ * 4.7938363e-05;
    auVar64._0_12_ = auVar63;
    fVar11 = 1.0 - (auVar63._0_4_ * auVar63._0_4_ + auVar63._4_4_ * auVar63._4_4_ +
                   auVar63._8_4_ * auVar63._8_4_ + auVar64._12_4_ * auVar64._12_4_);
    if (fVar11 <= 0.0) {
      fVar11 = 0.0;
    }
    fVar41 = (float)NEON_frsqrte(fVar11);
    fVar41 = fVar11 - (fVar41 * fVar11 * fVar41 * fVar11 - fVar11) * 0.5;
    fVar62 = (float)NEON_frsqrte(fVar41);
    fVar41 = fVar41 - (fVar62 * fVar41 * fVar62 * fVar41 - fVar11) * 0.5;
    fVar11 = (float)NEON_frsqrte(fVar41);
    fVar11 = fVar11 * fVar41;
    switch((uint)uVar8 & 3) {
    case 0:
      auVar12 = NEON_ext(auVar64,ZEXT416((uint)fVar11),4,1);
      auVar65 = NEON_ext(auVar12,auVar64,0xc,1);
      break;
    case 1:
      auVar59._4_4_ = auVar63._8_4_;
      auVar59._0_4_ = auVar63._0_4_;
      auVar59._8_4_ = auVar63._0_4_;
      auVar59._12_4_ = fVar11;
      auVar12 = NEON_ext(auVar64,auVar64,4,1);
      auVar65 = NEON_ext(auVar59,auVar12,8,1);
      break;
    case 2:
      auVar45 = NEON_ext(auVar64,auVar64,8,1);
      auVar12 = NEON_ext(auVar45,ZEXT416((uint)fVar11),4,1);
      auVar65 = NEON_ext(auVar12,auVar45,4,1);
      break;
    case 3:
      auVar65._12_4_ = fVar11;
      auVar65._0_12_ = auVar63;
    }
    uVar9 = *(ulong *)((long)puVar7 + (ulong)(iVar19 + 1) * 6 + 4);
    auVar60._0_8_ = -(ulong)((uVar8 & 4) == 0);
    auVar60._8_8_ = auVar60._0_8_;
    auVar2._4_4_ = -auVar65._4_4_;
    auVar2._0_4_ = -auVar65._0_4_;
    auVar2._8_4_ = -auVar65._8_4_;
    auVar2._12_4_ = -auVar65._12_4_;
    auVar61._4_4_ = -auVar65._4_4_;
    auVar61._0_4_ = -auVar65._0_4_;
    auVar61._8_4_ = -auVar65._8_4_;
    auVar61._12_4_ = -auVar65._12_4_;
    auVar61 = auVar61 ^ (auVar2 ^ auVar65) & auVar60;
    auVar30._0_8_ = CONCAT44((int)(uVar9 >> 0x12),(uint)uVar9 >> 3) & 0x7fff00007fff;
    auVar30._8_4_ = (uint)(uVar9 >> 0x21) & 0x7fff;
    auVar30._12_4_ = 0;
    auVar12 = NEON_ucvtf(auVar30,4);
    auVar23._0_4_ = fVar38 + auVar12._0_4_ * 4.7938363e-05;
    auVar23._4_4_ = fVar42 + auVar12._4_4_ * 4.7938363e-05;
    auVar23._8_4_ = fVar16 + auVar12._8_4_ * 4.7938363e-05;
    auVar24._12_4_ = fVar17 + auVar12._12_4_ * 4.7938363e-05;
    auVar24._0_12_ = auVar23;
    fVar11 = 1.0 - (auVar23._0_4_ * auVar23._0_4_ + auVar23._4_4_ * auVar23._4_4_ +
                   auVar23._8_4_ * auVar23._8_4_ + auVar24._12_4_ * auVar24._12_4_);
    if (fVar11 <= 0.0) {
      fVar11 = 0.0;
    }
    fVar38 = (float)NEON_frsqrte(fVar11);
    fVar38 = fVar11 - (fVar38 * fVar11 * fVar38 * fVar11 - fVar11) * 0.5;
    fVar42 = (float)NEON_frsqrte(fVar38);
    fVar38 = fVar38 - (fVar42 * fVar38 * fVar42 * fVar38 - fVar11) * 0.5;
    fVar11 = (float)NEON_frsqrte(fVar38);
    fVar11 = fVar11 * fVar38;
    switch((uint)uVar9 & 3) {
    case 0:
      auVar12 = NEON_ext(auVar24,ZEXT416((uint)fVar11),4,1);
      auVar25 = NEON_ext(auVar12,auVar24,0xc,1);
      break;
    case 1:
      auVar31._4_4_ = auVar23._8_4_;
      auVar31._0_4_ = auVar23._0_4_;
      auVar31._8_4_ = auVar23._0_4_;
      auVar31._12_4_ = fVar11;
      auVar12 = NEON_ext(auVar24,auVar24,4,1);
      auVar25 = NEON_ext(auVar31,auVar12,8,1);
      break;
    case 2:
      auVar12 = NEON_ext(auVar24,auVar24,8,1);
      auVar45 = NEON_ext(auVar12,ZEXT416((uint)fVar11),4,1);
      auVar25 = NEON_ext(auVar45,auVar12,4,1);
      break;
    case 3:
      auVar25._12_4_ = fVar11;
      auVar25._0_12_ = auVar23;
    }
    auVar45 = NEON_fmov(0x40400000,4);
    auVar32._0_8_ = -(ulong)((uVar9 & 4) == 0);
    auVar33._0_4_ = -auVar25._0_4_;
    auVar33._4_4_ = -auVar25._4_4_;
    auVar33._8_4_ = -auVar25._8_4_;
    auVar33._12_4_ = -auVar25._12_4_;
    fVar43 = auVar50._0_4_;
    fVar51 = auVar50._4_4_;
    fVar52 = auVar50._8_4_;
    fVar53 = auVar50._12_4_;
    auVar32._8_8_ = auVar32._0_8_;
    auVar33 = auVar33 ^ (auVar33 ^ auVar25) & auVar32;
    fVar42 = auVar15._0_4_;
    fVar16 = auVar15._4_4_;
    fVar17 = auVar15._8_4_;
    fVar41 = auVar15._12_4_;
    fVar11 = (fVar43 - auVar61._0_4_) * 0.5;
    fVar38 = (fVar51 - auVar61._4_4_) * 0.5;
    fVar62 = (fVar52 - auVar61._8_4_) * 0.5;
    fVar28 = (fVar53 - auVar61._12_4_) * 0.5;
    fVar29 = (auVar33._0_4_ - fVar42) * 0.5;
    fVar35 = (auVar33._4_4_ - fVar16) * 0.5;
    fVar36 = (auVar33._8_4_ - fVar17) * 0.5;
    fVar37 = (auVar33._12_4_ - fVar41) * 0.5;
    auVar12 = NEON_fmov(0xc0400000,4);
    fVar42 = fVar42 + (fVar11 + ((((fVar42 * auVar12._0_4_ + fVar43 * auVar45._0_4_) -
                                  (fVar11 + fVar11)) - fVar29) +
                                (((fVar42 + fVar42) - (fVar43 + fVar43)) + fVar11 + fVar29) * fVar18
                                ) * fVar18) * fVar18;
    fVar16 = fVar16 + (fVar38 + ((((fVar16 * auVar12._4_4_ + fVar51 * auVar45._4_4_) -
                                  (fVar38 + fVar38)) - fVar35) +
                                (((fVar16 + fVar16) - (fVar51 + fVar51)) + fVar38 + fVar35) * fVar18
                                ) * fVar18) * fVar18;
    fVar17 = fVar17 + (fVar62 + ((((fVar17 * auVar12._8_4_ + fVar52 * auVar45._8_4_) -
                                  (fVar62 + fVar62)) - fVar36) +
                                (((fVar17 + fVar17) - (fVar52 + fVar52)) + fVar62 + fVar36) * fVar18
                                ) * fVar18) * fVar18;
    fVar41 = fVar41 + (fVar28 + ((((fVar41 * auVar12._12_4_ + fVar53 * auVar45._12_4_) -
                                  (fVar28 + fVar28)) - fVar37) +
                                (((fVar41 + fVar41) - (fVar53 + fVar53)) + fVar28 + fVar37) * fVar18
                                ) * fVar18) * fVar18;
    fVar11 = *(float *)PTR_FloatQuaternionEpsilon_0437a118;
    auVar26._0_4_ = fVar42 * fVar42;
    auVar26._4_4_ = fVar16 * fVar16;
    auVar26._8_4_ = fVar17 * fVar17;
    auVar26._12_4_ = fVar41 * fVar41;
    auVar12 = NEON_ext(auVar26,auVar26,8,1);
    fVar38 = auVar12._0_4_ + auVar26._0_4_;
    fVar62 = auVar12._4_4_ + auVar26._4_4_;
    fVar18 = fVar38 + fVar62;
    fVar38 = fVar38 + fVar62;
    auVar27._8_8_ = CONCAT44(fVar38,fVar18);
    auVar27._0_8_ = CONCAT44(fVar38,fVar18);
    auVar12 = NEON_frsqrte(auVar27,4);
    iVar19 = -(uint)(fVar18 < fVar11);
    iVar20 = -(uint)(fVar38 < fVar11);
    iVar21 = -(uint)(fVar18 < fVar11);
    iVar22 = -(uint)(fVar38 < fVar11);
    auVar39._0_4_ = auVar12._0_4_ * fVar18;
    auVar39._4_4_ = auVar12._4_4_ * fVar38;
    auVar39._8_4_ = auVar12._8_4_ * fVar18;
    auVar39._12_4_ = auVar12._12_4_ * fVar38;
    auVar45 = NEON_frsqrts(auVar12,auVar39,4);
    auVar34._0_4_ = auVar12._0_4_ * auVar45._0_4_;
    auVar34._4_4_ = auVar12._4_4_ * auVar45._4_4_;
    auVar34._8_4_ = auVar12._8_4_ * auVar45._8_4_;
    auVar34._12_4_ = auVar12._12_4_ * auVar45._12_4_;
    auVar40._0_4_ = fVar18 * auVar34._0_4_;
    auVar40._4_4_ = fVar38 * auVar34._4_4_;
    auVar40._8_4_ = fVar18 * auVar34._8_4_;
    auVar40._12_4_ = fVar38 * auVar34._12_4_;
    auVar12 = NEON_frsqrts(auVar34,auVar40,4);
    fVar42 = auVar34._0_4_ * auVar12._0_4_ * fVar42;
    fVar16 = auVar34._4_4_ * auVar12._4_4_ * fVar16;
    fVar17 = auVar34._8_4_ * auVar12._8_4_ * fVar17;
    fVar41 = auVar34._12_4_ * auVar12._12_4_ * fVar41;
    auVar15[0] = SUB41(fVar42,0) & ~(byte)iVar19;
    auVar15[1] = (byte)((uint)fVar42 >> 8) & ~(byte)((uint)iVar19 >> 8);
    auVar15[2] = (byte)((uint)fVar42 >> 0x10) & ~(byte)((uint)iVar19 >> 0x10);
    auVar15[3] = (byte)((uint)fVar42 >> 0x18) & ~(byte)((uint)iVar19 >> 0x18);
    auVar15[4] = SUB41(fVar16,0) & ~(byte)iVar20;
    auVar15[5] = (byte)((uint)fVar16 >> 8) & ~(byte)((uint)iVar20 >> 8);
    auVar15[6] = (byte)((uint)fVar16 >> 0x10) & ~(byte)((uint)iVar20 >> 0x10);
    auVar15[7] = (byte)((uint)fVar16 >> 0x18) & ~(byte)((uint)iVar20 >> 0x18);
    auVar15[8] = SUB41(fVar17,0) & ~(byte)iVar21;
    auVar15[9] = (byte)((uint)fVar17 >> 8) & ~(byte)((uint)iVar21 >> 8);
    auVar15[10] = (byte)((uint)fVar17 >> 0x10) & ~(byte)((uint)iVar21 >> 0x10);
    auVar15[0xb] = (byte)((uint)fVar17 >> 0x18) & ~(byte)((uint)iVar21 >> 0x18);
    auVar15[0xc] = SUB41(fVar41,0) & ~(byte)iVar22;
    auVar15[0xd] = (byte)((uint)fVar41 >> 8) & ~(byte)((uint)iVar22 >> 8);
    auVar15[0xe] = (byte)((uint)fVar41 >> 0x10) & ~(byte)((uint)iVar22 >> 0x10);
    auVar15[0xf] = (byte)((uint)fVar41 >> 0x18) & ~(byte)((uint)iVar22 >> 0x18);
  }
  return auVar15;
}


