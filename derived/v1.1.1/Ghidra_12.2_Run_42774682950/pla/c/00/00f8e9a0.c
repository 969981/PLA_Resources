/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00f8e9a0; name: FUN_00f8e9a0
 */


void FUN_00f8e9a0(void)

{
  int iVar1;
  
  if (((DAT_043b6310 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_043b6310), iVar1 != 0)) {
    FUN_00f8ea00();
    FUN_00100250(PTR__string_04379718,&DAT_043b62f8,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043b6310);
    return;
  }
  return;
}


