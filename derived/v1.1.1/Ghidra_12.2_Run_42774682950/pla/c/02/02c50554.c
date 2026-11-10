/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c50554; name: FUN_02c50554
 */


int FUN_02c50554(undefined2 param_1)

{
  int iVar1;
  long local_20 [2];
  
  if ((*PTR_DAT_043795f8 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(PTR_DAT_043795f8);
    if (iVar1 != 0) {
      FUN_00100250(PTR_LAB_0437b168,PTR_DAT_04379600,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_043795f8);
    }
  }
  *(undefined8 *)PTR_DAT_04379608 = *(undefined8 *)PTR_DAT_04379600;
  FUN_02c4fb44(local_20,param_1);
  if (*(char *)(local_20[0] + 0x20) == '\x01') {
    iVar1 = *(byte *)(local_20[0] + 0x21) + 1;
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}


