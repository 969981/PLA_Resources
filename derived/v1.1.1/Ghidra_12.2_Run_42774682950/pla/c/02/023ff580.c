/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 023ff580; name: FUN_023ff580
 */


void FUN_023ff580(void)

{
  int iVar1;
  
  if (((DAT_043e4a70 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_043e4a70), iVar1 != 0)) {
    FUN_023ff5e0();
    FUN_00100250(PTR__string_04379718,&DAT_043e4a58,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043e4a70);
    return;
  }
  return;
}


