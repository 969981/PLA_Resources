/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 024c326c; name: FUN_024c326c
 */


undefined1 * FUN_024c326c(void)

{
  int iVar1;
  
  if (((DAT_043e7738 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_043e7738), iVar1 != 0)) {
    if (((DAT_043e76c8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_043e76c8), iVar1 != 0)) {
      FUN_024c2a60();
      FUN_00100250(PTR__string_04379718,&DAT_043e76b0,&PTR_LOOP_0411a000);
      __cxa_guard_release(&DAT_043e76c8);
    }
    DAT_043e7730 = &DAT_043e76b0;
    __cxa_guard_release(&DAT_043e7738);
  }
  return DAT_043e7730;
}


