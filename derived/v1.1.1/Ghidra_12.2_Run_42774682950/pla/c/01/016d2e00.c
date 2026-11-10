/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 016d2e00; name: FUN_016d2e00
 */


void FUN_016d2e00(void)

{
  int iVar1;
  
  if (((DAT_043ccb48 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_043ccb48), iVar1 != 0)) {
    FUN_016d2e60();
    FUN_00100250(PTR__string_04379718,&DAT_043ccb30,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043ccb48);
    return;
  }
  return;
}


