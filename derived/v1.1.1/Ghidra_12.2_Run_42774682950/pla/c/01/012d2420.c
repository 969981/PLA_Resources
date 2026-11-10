/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 012d2420; name: FUN_012d2420
 */


void FUN_012d2420(void)

{
  int iVar1;
  
  if (((DAT_043c1760 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_043c1760), iVar1 != 0)) {
    FUN_012d2480();
    FUN_00100250(PTR__string_04379718,&DAT_043c1748,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043c1760);
    return;
  }
  return;
}


