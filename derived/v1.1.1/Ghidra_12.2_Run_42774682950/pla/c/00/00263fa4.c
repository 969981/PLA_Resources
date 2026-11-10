/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00263fa4; name: FUN_00263fa4
 */


void FUN_00263fa4(float param_1,long param_2)

{
  if (*(float *)(param_2 + 0x150) != param_1) {
    *(float *)(param_2 + 0x150) = param_1;
    *(byte *)(param_2 + 0x158) = *(byte *)(param_2 + 0x158) | 1;
  }
  return;
}


