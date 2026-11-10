/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010c2cc4; name: FUN_010c2cc4
 */


undefined8 * FUN_010c2cc4(void)

{
  int iVar1;
  
  if (((DAT_043ba4c8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_043ba4c8), iVar1 != 0)) {
    DAT_043ba4c0 = 0;
    __cxa_guard_release(&DAT_043ba4c8);
  }
  return &DAT_043ba4c0;
}


