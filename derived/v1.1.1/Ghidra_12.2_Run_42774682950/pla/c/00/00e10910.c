/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00e10910; name: FUN_00e10910
 */


undefined1 * FUN_00e10910(void)

{
  int iVar1;
  
  if (((DAT_043aec50 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_043aec50), iVar1 != 0)) {
    if (((DAT_043aebe0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_043aebe0), iVar1 != 0)) {
      FUN_00e10180();
      FUN_00100250(PTR__string_04379718,&DAT_043aebc8,&PTR_LOOP_0411a000);
      __cxa_guard_release(&DAT_043aebe0);
    }
    DAT_043aec48 = &DAT_043aebc8;
    __cxa_guard_release(&DAT_043aec50);
  }
  return DAT_043aec48;
}


