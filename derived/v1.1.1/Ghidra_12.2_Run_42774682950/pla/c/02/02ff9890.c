/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ff9890; name: FUN_02ff9890
 */


void FUN_02ff9890(long *param_1,long *param_2)

{
  long lVar1;
  
  *param_1 = 0;
  lVar1 = 0;
  if (*param_2 != 0) {
    lVar1 = (long)param_2 + (*param_2 - (long)param_1);
  }
  *param_1 = lVar1;
  *param_2 = 0;
  return;
}


