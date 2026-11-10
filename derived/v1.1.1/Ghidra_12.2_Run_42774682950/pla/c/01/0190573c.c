/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0190573c; name: FUN_0190573c
 */


void FUN_0190573c(long param_1,undefined2 param_2)

{
  int iVar1;
  long local_30 [2];
  
  if ((*PTR_DAT_043795f8 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(PTR_DAT_043795f8);
    if (iVar1 != 0) {
      FUN_00100250(PTR_LAB_0437b168,PTR_DAT_04379600,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_043795f8);
    }
  }
  *(undefined8 *)PTR_DAT_04379608 = *(undefined8 *)PTR_DAT_04379600;
  FUN_02c4fb44(local_30,param_2);
  if (*(char *)(local_30[0] + 0x20) == '\x01') {
    iVar1 = *(byte *)(local_30[0] + 0x21) + 1;
  }
  else {
    iVar1 = 0;
  }
  *(int *)(param_1 + 0x38) = iVar1;
  return;
}


