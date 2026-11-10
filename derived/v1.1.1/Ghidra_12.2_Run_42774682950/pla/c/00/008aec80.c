/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008aec80; name: FUN_008aec80
 */


void FUN_008aec80(long param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN_00933eec(*(undefined8 *)(*(long *)(param_1 + 0x68) + 0xd0));
  if (lVar2 != 0) {
    if (((*PTR_DAT_043795f8 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_043795f8), iVar1 != 0)) {
      FUN_00100250(&LAB_008afb68,PTR_DAT_04379600,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_043795f8);
    }
    uVar3 = *(undefined8 *)PTR_DAT_04379600;
    *(undefined8 *)PTR_DAT_04379608 = uVar3;
    iVar1 = FUN_02c50d20(uVar3,param_3,0x51);
    *(int *)(lVar2 + 0xb4) = *(int *)(lVar2 + 0xb4) + iVar1;
  }
  return;
}


