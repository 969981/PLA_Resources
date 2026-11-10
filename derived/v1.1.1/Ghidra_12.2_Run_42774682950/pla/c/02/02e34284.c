/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e34284; name: FUN_02e34284
 */


void FUN_02e34284(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x14);
  *param_2 = *(undefined8 *)(param_1 + 0xc);
  param_2[1] = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x1c);
  uVar2 = *(undefined8 *)(param_1 + 0x24);
  uVar3 = *(undefined8 *)(param_1 + 0x34);
  param_2[4] = *(undefined8 *)(param_1 + 0x2c);
  param_2[5] = uVar3;
  param_2[2] = uVar1;
  param_2[3] = uVar2;
  uVar1 = *(undefined8 *)(param_1 + 0x3c);
  uVar2 = *(undefined8 *)(param_1 + 0x44);
  uVar3 = *(undefined8 *)(param_1 + 0x4c);
  *(undefined2 *)(param_2 + 9) = *(undefined2 *)(param_1 + 0x54);
  param_2[7] = uVar2;
  param_2[8] = uVar3;
  param_2[6] = uVar1;
  return;
}


