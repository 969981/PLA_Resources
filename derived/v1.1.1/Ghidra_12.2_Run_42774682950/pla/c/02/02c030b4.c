/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c030b4; name: FUN_02c030b4
 */


undefined8 * FUN_02c030b4(void)

{
  int iVar1;
  
  if (((DAT_043f2138 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_043f2138), iVar1 != 0)) {
    DAT_043f2130 = FUN_00d8faf4();
    __cxa_guard_release(&DAT_043f2138);
  }
  return &DAT_043f2130;
}


