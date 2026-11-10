/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0022f714; name: FUN_0022f714
 */


long FUN_0022f714(long param_1,int param_2,int param_3,int param_4,int param_5)

{
  return *(long *)(param_1 + 0x260) +
         (long)(param_2 * 0xc + param_3 * 4 + param_4 + param_5 * 2) * 8;
}


