/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d6244c; name: FUN_00d6244c
 */


void FUN_00d6244c(void)

{
  int iVar1;
  
  if (((DAT_043abf30 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_043abf30), iVar1 != 0)) {
    DAT_043abf28 = FUN_00d62048();
    __cxa_guard_release(&DAT_043abf30);
    return;
  }
  return;
}


