/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0243f8b0; name: FUN_0243f8b0
 */


undefined1 * FUN_0243f8b0(void)

{
  int iVar1;
  
  if (((DAT_043e5878 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_043e5878), iVar1 != 0)) {
    if (((DAT_043e5808 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_043e5808), iVar1 != 0)) {
      FUN_0243f490();
      FUN_00100250(PTR__string_04379718,&DAT_043e57f0,&PTR_LOOP_0411a000);
      __cxa_guard_release(&DAT_043e5808);
    }
    DAT_043e5870 = &DAT_043e57f0;
    __cxa_guard_release(&DAT_043e5878);
  }
  return DAT_043e5870;
}


