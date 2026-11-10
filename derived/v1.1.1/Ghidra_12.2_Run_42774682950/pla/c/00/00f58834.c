/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00f58834; name: FUN_00f58834
 */


undefined1 * FUN_00f58834(void)

{
  int iVar1;
  
  if (((DAT_043b56a8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_043b56a8), iVar1 != 0)) {
    if (((DAT_043b55a0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_043b55a0), iVar1 != 0)) {
      FUN_00f57a40();
      FUN_00100250(PTR__string_04379718,&DAT_043b5588,&PTR_LOOP_0411a000);
      __cxa_guard_release(&DAT_043b55a0);
    }
    DAT_043b56a0 = &DAT_043b5588;
    __cxa_guard_release(&DAT_043b56a8);
  }
  return DAT_043b56a0;
}


