/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0053ecc8; name: FUN_0053ecc8
 */


void FUN_0053ecc8(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 extraout_w1;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_2;
  uVar3 = param_2[3];
  uVar2 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  FUN_002eec80(1);
  *(undefined4 *)(param_1 + 4) = extraout_w1;
  *(undefined1 *)((long)param_1 + 0x24) = 1;
  param_1[5] = *param_1;
  return;
}


