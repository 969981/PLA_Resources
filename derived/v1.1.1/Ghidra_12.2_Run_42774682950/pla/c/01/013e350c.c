/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013e350c; name: FUN_013e350c
 */


void FUN_013e350c(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_0420be90;
  FUN_013f7164(param_1[1]);
  lVar1 = param_1[1];
  param_1[1] = 0;
  if (lVar1 != 0) {
    FUN_013e288c(param_1 + 2);
  }
  FUN_013f6c34(param_1[5]);
  lVar1 = param_1[5];
  param_1[5] = 0;
  if (lVar1 != 0) {
    FUN_013e2c64(param_1 + 6);
  }
  FUN_013f6b34(param_1[9]);
  lVar1 = param_1[9];
  param_1[9] = 0;
  if (lVar1 == 0) {
    param_1[9] = 0;
  }
  else {
    FUN_013e303c(param_1 + 10);
    lVar1 = param_1[9];
    param_1[9] = 0;
    if (lVar1 != 0) {
      FUN_013e303c(param_1 + 10);
    }
  }
  lVar1 = param_1[5];
  param_1[5] = 0;
  if (lVar1 != 0) {
    FUN_013e2c64(param_1 + 6);
  }
  lVar1 = param_1[1];
  param_1[1] = 0;
  if (lVar1 == 0) {
    return;
  }
  FUN_013e288c(param_1 + 2);
  return;
}


