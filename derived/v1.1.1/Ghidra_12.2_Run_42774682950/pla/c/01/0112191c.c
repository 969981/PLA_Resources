/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0112191c; name: FUN_0112191c
 */


void FUN_0112191c(long param_1,long param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_2 + 8);
  if (uVar1 < 0x800) {
    param_1 = param_1 + (ulong)(uVar1 >> 3);
    *(byte *)(param_1 + 0x7bd8) = *(byte *)(param_1 + 0x7bd8) | (byte)(1 << (ulong)(uVar1 & 7));
  }
  return;
}


