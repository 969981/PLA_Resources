/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0284be28; name: FUN_0284be28
 */


void FUN_0284be28(void)

{
  int iVar1;
  
  if (((DAT_043eb5e0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_043eb5e0), iVar1 != 0)) {
    DAT_043eb5d8 = FUN_00d6a044();
    __cxa_guard_release(&DAT_043eb5e0);
    return;
  }
  return;
}


