/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03318678; name: FUN_03318678
 */


void FUN_03318678(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  param_1[7] = 0;
  *(undefined4 *)((long)param_1 + 0x24) = 0x3fff;
  *param_1 = 0;
  param_1[1] = 0x8000000000000000;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined1 *)(param_1 + 4) = 1;
  param_1[2] = &DAT_03aad864;
  *(undefined1 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 10) = 1;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[5] = 0x1fffffff;
  param_1[6] = 1;
  uVar2 = param_2[2];
  uVar1 = param_2[1];
  param_1[4] = *param_2;
  param_1[5] = uVar1;
  param_1[6] = uVar2;
  uVar3 = param_2[5];
  uVar1 = param_2[3];
  uVar2 = param_2[4];
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 6);
  param_1[7] = uVar1;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[8] = uVar2;
  param_1[9] = uVar3;
  return;
}


