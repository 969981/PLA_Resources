/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02140b40; name: FUN_02140b40
 */


void FUN_02140b40(void)

{
  int iVar1;
  
  if (((DAT_043db318 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_043db318), iVar1 != 0)) {
    FUN_02140ba0();
    FUN_00100250(PTR__string_04379718,&DAT_043db300,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043db318);
    return;
  }
  return;
}


