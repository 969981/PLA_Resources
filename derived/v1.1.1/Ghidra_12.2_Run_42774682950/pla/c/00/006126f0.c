/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006126f0; name: FUN_006126f0
 */


undefined ** FUN_006126f0(void)

{
  int iVar1;
  
  if (((DAT_0439f448 & 1) != 0) || (iVar1 = __cxa_guard_acquire(&DAT_0439f448), iVar1 == 0)) {
    return DAT_0439f440;
  }
  if (((DAT_0439f438 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0439f438), iVar1 != 0)) {
    __cxa_guard_release(&DAT_0439f438);
  }
  DAT_0439f440 = &PTR_PTR_041909f8;
  __cxa_guard_release(&DAT_0439f448);
  return DAT_0439f440;
}


