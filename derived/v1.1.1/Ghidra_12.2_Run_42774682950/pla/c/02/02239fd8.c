/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02239fd8; name: FUN_02239fd8
 */


undefined1 * FUN_02239fd8(void)

{
  int iVar1;
  
  if (((DAT_043dee68 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_043dee68), iVar1 != 0)) {
    if (((DAT_043dedf8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_043dedf8), iVar1 != 0)) {
      FUN_02239850();
      FUN_00100250(PTR__string_04379718,&DAT_043dede0,&PTR_LOOP_0411a000);
      __cxa_guard_release(&DAT_043dedf8);
    }
    DAT_043dee60 = &DAT_043dede0;
    __cxa_guard_release(&DAT_043dee68);
  }
  return DAT_043dee60;
}


