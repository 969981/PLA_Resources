/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00612290; name: FUN_00612290
 */


undefined ** FUN_00612290(void)

{
  int iVar1;
  
  if (((DAT_0439f410 & 1) != 0) || (iVar1 = __cxa_guard_acquire(&DAT_0439f410), iVar1 == 0)) {
    return DAT_0439f408;
  }
  if (((DAT_0439f3f8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0439f3f8), iVar1 != 0)) {
    __cxa_guard_release(&DAT_0439f3f8);
  }
  DAT_0439f408 = &PTR_PTR_041909d8;
  __cxa_guard_release(&DAT_0439f410);
  return DAT_0439f408;
}


