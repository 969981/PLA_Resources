/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01750100; name: FUN_01750100
 */


void FUN_01750100(void)

{
  int iVar1;
  
  if (((DAT_043cec88 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_043cec88), iVar1 != 0)) {
    FUN_01750160();
    FUN_00100250(PTR__string_04379718,&DAT_043cec70,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043cec88);
    return;
  }
  return;
}


