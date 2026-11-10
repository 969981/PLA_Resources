/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011e3e7c; name: FUN_011e3e7c
 */


void FUN_011e3e7c(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((*(char *)(param_1 + 0xb14) == '\0') || (*(char *)(param_1 + 0xaf4) == '\0')) {
    return;
  }
  if ((*PTR_DAT_0437b4d0 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(PTR_DAT_0437b4d0);
    if (iVar1 != 0) {
      FUN_00100250(PTR_LAB_0437e718,PTR_DAT_0437b4d8,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437b4d0);
    }
  }
  uVar2 = *(undefined8 *)PTR_DAT_0437b4d8;
  *(undefined8 *)PTR_DAT_0437b4e0 = uVar2;
  FUN_027880dc(uVar2,param_1 + 0xaf8,param_1 + 0x68);
  return;
}


