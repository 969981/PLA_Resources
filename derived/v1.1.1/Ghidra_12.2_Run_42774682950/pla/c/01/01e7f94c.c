/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01e7f94c; name: FUN_01e7f94c
 */


void FUN_01e7f94c(void)

{
  int iVar1;
  
  if (((DAT_043d3f38 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_043d3f38), iVar1 != 0)) {
    FUN_01e75888();
    DAT_043d3f30 = &DAT_043d3f20;
    __cxa_guard_release(&DAT_043d3f38);
    return;
  }
  return;
}


