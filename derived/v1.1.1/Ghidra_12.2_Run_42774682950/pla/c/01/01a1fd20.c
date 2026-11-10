/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a1fd20; name: FUN_01a1fd20
 */


void FUN_01a1fd20(long param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  int iVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float fVar9;
  float extraout_var;
  float extraout_var_00;
  float extraout_var_01;
  float fVar10;
  float extraout_var_02;
  float extraout_var_03;
  float extraout_var_04;
  float extraout_var_05;
  float extraout_var_06;
  float extraout_var_07;
  float fVar11;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar12 [16];
  float fVar16;
  
  FUN_01a168cc(param_1,0);
  FUN_01a168cc(param_1,1);
  FUN_01a168cc(param_1,2);
  fVar16 = *(float *)(param_1 + 0xee10);
  fVar11 = extraout_s0_00 - extraout_s0_01;
  fVar13 = extraout_var_00 - extraout_var_01;
  fVar14 = extraout_var_03 - extraout_var_04;
  fVar15 = extraout_var_06 - extraout_var_07;
  fVar9 = fVar11 * fVar11;
  fVar10 = fVar13 * fVar13;
  auVar12._4_4_ = fVar10;
  auVar12._0_4_ = fVar9;
  auVar12._8_4_ = fVar14 * fVar14;
  auVar12._12_4_ = fVar15 * fVar15;
  auVar1._4_4_ = fVar10;
  auVar1._0_4_ = fVar9;
  auVar1._8_4_ = fVar14 * fVar14;
  auVar1._12_4_ = fVar15 * fVar15;
  auVar12 = NEON_ext(auVar12,auVar1,8,1);
  fVar9 = SQRT(auVar12._0_4_ + fVar9 + auVar12._4_4_ + fVar10);
  if (fVar9 <= 0.0) {
    fVar9 = 0.0;
  }
  *(ulong *)(param_1 + 0xede8) = (ulong)(uint)fVar9;
  *(undefined8 *)(param_1 + 0xede0) = *(undefined8 *)(param_1 + 0xede0);
  if ((*PTR_DAT_04379578 & 1) == 0) {
    iVar5 = __cxa_guard_acquire(PTR_DAT_04379578);
    if (iVar5 != 0) {
      FUN_00100250(PTR_LAB_043796d8,PTR_DAT_04379580,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379578);
    }
  }
  plVar7 = (long *)PTR_DAT_04379588;
  plVar6 = (long *)PTR_DAT_04379580;
  puVar4 = PTR_DAT_04379578;
  lVar8 = *(long *)PTR_DAT_04379580;
  *(long *)PTR_DAT_04379588 = lVar8;
  lVar8 = *(long *)(lVar8 + 200);
  uVar3 = *(undefined8 *)(lVar8 + 0x538);
  uVar2 = *(undefined8 *)(lVar8 + 0x530);
  *(ulong *)(param_1 + 0xee28) =
       CONCAT44((extraout_var_07 + fVar15 * fVar16) - (float)((ulong)uVar3 >> 0x20),
                (extraout_var_04 + fVar14 * fVar16) - (float)uVar3);
  *(ulong *)(param_1 + 0xee20) =
       CONCAT44((extraout_var_01 + fVar13 * fVar16) - (float)((ulong)uVar2 >> 0x20),
                (extraout_s0_01 + fVar11 * fVar16) - (float)uVar2);
  if ((*puVar4 & 1) == 0) {
    iVar5 = __cxa_guard_acquire(PTR_DAT_04379578);
    plVar6 = (long *)PTR_DAT_04379580;
    plVar7 = (long *)PTR_DAT_04379588;
    if (iVar5 != 0) {
      FUN_00100250(PTR_LAB_043796d8,PTR_DAT_04379580,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379578);
      plVar6 = (long *)PTR_DAT_04379580;
      plVar7 = (long *)PTR_DAT_04379588;
    }
  }
  lVar8 = *plVar6;
  *plVar7 = lVar8;
  lVar8 = *(long *)(lVar8 + 200);
  uVar3 = *(undefined8 *)(lVar8 + 0x538);
  uVar2 = *(undefined8 *)(lVar8 + 0x530);
  *(ulong *)(param_1 + 0xee38) =
       CONCAT44(extraout_var_05 - (float)((ulong)uVar3 >> 0x20),extraout_var_02 - (float)uVar3);
  *(ulong *)(param_1 + 0xee30) =
       CONCAT44(extraout_var - (float)((ulong)uVar2 >> 0x20),extraout_s0 - (float)uVar2);
  return;
}


