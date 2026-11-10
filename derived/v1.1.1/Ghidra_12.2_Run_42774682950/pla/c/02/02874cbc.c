/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02874cbc; name: FUN_02874cbc
 */


void FUN_02874cbc(void)

{
  int iVar1;
  
  if (((DAT_043ebec8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_043ebec8), iVar1 != 0)) {
    DAT_043ebec0 = FUN_027f5f94();
    __cxa_guard_release(&DAT_043ebec8);
    return;
  }
  return;
}


