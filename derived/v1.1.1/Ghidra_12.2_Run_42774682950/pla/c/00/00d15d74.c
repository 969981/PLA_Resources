/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d15d74; name: FUN_00d15d74
 */


undefined4 FUN_00d15d74(long param_1)

{
  uint uVar1;
  
  uVar1 = *(byte *)(param_1 + 0x50) - 1;
  if (uVar1 < 10) {
    return *(undefined4 *)(&DAT_03a781f8 + (long)(char)uVar1 * 4);
  }
  return 2;
}


