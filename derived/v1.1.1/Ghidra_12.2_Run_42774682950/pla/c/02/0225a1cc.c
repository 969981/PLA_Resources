/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0225a1cc; name: FUN_0225a1cc
 */


undefined1 * FUN_0225a1cc(void)

{
  int iVar1;
  
  if (((DAT_043df5a8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_043df5a8), iVar1 != 0)) {
    if (((DAT_043df538 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_043df538), iVar1 != 0)) {
      FUN_02259c80();
      FUN_00100250(PTR__string_04379718,&DAT_043df520,&PTR_LOOP_0411a000);
      __cxa_guard_release(&DAT_043df538);
    }
    DAT_043df5a0 = &DAT_043df520;
    __cxa_guard_release(&DAT_043df5a8);
  }
  return DAT_043df5a0;
}


