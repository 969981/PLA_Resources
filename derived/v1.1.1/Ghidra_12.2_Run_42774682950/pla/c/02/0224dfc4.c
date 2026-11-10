/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0224dfc4; name: FUN_0224dfc4
 */


undefined1 * FUN_0224dfc4(void)

{
  int iVar1;
  
  if (((DAT_043df2f0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_043df2f0), iVar1 != 0)) {
    FUN_0224e030();
    DAT_043df2e8 = &DAT_043df2f8;
    __cxa_guard_release(&DAT_043df2f0);
  }
  return DAT_043df2e8;
}


