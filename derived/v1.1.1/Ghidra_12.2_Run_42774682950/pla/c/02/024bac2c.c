/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 024bac2c; name: FUN_024bac2c
 */


undefined1 * FUN_024bac2c(void)

{
  int iVar1;
  
  if (((DAT_043e7420 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_043e7420), iVar1 != 0)) {
    if (((DAT_043e73b0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_043e73b0), iVar1 != 0)) {
      FUN_024ba370();
      FUN_00100250(PTR__string_04379718,&DAT_043e7398,&PTR_LOOP_0411a000);
      __cxa_guard_release(&DAT_043e73b0);
    }
    DAT_043e7418 = &DAT_043e7398;
    __cxa_guard_release(&DAT_043e7420);
  }
  return DAT_043e7418;
}


