/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02849f7c; name: FUN_02849f7c
 */


void FUN_02849f7c(void)

{
  int iVar1;
  
  if (((DAT_043eb5b0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_043eb5b0), iVar1 != 0)) {
    DAT_043eb5a8 = FUN_00d6a0a4();
    __cxa_guard_release(&DAT_043eb5b0);
    return;
  }
  return;
}


