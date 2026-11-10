/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032d3d50; name: FUN_032d3d50
 */


void FUN_032d3d50(long param_1,long *param_2)

{
  *param_2 = *(long *)(param_1 + 0x10) - *(long *)(param_1 + 8);
  param_2[3] = *(long *)(param_1 + 0x10) - *(long *)(param_1 + 0x18);
  param_2[1] = *(long *)(param_1 + 0x18) - *(long *)(param_1 + 8);
  param_2[2] = *(long *)(param_1 + 0x28);
  return;
}


