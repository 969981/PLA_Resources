/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00ed756c; name: FUN_00ed756c
 */


undefined1 * FUN_00ed756c(void)

{
  int iVar1;
  
  if (((DAT_043b2658 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_043b2658), iVar1 != 0)) {
    if (((DAT_043b25e8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_043b25e8), iVar1 != 0)) {
      FUN_00ed6f80();
      FUN_00100250(PTR__string_04379718,&DAT_043b25d0,&PTR_LOOP_0411a000);
      __cxa_guard_release(&DAT_043b25e8);
    }
    DAT_043b2650 = &DAT_043b25d0;
    __cxa_guard_release(&DAT_043b2658);
  }
  return DAT_043b2650;
}


