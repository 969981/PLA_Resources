/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01c11438; name: FUN_01c11438
 */


void FUN_01c11438(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  
  pcVar2 = (code *)param_1[1];
  if (pcVar2 != (code *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    (*pcVar2)(param_1 + 4);
  }
  param_1[4] = *param_2;
  param_1[5] = param_2[1];
  param_1[6] = param_2[2];
  uVar3 = param_2[3];
  param_2[3] = 0;
  param_1[7] = uVar3;
  param_1[8] = param_2[4];
  param_1[9] = param_2[5];
  param_1[10] = param_2[6];
  uVar3 = param_2[7];
  param_2[7] = 0;
  param_1[0xb] = uVar3;
  uVar3 = param_2[8];
  uVar1 = param_2[9];
  *param_1 = FUN_01c114e8;
  param_1[1] = &LAB_01c11c2c;
  param_1[0xc] = uVar3;
  param_1[0xd] = uVar1;
  param_1[2] = FUN_01c11dbc;
  param_1[3] = &LAB_01c11e4c;
  return;
}


