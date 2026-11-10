/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 012d1f5c; name: FUN_012d1f5c
 */


undefined1 * FUN_012d1f5c(void)

{
  int iVar1;
  
  if (((DAT_043c16d8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_043c16d8), iVar1 != 0)) {
    if (((DAT_043c1668 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_043c1668), iVar1 != 0)) {
      FUN_012d19a0();
      FUN_00100250(PTR__string_04379718,&DAT_043c1650,&PTR_LOOP_0411a000);
      __cxa_guard_release(&DAT_043c1668);
    }
    DAT_043c16d0 = &DAT_043c1650;
    __cxa_guard_release(&DAT_043c16d8);
  }
  return DAT_043c16d0;
}


