/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 022e43fc; name: FUN_022e43fc
 */


undefined1 * FUN_022e43fc(void)

{
  int iVar1;
  
  if (((DAT_043e1418 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_043e1418), iVar1 != 0)) {
    FUN_022e4460();
    DAT_043e1410 = &DAT_043e1420;
    __cxa_guard_release(&DAT_043e1418);
  }
  return DAT_043e1410;
}


