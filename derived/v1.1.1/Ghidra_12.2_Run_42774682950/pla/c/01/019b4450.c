/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 019b4450; name: FUN_019b4450
 */


undefined8 * FUN_019b4450(void)

{
  int iVar1;
  
  if (((DAT_043d2310 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_043d2310), iVar1 != 0)) {
    DAT_043d2308 = FUN_018644dc();
    __cxa_guard_release(&DAT_043d2310);
  }
  return &DAT_043d2308;
}


