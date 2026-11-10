/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 015dc550; name: FUN_015dc550
 */


void FUN_015dc550(void)

{
  int iVar1;
  
  if (((DAT_043cb7c8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_043cb7c8), iVar1 != 0)) {
    FUN_015dc5b0();
    FUN_00100250(PTR__string_04379718,&DAT_043cb7b0,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043cb7c8);
    return;
  }
  return;
}


