/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0114321c; name: FUN_0114321c
 */


void FUN_0114321c(long param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 < 0x100) {
    param_1 = param_1 + (ulong)(param_2 >> 5) * 4;
    uVar1 = 1 << (ulong)(param_2 & 0x1f);
    *(uint *)(param_1 + 0x68) = *(uint *)(param_1 + 0x68) | uVar1;
    *(uint *)(param_1 + 0x88) = *(uint *)(param_1 + 0x88) | uVar1;
  }
  return;
}


