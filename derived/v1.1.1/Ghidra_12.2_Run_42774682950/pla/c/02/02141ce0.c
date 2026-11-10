/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02141ce0; name: FUN_02141ce0
 */


undefined1 * FUN_02141ce0(void)

{
  int iVar1;
  
  if (((DAT_043db400 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_043db400), iVar1 != 0)) {
    if (((DAT_043db390 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_043db390), iVar1 != 0)) {
      FUN_02141380();
      FUN_00100250(PTR__string_04379718,&DAT_043db378,&PTR_LOOP_0411a000);
      __cxa_guard_release(&DAT_043db390);
    }
    DAT_043db3f8 = &DAT_043db378;
    __cxa_guard_release(&DAT_043db400);
  }
  return DAT_043db3f8;
}


