/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 012a86fc; name: FUN_012a86fc
 */


undefined1 * FUN_012a86fc(void)

{
  int iVar1;
  
  if (((DAT_043c08a0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_043c08a0), iVar1 != 0)) {
    if (((DAT_043c0830 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_043c0830), iVar1 != 0)) {
      FUN_012a8140();
      FUN_00100250(PTR__string_04379718,&DAT_043c0818,&PTR_LOOP_0411a000);
      __cxa_guard_release(&DAT_043c0830);
    }
    DAT_043c0898 = &DAT_043c0818;
    __cxa_guard_release(&DAT_043c08a0);
  }
  return DAT_043c0898;
}


