/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028b7168; name: FUN_028b7168
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_028b7168(float param_1,int *param_2,long param_3)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  ulong uVar9;
  int *piVar10;
  ushort *puVar11;
  long lVar12;
  ulong uVar13;
  ushort *puVar14;
  uint *puVar15;
  ulong uVar16;
  ulong uVar17;
  undefined4 uVar18;
  undefined1 auVar19 [12];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  ushort uVar22;
  float fVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  float fVar28;
  float fVar29;
  undefined1 auVar30 [16];
  float fVar31;
  float fVar42;
  undefined1 auVar32 [12];
  undefined1 auVar33 [12];
  undefined1 auVar34 [12];
  float fVar43;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  float fVar54;
  
  if (*(ushort *)((long)param_2 - (long)*param_2) < 0xd) {
    piVar10 = (int *)0x0;
  }
  else {
    uVar9 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[6];
    piVar10 = (int *)0x0;
    if (uVar9 != 0) {
      puVar15 = (uint *)((long)param_2 + uVar9);
      piVar10 = (int *)((long)puVar15 + (ulong)*puVar15);
    }
  }
  puVar11 = (ushort *)((long)piVar10 - (long)*piVar10);
  if (*puVar11 < 5) {
    lVar12 = 0;
LAB_028b71e4:
    puVar15 = (uint *)0x0;
  }
  else {
    lVar12 = 0;
    if ((ulong)puVar11[2] != 0) {
      puVar15 = (uint *)((long)piVar10 + (ulong)puVar11[2]);
      lVar12 = (long)puVar15 + (ulong)*puVar15;
    }
    if ((*puVar11 < 7) || ((ulong)puVar11[3] == 0)) goto LAB_028b71e4;
    puVar15 = (uint *)((long)piVar10 + (ulong)puVar11[3]);
    puVar15 = (uint *)((long)puVar15 + (ulong)*puVar15);
  }
  uVar2 = *puVar15;
  uVar9 = (ulong)uVar2;
  uVar3 = *(uint *)(param_3 + 4);
  uVar13 = (ulong)uVar3;
  if (-1 < (int)uVar3) {
    if (uVar2 <= uVar3) {
      return;
    }
    if (*(char *)(param_3 + 2) == '\0') goto LAB_028b727c;
    uVar22 = *(ushort *)(lVar12 + uVar13 * 2 + 4);
    *(undefined1 *)(param_3 + 2) = 0;
    fVar23 = (float)NEON_ucvtf((uint)uVar22);
    if (param_1 <= fVar23) goto LAB_028b727c;
    *(undefined4 *)(param_3 + 4) = 0xffffffff;
    *(undefined4 *)(param_3 + 0xc) = 1;
  }
  puVar11 = (ushort *)(lVar12 + 8);
  lVar4 = ((lVar12 + 4 + uVar9 * 2) - (long)puVar11) + -2;
  if (lVar4 != 0) {
    uVar13 = lVar4 >> 1;
    puVar14 = puVar11;
    do {
      uVar17 = uVar13 >> 1;
      puVar11 = puVar14 + uVar17 + 1;
      uVar13 = uVar13 + ~uVar17;
      if (param_1 <= (float)puVar14[uVar17]) {
        puVar11 = puVar14;
        uVar13 = uVar17;
      }
      puVar14 = puVar11;
    } while (uVar13 != 0);
  }
  uVar13 = (ulong)((int)((ulong)((long)puVar11 - (lVar12 + 4)) >> 1) - 2);
LAB_028b727c:
  if ((uint)uVar13 < uVar2) {
    lVar12 = lVar12 + 4;
    uVar17 = (ulong)(*(int *)(param_3 + 0xc) + 2U & 4);
    uVar18 = NEON_ucvtf((uint)*(ushort *)(lVar12 + uVar13 * 2));
    *(undefined4 *)(param_3 + uVar17 * 4 + 0x10) = uVar18;
    uVar16 = *(ulong *)((long)puVar15 + uVar13 * 6 + 4);
    auVar30._0_8_ = CONCAT44((int)(uVar16 >> 0x12),(uint)uVar16 >> 3) & 0x7fff00007fff;
    auVar30._8_4_ = (uint)(uVar16 >> 0x21) & 0x7fff;
    auVar30._12_4_ = 0;
    auVar30 = NEON_ucvtf(auVar30,4);
    fVar28 = (float)_DAT_03889ed0;
    auVar32._0_4_ = fVar28 + auVar30._0_4_ * 4.7938363e-05;
    fVar31 = (float)((ulong)_DAT_03889ed0 >> 0x20);
    auVar32._4_4_ = fVar31 + auVar30._4_4_ * 4.7938363e-05;
    fVar42 = (float)_UNK_03889ed8;
    fVar43 = (float)((ulong)_UNK_03889ed8 >> 0x20);
    auVar32._8_4_ = fVar42 + auVar30._8_4_ * 4.7938363e-05;
    auVar44._12_4_ = fVar43 + auVar30._12_4_ * 4.7938363e-05;
    auVar44._0_12_ = auVar32;
    fVar23 = 1.0 - (auVar32._0_4_ * auVar32._0_4_ + auVar32._4_4_ * auVar32._4_4_ +
                   auVar32._8_4_ * auVar32._8_4_ + auVar44._12_4_ * auVar44._12_4_);
    if (fVar23 <= 0.0) {
      fVar23 = 0.0;
    }
    fVar29 = (float)NEON_frsqrte(fVar23);
    fVar29 = fVar23 - (fVar29 * fVar23 * fVar29 * fVar23 - fVar23) * 0.5;
    fVar54 = (float)NEON_frsqrte(fVar29);
    fVar29 = fVar29 - (fVar54 * fVar29 * fVar54 * fVar29 - fVar23) * 0.5;
    fVar23 = (float)NEON_frsqrte(fVar29);
    fVar23 = fVar23 * fVar29;
    switch((uint)uVar16 & 3) {
    case 0:
      auVar30 = NEON_ext(auVar44,ZEXT416((uint)fVar23),4,1);
      auVar35 = NEON_ext(auVar30,auVar44,0xc,1);
      break;
    case 1:
      auVar45._4_4_ = auVar32._8_4_;
      auVar45._0_4_ = auVar32._0_4_;
      auVar45._8_4_ = auVar32._0_4_;
      auVar45._12_4_ = fVar23;
      auVar30 = NEON_ext(auVar44,auVar44,4,1);
      auVar35 = NEON_ext(auVar45,auVar30,8,1);
      break;
    case 2:
      auVar30 = NEON_ext(auVar44,auVar44,8,1);
      auVar44 = NEON_ext(auVar30,ZEXT416((uint)fVar23),4,1);
      auVar35 = NEON_ext(auVar44,auVar30,4,1);
      break;
    case 3:
      auVar35._12_4_ = fVar23;
      auVar35._0_12_ = auVar32;
    }
    lVar4 = param_3 + uVar17 * 0x10;
    auVar46._0_8_ = -(ulong)((uVar16 & 4) == 0);
    auVar46._8_8_ = auVar46._0_8_;
    auVar6._4_4_ = -auVar35._4_4_;
    auVar6._0_4_ = -auVar35._0_4_;
    auVar6._8_4_ = -auVar35._8_4_;
    auVar6._12_4_ = -auVar35._12_4_;
    auVar47._4_4_ = -auVar35._4_4_;
    auVar47._0_4_ = -auVar35._0_4_;
    auVar47._8_4_ = -auVar35._8_4_;
    auVar47._12_4_ = -auVar35._12_4_;
    auVar47 = auVar47 ^ (auVar6 ^ auVar35) & auVar46;
    uVar16 = uVar13 + 1;
    *(long *)(lVar4 + 0x38) = auVar47._8_8_;
    *(long *)(lVar4 + 0x30) = auVar47._0_8_;
    if (uVar16 < uVar9) {
      uVar18 = NEON_ucvtf((uint)*(ushort *)(lVar12 + uVar16 * 2));
      *(undefined4 *)(param_3 + (uVar17 | 1) * 4 + 0x10) = uVar18;
      uVar16 = *(ulong *)((long)puVar15 + uVar16 * 6 + 4);
      auVar36._0_8_ = CONCAT44((int)(uVar16 >> 0x12),(uint)uVar16 >> 3) & 0x7fff00007fff;
      auVar36._8_4_ = (uint)(uVar16 >> 0x21) & 0x7fff;
      auVar36._12_4_ = 0;
      auVar30 = NEON_ucvtf(auVar36,4);
      auVar33._0_4_ = fVar28 + auVar30._0_4_ * 4.7938363e-05;
      auVar33._4_4_ = fVar31 + auVar30._4_4_ * 4.7938363e-05;
      auVar33._8_4_ = fVar42 + auVar30._8_4_ * 4.7938363e-05;
      auVar37._12_4_ = fVar43 + auVar30._12_4_ * 4.7938363e-05;
      auVar37._0_12_ = auVar33;
      fVar23 = 1.0 - (auVar33._0_4_ * auVar33._0_4_ + auVar33._4_4_ * auVar33._4_4_ +
                     auVar33._8_4_ * auVar33._8_4_ + auVar37._12_4_ * auVar37._12_4_);
      if (fVar23 <= 0.0) {
        fVar23 = 0.0;
      }
      fVar29 = (float)NEON_frsqrte(fVar23);
      fVar29 = fVar23 - (fVar29 * fVar23 * fVar29 * fVar23 - fVar23) * 0.5;
      fVar54 = (float)NEON_frsqrte(fVar29);
      fVar29 = fVar29 - (fVar54 * fVar29 * fVar54 * fVar29 - fVar23) * 0.5;
      fVar23 = (float)NEON_frsqrte(fVar29);
      fVar23 = fVar23 * fVar29;
      switch((uint)uVar16 & 3) {
      case 0:
        auVar30 = NEON_ext(auVar37,ZEXT416((uint)fVar23),4,1);
        auVar38 = NEON_ext(auVar30,auVar37,0xc,1);
        break;
      case 1:
        auVar48._4_4_ = auVar33._8_4_;
        auVar48._0_4_ = auVar33._0_4_;
        auVar48._8_4_ = auVar33._0_4_;
        auVar48._12_4_ = fVar23;
        auVar30 = NEON_ext(auVar37,auVar37,4,1);
        auVar38 = NEON_ext(auVar48,auVar30,8,1);
        break;
      case 2:
        auVar30 = NEON_ext(auVar37,auVar37,8,1);
        auVar44 = NEON_ext(auVar30,ZEXT416((uint)fVar23),4,1);
        auVar38 = NEON_ext(auVar44,auVar30,4,1);
        break;
      case 3:
        auVar38._12_4_ = fVar23;
        auVar38._0_12_ = auVar33;
      }
      uVar1 = uVar13 + 2;
      auVar49._0_8_ = -(ulong)((uVar16 & 4) == 0);
      auVar49._8_8_ = auVar49._0_8_;
      lVar4 = param_3 + (uVar17 | 1) * 0x10;
      auVar7._4_4_ = -auVar38._4_4_;
      auVar7._0_4_ = -auVar38._0_4_;
      auVar7._8_4_ = -auVar38._8_4_;
      auVar7._12_4_ = -auVar38._12_4_;
      auVar50._4_4_ = -auVar38._4_4_;
      auVar50._0_4_ = -auVar38._0_4_;
      auVar50._8_4_ = -auVar38._8_4_;
      auVar50._12_4_ = -auVar38._12_4_;
      auVar50 = auVar50 ^ (auVar7 ^ auVar38) & auVar49;
      *(long *)(lVar4 + 0x38) = auVar50._8_8_;
      *(long *)(lVar4 + 0x30) = auVar50._0_8_;
      if (uVar1 < uVar9) {
        uVar18 = NEON_ucvtf((uint)*(ushort *)(lVar12 + uVar1 * 2));
        *(undefined4 *)(param_3 + (uVar17 | 2) * 4 + 0x10) = uVar18;
        uVar16 = *(ulong *)((long)puVar15 + uVar1 * 6 + 4);
        auVar39._0_8_ = CONCAT44((int)(uVar16 >> 0x12),(uint)uVar16 >> 3) & 0x7fff00007fff;
        auVar39._8_4_ = (uint)(uVar16 >> 0x21) & 0x7fff;
        auVar39._12_4_ = 0;
        auVar30 = NEON_ucvtf(auVar39,4);
        auVar34._0_4_ = fVar28 + auVar30._0_4_ * 4.7938363e-05;
        auVar34._4_4_ = fVar31 + auVar30._4_4_ * 4.7938363e-05;
        auVar34._8_4_ = fVar42 + auVar30._8_4_ * 4.7938363e-05;
        auVar40._12_4_ = fVar43 + auVar30._12_4_ * 4.7938363e-05;
        auVar40._0_12_ = auVar34;
        fVar23 = 1.0 - (auVar34._0_4_ * auVar34._0_4_ + auVar34._4_4_ * auVar34._4_4_ +
                       auVar34._8_4_ * auVar34._8_4_ + auVar40._12_4_ * auVar40._12_4_);
        if (fVar23 <= 0.0) {
          fVar23 = 0.0;
        }
        fVar29 = (float)NEON_frsqrte(fVar23);
        fVar29 = fVar23 - (fVar29 * fVar23 * fVar29 * fVar23 - fVar23) * 0.5;
        fVar54 = (float)NEON_frsqrte(fVar29);
        fVar29 = fVar29 - (fVar54 * fVar29 * fVar54 * fVar29 - fVar23) * 0.5;
        fVar23 = (float)NEON_frsqrte(fVar29);
        fVar23 = fVar23 * fVar29;
        switch((uint)uVar16 & 3) {
        case 0:
          auVar30 = NEON_ext(auVar40,ZEXT416((uint)fVar23),4,1);
          auVar41 = NEON_ext(auVar30,auVar40,0xc,1);
          break;
        case 1:
          auVar51._4_4_ = auVar34._8_4_;
          auVar51._0_4_ = auVar34._0_4_;
          auVar51._8_4_ = auVar34._0_4_;
          auVar51._12_4_ = fVar23;
          auVar30 = NEON_ext(auVar40,auVar40,4,1);
          auVar41 = NEON_ext(auVar51,auVar30,8,1);
          break;
        case 2:
          auVar30 = NEON_ext(auVar40,auVar40,8,1);
          auVar44 = NEON_ext(auVar30,ZEXT416((uint)fVar23),4,1);
          auVar41 = NEON_ext(auVar44,auVar30,4,1);
          break;
        case 3:
          auVar41._12_4_ = fVar23;
          auVar41._0_12_ = auVar34;
        }
        auVar52._0_8_ = -(ulong)((uVar16 & 4) == 0);
        auVar52._8_8_ = auVar52._0_8_;
        auVar8._4_4_ = -auVar41._4_4_;
        auVar8._0_4_ = -auVar41._0_4_;
        auVar8._8_4_ = -auVar41._8_4_;
        auVar8._12_4_ = -auVar41._12_4_;
        auVar53._4_4_ = -auVar41._4_4_;
        auVar53._0_4_ = -auVar41._0_4_;
        auVar53._8_4_ = -auVar41._8_4_;
        auVar53._12_4_ = -auVar41._12_4_;
        auVar53 = auVar53 ^ (auVar8 ^ auVar41) & auVar52;
        lVar4 = param_3 + (uVar17 | 2) * 0x10;
        *(long *)(lVar4 + 0x38) = auVar53._8_8_;
        *(long *)(lVar4 + 0x30) = auVar53._0_8_;
        uVar16 = uVar13 + 3;
        if (uVar16 < uVar9) {
          uVar18 = NEON_ucvtf((uint)*(ushort *)(lVar12 + uVar16 * 2));
          *(undefined4 *)(param_3 + (uVar17 | 3) * 4 + 0x10) = uVar18;
          uVar9 = *(ulong *)((long)puVar15 + uVar16 * 6 + 4);
          auVar24._0_8_ = CONCAT44((int)(uVar9 >> 0x12),(uint)uVar9 >> 3) & 0x7fff00007fff;
          auVar24._8_4_ = (uint)(uVar9 >> 0x21) & 0x7fff;
          auVar24._12_4_ = 0;
          auVar30 = NEON_ucvtf(auVar24,4);
          auVar19._0_4_ = fVar28 + auVar30._0_4_ * 4.7938363e-05;
          auVar19._4_4_ = fVar31 + auVar30._4_4_ * 4.7938363e-05;
          auVar19._8_4_ = fVar42 + auVar30._8_4_ * 4.7938363e-05;
          auVar20._12_4_ = fVar43 + auVar30._12_4_ * 4.7938363e-05;
          auVar20._0_12_ = auVar19;
          fVar23 = 1.0 - (auVar19._0_4_ * auVar19._0_4_ + auVar19._4_4_ * auVar19._4_4_ +
                         auVar19._8_4_ * auVar19._8_4_ + auVar20._12_4_ * auVar20._12_4_);
          if (fVar23 <= 0.0) {
            fVar23 = 0.0;
          }
          fVar28 = (float)NEON_frsqrte(fVar23);
          fVar28 = fVar23 - (fVar28 * fVar23 * fVar28 * fVar23 - fVar23) * 0.5;
          fVar31 = (float)NEON_frsqrte(fVar28);
          fVar28 = fVar28 - (fVar31 * fVar28 * fVar31 * fVar28 - fVar23) * 0.5;
          fVar23 = (float)NEON_frsqrte(fVar28);
          fVar23 = fVar23 * fVar28;
          switch((uint)uVar9 & 3) {
          case 0:
            auVar30 = NEON_ext(auVar20,ZEXT416((uint)fVar23),4,1);
            auVar21 = NEON_ext(auVar30,auVar20,0xc,1);
            break;
          case 1:
            auVar25._4_4_ = auVar19._8_4_;
            auVar25._0_4_ = auVar19._0_4_;
            auVar25._8_4_ = auVar19._0_4_;
            auVar25._12_4_ = fVar23;
            auVar30 = NEON_ext(auVar20,auVar20,4,1);
            auVar21 = NEON_ext(auVar25,auVar30,8,1);
            break;
          case 2:
            auVar30 = NEON_ext(auVar20,auVar20,8,1);
            auVar44 = NEON_ext(auVar30,ZEXT416((uint)fVar23),4,1);
            auVar21 = NEON_ext(auVar44,auVar30,4,1);
            break;
          case 3:
            auVar21._12_4_ = fVar23;
            auVar21._0_12_ = auVar19;
          }
          lVar12 = param_3 + (uVar17 | 3) * 0x10;
          auVar26._0_8_ = -(ulong)((uVar9 & 4) == 0);
          auVar26._8_8_ = auVar26._0_8_;
          auVar5._4_4_ = -auVar21._4_4_;
          auVar5._0_4_ = -auVar21._0_4_;
          auVar5._8_4_ = -auVar21._8_4_;
          auVar5._12_4_ = -auVar21._12_4_;
          auVar27._4_4_ = -auVar21._4_4_;
          auVar27._0_4_ = -auVar21._0_4_;
          auVar27._8_4_ = -auVar21._8_4_;
          auVar27._12_4_ = -auVar21._12_4_;
          auVar27 = auVar27 ^ (auVar5 ^ auVar21) & auVar26;
          *(long *)(lVar12 + 0x38) = auVar27._8_8_;
          *(long *)(lVar12 + 0x30) = auVar27._0_8_;
        }
      }
    }
  }
  *(uint *)(param_3 + 4) = (uint)uVar13 + 4;
  return;
}


