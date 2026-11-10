/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 016f57c4; name: FUN_016f57c4
 */


undefined1 * FUN_016f57c4(void)

{
  int iVar1;
  
  if (((DAT_043cd498 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_043cd498), iVar1 != 0)) {
    if (((DAT_043cd428 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_043cd428), iVar1 != 0)) {
      FUN_016f5300();
      FUN_00100250(PTR__string_04379718,&DAT_043cd410,&PTR_LOOP_0411a000);
      __cxa_guard_release(&DAT_043cd428);
    }
    DAT_043cd490 = &DAT_043cd410;
    __cxa_guard_release(&DAT_043cd498);
  }
  return DAT_043cd490;
}


