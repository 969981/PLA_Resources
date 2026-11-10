/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ee8c24; name: FUN_02ee8c24
 */


void FUN_02ee8c24(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_1 = &PTR_FUN_042aac10;
  uVar2 = param_2[1];
  param_1[2] = *param_2;
  param_1[3] = uVar2;
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  uVar1 = param_2[4];
  uVar4 = param_2[5];
  param_1[8] = 0;
  param_1[6] = uVar1;
  param_1[7] = uVar4;
  param_1[4] = uVar2;
  param_1[5] = uVar3;
  return;
}


