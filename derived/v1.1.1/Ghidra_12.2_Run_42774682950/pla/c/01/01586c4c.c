/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01586c4c; name: FUN_01586c4c
 */


void FUN_01586c4c(long *param_1)

{
  long lVar1;
  
  FUN_01586c8c(param_1,param_1[6]);
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 == 0) {
    return;
  }
  FUN_01586e08(param_1 + 1);
  return;
}


