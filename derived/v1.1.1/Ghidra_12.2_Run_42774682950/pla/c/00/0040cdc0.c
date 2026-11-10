/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0040cdc0; name: FUN_0040cdc0
 */


uint FUN_0040cdc0(long *param_1,uint param_2)

{
  if (((int)param_2 < 0) || ((int)param_1[1] <= (int)(param_2 >> 5))) {
    return 0;
  }
  return *(uint *)(*param_1 + (ulong)(param_2 >> 5) * 4) >> (ulong)(param_2 & 0x1f) & 1;
}


