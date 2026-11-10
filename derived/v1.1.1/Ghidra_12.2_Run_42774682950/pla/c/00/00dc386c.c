/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00dc386c; name: FUN_00dc386c
 */


void FUN_00dc386c(int *param_1,int param_2,uint param_3)

{
  if ((*param_1 == param_2) && ((param_3 & 1) == 0)) {
    return;
  }
  *param_1 = param_2;
  FUN_00dc3888();
  return;
}


