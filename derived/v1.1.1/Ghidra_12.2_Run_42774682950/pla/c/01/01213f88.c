/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01213f88; name: FUN_01213f88
 */


void FUN_01213f88(void)

{
  int iVar1;
  
  if (((DAT_043bf000 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_043bf000), iVar1 != 0)) {
    DAT_043beff8 = FUN_00d62048();
    __cxa_guard_release(&DAT_043bf000);
    return;
  }
  return;
}


