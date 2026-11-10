/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01854938; name: FUN_01854938
 */


void FUN_01854938(void)

{
  int iVar1;
  
  if (((DAT_043d1470 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_043d1470), iVar1 != 0)) {
    DAT_043d1468 = FUN_0087f8f0();
    __cxa_guard_release(&DAT_043d1470);
    return;
  }
  return;
}


