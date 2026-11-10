/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007e5ee4; name: FUN_007e5ee4
 */


undefined4 FUN_007e5ee4(long param_1)

{
  uint uVar1;
  
  uVar1 = *(int *)(param_1 + 8) - 1;
  if (uVar1 < 8) {
    return *(undefined4 *)(&DAT_038887e0 + (long)(int)uVar1 * 4);
  }
  return 0;
}


