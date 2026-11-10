/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02704be4; name: FUN_02704be4
 */


void FUN_02704be4(undefined8 *param_1,undefined8 *param_2)

{
  *param_2 = *param_1;
  param_2[2] = 0;
  param_2[1] = 0;
  FUN_00b5fc1c(param_2 + 1,param_1 + 1);
  return;
}


