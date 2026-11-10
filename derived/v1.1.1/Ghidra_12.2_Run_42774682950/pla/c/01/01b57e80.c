/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b57e80; name: FUN_01b57e80
 */


void FUN_01b57e80(long param_1,uint param_2,uint param_3)

{
  if ((param_2 & 1) == 0) {
    *(uint *)(param_1 + 0x4a8) = *(uint *)(param_1 + 0x4a8) & (param_3 ^ 0xffffffff);
    return;
  }
  *(uint *)(param_1 + 0x4a8) = *(uint *)(param_1 + 0x4a8) | param_3;
  return;
}


