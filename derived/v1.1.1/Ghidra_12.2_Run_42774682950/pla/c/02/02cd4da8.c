/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02cd4da8; name: FUN_02cd4da8
 */


undefined8 * FUN_02cd4da8(void)

{
  int iVar1;
  
  if (((DAT_04408c40 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04408c40), iVar1 != 0)) {
    DAT_04408c38 = FUN_0120cd48();
    __cxa_guard_release(&DAT_04408c40);
  }
  return &DAT_04408c38;
}


