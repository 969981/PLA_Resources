/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bcf674; name: FUN_02bcf674
 */


void FUN_02bcf674(undefined8 param_1,long param_2,long *param_3,long *param_4)

{
  if (param_2 != 0) {
    param_2 = param_2 - (ulong)*(byte *)(param_2 + -1);
    *param_3 = *(long *)(param_2 + -0x10) - (ulong)*(byte *)(param_2 + -3);
    *param_4 = 1L << ((ulong)*(byte *)(param_2 + -2) & 0x3f);
  }
  return;
}


