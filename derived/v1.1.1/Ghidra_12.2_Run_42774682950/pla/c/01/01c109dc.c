/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01c109dc; name: FUN_01c109dc
 */


void FUN_01c109dc(undefined1 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined2 uVar4;
  undefined8 uVar5;
  
  *(undefined8 *)(param_1 + 0x10) = *param_2;
  *(undefined ***)(param_1 + 0x20) = &PTR___cxa_pure_virtual_04248320;
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 3);
  *(undefined **)(param_1 + 0x20) = PTR_DAT_04382860 + 0x10;
  *(undefined ***)(param_1 + 0x30) = &PTR_FUN_04287c58;
  uVar2 = param_2[7];
  *(undefined8 *)(param_1 + 0x40) = param_2[6];
  uVar5 = param_2[10];
  uVar1 = param_2[8];
  uVar3 = param_2[9];
  *(undefined8 *)(param_1 + 0x68) = param_2[0xb];
  *(undefined8 *)(param_1 + 0x58) = uVar3;
  *(undefined8 *)(param_1 + 0x60) = uVar5;
  *(undefined8 *)(param_1 + 0x48) = uVar2;
  *(undefined8 *)(param_1 + 0x50) = uVar1;
  uVar5 = param_2[0xc];
  uVar1 = param_2[0xd];
  param_1[0x80] = *(undefined1 *)(param_2 + 0xe);
  *(undefined8 *)(param_1 + 0x70) = uVar5;
  *(undefined8 *)(param_1 + 0x78) = uVar1;
  param_1[0x90] = 0;
  if (*(char *)(param_2 + 0x10) != '\0') {
    *(undefined8 *)(param_1 + 0xa8) = param_2[0x13];
    *(undefined8 *)(param_1 + 0xa0) = param_2[0x12];
    param_1[0x90] = 1;
  }
  uVar4 = *(undefined2 *)(param_2 + 0x16);
  *(undefined8 *)(param_1 + 0xb8) = param_2[0x15];
  uVar5 = param_2[0x14];
  *(undefined2 *)(param_1 + 0xc0) = uVar4;
  *param_1 = 1;
  *(undefined8 *)(param_1 + 0xb0) = uVar5;
  return;
}


