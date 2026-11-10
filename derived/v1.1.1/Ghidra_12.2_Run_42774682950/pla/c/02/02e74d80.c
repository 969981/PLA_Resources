/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e74d80; name: FUN_02e74d80
 */


undefined8 * FUN_02e74d80(void)

{
  int iVar1;
  
  if (((DAT_0440a318 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0440a318), iVar1 != 0)) {
    DAT_0440a310 = &PTR_LAB_042a7050;
    __cxa_guard_release(&DAT_0440a318);
  }
  return &DAT_0440a310;
}


