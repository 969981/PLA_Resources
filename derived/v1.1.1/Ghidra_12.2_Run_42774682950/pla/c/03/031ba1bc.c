/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031ba1bc; name: FUN_031ba1bc
 */


void FUN_031ba1bc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  *(undefined4 *)(param_1 + 2) = param_4;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[6] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  return;
}


