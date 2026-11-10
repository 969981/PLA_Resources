/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 012b13e0; name: FUN_012b13e0
 */


void FUN_012b13e0(void)

{
  int iVar1;
  
  if (((DAT_043c0c78 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_043c0c78), iVar1 != 0)) {
    FUN_012b1440();
    FUN_00100250(PTR__string_04379718,&DAT_043c0c60,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043c0c78);
    return;
  }
  return;
}


