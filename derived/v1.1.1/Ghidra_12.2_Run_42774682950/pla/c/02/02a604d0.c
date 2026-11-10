/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a604d0; name: FUN_02a604d0
 */


undefined8 * FUN_02a604d0(void)

{
  int iVar1;
  
  if (((DAT_043eeef8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_043eeef8), iVar1 != 0)) {
    DAT_043eeef0 = FUN_00d8faf4();
    __cxa_guard_release(&DAT_043eeef8);
  }
  return &DAT_043eeef0;
}


