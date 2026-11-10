/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 019bcb40; name: FUN_019bcb40
 */


void FUN_019bcb40(void)

{
  int iVar1;
  
  if (((DAT_043d2330 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_043d2330), iVar1 != 0)) {
    DAT_043d2328 = FUN_018644dc();
    __cxa_guard_release(&DAT_043d2330);
    return;
  }
  return;
}


