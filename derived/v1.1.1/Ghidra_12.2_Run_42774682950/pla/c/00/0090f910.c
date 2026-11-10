/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0090f910; name: FUN_0090f910
 */


void FUN_0090f910(void)

{
  int iVar1;
  
  if (((DAT_043a8390 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_043a8390), iVar1 != 0)) {
    FUN_0090f970();
    FUN_00100250(PTR__string_04379718,&DAT_043a8378,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043a8390);
    return;
  }
  return;
}


