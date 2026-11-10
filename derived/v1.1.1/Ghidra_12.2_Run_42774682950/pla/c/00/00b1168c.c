/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00b1168c; name: FUN_00b1168c
 */


void FUN_00b1168c(void)

{
  int iVar1;
  
  if ((((byte)DAT_043aa0f0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_043aa0f0), iVar1 != 0)) {
    DAT_043aa0e8 = FUN_00b116d8();
    __cxa_guard_release(&DAT_043aa0f0);
    return;
  }
  return;
}


