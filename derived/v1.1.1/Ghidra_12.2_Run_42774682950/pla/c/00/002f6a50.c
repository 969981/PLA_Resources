/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002f6a50; name: FUN_002f6a50
 */


undefined8 * FUN_002f6a50(void)

{
  int iVar1;
  
  if (((DAT_0438f8d8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0438f8d8), iVar1 != 0)) {
    DAT_0438f8e0 = 0x10000;
    DAT_0438f8f0 = 6;
    DAT_0438f8e8 = DAT_0388a670;
    __cxa_guard_release(&DAT_0438f8d8);
    return &DAT_0438f8e0;
  }
  return &DAT_0438f8e0;
}


