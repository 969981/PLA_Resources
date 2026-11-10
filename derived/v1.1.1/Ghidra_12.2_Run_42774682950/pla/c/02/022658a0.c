/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 022658a0; name: FUN_022658a0
 */


undefined1 * FUN_022658a0(void)

{
  int iVar1;
  
  if (((DAT_043df8a0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_043df8a0), iVar1 != 0)) {
    if (((DAT_043df830 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_043df830), iVar1 != 0)) {
      FUN_02264f40();
      FUN_00100250(PTR__string_04379718,&DAT_043df818,&PTR_LOOP_0411a000);
      __cxa_guard_release(&DAT_043df830);
    }
    DAT_043df898 = &DAT_043df818;
    __cxa_guard_release(&DAT_043df8a0);
  }
  return DAT_043df898;
}


