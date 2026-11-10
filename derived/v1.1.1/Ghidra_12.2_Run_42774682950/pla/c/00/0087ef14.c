/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0087ef14; name: FUN_0087ef14
 */


bool FUN_0087ef14(long *param_1)

{
  long lVar1;
  
  lVar1 = FUN_0087eff0();
  *param_1 = lVar1;
  lVar1 = FUN_0087f000();
  param_1[1] = lVar1;
  lVar1 = FUN_0087f010();
  param_1[2] = lVar1;
  lVar1 = FUN_0087f020();
  param_1[3] = lVar1;
  lVar1 = FUN_0087f030();
  param_1[4] = lVar1;
  lVar1 = FUN_0087f040();
  param_1[5] = lVar1;
  lVar1 = FUN_0087f050();
  param_1[6] = lVar1;
  lVar1 = FUN_0087f060();
  param_1[7] = lVar1;
  if ((((*param_1 == 0) || (param_1[1] == 0)) || (param_1[2] == 0)) ||
     (((param_1[3] == 0 || (param_1[4] == 0)) || (param_1[5] == 0)))) {
    return false;
  }
  return lVar1 != 0 && param_1[6] != 0;
}


