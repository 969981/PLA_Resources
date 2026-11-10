/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008c1cec; name: FUN_008c1cec
 */


void FUN_008c1cec(void)

{
  int iVar1;
  
  if (((DAT_043a7100 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_043a7100), iVar1 != 0)) {
    DAT_043a70f8 = FUN_008a6530();
    __cxa_guard_release(&DAT_043a7100);
    return;
  }
  return;
}


