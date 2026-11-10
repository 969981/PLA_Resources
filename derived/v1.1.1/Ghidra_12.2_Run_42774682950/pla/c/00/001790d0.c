/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001790d0; name: FUN_001790d0
 */


ulong FUN_001790d0(long *param_1)

{
  byte *pbVar1;
  long local_18;
  
  pbVar1 = (byte *)(*(code *)param_1[2])(param_1[4],param_1[3],&local_18);
  if (pbVar1 == (byte *)0x0 || local_18 == 0) {
    return 0xffffffff;
  }
  *param_1 = local_18 + -1;
  param_1[1] = (long)(pbVar1 + 1);
  return (ulong)*pbVar1;
}


