/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0081aab0; name: FUN_0081aab0
 */


void FUN_0081aab0(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = (long)param_2;
  *param_2 = lVar1;
  param_2[1] = (long)param_1;
  if (lVar1 != 0) {
    *(long **)(lVar1 + 8) = param_2;
  }
  return;
}


