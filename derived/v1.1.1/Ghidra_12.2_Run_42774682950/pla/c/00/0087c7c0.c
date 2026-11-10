/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0087c7c0; name: FUN_0087c7c0
 */


undefined8 * FUN_0087c7c0(void)

{
  int iVar1;
  
  if (((DAT_043a6d40 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_043a6d40), iVar1 != 0)) {
    DAT_043a6d80 = 0;
    DAT_043a6d88 = 0;
    DAT_043a6d48 = 0;
    DAT_043a6d70 = 0;
    DAT_043a6d78 = 0;
    DAT_043a6d60 = 0;
    DAT_043a6d68 = 0;
    DAT_043a6d50 = 0;
    DAT_043a6d58 = 0;
    __cxa_guard_release(&DAT_043a6d40);
  }
  return &DAT_043a6d48;
}


