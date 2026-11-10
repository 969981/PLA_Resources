/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00ee0220; name: FUN_00ee0220
 */


void FUN_00ee0220(void)

{
  int iVar1;
  
  if (((DAT_043b2848 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_043b2848), iVar1 != 0)) {
    FUN_00ee0280();
    FUN_00100250(PTR__string_04379718,&DAT_043b2830,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043b2848);
    return;
  }
  return;
}


