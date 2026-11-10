/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 019ac58c; name: FUN_019ac58c
 */


void FUN_019ac58c(void)

{
  int iVar1;
  
  if (((DAT_043d22e0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_043d22e0), iVar1 != 0)) {
    DAT_043d22d8 = FUN_018644dc();
    __cxa_guard_release(&DAT_043d22e0);
    return;
  }
  return;
}


