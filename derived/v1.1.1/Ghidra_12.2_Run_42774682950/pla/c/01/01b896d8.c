/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b896d8; name: FUN_01b896d8
 */


void FUN_01b896d8(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  *param_2 = 0;
  param_2[1] = 0;
  FUN_00b6231c(param_2,param_1);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[3] = *(undefined8 *)(param_1 + 0x18);
  param_2[4] = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  param_2[5] = uVar3;
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  uVar2 = *(undefined4 *)(param_1 + 0x40);
  param_2[9] = 0;
  param_2[10] = 0;
  *(undefined4 *)(param_2 + 8) = uVar2;
  param_2[6] = uVar3;
  param_2[7] = uVar1;
  FUN_01b824c0(param_2 + 9,param_1 + 0x48);
  return;
}


