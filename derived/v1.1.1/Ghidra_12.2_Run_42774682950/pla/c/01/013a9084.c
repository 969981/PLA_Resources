/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013a9084; name: FUN_013a9084
 */


void FUN_013a9084(void)

{
  int iVar1;
  
  if (((DAT_043c27e8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_043c27e8), iVar1 != 0)) {
    DAT_043c27e0 = FUN_0139e67c();
    __cxa_guard_release(&DAT_043c27e8);
    return;
  }
  return;
}


