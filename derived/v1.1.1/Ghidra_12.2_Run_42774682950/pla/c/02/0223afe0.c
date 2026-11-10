/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0223afe0; name: FUN_0223afe0
 */


void FUN_0223afe0(void)

{
  int iVar1;
  
  if (((DAT_043deec8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_043deec8), iVar1 != 0)) {
    FUN_0223b040();
    FUN_00100250(PTR__string_04379718,&DAT_043deeb0,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043deec8);
    return;
  }
  return;
}


