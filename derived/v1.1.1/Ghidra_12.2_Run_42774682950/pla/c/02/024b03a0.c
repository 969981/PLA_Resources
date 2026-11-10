/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 024b03a0; name: FUN_024b03a0
 */


void FUN_024b03a0(void)

{
  int iVar1;
  
  if (((DAT_043e7040 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_043e7040), iVar1 != 0)) {
    FUN_024b0400();
    FUN_00100250(PTR__string_04379718,&DAT_043e7028,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043e7040);
    return;
  }
  return;
}


