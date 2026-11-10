/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00b4f798; name: FUN_00b4f798
 */


undefined1 * FUN_00b4f798(void)

{
  int iVar1;
  
  if (((DAT_043aae80 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_043aae80), iVar1 != 0)) {
    if (((DAT_043aae10 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_043aae10), iVar1 != 0)) {
      FUN_00b4f1e0();
      FUN_00100250(PTR__string_04379718,&DAT_043aadf8,&PTR_LOOP_0411a000);
      __cxa_guard_release(&DAT_043aae10);
    }
    DAT_043aae78 = &DAT_043aadf8;
    __cxa_guard_release(&DAT_043aae80);
  }
  return DAT_043aae78;
}


