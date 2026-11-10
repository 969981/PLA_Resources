/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00e4e334; name: FUN_00e4e334
 */


undefined1 * FUN_00e4e334(void)

{
  int iVar1;
  
  if (((DAT_043b0158 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_043b0158), iVar1 != 0)) {
    if (((DAT_043affb0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_043affb0), iVar1 != 0)) {
      FUN_00e4d1e0();
      FUN_00100250(PTR__string_04379718,&DAT_043aff98,&PTR_LOOP_0411a000);
      __cxa_guard_release(&DAT_043affb0);
    }
    DAT_043b0150 = &DAT_043aff98;
    __cxa_guard_release(&DAT_043b0158);
  }
  return DAT_043b0150;
}


