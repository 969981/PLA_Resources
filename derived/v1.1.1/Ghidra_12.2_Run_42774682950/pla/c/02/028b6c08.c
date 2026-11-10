/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028b6c08; name: FUN_028b6c08
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_028b6c08(float param_1,int *param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  ushort *puVar3;
  long lVar4;
  ushort *puVar5;
  uint *puVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  float fVar10;
  float fVar15;
  float fVar16;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  float fVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  undefined1 auVar22 [12];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar27;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  float fVar28;
  float fVar34;
  float fVar35;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  float fVar36;
  undefined1 auVar33 [16];
  float fVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar50;
  undefined1 auVar43 [12];
  float fVar51;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  float fVar52;
  undefined1 auVar53 [12];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  float fVar61;
  undefined1 auVar62 [12];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  
  puVar5 = (ushort *)((long)param_2 - (long)*param_2);
  if (*puVar5 < 5) {
    lVar4 = 0;
  }
  else {
    lVar4 = 0;
    if ((ulong)puVar5[2] != 0) {
      puVar6 = (uint *)((long)param_2 + (ulong)puVar5[2]);
      lVar4 = (long)puVar6 + (ulong)*puVar6;
    }
    if (6 < *puVar5) {
      puVar6 = (uint *)0x0;
      if ((ulong)puVar5[3] != 0) {
        puVar6 = (uint *)((long)param_2 + (ulong)puVar5[3]);
        puVar6 = (uint *)((long)puVar6 + (ulong)*puVar6);
      }
      goto LAB_028b6c4c;
    }
  }
  puVar6 = (uint *)0x0;
LAB_028b6c4c:
  lVar1 = lVar4 + 4;
  puVar5 = (ushort *)(lVar4 + 8);
  lVar4 = ((lVar1 + (ulong)*puVar6 * 2) - (long)puVar5) + -2;
  if (lVar4 != 0) {
    uVar7 = lVar4 >> 1;
    puVar3 = puVar5;
    do {
      uVar8 = uVar7 >> 1;
      puVar5 = puVar3 + uVar8 + 1;
      uVar7 = uVar7 + ~uVar8;
      if (param_1 <= (float)puVar3[uVar8]) {
        puVar5 = puVar3;
        uVar7 = uVar8;
      }
      puVar3 = puVar5;
    } while (uVar7 != 0);
  }
  uVar7 = (ulong)((long)puVar5 - lVar1) >> 1;
  iVar18 = (int)uVar7;
  uVar9 = (uint)*(ushort *)(lVar1 + (ulong)(iVar18 - 1U) * 2);
  uVar8 = *(ulong *)((long)puVar6 + (ulong)(iVar18 - 1U) * 6 + 4);
  auVar11._0_8_ = CONCAT44((int)(uVar8 >> 0x12),(uint)uVar8 >> 3) & 0x7fff00007fff;
  auVar11._8_4_ = (uint)(uVar8 >> 0x21) & 0x7fff;
  auVar11._12_4_ = 0;
  fVar17 = (param_1 - (float)uVar9) /
           (float)(int)(*(ushort *)(lVar1 + (uVar7 & 0xffffffff) * 2) - uVar9);
  auVar11 = NEON_ucvtf(auVar11,4);
  fVar37 = (float)_DAT_03889ed0;
  auVar43._0_4_ = fVar37 + auVar11._0_4_ * 4.7938363e-05;
  fVar41 = (float)((ulong)_DAT_03889ed0 >> 0x20);
  auVar43._4_4_ = fVar41 + auVar11._4_4_ * 4.7938363e-05;
  fVar15 = (float)_UNK_03889ed8;
  fVar16 = (float)((ulong)_UNK_03889ed8 >> 0x20);
  auVar43._8_4_ = fVar15 + auVar11._8_4_ * 4.7938363e-05;
  auVar44._12_4_ = fVar16 + auVar11._12_4_ * 4.7938363e-05;
  auVar44._0_12_ = auVar43;
  fVar10 = 1.0 - (auVar43._0_4_ * auVar43._0_4_ + auVar43._4_4_ * auVar43._4_4_ +
                 auVar43._8_4_ * auVar43._8_4_ + auVar44._12_4_ * auVar44._12_4_);
  if (fVar10 <= 0.0) {
    fVar10 = 0.0;
  }
  fVar40 = (float)NEON_frsqrte(fVar10);
  fVar40 = fVar10 - (fVar40 * fVar10 * fVar40 * fVar10 - fVar10) * 0.5;
  fVar61 = (float)NEON_frsqrte(fVar40);
  fVar40 = fVar40 - (fVar61 * fVar40 * fVar61 * fVar40 - fVar10) * 0.5;
  fVar10 = (float)NEON_frsqrte(fVar40);
  fVar10 = fVar10 * fVar40;
  switch((uint)uVar8 & 3) {
  case 0:
    auVar11 = NEON_ext(auVar44,ZEXT416((uint)fVar10),4,1);
    auVar45 = NEON_ext(auVar11,auVar44,0xc,1);
    break;
  case 1:
    auVar12._4_4_ = auVar43._8_4_;
    auVar12._0_4_ = auVar43._0_4_;
    auVar12._8_4_ = auVar43._0_4_;
    auVar12._12_4_ = fVar10;
    auVar11 = NEON_ext(auVar44,auVar44,4,1);
    auVar45 = NEON_ext(auVar12,auVar11,8,1);
    break;
  case 2:
    auVar44 = NEON_ext(auVar44,auVar44,8,1);
    auVar11 = NEON_ext(auVar44,ZEXT416((uint)fVar10),4,1);
    auVar45 = NEON_ext(auVar11,auVar44,4,1);
    break;
  case 3:
    auVar45._12_4_ = fVar10;
    auVar45._0_12_ = auVar43;
  }
  auVar13._0_8_ = -(ulong)((uVar8 & 4) == 0);
  auVar54._0_4_ = -auVar45._0_4_;
  auVar54._4_4_ = -auVar45._4_4_;
  auVar54._8_4_ = -auVar45._8_4_;
  auVar54._12_4_ = -auVar45._12_4_;
  auVar13._8_8_ = auVar13._0_8_;
  auVar14 = auVar54 ^ (auVar54 ^ auVar45) & auVar13;
  if (0.0 < fVar17) {
    uVar7 = *(ulong *)((long)puVar6 + ((ulong)((long)puVar5 - lVar1) >> 1 & 0xffffffff) * 6 + 4);
    auVar46._0_8_ = CONCAT44((int)(uVar7 >> 0x12),(uint)uVar7 >> 3) & 0x7fff00007fff;
    auVar46._8_4_ = (uint)(uVar7 >> 0x21) & 0x7fff;
    auVar46._12_4_ = 0;
    auVar11 = NEON_ucvtf(auVar46,4);
    auVar53._0_4_ = fVar37 + auVar11._0_4_ * 4.7938363e-05;
    auVar53._4_4_ = fVar41 + auVar11._4_4_ * 4.7938363e-05;
    auVar53._8_4_ = fVar15 + auVar11._8_4_ * 4.7938363e-05;
    auVar55._12_4_ = fVar16 + auVar11._12_4_ * 4.7938363e-05;
    auVar55._0_12_ = auVar53;
    fVar10 = 1.0 - (auVar53._0_4_ * auVar53._0_4_ + auVar53._4_4_ * auVar53._4_4_ +
                   auVar53._8_4_ * auVar53._8_4_ + auVar55._12_4_ * auVar55._12_4_);
    if (fVar10 <= 0.0) {
      fVar10 = 0.0;
    }
    fVar40 = (float)NEON_frsqrte(fVar10);
    fVar40 = fVar10 - (fVar40 * fVar10 * fVar40 * fVar10 - fVar10) * 0.5;
    fVar61 = (float)NEON_frsqrte(fVar40);
    fVar40 = fVar40 - (fVar61 * fVar40 * fVar61 * fVar40 - fVar10) * 0.5;
    fVar10 = (float)NEON_frsqrte(fVar40);
    fVar10 = fVar10 * fVar40;
    switch((uint)uVar7 & 3) {
    case 0:
      auVar11 = NEON_ext(auVar55,ZEXT416((uint)fVar10),4,1);
      auVar56 = NEON_ext(auVar11,auVar55,0xc,1);
      break;
    case 1:
      auVar47._4_4_ = auVar53._8_4_;
      auVar47._0_4_ = auVar53._0_4_;
      auVar47._8_4_ = auVar53._0_4_;
      auVar47._12_4_ = fVar10;
      auVar11 = NEON_ext(auVar55,auVar55,4,1);
      auVar56 = NEON_ext(auVar47,auVar11,8,1);
      break;
    case 2:
      auVar44 = NEON_ext(auVar55,auVar55,8,1);
      auVar11 = NEON_ext(auVar44,ZEXT416((uint)fVar10),4,1);
      auVar56 = NEON_ext(auVar11,auVar44,4,1);
      break;
    case 3:
      auVar56._12_4_ = fVar10;
      auVar56._0_12_ = auVar53;
    }
    auVar48._0_8_ = -(ulong)((uVar7 & 4) == 0);
    auVar49._0_4_ = -auVar56._0_4_;
    auVar49._4_4_ = -auVar56._4_4_;
    auVar49._8_4_ = -auVar56._8_4_;
    auVar49._12_4_ = -auVar56._12_4_;
    auVar48._8_8_ = auVar48._0_8_;
    auVar49 = auVar49 ^ (auVar49 ^ auVar56) & auVar48;
    if (1.0 <= fVar17) {
      return auVar49;
    }
    uVar7 = *(ulong *)((long)puVar6 + (ulong)(iVar18 - 2) * 6 + 4);
    auVar57._0_8_ = CONCAT44((int)(uVar7 >> 0x12),(uint)uVar7 >> 3) & 0x7fff00007fff;
    auVar57._8_4_ = (uint)(uVar7 >> 0x21) & 0x7fff;
    auVar57._12_4_ = 0;
    auVar11 = NEON_ucvtf(auVar57,4);
    auVar62._0_4_ = fVar37 + auVar11._0_4_ * 4.7938363e-05;
    auVar62._4_4_ = fVar41 + auVar11._4_4_ * 4.7938363e-05;
    auVar62._8_4_ = fVar15 + auVar11._8_4_ * 4.7938363e-05;
    auVar63._12_4_ = fVar16 + auVar11._12_4_ * 4.7938363e-05;
    auVar63._0_12_ = auVar62;
    fVar10 = 1.0 - (auVar62._0_4_ * auVar62._0_4_ + auVar62._4_4_ * auVar62._4_4_ +
                   auVar62._8_4_ * auVar62._8_4_ + auVar63._12_4_ * auVar63._12_4_);
    if (fVar10 <= 0.0) {
      fVar10 = 0.0;
    }
    fVar40 = (float)NEON_frsqrte(fVar10);
    fVar40 = fVar10 - (fVar40 * fVar10 * fVar40 * fVar10 - fVar10) * 0.5;
    fVar61 = (float)NEON_frsqrte(fVar40);
    fVar40 = fVar40 - (fVar61 * fVar40 * fVar61 * fVar40 - fVar10) * 0.5;
    fVar10 = (float)NEON_frsqrte(fVar40);
    fVar10 = fVar10 * fVar40;
    switch((uint)uVar7 & 3) {
    case 0:
      auVar11 = NEON_ext(auVar63,ZEXT416((uint)fVar10),4,1);
      auVar64 = NEON_ext(auVar11,auVar63,0xc,1);
      break;
    case 1:
      auVar58._4_4_ = auVar62._8_4_;
      auVar58._0_4_ = auVar62._0_4_;
      auVar58._8_4_ = auVar62._0_4_;
      auVar58._12_4_ = fVar10;
      auVar11 = NEON_ext(auVar63,auVar63,4,1);
      auVar64 = NEON_ext(auVar58,auVar11,8,1);
      break;
    case 2:
      auVar44 = NEON_ext(auVar63,auVar63,8,1);
      auVar11 = NEON_ext(auVar44,ZEXT416((uint)fVar10),4,1);
      auVar64 = NEON_ext(auVar11,auVar44,4,1);
      break;
    case 3:
      auVar64._12_4_ = fVar10;
      auVar64._0_12_ = auVar62;
    }
    uVar8 = *(ulong *)((long)puVar6 + (ulong)(iVar18 + 1) * 6 + 4);
    auVar59._0_8_ = -(ulong)((uVar7 & 4) == 0);
    auVar59._8_8_ = auVar59._0_8_;
    auVar2._4_4_ = -auVar64._4_4_;
    auVar2._0_4_ = -auVar64._0_4_;
    auVar2._8_4_ = -auVar64._8_4_;
    auVar2._12_4_ = -auVar64._12_4_;
    auVar60._4_4_ = -auVar64._4_4_;
    auVar60._0_4_ = -auVar64._0_4_;
    auVar60._8_4_ = -auVar64._8_4_;
    auVar60._12_4_ = -auVar64._12_4_;
    auVar60 = auVar60 ^ (auVar2 ^ auVar64) & auVar59;
    auVar29._0_8_ = CONCAT44((int)(uVar8 >> 0x12),(uint)uVar8 >> 3) & 0x7fff00007fff;
    auVar29._8_4_ = (uint)(uVar8 >> 0x21) & 0x7fff;
    auVar29._12_4_ = 0;
    auVar11 = NEON_ucvtf(auVar29,4);
    auVar22._0_4_ = fVar37 + auVar11._0_4_ * 4.7938363e-05;
    auVar22._4_4_ = fVar41 + auVar11._4_4_ * 4.7938363e-05;
    auVar22._8_4_ = fVar15 + auVar11._8_4_ * 4.7938363e-05;
    auVar23._12_4_ = fVar16 + auVar11._12_4_ * 4.7938363e-05;
    auVar23._0_12_ = auVar22;
    fVar10 = 1.0 - (auVar22._0_4_ * auVar22._0_4_ + auVar22._4_4_ * auVar22._4_4_ +
                   auVar22._8_4_ * auVar22._8_4_ + auVar23._12_4_ * auVar23._12_4_);
    if (fVar10 <= 0.0) {
      fVar10 = 0.0;
    }
    fVar37 = (float)NEON_frsqrte(fVar10);
    fVar37 = fVar10 - (fVar37 * fVar10 * fVar37 * fVar10 - fVar10) * 0.5;
    fVar41 = (float)NEON_frsqrte(fVar37);
    fVar37 = fVar37 - (fVar41 * fVar37 * fVar41 * fVar37 - fVar10) * 0.5;
    fVar10 = (float)NEON_frsqrte(fVar37);
    fVar10 = fVar10 * fVar37;
    switch((uint)uVar8 & 3) {
    case 0:
      auVar11 = NEON_ext(auVar23,ZEXT416((uint)fVar10),4,1);
      auVar24 = NEON_ext(auVar11,auVar23,0xc,1);
      break;
    case 1:
      auVar30._4_4_ = auVar22._8_4_;
      auVar30._0_4_ = auVar22._0_4_;
      auVar30._8_4_ = auVar22._0_4_;
      auVar30._12_4_ = fVar10;
      auVar11 = NEON_ext(auVar23,auVar23,4,1);
      auVar24 = NEON_ext(auVar30,auVar11,8,1);
      break;
    case 2:
      auVar11 = NEON_ext(auVar23,auVar23,8,1);
      auVar44 = NEON_ext(auVar11,ZEXT416((uint)fVar10),4,1);
      auVar24 = NEON_ext(auVar44,auVar11,4,1);
      break;
    case 3:
      auVar24._12_4_ = fVar10;
      auVar24._0_12_ = auVar22;
    }
    auVar44 = NEON_fmov(0x40400000,4);
    auVar31._0_8_ = -(ulong)((uVar8 & 4) == 0);
    auVar32._0_4_ = -auVar24._0_4_;
    auVar32._4_4_ = -auVar24._4_4_;
    auVar32._8_4_ = -auVar24._8_4_;
    auVar32._12_4_ = -auVar24._12_4_;
    fVar42 = auVar49._0_4_;
    fVar50 = auVar49._4_4_;
    fVar51 = auVar49._8_4_;
    fVar52 = auVar49._12_4_;
    auVar31._8_8_ = auVar31._0_8_;
    auVar32 = auVar32 ^ (auVar32 ^ auVar24) & auVar31;
    fVar41 = auVar14._0_4_;
    fVar15 = auVar14._4_4_;
    fVar16 = auVar14._8_4_;
    fVar40 = auVar14._12_4_;
    fVar10 = (fVar42 - auVar60._0_4_) * 0.5;
    fVar37 = (fVar50 - auVar60._4_4_) * 0.5;
    fVar61 = (fVar51 - auVar60._8_4_) * 0.5;
    fVar27 = (fVar52 - auVar60._12_4_) * 0.5;
    fVar28 = (auVar32._0_4_ - fVar41) * 0.5;
    fVar34 = (auVar32._4_4_ - fVar15) * 0.5;
    fVar35 = (auVar32._8_4_ - fVar16) * 0.5;
    fVar36 = (auVar32._12_4_ - fVar40) * 0.5;
    auVar11 = NEON_fmov(0xc0400000,4);
    fVar41 = fVar41 + (fVar10 + ((((fVar41 * auVar11._0_4_ + fVar42 * auVar44._0_4_) -
                                  (fVar10 + fVar10)) - fVar28) +
                                (((fVar41 + fVar41) - (fVar42 + fVar42)) + fVar10 + fVar28) * fVar17
                                ) * fVar17) * fVar17;
    fVar15 = fVar15 + (fVar37 + ((((fVar15 * auVar11._4_4_ + fVar50 * auVar44._4_4_) -
                                  (fVar37 + fVar37)) - fVar34) +
                                (((fVar15 + fVar15) - (fVar50 + fVar50)) + fVar37 + fVar34) * fVar17
                                ) * fVar17) * fVar17;
    fVar16 = fVar16 + (fVar61 + ((((fVar16 * auVar11._8_4_ + fVar51 * auVar44._8_4_) -
                                  (fVar61 + fVar61)) - fVar35) +
                                (((fVar16 + fVar16) - (fVar51 + fVar51)) + fVar61 + fVar35) * fVar17
                                ) * fVar17) * fVar17;
    fVar40 = fVar40 + (fVar27 + ((((fVar40 * auVar11._12_4_ + fVar52 * auVar44._12_4_) -
                                  (fVar27 + fVar27)) - fVar36) +
                                (((fVar40 + fVar40) - (fVar52 + fVar52)) + fVar27 + fVar36) * fVar17
                                ) * fVar17) * fVar17;
    fVar10 = *(float *)PTR_FloatQuaternionEpsilon_0437a118;
    auVar25._0_4_ = fVar41 * fVar41;
    auVar25._4_4_ = fVar15 * fVar15;
    auVar25._8_4_ = fVar16 * fVar16;
    auVar25._12_4_ = fVar40 * fVar40;
    auVar11 = NEON_ext(auVar25,auVar25,8,1);
    fVar37 = auVar11._0_4_ + auVar25._0_4_;
    fVar61 = auVar11._4_4_ + auVar25._4_4_;
    fVar17 = fVar37 + fVar61;
    fVar37 = fVar37 + fVar61;
    auVar26._8_8_ = CONCAT44(fVar37,fVar17);
    auVar26._0_8_ = CONCAT44(fVar37,fVar17);
    auVar11 = NEON_frsqrte(auVar26,4);
    iVar18 = -(uint)(fVar17 < fVar10);
    iVar19 = -(uint)(fVar37 < fVar10);
    iVar20 = -(uint)(fVar17 < fVar10);
    iVar21 = -(uint)(fVar37 < fVar10);
    auVar38._0_4_ = auVar11._0_4_ * fVar17;
    auVar38._4_4_ = auVar11._4_4_ * fVar37;
    auVar38._8_4_ = auVar11._8_4_ * fVar17;
    auVar38._12_4_ = auVar11._12_4_ * fVar37;
    auVar44 = NEON_frsqrts(auVar11,auVar38,4);
    auVar33._0_4_ = auVar11._0_4_ * auVar44._0_4_;
    auVar33._4_4_ = auVar11._4_4_ * auVar44._4_4_;
    auVar33._8_4_ = auVar11._8_4_ * auVar44._8_4_;
    auVar33._12_4_ = auVar11._12_4_ * auVar44._12_4_;
    auVar39._0_4_ = fVar17 * auVar33._0_4_;
    auVar39._4_4_ = fVar37 * auVar33._4_4_;
    auVar39._8_4_ = fVar17 * auVar33._8_4_;
    auVar39._12_4_ = fVar37 * auVar33._12_4_;
    auVar11 = NEON_frsqrts(auVar33,auVar39,4);
    fVar41 = auVar33._0_4_ * auVar11._0_4_ * fVar41;
    fVar15 = auVar33._4_4_ * auVar11._4_4_ * fVar15;
    fVar16 = auVar33._8_4_ * auVar11._8_4_ * fVar16;
    fVar40 = auVar33._12_4_ * auVar11._12_4_ * fVar40;
    auVar14[0] = SUB41(fVar41,0) & ~(byte)iVar18;
    auVar14[1] = (byte)((uint)fVar41 >> 8) & ~(byte)((uint)iVar18 >> 8);
    auVar14[2] = (byte)((uint)fVar41 >> 0x10) & ~(byte)((uint)iVar18 >> 0x10);
    auVar14[3] = (byte)((uint)fVar41 >> 0x18) & ~(byte)((uint)iVar18 >> 0x18);
    auVar14[4] = SUB41(fVar15,0) & ~(byte)iVar19;
    auVar14[5] = (byte)((uint)fVar15 >> 8) & ~(byte)((uint)iVar19 >> 8);
    auVar14[6] = (byte)((uint)fVar15 >> 0x10) & ~(byte)((uint)iVar19 >> 0x10);
    auVar14[7] = (byte)((uint)fVar15 >> 0x18) & ~(byte)((uint)iVar19 >> 0x18);
    auVar14[8] = SUB41(fVar16,0) & ~(byte)iVar20;
    auVar14[9] = (byte)((uint)fVar16 >> 8) & ~(byte)((uint)iVar20 >> 8);
    auVar14[10] = (byte)((uint)fVar16 >> 0x10) & ~(byte)((uint)iVar20 >> 0x10);
    auVar14[0xb] = (byte)((uint)fVar16 >> 0x18) & ~(byte)((uint)iVar20 >> 0x18);
    auVar14[0xc] = SUB41(fVar40,0) & ~(byte)iVar21;
    auVar14[0xd] = (byte)((uint)fVar40 >> 8) & ~(byte)((uint)iVar21 >> 8);
    auVar14[0xe] = (byte)((uint)fVar40 >> 0x10) & ~(byte)((uint)iVar21 >> 0x10);
    auVar14[0xf] = (byte)((uint)fVar40 >> 0x18) & ~(byte)((uint)iVar21 >> 0x18);
  }
  return auVar14;
}


