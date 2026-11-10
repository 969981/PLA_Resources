/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031db014; name: FUN_031db014
 */


void FUN_031db014(undefined4 *param_1,undefined4 param_2)

{
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0x8000000000000000;
  param_1[6] = 0;
  *param_1 = 0;
  *(undefined2 *)(param_1 + 1) = 0;
  FUN_02ff1f1c(param_1 + 2,0,param_2,0);
  return;
}


