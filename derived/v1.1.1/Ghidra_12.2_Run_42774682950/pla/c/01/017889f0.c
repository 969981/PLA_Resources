/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 017889f0; name: FUN_017889f0
 */


void FUN_017889f0(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined8 *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_2[1];
  *(undefined8 *)(param_1 + 0x58) = *param_2;
  *(undefined8 *)(param_1 + 0x60) = uVar1;
  uVar1 = param_2[2];
  uVar2 = param_2[3];
  uVar3 = param_2[5];
  *(undefined8 *)(param_1 + 0x78) = param_2[4];
  *(undefined8 *)(param_1 + 0x80) = uVar3;
  *(undefined8 *)(param_1 + 0x68) = uVar1;
  *(undefined8 *)(param_1 + 0x70) = uVar2;
  uVar1 = param_3[2];
  uVar2 = param_3[3];
  uVar3 = param_3[5];
  *(undefined8 *)(param_1 + 0xa8) = param_3[4];
  *(undefined8 *)(param_1 + 0xb0) = uVar3;
  *(undefined8 *)(param_1 + 0x98) = uVar1;
  *(undefined8 *)(param_1 + 0xa0) = uVar2;
  uVar1 = param_3[1];
  *(undefined8 *)(param_1 + 0x88) = *param_3;
  *(undefined8 *)(param_1 + 0x90) = uVar1;
  uVar1 = param_4[2];
  uVar2 = param_4[3];
  uVar3 = param_4[5];
  *(undefined8 *)(param_1 + 0xd8) = param_4[4];
  *(undefined8 *)(param_1 + 0xe0) = uVar3;
  *(undefined8 *)(param_1 + 200) = uVar1;
  *(undefined8 *)(param_1 + 0xd0) = uVar2;
  uVar1 = param_4[1];
  *(undefined8 *)(param_1 + 0xb8) = *param_4;
  *(undefined8 *)(param_1 + 0xc0) = uVar1;
  uVar1 = param_5[1];
  *(undefined8 *)(param_1 + 0xe8) = *param_5;
  *(undefined8 *)(param_1 + 0xf0) = uVar1;
  uVar1 = param_5[2];
  uVar2 = param_5[3];
  uVar3 = param_5[5];
  *(undefined8 *)(param_1 + 0x108) = param_5[4];
  *(undefined8 *)(param_1 + 0x110) = uVar3;
  *(undefined8 *)(param_1 + 0xf8) = uVar1;
  *(undefined8 *)(param_1 + 0x100) = uVar2;
  return;
}


