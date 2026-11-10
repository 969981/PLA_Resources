/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01501a00; name: FUN_01501a00
 */


void FUN_01501a00(void)

{
  int iVar1;
  
  if (((DAT_043c79d0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_043c79d0), iVar1 != 0)) {
    DAT_043c79c8 = FUN_00d62048();
    __cxa_guard_release(&DAT_043c79d0);
    return;
  }
  return;
}


