/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 024cb4f0; name: FUN_024cb4f0
 */


undefined1 * FUN_024cb4f0(void)

{
  int iVar1;
  
  if (((DAT_043e7a30 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_043e7a30), iVar1 != 0)) {
    if (((DAT_043e79c0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_043e79c0), iVar1 != 0)) {
      FUN_024cabc0();
      FUN_00100250(PTR__string_04379718,&DAT_043e79a8,&PTR_LOOP_0411a000);
      __cxa_guard_release(&DAT_043e79c0);
    }
    DAT_043e7a28 = &DAT_043e79a8;
    __cxa_guard_release(&DAT_043e7a30);
  }
  return DAT_043e7a28;
}


