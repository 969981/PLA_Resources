/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028b7e7c; name: FUN_028b7e7c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_028b7e7c(float param_1,int *param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  byte *pbVar9;
  byte *pbVar10;
  ulong uVar11;
  int *piVar12;
  ushort *puVar13;
  long lVar14;
  ulong uVar15;
  uint *puVar16;
  ulong uVar17;
  ulong uVar18;
  undefined4 uVar19;
  undefined1 auVar20 [12];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  byte bVar23;
  float fVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  float fVar29;
  float fVar30;
  undefined1 auVar31 [16];
  float fVar32;
  float fVar43;
  undefined1 auVar33 [12];
  undefined1 auVar34 [12];
  undefined1 auVar35 [12];
  float fVar44;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  float fVar55;
  
  if (*(ushort *)((long)param_2 - (long)*param_2) < 0xd) {
    piVar12 = (int *)0x0;
  }
  else {
    uVar11 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[6];
    piVar12 = (int *)0x0;
    if (uVar11 != 0) {
      puVar16 = (uint *)((long)param_2 + uVar11);
      piVar12 = (int *)((long)puVar16 + (ulong)*puVar16);
    }
  }
  puVar13 = (ushort *)((long)piVar12 - (long)*piVar12);
  if (*puVar13 < 5) {
    lVar14 = 0;
LAB_028b7ef8:
    puVar16 = (uint *)0x0;
  }
  else {
    lVar14 = 0;
    if ((ulong)puVar13[2] != 0) {
      puVar16 = (uint *)((long)piVar12 + (ulong)puVar13[2]);
      lVar14 = (long)puVar16 + (ulong)*puVar16;
    }
    if ((*puVar13 < 7) || ((ulong)puVar13[3] == 0)) goto LAB_028b7ef8;
    puVar16 = (uint *)((long)piVar12 + (ulong)puVar13[3]);
    puVar16 = (uint *)((long)puVar16 + (ulong)*puVar16);
  }
  uVar3 = *puVar16;
  uVar11 = (ulong)uVar3;
  uVar4 = *(uint *)(param_3 + 4);
  uVar15 = (ulong)uVar4;
  if (-1 < (int)uVar4) {
    if (uVar3 <= uVar4) {
      return;
    }
    if (*(char *)(param_3 + 2) == '\0') goto LAB_028b7f88;
    bVar23 = *(byte *)(lVar14 + uVar15 + 4);
    *(undefined1 *)(param_3 + 2) = 0;
    fVar24 = (float)NEON_ucvtf((uint)bVar23);
    if (param_1 <= fVar24) goto LAB_028b7f88;
    *(undefined4 *)(param_3 + 4) = 0xffffffff;
    *(undefined4 *)(param_3 + 0xc) = 1;
  }
  pbVar10 = (byte *)(lVar14 + 6U);
  uVar15 = ~(lVar14 + 6U) + lVar14 + 4 + uVar11;
  while (pbVar9 = pbVar10, uVar15 != 0) {
    uVar18 = uVar15 >> 1;
    pbVar10 = pbVar9 + uVar18 + 1;
    uVar15 = uVar15 + ~uVar18;
    if (param_1 <= (float)pbVar9[uVar18]) {
      pbVar10 = pbVar9;
      uVar15 = uVar18;
    }
  }
  uVar15 = (ulong)(((int)pbVar9 - (int)(lVar14 + 4)) - 2);
LAB_028b7f88:
  if ((uint)uVar15 < uVar3) {
    lVar14 = lVar14 + 4;
    uVar19 = NEON_ucvtf((uint)*(byte *)(lVar14 + uVar15));
    uVar18 = (ulong)(*(int *)(param_3 + 0xc) + 2U & 4);
    *(undefined4 *)(param_3 + uVar18 * 4 + 0x10) = uVar19;
    uVar17 = *(ulong *)((long)puVar16 + uVar15 * 6 + 4);
    auVar31._0_8_ = CONCAT44((int)(uVar17 >> 0x12),(uint)uVar17 >> 3) & 0x7fff00007fff;
    auVar31._8_4_ = (uint)(uVar17 >> 0x21) & 0x7fff;
    auVar31._12_4_ = 0;
    auVar31 = NEON_ucvtf(auVar31,4);
    fVar29 = (float)_DAT_03889ed0;
    auVar33._0_4_ = fVar29 + auVar31._0_4_ * 4.7938363e-05;
    fVar32 = (float)((ulong)_DAT_03889ed0 >> 0x20);
    auVar33._4_4_ = fVar32 + auVar31._4_4_ * 4.7938363e-05;
    fVar43 = (float)_UNK_03889ed8;
    fVar44 = (float)((ulong)_UNK_03889ed8 >> 0x20);
    auVar33._8_4_ = fVar43 + auVar31._8_4_ * 4.7938363e-05;
    auVar45._12_4_ = fVar44 + auVar31._12_4_ * 4.7938363e-05;
    auVar45._0_12_ = auVar33;
    fVar24 = 1.0 - (auVar33._0_4_ * auVar33._0_4_ + auVar33._4_4_ * auVar33._4_4_ +
                   auVar33._8_4_ * auVar33._8_4_ + auVar45._12_4_ * auVar45._12_4_);
    if (fVar24 <= 0.0) {
      fVar24 = 0.0;
    }
    fVar30 = (float)NEON_frsqrte(fVar24);
    fVar30 = fVar24 - (fVar30 * fVar24 * fVar30 * fVar24 - fVar24) * 0.5;
    fVar55 = (float)NEON_frsqrte(fVar30);
    fVar30 = fVar30 - (fVar55 * fVar30 * fVar55 * fVar30 - fVar24) * 0.5;
    fVar24 = (float)NEON_frsqrte(fVar30);
    fVar24 = fVar24 * fVar30;
    switch((uint)uVar17 & 3) {
    case 0:
      auVar31 = NEON_ext(auVar45,ZEXT416((uint)fVar24),4,1);
      auVar36 = NEON_ext(auVar31,auVar45,0xc,1);
      break;
    case 1:
      auVar46._4_4_ = auVar33._8_4_;
      auVar46._0_4_ = auVar33._0_4_;
      auVar46._8_4_ = auVar33._0_4_;
      auVar46._12_4_ = fVar24;
      auVar31 = NEON_ext(auVar45,auVar45,4,1);
      auVar36 = NEON_ext(auVar46,auVar31,8,1);
      break;
    case 2:
      auVar31 = NEON_ext(auVar45,auVar45,8,1);
      auVar45 = NEON_ext(auVar31,ZEXT416((uint)fVar24),4,1);
      auVar36 = NEON_ext(auVar45,auVar31,4,1);
      break;
    case 3:
      auVar36._12_4_ = fVar24;
      auVar36._0_12_ = auVar33;
    }
    lVar2 = param_3 + uVar18 * 0x10;
    auVar47._0_8_ = -(ulong)((uVar17 & 4) == 0);
    auVar47._8_8_ = auVar47._0_8_;
    auVar6._4_4_ = -auVar36._4_4_;
    auVar6._0_4_ = -auVar36._0_4_;
    auVar6._8_4_ = -auVar36._8_4_;
    auVar6._12_4_ = -auVar36._12_4_;
    auVar48._4_4_ = -auVar36._4_4_;
    auVar48._0_4_ = -auVar36._0_4_;
    auVar48._8_4_ = -auVar36._8_4_;
    auVar48._12_4_ = -auVar36._12_4_;
    auVar48 = auVar48 ^ (auVar6 ^ auVar36) & auVar47;
    uVar17 = uVar15 + 1;
    *(long *)(lVar2 + 0x38) = auVar48._8_8_;
    *(long *)(lVar2 + 0x30) = auVar48._0_8_;
    if (uVar17 < uVar11) {
      uVar19 = NEON_ucvtf((uint)*(byte *)(lVar14 + uVar17));
      *(undefined4 *)(param_3 + (uVar18 | 1) * 4 + 0x10) = uVar19;
      uVar17 = *(ulong *)((long)puVar16 + uVar17 * 6 + 4);
      auVar37._0_8_ = CONCAT44((int)(uVar17 >> 0x12),(uint)uVar17 >> 3) & 0x7fff00007fff;
      auVar37._8_4_ = (uint)(uVar17 >> 0x21) & 0x7fff;
      auVar37._12_4_ = 0;
      auVar31 = NEON_ucvtf(auVar37,4);
      auVar34._0_4_ = fVar29 + auVar31._0_4_ * 4.7938363e-05;
      auVar34._4_4_ = fVar32 + auVar31._4_4_ * 4.7938363e-05;
      auVar34._8_4_ = fVar43 + auVar31._8_4_ * 4.7938363e-05;
      auVar38._12_4_ = fVar44 + auVar31._12_4_ * 4.7938363e-05;
      auVar38._0_12_ = auVar34;
      fVar24 = 1.0 - (auVar34._0_4_ * auVar34._0_4_ + auVar34._4_4_ * auVar34._4_4_ +
                     auVar34._8_4_ * auVar34._8_4_ + auVar38._12_4_ * auVar38._12_4_);
      if (fVar24 <= 0.0) {
        fVar24 = 0.0;
      }
      fVar30 = (float)NEON_frsqrte(fVar24);
      fVar30 = fVar24 - (fVar30 * fVar24 * fVar30 * fVar24 - fVar24) * 0.5;
      fVar55 = (float)NEON_frsqrte(fVar30);
      fVar30 = fVar30 - (fVar55 * fVar30 * fVar55 * fVar30 - fVar24) * 0.5;
      fVar24 = (float)NEON_frsqrte(fVar30);
      fVar24 = fVar24 * fVar30;
      switch((uint)uVar17 & 3) {
      case 0:
        auVar31 = NEON_ext(auVar38,ZEXT416((uint)fVar24),4,1);
        auVar39 = NEON_ext(auVar31,auVar38,0xc,1);
        break;
      case 1:
        auVar49._4_4_ = auVar34._8_4_;
        auVar49._0_4_ = auVar34._0_4_;
        auVar49._8_4_ = auVar34._0_4_;
        auVar49._12_4_ = fVar24;
        auVar31 = NEON_ext(auVar38,auVar38,4,1);
        auVar39 = NEON_ext(auVar49,auVar31,8,1);
        break;
      case 2:
        auVar31 = NEON_ext(auVar38,auVar38,8,1);
        auVar45 = NEON_ext(auVar31,ZEXT416((uint)fVar24),4,1);
        auVar39 = NEON_ext(auVar45,auVar31,4,1);
        break;
      case 3:
        auVar39._12_4_ = fVar24;
        auVar39._0_12_ = auVar34;
      }
      uVar1 = uVar15 + 2;
      auVar50._0_8_ = -(ulong)((uVar17 & 4) == 0);
      auVar50._8_8_ = auVar50._0_8_;
      lVar2 = param_3 + (uVar18 | 1) * 0x10;
      auVar7._4_4_ = -auVar39._4_4_;
      auVar7._0_4_ = -auVar39._0_4_;
      auVar7._8_4_ = -auVar39._8_4_;
      auVar7._12_4_ = -auVar39._12_4_;
      auVar51._4_4_ = -auVar39._4_4_;
      auVar51._0_4_ = -auVar39._0_4_;
      auVar51._8_4_ = -auVar39._8_4_;
      auVar51._12_4_ = -auVar39._12_4_;
      auVar51 = auVar51 ^ (auVar7 ^ auVar39) & auVar50;
      *(long *)(lVar2 + 0x38) = auVar51._8_8_;
      *(long *)(lVar2 + 0x30) = auVar51._0_8_;
      if (uVar1 < uVar11) {
        uVar19 = NEON_ucvtf((uint)*(byte *)(lVar14 + uVar1));
        *(undefined4 *)(param_3 + (uVar18 | 2) * 4 + 0x10) = uVar19;
        uVar17 = *(ulong *)((long)puVar16 + uVar1 * 6 + 4);
        auVar40._0_8_ = CONCAT44((int)(uVar17 >> 0x12),(uint)uVar17 >> 3) & 0x7fff00007fff;
        auVar40._8_4_ = (uint)(uVar17 >> 0x21) & 0x7fff;
        auVar40._12_4_ = 0;
        auVar31 = NEON_ucvtf(auVar40,4);
        auVar35._0_4_ = fVar29 + auVar31._0_4_ * 4.7938363e-05;
        auVar35._4_4_ = fVar32 + auVar31._4_4_ * 4.7938363e-05;
        auVar35._8_4_ = fVar43 + auVar31._8_4_ * 4.7938363e-05;
        auVar41._12_4_ = fVar44 + auVar31._12_4_ * 4.7938363e-05;
        auVar41._0_12_ = auVar35;
        fVar24 = 1.0 - (auVar35._0_4_ * auVar35._0_4_ + auVar35._4_4_ * auVar35._4_4_ +
                       auVar35._8_4_ * auVar35._8_4_ + auVar41._12_4_ * auVar41._12_4_);
        if (fVar24 <= 0.0) {
          fVar24 = 0.0;
        }
        fVar30 = (float)NEON_frsqrte(fVar24);
        fVar30 = fVar24 - (fVar30 * fVar24 * fVar30 * fVar24 - fVar24) * 0.5;
        fVar55 = (float)NEON_frsqrte(fVar30);
        fVar30 = fVar30 - (fVar55 * fVar30 * fVar55 * fVar30 - fVar24) * 0.5;
        fVar24 = (float)NEON_frsqrte(fVar30);
        fVar24 = fVar24 * fVar30;
        switch((uint)uVar17 & 3) {
        case 0:
          auVar31 = NEON_ext(auVar41,ZEXT416((uint)fVar24),4,1);
          auVar42 = NEON_ext(auVar31,auVar41,0xc,1);
          break;
        case 1:
          auVar52._4_4_ = auVar35._8_4_;
          auVar52._0_4_ = auVar35._0_4_;
          auVar52._8_4_ = auVar35._0_4_;
          auVar52._12_4_ = fVar24;
          auVar31 = NEON_ext(auVar41,auVar41,4,1);
          auVar42 = NEON_ext(auVar52,auVar31,8,1);
          break;
        case 2:
          auVar31 = NEON_ext(auVar41,auVar41,8,1);
          auVar45 = NEON_ext(auVar31,ZEXT416((uint)fVar24),4,1);
          auVar42 = NEON_ext(auVar45,auVar31,4,1);
          break;
        case 3:
          auVar42._12_4_ = fVar24;
          auVar42._0_12_ = auVar35;
        }
        auVar53._0_8_ = -(ulong)((uVar17 & 4) == 0);
        auVar53._8_8_ = auVar53._0_8_;
        auVar8._4_4_ = -auVar42._4_4_;
        auVar8._0_4_ = -auVar42._0_4_;
        auVar8._8_4_ = -auVar42._8_4_;
        auVar8._12_4_ = -auVar42._12_4_;
        auVar54._4_4_ = -auVar42._4_4_;
        auVar54._0_4_ = -auVar42._0_4_;
        auVar54._8_4_ = -auVar42._8_4_;
        auVar54._12_4_ = -auVar42._12_4_;
        auVar54 = auVar54 ^ (auVar8 ^ auVar42) & auVar53;
        lVar2 = param_3 + (uVar18 | 2) * 0x10;
        *(long *)(lVar2 + 0x38) = auVar54._8_8_;
        *(long *)(lVar2 + 0x30) = auVar54._0_8_;
        uVar17 = uVar15 + 3;
        if (uVar17 < uVar11) {
          uVar19 = NEON_ucvtf((uint)*(byte *)(lVar14 + uVar17));
          *(undefined4 *)(param_3 + (uVar18 | 3) * 4 + 0x10) = uVar19;
          uVar11 = *(ulong *)((long)puVar16 + uVar17 * 6 + 4);
          auVar25._0_8_ = CONCAT44((int)(uVar11 >> 0x12),(uint)uVar11 >> 3) & 0x7fff00007fff;
          auVar25._8_4_ = (uint)(uVar11 >> 0x21) & 0x7fff;
          auVar25._12_4_ = 0;
          auVar31 = NEON_ucvtf(auVar25,4);
          auVar20._0_4_ = fVar29 + auVar31._0_4_ * 4.7938363e-05;
          auVar20._4_4_ = fVar32 + auVar31._4_4_ * 4.7938363e-05;
          auVar20._8_4_ = fVar43 + auVar31._8_4_ * 4.7938363e-05;
          auVar21._12_4_ = fVar44 + auVar31._12_4_ * 4.7938363e-05;
          auVar21._0_12_ = auVar20;
          fVar24 = 1.0 - (auVar20._0_4_ * auVar20._0_4_ + auVar20._4_4_ * auVar20._4_4_ +
                         auVar20._8_4_ * auVar20._8_4_ + auVar21._12_4_ * auVar21._12_4_);
          if (fVar24 <= 0.0) {
            fVar24 = 0.0;
          }
          fVar29 = (float)NEON_frsqrte(fVar24);
          fVar29 = fVar24 - (fVar29 * fVar24 * fVar29 * fVar24 - fVar24) * 0.5;
          fVar32 = (float)NEON_frsqrte(fVar29);
          fVar29 = fVar29 - (fVar32 * fVar29 * fVar32 * fVar29 - fVar24) * 0.5;
          fVar24 = (float)NEON_frsqrte(fVar29);
          fVar24 = fVar24 * fVar29;
          switch((uint)uVar11 & 3) {
          case 0:
            auVar31 = NEON_ext(auVar21,ZEXT416((uint)fVar24),4,1);
            auVar22 = NEON_ext(auVar31,auVar21,0xc,1);
            break;
          case 1:
            auVar26._4_4_ = auVar20._8_4_;
            auVar26._0_4_ = auVar20._0_4_;
            auVar26._8_4_ = auVar20._0_4_;
            auVar26._12_4_ = fVar24;
            auVar31 = NEON_ext(auVar21,auVar21,4,1);
            auVar22 = NEON_ext(auVar26,auVar31,8,1);
            break;
          case 2:
            auVar31 = NEON_ext(auVar21,auVar21,8,1);
            auVar45 = NEON_ext(auVar31,ZEXT416((uint)fVar24),4,1);
            auVar22 = NEON_ext(auVar45,auVar31,4,1);
            break;
          case 3:
            auVar22._12_4_ = fVar24;
            auVar22._0_12_ = auVar20;
          }
          lVar14 = param_3 + (uVar18 | 3) * 0x10;
          auVar27._0_8_ = -(ulong)((uVar11 & 4) == 0);
          auVar27._8_8_ = auVar27._0_8_;
          auVar5._4_4_ = -auVar22._4_4_;
          auVar5._0_4_ = -auVar22._0_4_;
          auVar5._8_4_ = -auVar22._8_4_;
          auVar5._12_4_ = -auVar22._12_4_;
          auVar28._4_4_ = -auVar22._4_4_;
          auVar28._0_4_ = -auVar22._0_4_;
          auVar28._8_4_ = -auVar22._8_4_;
          auVar28._12_4_ = -auVar22._12_4_;
          auVar28 = auVar28 ^ (auVar5 ^ auVar22) & auVar27;
          *(long *)(lVar14 + 0x38) = auVar28._8_8_;
          *(long *)(lVar14 + 0x30) = auVar28._0_8_;
        }
      }
    }
  }
  *(uint *)(param_3 + 4) = (uint)uVar15 + 4;
  return;
}


