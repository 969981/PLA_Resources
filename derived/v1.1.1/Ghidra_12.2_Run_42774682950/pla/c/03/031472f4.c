/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031472f4; name: FUN_031472f4
 */


void FUN_031472f4(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = &DAT_042dac00;
  param_1[1] = 0xffffffff;
  param_1[2] = 1;
  uVar1 = *param_2;
  param_1[5] = param_2[1];
  param_1[4] = uVar1;
  uVar2 = param_3[1];
  uVar1 = *param_3;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[7] = uVar2;
  param_1[6] = uVar1;
  return;
}


