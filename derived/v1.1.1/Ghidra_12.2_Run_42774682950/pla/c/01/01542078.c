/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01542078; name: FUN_01542078
 */


void FUN_01542078(void)

{
  int iVar1;
  
  if (((DAT_043c9418 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_043c9418), iVar1 != 0)) {
    DAT_043c9410 = FUN_015403c8();
    __cxa_guard_release(&DAT_043c9418);
    return;
  }
  return;
}


