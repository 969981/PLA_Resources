/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008b3f24; name: FUN_008b3f24
 */


void FUN_008b3f24(void)

{
  int iVar1;
  
  if (((DAT_043a6ff0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_043a6ff0), iVar1 != 0)) {
    DAT_043a6fe8 = FUN_008a6530();
    __cxa_guard_release(&DAT_043a6ff0);
    return;
  }
  return;
}


