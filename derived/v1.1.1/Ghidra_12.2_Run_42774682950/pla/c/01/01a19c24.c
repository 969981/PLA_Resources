/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a19c24; name: FUN_01a19c24
 */


float FUN_01a19c24(undefined8 param_1,float *param_2,undefined8 *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined *puVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  float fVar8;
  float extraout_s0;
  float extraout_s0_00;
  float fVar9;
  float extraout_var;
  float extraout_var_00;
  float fVar10;
  float extraout_var_01;
  float extraout_var_02;
  float fVar11;
  float extraout_var_03;
  float extraout_var_04;
  float fVar12;
  undefined1 auVar13 [16];
  
  fVar8 = (float)*param_3 - *param_2;
  fVar9 = (float)((ulong)*param_3 >> 0x20) - param_2[1];
  fVar10 = (float)param_3[1] - param_2[2];
  fVar11 = (float)((ulong)param_3[1] >> 0x20) - param_2[3];
  fVar8 = fVar8 * fVar8;
  fVar9 = fVar9 * fVar9;
  fVar10 = fVar10 * fVar10;
  fVar11 = fVar11 * fVar11;
  auVar13._4_4_ = fVar9;
  auVar13._0_4_ = fVar8;
  auVar13._8_4_ = fVar10;
  auVar13._12_4_ = fVar11;
  auVar1._4_4_ = fVar9;
  auVar1._0_4_ = fVar8;
  auVar1._8_4_ = fVar10;
  auVar1._12_4_ = fVar11;
  auVar13 = NEON_ext(auVar13,auVar1,8,1);
  fVar8 = SQRT(auVar13._0_4_ + fVar8 + auVar13._4_4_ + fVar9);
  if (fVar8 == 0.0) {
    fVar9 = 1.0;
  }
  else {
    if (((*PTR_DAT_04379578 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04379578), iVar5 != 0)) {
      FUN_00100250(PTR_LAB_043796d8,PTR_DAT_04379580,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379578);
    }
    puVar7 = (undefined8 *)PTR_DAT_04379588;
    puVar6 = (undefined8 *)PTR_DAT_04379580;
    puVar4 = PTR_DAT_04379578;
    *(undefined8 *)PTR_DAT_04379588 = *(undefined8 *)PTR_DAT_04379580;
    if (((*puVar4 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04379578), puVar6 = (undefined8 *)PTR_DAT_04379580,
       puVar7 = (undefined8 *)PTR_DAT_04379588, iVar5 != 0)) {
      FUN_00100250(PTR_LAB_043796d8,PTR_DAT_04379580,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379578);
      puVar6 = (undefined8 *)PTR_DAT_04379580;
      puVar7 = (undefined8 *)PTR_DAT_04379588;
    }
    *puVar7 = *puVar6;
    FUN_01a168cc(param_1,2);
    FUN_01a168cc(param_1,0);
    fVar9 = (extraout_s0 - extraout_s0_00) * (extraout_s0 - extraout_s0_00);
    fVar10 = (extraout_var - extraout_var_00) * (extraout_var - extraout_var_00);
    fVar11 = (extraout_var_01 - extraout_var_02) * (extraout_var_01 - extraout_var_02);
    fVar12 = (extraout_var_03 - extraout_var_04) * (extraout_var_03 - extraout_var_04);
    auVar2._4_4_ = fVar10;
    auVar2._0_4_ = fVar9;
    auVar2._8_4_ = fVar11;
    auVar2._12_4_ = fVar12;
    auVar3._4_4_ = fVar10;
    auVar3._0_4_ = fVar9;
    auVar3._8_4_ = fVar11;
    auVar3._12_4_ = fVar12;
    auVar13 = NEON_ext(auVar2,auVar3,8,1);
    fVar10 = SQRT(auVar13._0_4_ + fVar9 + auVar13._4_4_ + fVar10);
    fVar9 = fVar8;
    if (fVar10 <= fVar8) {
      fVar9 = fVar10;
    }
    fVar9 = fVar9 / fVar8;
  }
  return fVar9;
}


