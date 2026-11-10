/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 023ee754; name: FUN_023ee754
 */


undefined1 * FUN_023ee754(void)

{
  int iVar1;
  
  if (((DAT_043e4428 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_043e4428), iVar1 != 0)) {
    FUN_023ede20();
    DAT_043e4420 = &DAT_043e43c0;
    __cxa_guard_release(&DAT_043e4428);
  }
  return DAT_043e4420;
}


