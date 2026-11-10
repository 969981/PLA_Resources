/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a1c728; name: FUN_01a1c728
 */


void FUN_01a1c728(float param_1,long param_2,undefined8 *param_3)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auVar15 [16];
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  if (((*PTR_DAT_04379578 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04379578), iVar5 != 0))
  {
    FUN_00100250(PTR_LAB_043796d8,PTR_DAT_04379580,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379578);
  }
  plVar8 = (long *)PTR_DAT_04379588;
  plVar7 = (long *)PTR_DAT_04379580;
  puVar4 = PTR_DAT_04379578;
  lVar6 = *(long *)PTR_DAT_04379580;
  *(long *)PTR_DAT_04379588 = lVar6;
  lVar6 = *(long *)(lVar6 + 200);
  uVar3 = *(undefined8 *)(lVar6 + 0x538);
  uVar2 = *(undefined8 *)(lVar6 + 0x530);
  fVar16 = (float)*(undefined8 *)(param_2 + 0xee60) + (float)uVar2;
  fVar17 = (float)((ulong)*(undefined8 *)(param_2 + 0xee60) >> 0x20) + (float)((ulong)uVar2 >> 0x20)
  ;
  fVar18 = (float)*(undefined8 *)(param_2 + 0xee68) + (float)uVar3;
  fVar19 = (float)((ulong)*(undefined8 *)(param_2 + 0xee68) >> 0x20) + (float)((ulong)uVar3 >> 0x20)
  ;
  if (((*puVar4 & 1) == 0) &&
     (iVar5 = __cxa_guard_acquire(PTR_DAT_04379578), plVar7 = (long *)PTR_DAT_04379580,
     plVar8 = (long *)PTR_DAT_04379588, iVar5 != 0)) {
    FUN_00100250(PTR_LAB_043796d8,PTR_DAT_04379580,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379578);
    plVar7 = (long *)PTR_DAT_04379580;
    plVar8 = (long *)PTR_DAT_04379588;
  }
  lVar6 = *plVar7;
  *plVar8 = lVar6;
  lVar6 = *(long *)(lVar6 + 200);
  uVar3 = *(undefined8 *)(lVar6 + 0x538);
  uVar2 = *(undefined8 *)(lVar6 + 0x530);
  fVar9 = fVar16 - ((float)*(undefined8 *)(param_2 + 0xee70) + (float)uVar2);
  fVar10 = fVar17 - ((float)((ulong)*(undefined8 *)(param_2 + 0xee70) >> 0x20) +
                    (float)((ulong)uVar2 >> 0x20));
  fVar11 = fVar18 - ((float)*(undefined8 *)(param_2 + 0xee78) + (float)uVar3);
  fVar12 = fVar19 - ((float)((ulong)*(undefined8 *)(param_2 + 0xee78) >> 0x20) +
                    (float)((ulong)uVar3 >> 0x20));
  fVar13 = fVar9 * fVar9;
  fVar14 = fVar10 * fVar10;
  auVar15._4_4_ = fVar14;
  auVar15._0_4_ = fVar13;
  auVar15._8_4_ = fVar11 * fVar11;
  auVar15._12_4_ = fVar12 * fVar12;
  auVar1._4_4_ = fVar14;
  auVar1._0_4_ = fVar13;
  auVar1._8_4_ = fVar11 * fVar11;
  auVar1._12_4_ = fVar12 * fVar12;
  auVar15 = NEON_ext(auVar15,auVar1,8,1);
  fVar13 = SQRT(auVar15._0_4_ + fVar13 + auVar15._4_4_ + fVar14);
  if (fVar13 < 1.1920929e-07) {
    fVar13 = 0.001;
  }
  param_1 = param_1 / fVar13;
  param_3[1] = CONCAT44(fVar19 - fVar12 * param_1,fVar18 - fVar11 * param_1);
  *param_3 = CONCAT44(fVar17 - fVar10 * param_1,fVar16 - fVar9 * param_1);
  return;
}


