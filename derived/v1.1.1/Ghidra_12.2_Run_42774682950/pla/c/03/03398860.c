/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03398860; name: FUN_03398860
 */


long FUN_03398860(long param_1)

{
  ulong local_18;
  
  FUN_032e42b4(&local_18,param_1);
  while (1 < local_18) {
    param_1 = *(long *)(param_1 + 8);
    FUN_032e42b4(&local_18,param_1);
  }
  return param_1;
}


