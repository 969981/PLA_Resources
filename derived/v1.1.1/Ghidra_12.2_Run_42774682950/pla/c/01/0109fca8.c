/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0109fca8; name: FUN_0109fca8
 */


void FUN_0109fca8(long param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  ulong uVar9;
  uint uVar10;
  
  puVar1 = PTR_DAT_043795f8;
  if (((*PTR_DAT_043795f8 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_043795f8), iVar4 != 0))
  {
    FUN_00100250(PTR_LAB_0437b168,PTR_DAT_04379600,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_043795f8);
  }
  puVar3 = PTR_DAT_04379608;
  puVar2 = PTR_DAT_04379600;
  uVar8 = *(undefined8 *)PTR_DAT_04379600;
  *(undefined8 *)PTR_DAT_04379608 = uVar8;
  iVar4 = FUN_02c50d20(uVar8,param_2,0x48);
  if (((*puVar1 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_043795f8), iVar5 != 0)) {
    FUN_00100250(PTR_LAB_0437b168,PTR_DAT_04379600,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_043795f8);
  }
  uVar8 = *(undefined8 *)puVar2;
  *(undefined8 *)puVar3 = uVar8;
  iVar5 = FUN_02c50d20(uVar8,param_2,0x49);
  if (((*puVar1 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_043795f8), iVar6 != 0)) {
    FUN_00100250(PTR_LAB_0437b168,PTR_DAT_04379600,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_043795f8);
  }
  uVar8 = *(undefined8 *)puVar2;
  *(undefined8 *)puVar3 = uVar8;
  iVar6 = FUN_02c50d20(uVar8,param_2,0x4a);
  uVar9 = FUN_02c6cf3c(*(undefined8 *)(param_1 + 0x98));
  if ((uVar9 & 1) == 0) {
    if ((*(ushort *)(*(long *)(*(long *)(param_1 + 0x98) + 0x10) + 4) >> 2 & 1) == 0) {
      iVar7 = FUN_02c6917c();
      if (0x9f < iVar7) {
        iVar5 = iVar6;
      }
      if (99 < iVar7) {
        iVar4 = iVar5;
      }
      uVar10 = iVar4 + iVar7;
      if (0xfe < (int)uVar10) {
        uVar10 = 0xff;
      }
      if ((int)uVar10 < 1) {
        uVar10 = 0;
      }
      if (0xfe < uVar10) {
        uVar10 = 0xff;
      }
      FUN_02c7a8c4(*(undefined8 *)(param_1 + 0x98),uVar10);
      FUN_02c5bb1c(param_1,1);
      return;
    }
  }
  return;
}


