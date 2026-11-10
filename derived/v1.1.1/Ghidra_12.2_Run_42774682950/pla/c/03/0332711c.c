/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0332711c; name: FUN_0332711c
 */


void FUN_0332711c(long *param_1,int param_2)

{
  FUN_03327bc0();
  FUN_03327c58(param_1 + 2,param_2);
  *(long *)*param_1 = (long)param_2;
  *(long *)(*param_1 + 8) = param_1[2];
  *(long *)param_1[2] = (long)param_2;
  return;
}


