/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 024dedd0; name: FUN_024dedd0
 */


void FUN_024dedd0(void)

{
  int iVar1;
  
  if (((DAT_043e8178 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_043e8178), iVar1 != 0)) {
    FUN_024dee30();
    FUN_00100250(PTR__string_04379718,&DAT_043e8160,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043e8178);
    return;
  }
  return;
}


