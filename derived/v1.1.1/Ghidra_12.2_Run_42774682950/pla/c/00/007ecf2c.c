/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007ecf2c; name: FUN_007ecf2c
 */


undefined8 * FUN_007ecf2c(void)

{
  int iVar1;
  long lVar2;
  
  if (((DAT_043a3ef0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_043a3ef0), iVar1 != 0)) {
    lVar2 = nn::os::GetSystemTickFrequency();
    DAT_043a3ee8 = lVar2 / 1000000;
    __cxa_guard_release(&DAT_043a3ef0);
    return &DAT_043a3ee8;
  }
  return &DAT_043a3ee8;
}


