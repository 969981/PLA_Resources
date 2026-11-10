/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02200954; name: FUN_02200954
 */


undefined8 * FUN_02200954(void)

{
  int iVar1;
  
  if (((DAT_043ddf48 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_043ddf48), iVar1 != 0)) {
    FUN_022009c0();
    DAT_043ddf40 = &DAT_043ddf50;
    __cxa_guard_release(&DAT_043ddf48);
  }
  return DAT_043ddf40;
}


