/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0301206c; name: FUN_0301206c
 */


void FUN_0301206c(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  *(undefined8 *)(param_1 + 0x48) = param_2[1];
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  uVar1 = param_2[2];
  *(undefined8 *)(param_1 + 0x58) = param_2[3];
  *(undefined8 *)(param_1 + 0x50) = uVar1;
  uVar1 = param_2[4];
  *(undefined8 *)(param_1 + 0x68) = param_2[5];
  *(undefined8 *)(param_1 + 0x60) = uVar1;
  uVar1 = param_2[6];
  *(undefined8 *)(param_1 + 0x78) = param_2[7];
  *(undefined8 *)(param_1 + 0x70) = uVar1;
  uVar1 = *param_3;
  *(undefined8 *)(param_1 + 0x88) = param_3[1];
  *(undefined8 *)(param_1 + 0x80) = uVar1;
  uVar1 = param_3[2];
  *(undefined8 *)(param_1 + 0x98) = param_3[3];
  *(undefined8 *)(param_1 + 0x90) = uVar1;
  uVar1 = param_3[4];
  *(undefined8 *)(param_1 + 0xa8) = param_3[5];
  *(undefined8 *)(param_1 + 0xa0) = uVar1;
  uVar1 = param_3[6];
  *(undefined8 *)(param_1 + 0xb8) = param_3[7];
  *(undefined8 *)(param_1 + 0xb0) = uVar1;
  return;
}


