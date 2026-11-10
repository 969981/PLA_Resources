/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03325668; name: FUN_03325668
 */


void FUN_03325668(undefined8 *param_1,long param_2,undefined8 param_3,undefined4 param_4,
                 undefined8 param_5)

{
  undefined4 uVar1;
  
  FUN_03325dbc();
  *param_1 = &PTR_LAB_043504e8;
  param_1[3] = param_2;
  param_1[4] = param_3;
  uVar1 = *(undefined4 *)(param_2 + 8);
  param_1[6] = param_5;
  *(undefined4 *)(param_1 + 7) = param_4;
  *(undefined4 *)(param_1 + 5) = uVar1;
  FUN_033252d8(param_1);
  return;
}


