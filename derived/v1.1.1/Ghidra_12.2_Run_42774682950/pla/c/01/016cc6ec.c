/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 016cc6ec; name: FUN_016cc6ec
 */


undefined1 * FUN_016cc6ec(void)

{
  int iVar1;
  
  if (((DAT_043cc9b0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_043cc9b0), iVar1 != 0)) {
    if (((DAT_043cc940 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_043cc940), iVar1 != 0)) {
      FUN_016cc000();
      FUN_00100250(PTR__string_04379718,&DAT_043cc928,&PTR_LOOP_0411a000);
      __cxa_guard_release(&DAT_043cc940);
    }
    DAT_043cc9a8 = &DAT_043cc928;
    __cxa_guard_release(&DAT_043cc9b0);
  }
  return DAT_043cc9a8;
}


