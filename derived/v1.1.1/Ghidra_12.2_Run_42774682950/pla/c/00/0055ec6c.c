/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0055ec6c; name: FUN_0055ec6c
 */


void FUN_0055ec6c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar4 = param_1[1];
  uVar2 = *param_1;
  uVar8 = param_1[3];
  uVar6 = param_1[2];
  uVar1 = param_1[4];
  uVar5 = param_2[1];
  uVar3 = *param_2;
  uVar9 = param_2[3];
  uVar7 = param_2[2];
  param_1[4] = param_2[4];
  param_1[1] = uVar5;
  *param_1 = uVar3;
  param_1[3] = uVar9;
  param_1[2] = uVar7;
  param_2[4] = uVar1;
  param_2[1] = uVar4;
  *param_2 = uVar2;
  param_2[3] = uVar8;
  param_2[2] = uVar6;
  return;
}


