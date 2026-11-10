/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0109fe90; name: FUN_0109fe90
 */


undefined4 FUN_0109fe90(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  if ((*PTR_DAT_043795f8 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(PTR_DAT_043795f8);
    if (iVar1 != 0) {
      FUN_00100250(PTR_LAB_0437b168,PTR_DAT_04379600,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_043795f8);
    }
  }
  uVar3 = *(undefined8 *)PTR_DAT_04379600;
  *(undefined8 *)PTR_DAT_04379608 = uVar3;
  iVar1 = FUN_02c50d20(uVar3,param_1,7);
  if (iVar1 - 0xbU < 5) {
    uVar2 = *(undefined4 *)(&DAT_03a789d8 + (ulong)(iVar1 - 0xbU) * 8);
  }
  else {
    uVar2 = 6;
  }
  return uVar2;
}


