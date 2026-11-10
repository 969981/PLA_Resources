/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032d8f70; name: FUN_032d8f70
 */


void FUN_032d8f70(long param_1,long param_2)

{
  *(long *)(param_1 + 0x178) = param_2;
  if (param_2 == 0) {
    *(ulong *)(param_1 + 0x70) = *(ulong *)(param_1 + 0x70) & 0xfffffffffbffffff;
    return;
  }
  *(ulong *)(param_1 + 0x70) = *(ulong *)(param_1 + 0x70) | 0x4000000;
  *(long *)(param_1 + 0x148) = param_2;
  return;
}


