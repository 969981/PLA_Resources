/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01d47200; name: FUN_01d47200
 */


void FUN_01d47200(void)

{
  int iVar1;
  
  if (((DAT_043d35a8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_043d35a8), iVar1 != 0)) {
    DAT_043d35a0 = FUN_01caaec4();
    __cxa_guard_release(&DAT_043d35a8);
    return;
  }
  return;
}


