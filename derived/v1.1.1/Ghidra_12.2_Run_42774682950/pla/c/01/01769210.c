/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01769210; name: FUN_01769210
 */


void FUN_01769210(void)

{
  int iVar1;
  
  if (((DAT_043cf398 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_043cf398), iVar1 != 0)) {
    FUN_01769270();
    FUN_00100250(PTR__string_04379718,&DAT_043cf380,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043cf398);
    return;
  }
  return;
}


