/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00fd7770; name: FUN_00fd7770
 */


undefined1 * FUN_00fd7770(void)

{
  int iVar1;
  
  if (((DAT_043b78b0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_043b78b0), iVar1 != 0)) {
    if (((DAT_043b7820 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_043b7820), iVar1 != 0)) {
      FUN_00fd6d20();
      FUN_00100250(PTR__string_04379718,&DAT_043b7808,&PTR_LOOP_0411a000);
      __cxa_guard_release(&DAT_043b7820);
    }
    DAT_043b78a8 = &DAT_043b7808;
    __cxa_guard_release(&DAT_043b78b0);
  }
  return DAT_043b78a8;
}


