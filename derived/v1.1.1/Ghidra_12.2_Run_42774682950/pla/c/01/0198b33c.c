/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0198b33c; name: FUN_0198b33c
 */


undefined8 * FUN_0198b33c(void)

{
  int iVar1;
  
  if (((DAT_043d21f0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_043d21f0), iVar1 != 0)) {
    DAT_043d21e8 = FUN_018644dc();
    __cxa_guard_release(&DAT_043d21f0);
  }
  return &DAT_043d21e8;
}


