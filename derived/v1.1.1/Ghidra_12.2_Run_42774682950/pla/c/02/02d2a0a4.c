/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02d2a0a4; name: FUN_02d2a0a4
 */


undefined8 * FUN_02d2a0a4(void)

{
  int iVar1;
  
  if (((DAT_04408cb0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04408cb0), iVar1 != 0)) {
    DAT_04408ca8 = FUN_0120cd48();
    __cxa_guard_release(&DAT_04408cb0);
  }
  return &DAT_04408ca8;
}


