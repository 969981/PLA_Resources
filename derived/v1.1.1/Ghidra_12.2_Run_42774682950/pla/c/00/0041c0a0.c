/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0041c0a0; name: FUN_0041c0a0
 */


bool FUN_0041c0a0(long param_1,long param_2,int param_3)

{
  return (0 < param_3 && param_1 != param_2) &&
         ((ulong)(param_1 - param_2) < (ulong)(long)param_3 ||
         (ulong)-(long)param_3 < (ulong)(param_1 - param_2));
}


