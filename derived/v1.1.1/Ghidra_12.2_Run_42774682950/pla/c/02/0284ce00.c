/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0284ce00; name: FUN_0284ce00
 */


undefined2 FUN_0284ce00(long param_1,uint param_2)

{
  if (param_2 < *(uint *)(param_1 + 0xa8) >> 1) {
    return *(undefined2 *)(*(long *)(param_1 + 0xa0) + (ulong)param_2 * 2);
  }
  return 0;
}


