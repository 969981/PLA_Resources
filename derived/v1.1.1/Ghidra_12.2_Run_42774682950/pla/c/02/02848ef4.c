/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02848ef4; name: FUN_02848ef4
 */


void FUN_02848ef4(void)

{
  int iVar1;
  
  if (((DAT_043eb5a0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_043eb5a0), iVar1 != 0)) {
    DAT_043eb598 = FUN_00d6a0a4();
    __cxa_guard_release(&DAT_043eb5a0);
    return;
  }
  return;
}


