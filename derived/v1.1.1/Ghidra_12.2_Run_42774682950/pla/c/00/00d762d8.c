/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d762d8; name: FUN_00d762d8
 */


void FUN_00d762d8(void)

{
  int iVar1;
  
  if (((DAT_043acea0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_043acea0), iVar1 != 0)) {
    DAT_043ace98 = FUN_00d76324();
    __cxa_guard_release(&DAT_043acea0);
    return;
  }
  return;
}


