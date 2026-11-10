/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01c106a4; name: FUN_01c106a4
 */


void FUN_01c106a4(undefined1 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined2 uVar2;
  undefined8 uVar3;
  
  *(undefined8 *)(param_1 + 0x10) = *param_2;
  *(undefined ***)(param_1 + 0x20) = &PTR___cxa_pure_virtual_04248320;
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 3);
  *(undefined **)(param_1 + 0x20) = PTR_DAT_04382858 + 0x10;
  *(undefined ***)(param_1 + 0x30) = &PTR_FUN_04287c08;
  uVar3 = param_2[6];
  uVar1 = param_2[7];
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x40) = uVar3;
  *(undefined8 *)(param_1 + 0x48) = uVar1;
  uVar3 = param_2[10];
  uVar1 = param_2[0xb];
  param_1[0x70] = *(undefined1 *)(param_2 + 0xc);
  *(undefined8 *)(param_1 + 0x60) = uVar3;
  *(undefined8 *)(param_1 + 0x68) = uVar1;
  param_1[0x80] = 0;
  if (*(char *)(param_2 + 0xe) != '\0') {
    *(undefined8 *)(param_1 + 0x98) = param_2[0x11];
    *(undefined8 *)(param_1 + 0x90) = param_2[0x10];
    param_1[0x80] = 1;
  }
  uVar2 = *(undefined2 *)(param_2 + 0x14);
  *(undefined8 *)(param_1 + 0xa8) = param_2[0x13];
  uVar3 = param_2[0x12];
  *(undefined2 *)(param_1 + 0xb0) = uVar2;
  *param_1 = 1;
  *(undefined8 *)(param_1 + 0xa0) = uVar3;
  return;
}


