/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00e4536c; name: FUN_00e4536c
 */


undefined1 * FUN_00e4536c(void)

{
  int iVar1;
  
  if (((DAT_043afd48 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_043afd48), iVar1 != 0)) {
    if (((DAT_043afcd8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_043afcd8), iVar1 != 0)) {
      FUN_00e44dc0();
      FUN_00100250(PTR__string_04379718,&DAT_043afcc0,&PTR_LOOP_0411a000);
      __cxa_guard_release(&DAT_043afcd8);
    }
    DAT_043afd40 = &DAT_043afcc0;
    __cxa_guard_release(&DAT_043afd48);
  }
  return DAT_043afd40;
}


