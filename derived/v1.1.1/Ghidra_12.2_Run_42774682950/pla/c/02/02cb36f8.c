/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02cb36f8; name: FUN_02cb36f8
 */


undefined8 * FUN_02cb36f8(void)

{
  int iVar1;
  
  if (((DAT_04407c78 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04407c78), iVar1 != 0)) {
    DAT_04407c70 = FUN_00d76324();
    __cxa_guard_release(&DAT_04407c78);
  }
  return &DAT_04407c70;
}


