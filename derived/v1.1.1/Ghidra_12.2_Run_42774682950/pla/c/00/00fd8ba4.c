/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00fd8ba4; name: FUN_00fd8ba4
 */


undefined1 * FUN_00fd8ba4(void)

{
  int iVar1;
  
  if (((DAT_043b7aa8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_043b7aa8), iVar1 != 0)) {
    FUN_00fd7db0();
    DAT_043b7aa0 = &DAT_043b78d8;
    __cxa_guard_release(&DAT_043b7aa8);
  }
  return DAT_043b7aa0;
}


