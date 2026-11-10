/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0195fd04; name: FUN_0195fd04
 */


undefined8 * FUN_0195fd04(void)

{
  int iVar1;
  
  if (((DAT_043d2010 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_043d2010), iVar1 != 0)) {
    FUN_019607b4();
    DAT_043d2008 = &DAT_043d1ff8;
    __cxa_guard_release(&DAT_043d2010);
  }
  return &DAT_043d2008;
}


