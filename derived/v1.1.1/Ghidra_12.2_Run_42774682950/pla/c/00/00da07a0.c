/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00da07a0; name: FUN_00da07a0
 */


void FUN_00da07a0(void)

{
  int iVar1;
  
  if (((DAT_043ad150 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_043ad150), iVar1 != 0)) {
    DAT_043ad148 = FUN_00da0740();
    __cxa_guard_release(&DAT_043ad150);
    return;
  }
  return;
}


