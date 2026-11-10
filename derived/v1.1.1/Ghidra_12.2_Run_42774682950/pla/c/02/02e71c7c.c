/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e71c7c; name: FUN_02e71c7c
 */


void FUN_02e71c7c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_042a6fe8;
  if (param_1[4] != 0) {
    FUN_02f59e70(4);
    param_1[4] = 0;
  }
  FUN_02e74a84(param_1);
  return;
}


