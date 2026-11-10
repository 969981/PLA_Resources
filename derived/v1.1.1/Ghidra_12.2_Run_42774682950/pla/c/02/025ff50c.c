/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 025ff50c; name: FUN_025ff50c
 */


void FUN_025ff50c(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  
  uVar2 = param_3[5];
  uVar5 = *(undefined4 *)(param_3 + 6);
  uVar1 = param_3[2];
  uVar3 = param_3[3];
  param_1[4] = param_3[4];
  param_1[5] = uVar2;
  uVar2 = *param_3;
  uVar4 = param_3[1];
  *(undefined4 *)(param_1 + 6) = uVar5;
  *param_1 = uVar2;
  param_1[1] = uVar4;
  param_1[2] = uVar1;
  param_1[3] = uVar3;
  *(float *)((long)param_1 + 0x24) = -*(float *)((long)param_1 + 0x24);
  *(float *)(param_1 + 5) = -*(float *)(param_1 + 5);
  return;
}


