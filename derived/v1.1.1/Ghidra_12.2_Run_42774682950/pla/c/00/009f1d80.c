/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 009f1d80; name: FUN_009f1d80
 */


void FUN_009f1d80(void)

{
  int iVar1;
  
  if (((DAT_043a94e0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_043a94e0), iVar1 != 0)) {
    DAT_043a94d8 = FUN_009f1dcc();
    __cxa_guard_release(&DAT_043a94e0);
    return;
  }
  return;
}


