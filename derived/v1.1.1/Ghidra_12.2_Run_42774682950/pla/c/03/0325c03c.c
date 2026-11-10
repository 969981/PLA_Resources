/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0325c03c; name: FUN_0325c03c
 */


undefined8 FUN_0325c03c(long *param_1,long *param_2)

{
  int iVar1;
  uint uVar2;
  float *pfVar3;
  undefined8 *puVar4;
  undefined1 auVar5 [16];
  uint uVar6;
  undefined1 auVar7 [12];
  undefined1 auVar8 [12];
  undefined1 auVar9 [12];
  undefined1 auVar10 [12];
  undefined *puVar11;
  ulong uVar12;
  uint uVar13;
  undefined1 (*pauVar14) [12];
  long lVar15;
  long lVar16;
  undefined1 (*pauVar17) [16];
  long lVar18;
  long lVar19;
  float fVar20;
  float fVar21;
  undefined8 uVar22;
  undefined1 auVar23 [16];
  float fVar28;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  float fVar29;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  float fVar30;
  undefined8 uVar31;
  float fVar34;
  float fVar35;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  undefined1 auVar39 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  float fVar46;
  float fVar47;
  float fVar48;
  undefined8 uVar49;
  float fVar50;
  undefined8 local_80;
  int *local_78;
  undefined8 local_70;
  long local_68;
  undefined8 local_60;
  long local_58;
  
  lVar19 = tpidr_el0;
  if (*(long *)(lVar19 + 0x38d490) == 0) {
    lVar18 = FUN_0333d16c(0,1);
    *(long *)(lVar19 + 0x38d490) = lVar18;
    lVar18 = *(long *)(lVar18 + 0x10);
  }
  else {
    lVar18 = *(long *)(*(long *)(lVar19 + 0x38d490) + 0x10);
  }
  if (lVar18 != 0) {
    FUN_032d5af0(lVar18,"TtConvex hull creation",0x16);
  }
  *(undefined4 *)(param_2 + 1) = 0;
  puVar11 = PTR_PTR_0434a090;
  local_68 = 0;
  local_60 = 0x8000000000000000;
  iVar1 = (int)param_1[1] + 1;
  local_78 = (int *)0x0;
  local_70 = 0x8000000000000000;
  local_80 = CONCAT44(local_80._4_4_,iVar1);
  local_58 = lVar18;
  if ((int)param_1[1] < 0) {
    local_78 = (int *)0x0;
    local_70 = -0x8000000000000000;
  }
  else {
    local_78 = (int *)FUN_032cf190(PTR_PTR_0434a090,4,&local_80);
    local_70 = CONCAT44((undefined4)local_80,iVar1);
    if ((iVar1 < 0) || (iVar1 != 0)) {
      local_70 = local_80 << 0x20;
    }
  }
  uVar12 = local_60;
  lVar16 = local_68;
  pauVar14 = (undefined1 (*) [12])param_1[6];
  uVar2 = *(uint *)(param_1 + 1);
  fVar35 = (float)*(undefined8 *)(*pauVar14 + 8);
  fVar36 = (float)((ulong)*(undefined8 *)(*pauVar14 + 8) >> 0x20);
  uVar49 = *(undefined8 *)*pauVar14;
  auVar10 = *pauVar14;
  auVar9 = *pauVar14;
  fVar30 = (float)uVar49;
  fVar34 = (float)((ulong)uVar49 >> 0x20);
  auVar25 = *(undefined1 (*) [16])(param_1 + 2);
  pauVar14 = (undefined1 (*) [12])(param_1 + 4);
  fVar42 = (float)param_1[5];
  fVar43 = (float)((ulong)param_1[5] >> 0x20);
  uVar31 = *(undefined8 *)*pauVar14;
  auVar8 = *pauVar14;
  auVar7 = *pauVar14;
  fVar38 = (float)uVar31;
  fVar41 = (float)((ulong)uVar31 >> 0x20);
  if ((int)(local_60._4_4_ & 0x3fffffff) < (int)uVar2) {
    if (0x3fffffff < (int)uVar2) {
      FUN_032bd0a8(uVar2);
    }
    uVar13 = (local_60._4_4_ & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar13) {
      uVar13 = 0x3fffffff;
    }
    uVar6 = uVar2;
    if ((int)uVar2 <= (int)uVar13) {
      uVar6 = uVar13;
    }
    local_68 = FUN_032bd1d4(puVar11,uVar6,8,lVar16,uVar12 & 0xffffffff,(long)&local_60 + 4);
  }
  if ((uint)local_60 != uVar2) {
    local_60 = CONCAT44(local_60._4_4_,uVar2);
  }
  if (0 < (int)param_1[1]) {
    auVar23 = NEON_ext(auVar25,auVar25,8,1);
    auVar32._12_4_ = fVar43;
    auVar32._0_12_ = auVar7;
    auVar5._12_4_ = fVar43;
    auVar5._0_12_ = auVar8;
    auVar32 = NEON_ext(auVar32,auVar5,8,1);
    lVar15 = 0;
    lVar16 = 0;
    uVar22 = NEON_ext(auVar25._0_8_,auVar23._0_8_,4,1);
    uVar31 = NEON_ext(uVar31,auVar32._0_8_,4,1);
    fVar46 = fVar38 * fVar30 + fVar41 * fVar34 + fVar42 * fVar35;
    fVar47 = fVar38 * fVar30 + fVar41 * fVar34 + fVar42 * fVar35;
    fVar48 = (float)((ulong)uVar31 >> 0x20);
    fVar20 = auVar25._0_4_ * (float)uVar31 - fVar38 * (float)uVar22;
    fVar28 = auVar25._4_4_ * fVar48 - fVar41 * (float)((ulong)uVar22 >> 0x20);
    auVar24._0_8_ = CONCAT44(fVar28,fVar20);
    auVar24._8_4_ = auVar25._8_4_ * fVar38 - fVar42 * auVar25._0_4_;
    auVar24._12_4_ = auVar25._12_4_ * fVar41 - fVar43 * auVar25._4_4_;
    auVar32 = NEON_ext(auVar24,auVar24,4,1);
    uVar22 = NEON_ext(auVar32._0_8_,auVar24._0_8_,4,1);
    auVar25._12_4_ = fVar36;
    auVar25._0_12_ = auVar9;
    auVar23._12_4_ = fVar36;
    auVar23._0_12_ = auVar10;
    auVar25 = NEON_ext(auVar25,auVar23,8,1);
    uVar49 = NEON_ext(uVar49,auVar25._0_8_,4,1);
    fVar29 = auVar25._4_4_ * auVar25._4_4_;
    fVar21 = fVar29 + -0.5;
    fVar29 = fVar29 + -0.5;
    fVar37 = auVar32._0_4_;
    fVar40 = auVar32._4_4_;
    fVar50 = (float)((ulong)uVar49 >> 0x20);
    auVar33._0_4_ = fVar38 * (float)uVar49 - fVar30 * (float)uVar31;
    auVar33._4_4_ = fVar41 * fVar50 - fVar34 * fVar48;
    auVar33._8_4_ = fVar42 * fVar30 - fVar35 * fVar38;
    auVar33._12_4_ = fVar43 * fVar34 - fVar36 * fVar41;
    auVar44._0_4_ = (float)uVar49 * fVar37 - fVar30 * (float)uVar22;
    auVar44._4_4_ = fVar50 * fVar40 - fVar34 * (float)((ulong)uVar22 >> 0x20);
    auVar44._8_4_ = fVar30 * fVar20 - fVar35 * fVar37;
    auVar44._12_4_ = fVar34 * fVar28 - fVar36 * fVar40;
    fVar48 = fVar30 * fVar37 + fVar34 * fVar40 + fVar35 * fVar20;
    fVar50 = fVar30 * fVar37 + fVar34 * fVar40 + fVar35 * fVar20;
    auVar23 = NEON_ext(auVar33,auVar33,4,1);
    auVar25 = NEON_ext(auVar44,auVar44,4,1);
    fVar38 = fVar38 * fVar21 + fVar30 * fVar46 + auVar23._0_4_ * fVar36;
    fVar41 = fVar41 * fVar29 + fVar34 * fVar47 + auVar23._4_4_ * fVar36;
    fVar42 = fVar42 * fVar21 + fVar35 * fVar46 + auVar33._0_4_ * fVar36;
    fVar43 = fVar43 * fVar29 + fVar36 * fVar47 + auVar33._4_4_ * fVar36;
    fVar30 = fVar37 * fVar21 + fVar30 * fVar48 + auVar25._0_4_ * fVar36;
    fVar34 = fVar40 * fVar29 + fVar34 * fVar50 + auVar25._4_4_ * fVar36;
    fVar35 = fVar20 * fVar21 + fVar35 * fVar48 + auVar44._0_4_ * fVar36;
    fVar36 = fVar28 * fVar29 + fVar36 * fVar50 + auVar44._4_4_ * fVar36;
    do {
      pfVar3 = (float *)(*param_1 + lVar16 * 0x10);
      lVar16 = lVar16 + 1;
      auVar45._0_4_ = (fVar38 + fVar38) * *pfVar3;
      auVar45._4_4_ = (fVar41 + fVar41) * pfVar3[1];
      auVar45._8_4_ = (fVar42 + fVar42) * pfVar3[2];
      auVar45._12_4_ = (fVar43 + fVar43) * pfVar3[3];
      auVar25 = NEON_ext(auVar45,auVar45,8,1);
      auVar39._0_4_ = (fVar30 + fVar30) * *pfVar3;
      auVar39._4_4_ = (fVar34 + fVar34) * pfVar3[1];
      auVar39._8_4_ = (fVar35 + fVar35) * pfVar3[2];
      auVar39._12_4_ = (fVar36 + fVar36) * pfVar3[3];
      auVar23 = NEON_ext(auVar39,auVar39,8,1);
      *(ulong *)(local_68 + lVar15) =
           CONCAT44(auVar39._0_4_ + auVar39._4_4_ + auVar23._0_4_,
                    auVar45._0_4_ + auVar45._4_4_ + auVar25._0_4_);
      lVar15 = lVar15 + 8;
    } while (lVar16 < (int)param_1[1]);
  }
  if (*(long *)(lVar19 + 0x38d490) == 0) {
    lVar16 = FUN_0333d16c(0,1);
    *(long *)(lVar19 + 0x38d490) = lVar16;
    lVar19 = *(long *)(lVar16 + 0x10);
  }
  else {
    lVar19 = *(long *)(*(long *)(lVar19 + 0x38d490) + 0x10);
  }
  if (lVar19 != 0) {
    FUN_032d5af0(lVar19,"TthkMath2d::convexHullIndices",0x1d);
  }
  local_80 = lVar19;
  FUN_032cb790(&local_68,&local_78);
  if (lVar19 != 0) {
    FUN_032d5b34(lVar19,&DAT_0390f40e);
  }
  lVar19 = local_70;
  if ((int)local_70 < (int)(*(uint *)((long)param_2 + 0xc) & 0x3fffffff)) {
    if ((int)param_2[1] != (int)local_70) {
      *(int *)(param_2 + 1) = (int)local_70;
    }
    if (0 < (int)local_70) {
      lVar16 = 0;
      do {
        auVar25 = *(undefined1 (*) [16])(*param_1 + (long)local_78[lVar16] * 0x10);
        pauVar17 = (undefined1 (*) [16])param_1[6];
        auVar23 = *pauVar17;
        auVar32 = NEON_ext(auVar23,auVar23,8,1);
        fVar20 = auVar32._4_4_ * auVar32._4_4_;
        fVar30 = auVar25._0_4_;
        fVar36 = auVar23._0_4_;
        fVar34 = auVar25._4_4_;
        fVar38 = auVar23._4_4_;
        fVar35 = auVar25._8_4_;
        fVar41 = auVar23._8_4_;
        fVar42 = auVar23._12_4_;
        fVar21 = fVar30 * fVar36 + fVar34 * fVar38 + fVar35 * fVar41;
        fVar28 = fVar30 * fVar36 + fVar34 * fVar38 + fVar35 * fVar41;
        fVar43 = fVar20 + -0.5;
        fVar20 = fVar20 + -0.5;
        uVar49 = NEON_ext(auVar23._0_8_,auVar32._0_8_,4,1);
        auVar23 = NEON_ext(auVar25,auVar25,8,1);
        uVar31 = NEON_ext(auVar25._0_8_,auVar23._0_8_,4,1);
        auVar26._0_4_ = fVar36 * (float)uVar31 - fVar30 * (float)uVar49;
        auVar26._4_4_ =
             fVar38 * (float)((ulong)uVar31 >> 0x20) - fVar34 * (float)((ulong)uVar49 >> 0x20);
        auVar26._8_4_ = fVar41 * fVar30 - fVar35 * fVar36;
        auVar26._12_4_ = fVar42 * fVar34 - auVar25._12_4_ * fVar38;
        auVar23 = NEON_ext(auVar26,auVar26,4,1);
        fVar30 = fVar30 * fVar43 + fVar36 * fVar21 + auVar23._0_4_ * fVar42;
        fVar34 = fVar34 * fVar20 + fVar38 * fVar28 + auVar23._4_4_ * fVar42;
        fVar35 = fVar35 * fVar43 + fVar41 * fVar21 + auVar26._0_4_ * fVar42;
        fVar36 = auVar25._12_4_ * fVar20 + fVar42 * fVar28 + auVar26._4_4_ * fVar42;
        auVar27._0_8_ =
             CONCAT44(*(float *)(pauVar17[1] + 4) + fVar34 + fVar34,
                      *(float *)pauVar17[1] + fVar30 + fVar30);
        auVar27._8_4_ = *(float *)(pauVar17[1] + 8) + fVar35 + fVar35;
        auVar27._12_4_ = *(float *)(pauVar17[1] + 0xc) + fVar36 + fVar36;
        puVar4 = (undefined8 *)(*param_2 + lVar16 * 0x10);
        puVar4[1] = auVar27._8_8_;
        *puVar4 = auVar27._0_8_;
        lVar16 = lVar16 + 1;
      } while (lVar16 < (int)local_70);
    }
    if (*local_78 != local_78[(int)local_70 + -1]) {
      pauVar17 = (undefined1 (*) [16])*param_2;
      iVar1 = (int)param_2[1];
      auVar25 = *pauVar17;
      if (0.001 < ABS(auVar25._8_4_ - *(float *)(pauVar17[(long)iVar1 + -1] + 8)) ||
          (0.001 < ABS(auVar25._0_4_ - *(float *)pauVar17[(long)iVar1 + -1]) ||
          0.001 < ABS(auVar25._4_4_ - *(float *)(pauVar17[(long)iVar1 + -1] + 4)))) {
        *(long *)(pauVar17[iVar1] + 8) = auVar25._8_8_;
        *(long *)pauVar17[iVar1] = auVar25._0_8_;
        uVar49 = 1;
        *(int *)(param_2 + 1) = iVar1 + 1;
        goto LAB_0325c3d4;
      }
    }
    uVar49 = 1;
  }
  else {
    uVar49 = 0;
  }
LAB_0325c3d4:
  uVar2 = local_70._4_4_;
  local_70 = (ulong)local_70._4_4_ << 0x20;
  if ((-1 < lVar19) && (local_78 != (int *)0x0)) {
    FUN_032cf244(puVar11,local_78,4,uVar2 & 0x3fffffff);
  }
  uVar12 = local_60;
  uVar2 = local_60._4_4_;
  local_60 = (ulong)local_60._4_4_ << 0x20;
  if ((-1 < (long)uVar12) && (local_68 != 0)) {
    FUN_032cf244(puVar11,local_68,8,uVar2 & 0x3fffffff);
  }
  if (lVar18 != 0) {
    FUN_032d5b34(lVar18,&DAT_0390f40e);
  }
  return uVar49;
}


