/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01949c00; name: FUN_01949c00
 */


undefined8 * FUN_01949c00(void)

{
  int iVar1;
  
  if (((DAT_043d1e10 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_043d1e10), iVar1 != 0)) {
    FUN_0194a6ac();
    DAT_043d1e08 = &DAT_043d1df8;
    __cxa_guard_release(&DAT_043d1e10);
  }
  return &DAT_043d1e08;
}


