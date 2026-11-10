/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0032bcac; name: FUN_0032bcac
 */


void FUN_0032bcac(long param_1,int param_2)

{
  if (*(int *)(param_1 + 8) < param_2) {
    FUN_0032beb0(param_1,param_2 - *(int *)(param_1 + 8));
    return;
  }
  return;
}


