/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01c35a98; name: FUN_01c35a98
 */


uint FUN_01c35a98(long param_1)

{
  uint uVar1;
  
  uVar1 = *(int *)(param_1 + 0x268) - 1;
  if (uVar1 < 5) {
    return 0x1dU >> (ulong)(uVar1 & 0x1f) & 1;
  }
  return 0;
}


