/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0333de18; name: FUN_0333de18
 */


void FUN_0333de18(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  uVar1 = param_2[9];
  param_1[9] = uVar1;
  if (1 < uVar1) {
    param_1[1] = param_1 + 2;
    (*(code *)param_2[9])(param_2[1]);
  }
  param_2[9] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  return;
}


