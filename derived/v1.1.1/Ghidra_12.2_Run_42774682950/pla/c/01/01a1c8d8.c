/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a1c8d8; name: FUN_01a1c8d8
 */


void FUN_01a1c8d8(long param_1,undefined8 *param_2)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  float __x;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  float fVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  if (((*PTR_DAT_04379578 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_04379578), iVar2 != 0))
  {
    FUN_00100250(PTR_LAB_043796d8,PTR_DAT_04379580,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379578);
  }
  plVar5 = (long *)PTR_DAT_04379588;
  plVar4 = (long *)PTR_DAT_04379580;
  puVar1 = PTR_DAT_04379578;
  lVar3 = *(long *)PTR_DAT_04379580;
  *(long *)PTR_DAT_04379588 = lVar3;
  lVar3 = *(long *)(lVar3 + 200);
  uVar8 = *(undefined8 *)(param_1 + 0xee68);
  uVar7 = *(undefined8 *)(param_1 + 0xee60);
  uVar12 = *(undefined8 *)(lVar3 + 0x538);
  uVar10 = *(undefined8 *)(lVar3 + 0x530);
  if (((*puVar1 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(PTR_DAT_04379578), plVar4 = (long *)PTR_DAT_04379580,
     plVar5 = (long *)PTR_DAT_04379588, iVar2 != 0)) {
    FUN_00100250(PTR_LAB_043796d8,PTR_DAT_04379580,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379578);
    plVar4 = (long *)PTR_DAT_04379580;
    plVar5 = (long *)PTR_DAT_04379588;
  }
  lVar3 = *plVar4;
  *plVar5 = lVar3;
  lVar3 = *(long *)(lVar3 + 200);
  uVar11 = *(undefined8 *)(lVar3 + 0x530);
  fVar13 = ((float)uVar7 + (float)uVar10) -
           ((float)*(undefined8 *)(param_1 + 0xee70) + (float)uVar11);
  fVar14 = ((float)((ulong)uVar7 >> 0x20) + (float)((ulong)uVar10 >> 0x20)) -
           ((float)((ulong)*(undefined8 *)(param_1 + 0xee70) >> 0x20) +
           (float)((ulong)uVar11 >> 0x20));
  fVar15 = ((float)uVar8 + (float)uVar12) -
           ((float)*(undefined8 *)(param_1 + 0xee78) + (float)*(undefined8 *)(lVar3 + 0x538));
  __x = fVar13 * fVar13 + fVar15 * fVar15;
  fVar9 = SQRT(__x);
  if (NAN(fVar9)) {
    fVar9 = sqrtf(__x);
  }
  uVar6 = FUN_00aacd40(-fVar14,fVar9);
  param_2[1] = param_2[1];
  *param_2 = CONCAT44((int)((ulong)*param_2 >> 0x20),uVar6);
  uVar6 = FUN_00aacd40(CONCAT44(fVar14,fVar13),fVar15);
  param_2[1] = 0;
  *param_2 = CONCAT44(uVar6,*(undefined4 *)param_2);
  return;
}


