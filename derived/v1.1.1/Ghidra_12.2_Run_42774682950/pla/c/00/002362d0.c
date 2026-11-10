/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002362d0; name: FUN_002362d0
 */


undefined8 FUN_002362d0(long *param_1,uint param_2)

{
  return *(undefined8 *)(*param_1 + (long)(int)((int)param_1[1] + ~param_2) * 8);
}


