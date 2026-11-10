/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01124080; name: FUN_01124080
 */


void FUN_01124080(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[3];
  *(undefined8 *)(param_1 + 0x78) = param_2[2];
  *(undefined8 *)(param_1 + 0x80) = uVar3;
  *(undefined8 *)(param_1 + 0x68) = uVar1;
  *(undefined8 *)(param_1 + 0x70) = uVar2;
  uVar1 = param_2[4];
  uVar2 = param_2[5];
  uVar3 = param_2[7];
  *(undefined8 *)(param_1 + 0x98) = param_2[6];
  *(undefined8 *)(param_1 + 0xa0) = uVar3;
  *(undefined8 *)(param_1 + 0x88) = uVar1;
  *(undefined8 *)(param_1 + 0x90) = uVar2;
  uVar1 = param_2[8];
  uVar2 = param_2[9];
  uVar3 = param_2[0xb];
  *(undefined8 *)(param_1 + 0xb8) = param_2[10];
  *(undefined8 *)(param_1 + 0xc0) = uVar3;
  *(undefined8 *)(param_1 + 0xa8) = uVar1;
  *(undefined8 *)(param_1 + 0xb0) = uVar2;
  uVar1 = param_2[0xc];
  uVar2 = param_2[0xd];
  uVar3 = param_2[0xf];
  *(undefined8 *)(param_1 + 0xd8) = param_2[0xe];
  *(undefined8 *)(param_1 + 0xe0) = uVar3;
  *(undefined8 *)(param_1 + 200) = uVar1;
  *(undefined8 *)(param_1 + 0xd0) = uVar2;
  return;
}


