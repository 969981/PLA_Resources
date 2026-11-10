/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a1aa00; name: FUN_01a1aa00
 */


void FUN_01a1aa00(float param_1,long param_2,int param_3)

{
  float *pfVar1;
  undefined8 *puVar2;
  char cVar3;
  undefined1 auVar4 [16];
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined *puVar9;
  undefined *puVar10;
  int iVar11;
  undefined8 uVar12;
  long *plVar13;
  long lVar14;
  undefined4 extraout_s0;
  undefined4 extraout_s0_00;
  float extraout_s0_01;
  float fVar15;
  undefined4 extraout_s0_02;
  undefined4 extraout_s0_03;
  float extraout_s0_04;
  float extraout_s0_05;
  float extraout_s0_06;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  float extraout_var_01;
  float fVar16;
  undefined4 extraout_var_02;
  undefined4 extraout_var_03;
  undefined4 extraout_var_04;
  float extraout_var_05;
  float extraout_var_06;
  float extraout_var_07;
  undefined4 extraout_var_08;
  undefined4 extraout_var_09;
  float extraout_var_10;
  float fVar17;
  undefined4 extraout_var_11;
  undefined4 extraout_var_12;
  undefined4 extraout_var_13;
  float extraout_var_14;
  float extraout_var_15;
  float extraout_var_16;
  undefined4 extraout_var_17;
  undefined4 extraout_var_18;
  float extraout_var_19;
  float fVar18;
  undefined4 extraout_var_20;
  undefined4 extraout_var_21;
  undefined4 extraout_var_22;
  float extraout_var_23;
  float extraout_var_24;
  float extraout_var_25;
  undefined1 auVar19 [12];
  undefined1 auVar22 [16];
  undefined1 auVar20 [12];
  undefined1 auVar23 [16];
  undefined1 auVar21 [12];
  undefined1 auVar24 [16];
  float fVar25;
  float local_d4;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  char *pcStack_b8;
  undefined8 local_b0;
  long *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 *local_80;
  char *pcStack_78;
  undefined8 local_70;
  long *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  
  puVar9 = PTR_DAT_04379578;
  pfVar1 = (float *)(param_2 + 0xdd80);
  if (param_3 == 9) {
    FUN_01a168cc(param_2,1);
    local_80 = &DAT_8013c350d279d9f9;
    pcStack_78 = "battle_view";
    local_70 = 0xb;
    local_68 = (long *)0x0;
    local_c0 = 0x72a8f812df7f6aaa;
    pcStack_b8 = "CameraTargetOffsetLookAt";
    local_b0 = 0x18;
    local_a8 = (long *)0x0;
    uStack_88 = CONCAT44(extraout_var_17,extraout_var_08);
    local_90 = CONCAT44(extraout_var,extraout_s0);
    FUN_00aee408(&local_80,&local_c0);
    uStack_98 = CONCAT44(extraout_var_18,extraout_var_09);
    local_a0 = CONCAT44(extraout_var_00,extraout_s0_00);
    if (local_a8 != (long *)0x0) {
      (**(code **)(*local_a8 + 0x20))();
    }
    if (local_68 != (long *)0x0) {
      (**(code **)(*local_68 + 0x20))();
    }
    local_d4 = 3.0;
    local_d0 = 0;
    uStack_c8 = 0;
    FUN_01a168cc(param_2,0);
    pcStack_b8 = (char *)CONCAT44(extraout_var_19,extraout_var_10);
    local_c0 = CONCAT44(extraout_var_01,extraout_s0_01);
    if (*(int *)(param_2 + 0xed00) == 2) {
      local_d4 = *(float *)(param_2 + 0xed30);
    }
    else {
      local_d4 = 3.0;
    }
    FUN_01a18f80(param_2,&local_90,&local_c0,&local_d0,&local_a0,&local_d4,1);
    fVar15 = (float)*(undefined8 *)(param_2 + 0xeef0) - extraout_s0_01;
    fVar16 = (float)((ulong)*(undefined8 *)(param_2 + 0xeef0) >> 0x20) - extraout_var_01;
    fVar17 = (float)*(undefined8 *)(param_2 + 0xeef8) - extraout_var_10;
    fVar18 = (float)((ulong)*(undefined8 *)(param_2 + 0xeef8) >> 0x20) - extraout_var_19;
    fVar15 = fVar15 * fVar15;
    fVar16 = fVar16 * fVar16;
    fVar17 = fVar17 * fVar17;
    fVar18 = fVar18 * fVar18;
    auVar22._4_4_ = fVar16;
    auVar22._0_4_ = fVar15;
    auVar22._8_4_ = fVar17;
    auVar22._12_4_ = fVar18;
    auVar4._4_4_ = fVar16;
    auVar4._0_4_ = fVar15;
    auVar4._8_4_ = fVar17;
    auVar4._12_4_ = fVar18;
    auVar22 = NEON_ext(auVar22,auVar4,8,1);
    fVar18 = *(float *)PTR_FloatPi_04372cf0 / *(float *)PTR_FloatDegree180_04372ce0;
    fVar25 = fVar18 * (float)((ulong)local_d0 >> 0x20);
    fVar17 = (float)local_d0;
    if (*(char *)(param_2 + 0x370) == '\0') {
      *(float *)(param_2 + 0x360) = fVar25;
      *(float *)(param_2 + 0x364) = fVar18 * fVar17;
    }
    fVar15 = local_d4 - SQRT(auVar22._0_4_ + fVar15 + auVar22._4_4_ + fVar16);
    FUN_01903f90(&local_80,(int)*(undefined8 *)(param_2 + 0x700),param_2 + 0x5b0);
    puVar2 = (undefined8 *)(param_2 + 0xdd60);
    *(long **)(param_2 + 0xdd78) = local_68;
    *(undefined8 *)(param_2 + 0xdd88) = local_58;
    *puVar2 = local_80;
    *(char **)(param_2 + 0xdd68) = pcStack_78;
    *(undefined8 *)(param_2 + 0xdd70) = local_70;
    *(undefined8 *)(param_2 + 0xdd90) = local_50;
    *(undefined8 *)(param_2 + 0xdd80) = local_60;
    *pfVar1 = fVar25;
    if (*(char *)(param_2 + 0x370) == '\0') {
      *(float *)(param_2 + 0x360) = fVar25;
      *(float *)(param_2 + 0x364) = fVar18 * fVar17;
      *(ulong *)(param_2 + 0xdd78) = (ulong)(uint)fVar15;
      *(undefined8 *)(param_2 + 0xdd70) = 0;
      *(undefined8 *)(param_2 + 0xdd68) = uStack_98;
      *puVar2 = local_a0;
      *(ulong *)(param_2 + 0x358) = (ulong)(uint)fVar15;
      *(undefined8 *)(param_2 + 0x350) = 0;
      *(undefined8 *)(param_2 + 0x348) = *(undefined8 *)(param_2 + 0xdd68);
      *(undefined8 *)(param_2 + 0x340) = *puVar2;
    }
    else {
      *(ulong *)(param_2 + 0xdd78) = (ulong)(uint)fVar15;
      *(undefined8 *)(param_2 + 0xdd70) = 0;
      *(undefined8 *)(param_2 + 0xdd68) = uStack_98;
      *puVar2 = local_a0;
    }
    *(float *)(param_2 + 0x46c) = fVar15;
    *(float *)(param_2 + 0x468) = fVar15;
    return;
  }
  if (param_3 == 0) {
    FUN_01903f90(&local_80,(int)*(undefined8 *)(param_2 + 0x700),param_2 + 0x5b0);
    *(long **)(param_2 + 0xdd78) = local_68;
    *(undefined8 *)(param_2 + 0xdd88) = local_58;
    *(undefined8 *)(param_2 + 0xdd60) = local_80;
    *(char **)(param_2 + 0xdd68) = pcStack_78;
    *(undefined8 *)(param_2 + 0xdd70) = local_70;
    *(undefined8 *)(param_2 + 0xdd80) = local_60;
    *(undefined8 *)(param_2 + 0xdd90) = local_50;
    *(undefined4 *)(param_2 + 0xdd94) = 1;
    *pfVar1 = param_1;
    if (*(char *)(param_2 + 0x370) == '\0') {
      *(undefined4 *)(param_2 + 0x364) = *(undefined4 *)(param_2 + 0xdd84);
      *(float *)(param_2 + 0x360) = param_1;
      fVar15 = *(float *)(param_2 + 0xdd78);
      *(ulong *)(param_2 + 0x358) = (ulong)(uint)fVar15;
      *(undefined8 *)(param_2 + 0x350) = 0;
      *(undefined8 *)(param_2 + 0x340) = *(undefined8 *)(param_2 + 0xdd60);
      *(undefined8 *)(param_2 + 0x348) = *(undefined8 *)(param_2 + 0xdd68);
    }
    else {
      fVar15 = *(float *)(param_2 + 0xdd78);
    }
    fVar16 = *(float *)(param_2 + 0x468);
    *(float *)(param_2 + 0x468) = fVar15;
    fVar15 = fVar15 - fVar16;
    *(bool *)(param_2 + 0x470) = 1.1920929e-07 < fVar15;
    if (*(float *)(param_2 + 0x46c) < fVar16) {
      return;
    }
    *(float *)(param_2 + 0x46c) = fVar15 + *(float *)(param_2 + 0x46c);
    return;
  }
  if (param_3 - 1U < 5) {
    auVar19._0_4_ = (float)*(undefined8 *)(param_2 + 0xee60) + *(float *)(param_2 + 0xedf0);
    auVar19._4_4_ =
         (float)((ulong)*(undefined8 *)(param_2 + 0xee60) >> 0x20) + *(float *)(param_2 + 0xedf4);
    auVar19._8_4_ = (float)*(undefined8 *)(param_2 + 0xee68) + *(float *)(param_2 + 0xedf8);
    if ((*PTR_DAT_04379578 & 1) == 0) {
      iVar11 = __cxa_guard_acquire(PTR_DAT_04379578);
      if (iVar11 != 0) {
        FUN_00100250(PTR_LAB_043796d8,PTR_DAT_04379580,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379578);
      }
    }
    puVar10 = PTR_DAT_04379588;
    plVar13 = (long *)PTR_DAT_04379580;
    lVar14 = *(long *)PTR_DAT_04379580;
    *(long *)PTR_DAT_04379588 = lVar14;
    lVar14 = *(long *)(lVar14 + 200);
    uVar6 = *(undefined8 *)(lVar14 + 0x538);
    uVar12 = *(undefined8 *)(lVar14 + 0x530);
    auVar20._0_8_ =
         CONCAT44((float)((ulong)*(undefined8 *)(param_2 + 0xee70) >> 0x20) +
                  *(float *)(param_2 + 0xee04),
                  (float)*(undefined8 *)(param_2 + 0xee70) + *(float *)(param_2 + 0xee00));
    auVar20._8_4_ = (float)*(undefined8 *)(param_2 + 0xee78) + *(float *)(param_2 + 0xee08);
    auVar23._12_4_ =
         (float)((ulong)*(undefined8 *)(param_2 + 0xee78) >> 0x20) + *(float *)(param_2 + 0xee0c);
    auVar23._0_12_ = auVar20;
    auVar21 = auVar20;
    if ((*puVar9 & 1) == 0) {
      iVar11 = __cxa_guard_acquire(PTR_DAT_04379578);
      auVar7._8_8_ = auVar23._8_8_;
      auVar7._0_8_ = auVar20._0_8_;
      auVar21 = auVar7._0_12_;
      plVar13 = (long *)PTR_DAT_04379580;
      if (iVar11 != 0) {
        FUN_00100250(PTR_LAB_043796d8,PTR_DAT_04379580,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379578);
        auVar8._8_8_ = auVar23._8_8_;
        auVar8._0_8_ = auVar20._0_8_;
        auVar21 = auVar8._0_12_;
        plVar13 = (long *)PTR_DAT_04379580;
      }
    }
    lVar14 = *plVar13;
    *(long *)puVar10 = lVar14;
    lVar14 = *(long *)(lVar14 + 200);
    uVar5 = *(undefined8 *)(lVar14 + 0x530);
    fVar16 = (auVar19._0_4_ + (float)uVar12) - (auVar21._0_4_ + (float)uVar5);
    fVar18 = (auVar19._8_4_ + (float)uVar6) -
             (auVar21._8_4_ + (float)*(undefined8 *)(lVar14 + 0x538));
    fVar17 = (float)FUN_00aacd40(fVar16,fVar18);
    fVar15 = fVar17 + -360.0;
    if (fVar17 <= 180.0) {
      fVar15 = fVar17;
    }
    fVar17 = fVar15 + 360.0;
    if (-180.0 <= fVar15) {
      fVar17 = fVar15;
    }
    fVar15 = fVar16 * fVar16 + fVar18 * fVar18;
    fVar16 = SQRT(fVar15);
    auVar24 = ZEXT416((uint)fVar16);
    if (NAN(fVar16)) {
      fVar15 = sqrtf(fVar15);
      auVar24._12_4_ = extraout_var_20;
      auVar24._8_4_ = extraout_var_11;
      auVar24._4_4_ = extraout_var_02;
      auVar24._0_4_ = fVar15;
    }
    fVar16 = (float)FUN_00aacd40((auVar19._4_4_ + (float)((ulong)uVar12 >> 0x20)) -
                                 (auVar21._4_4_ + (float)((ulong)uVar5 >> 0x20)),auVar24);
    fVar15 = fVar16 + -360.0;
    if (fVar16 <= 180.0) {
      fVar15 = fVar16;
    }
    fVar16 = fVar15 + 360.0;
    if (-180.0 <= fVar15) {
      fVar16 = fVar15;
    }
    fVar15 = *(float *)PTR_FloatPi_04372cf0 / *(float *)PTR_FloatDegree180_04372ce0;
    fVar17 = fVar17 * fVar15;
    FUN_009a7ff4(fVar17,-(fVar15 * fVar16),fVar15 * 0.0);
    if (*(char *)(param_2 + 0x370) == '\0') {
      *(float *)(param_2 + 0x360) = fVar17;
      *(float *)(param_2 + 0x364) = -(fVar15 * fVar16);
    }
    FUN_01903f90(&local_80,(int)*(undefined8 *)(param_2 + 0x700),param_2 + 0x5b0);
    *(long **)(param_2 + 0xdd78) = local_68;
    *(undefined8 *)(param_2 + 0xdd88) = local_58;
    *(undefined1 **)(param_2 + 0xdd60) = local_80;
    *(char **)(param_2 + 0xdd68) = pcStack_78;
    *(undefined8 *)(param_2 + 0xdd70) = local_70;
    *(undefined8 *)(param_2 + 0xdd90) = local_50;
    *(undefined8 *)(param_2 + 0xdd80) = local_60;
    *pfVar1 = fVar17;
    local_d4 = *(float *)(param_2 + 0xdd78);
    cVar3 = *(char *)(param_2 + 0x370);
    goto joined_r0x01a1b080;
  }
  if (2 < param_3 - 6U) {
    return;
  }
  FUN_01a168cc(param_2,1);
  local_80 = &DAT_8013c350d279d9f9;
  pcStack_78 = "battle_view";
  local_70 = 0xb;
  local_68 = (long *)0x0;
  local_c0 = 0xd1c50539327f9817;
  pcStack_b8 = "CameraOffsetLookAt";
  local_b0 = 0x12;
  local_a8 = (long *)0x0;
  uStack_88 = CONCAT44(extraout_var_21,extraout_var_12);
  local_90 = CONCAT44(extraout_var_03,extraout_s0_02);
  FUN_00aee408(&local_80,&local_c0);
  uStack_98 = CONCAT44(extraout_var_22,extraout_var_13);
  local_a0 = CONCAT44(extraout_var_04,extraout_s0_03);
  if (local_a8 != (long *)0x0) {
    (**(code **)(*local_a8 + 0x20))();
  }
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  local_d4 = 3.0;
  local_d0 = 0;
  uStack_c8 = 0;
  if (param_3 == 6) {
    uVar12 = 0;
LAB_01a1afa4:
    FUN_01a168cc(param_2,uVar12);
    fVar15 = extraout_s0_04;
    fVar16 = extraout_var_05;
    fVar17 = extraout_var_14;
    fVar18 = extraout_var_23;
LAB_01a1afa8:
    pcStack_b8 = (char *)CONCAT44(fVar18,fVar17);
    local_c0 = CONCAT44(fVar16,fVar15);
  }
  else {
    if (param_3 == 7) {
      uVar12 = 2;
      goto LAB_01a1afa4;
    }
    if (param_3 == 8) {
      FUN_01a168cc(param_2,2);
      FUN_01a168cc(param_2,0);
      fVar15 = extraout_s0_06 + (extraout_s0_05 - extraout_s0_06) * 0.5;
      fVar16 = extraout_var_07 + (extraout_var_06 - extraout_var_07) * 0.5;
      fVar17 = extraout_var_16 + (extraout_var_15 - extraout_var_16) * 0.5;
      fVar18 = extraout_var_25 + (extraout_var_24 - extraout_var_25) * 0.5;
      goto LAB_01a1afa8;
    }
  }
  FUN_01a18f80(param_2,&local_90,&local_c0,&local_d0,&local_a0,&local_d4,0);
  fVar15 = (float)local_d0;
  fVar16 = *(float *)PTR_FloatPi_04372cf0 / *(float *)PTR_FloatDegree180_04372ce0;
  fVar17 = fVar16 * (float)((ulong)local_d0 >> 0x20);
  if (*(char *)(param_2 + 0x370) == '\0') {
    *(float *)(param_2 + 0x360) = fVar17;
    *(float *)(param_2 + 0x364) = fVar16 * fVar15;
  }
  FUN_01903f90(&local_80,(int)*(undefined8 *)(param_2 + 0x700),param_2 + 0x5b0);
  *(long **)(param_2 + 0xdd78) = local_68;
  *(undefined8 *)(param_2 + 0xdd88) = local_58;
  *(undefined8 *)(param_2 + 0xdd60) = local_80;
  *(char **)(param_2 + 0xdd68) = pcStack_78;
  *(undefined8 *)(param_2 + 0xdd70) = local_70;
  *(undefined8 *)(param_2 + 0xdd90) = local_50;
  *(undefined8 *)(param_2 + 0xdd80) = local_60;
  *pfVar1 = fVar17;
  cVar3 = *(char *)(param_2 + 0x370);
  if (cVar3 == '\0') {
    *(float *)(param_2 + 0x360) = fVar17;
    *(float *)(param_2 + 0x364) = fVar16 * fVar15;
  }
  *(ulong *)(param_2 + 0xdd78) = (ulong)(uint)local_d4;
  *(undefined8 *)(param_2 + 0xdd70) = 0;
  *(undefined8 *)(param_2 + 0xdd68) = uStack_98;
  *(undefined8 *)(param_2 + 0xdd60) = local_a0;
joined_r0x01a1b080:
  if (cVar3 == '\0') {
    *(ulong *)(param_2 + 0x358) = (ulong)(uint)local_d4;
    *(undefined8 *)(param_2 + 0x350) = 0;
    *(undefined8 *)(param_2 + 0x348) = *(undefined8 *)(param_2 + 0xdd68);
    *(undefined8 *)(param_2 + 0x340) = *(undefined8 *)(param_2 + 0xdd60);
  }
  *(float *)(param_2 + 0x46c) = local_d4;
  *(float *)(param_2 + 0x468) = local_d4;
  return;
}


