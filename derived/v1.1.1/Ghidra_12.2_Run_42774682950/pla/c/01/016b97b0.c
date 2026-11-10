/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 016b97b0; name: FUN_016b97b0
 */


void FUN_016b97b0(long *param_1)

{
  long lVar1;
  
  FUN_016b97f0(param_1,param_1[6]);
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 == 0) {
    return;
  }
  FUN_016b996c(param_1 + 1);
  return;
}


