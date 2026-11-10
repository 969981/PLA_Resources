/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0204f5f4; name: FUN_0204f5f4
 */


undefined1 * FUN_0204f5f4(void)

{
  int iVar1;
  
  if (((DAT_043d7bb0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_043d7bb0), iVar1 != 0)) {
    if (((DAT_043d7a08 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_043d7a08), iVar1 != 0)) {
      FUN_0204d6f0();
      FUN_00100250(PTR__string_04379718,&DAT_043d79f0,&PTR_LOOP_0411a000);
      __cxa_guard_release(&DAT_043d7a08);
    }
    DAT_043d7ba8 = &DAT_043d79f0;
    __cxa_guard_release(&DAT_043d7bb0);
  }
  return DAT_043d7ba8;
}


