/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b6ac2c; name: FUN_01b6ac2c
 */


void FUN_01b6ac2c(void)

{
  int iVar1;
  
  if (((DAT_043d2be8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_043d2be8), iVar1 != 0)) {
    DAT_043d2be0 = FUN_01b6ab4c();
    __cxa_guard_release(&DAT_043d2be8);
    return;
  }
  return;
}


