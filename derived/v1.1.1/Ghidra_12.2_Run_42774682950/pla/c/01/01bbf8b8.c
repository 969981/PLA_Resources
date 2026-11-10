/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01bbf8b8; name: FUN_01bbf8b8
 */


void FUN_01bbf8b8(char *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (*param_1 == '\0') {
    param_1[0x10] = '\0';
    param_1[0x11] = '\0';
    param_1[0x12] = '\0';
    param_1[0x13] = '\0';
    param_1[0x14] = '\0';
    param_1[0x15] = '\0';
    param_1[0x16] = '\0';
    param_1[0x17] = '\0';
    param_1[0x18] = '\0';
    param_1[0x19] = '\0';
    param_1[0x1a] = '\0';
    param_1[0x1b] = '\0';
    param_1[0x1c] = '\0';
    param_1[0x1d] = '\0';
    param_1[0x1e] = '\0';
    param_1[0x1f] = '\0';
    param_1[8] = '\0';
    param_1[9] = '\0';
    param_1[10] = '\0';
    param_1[0xb] = '\0';
    param_1[0xc] = '\0';
    param_1[0xd] = '\0';
    param_1[0xe] = '\0';
    param_1[0xf] = '\0';
    uVar1 = param_2[3];
    uVar2 = param_2[4];
    uVar3 = param_2[6];
    *(undefined8 *)(param_1 + 0x30) = param_2[5];
    *(undefined8 *)(param_1 + 0x38) = uVar3;
    *(undefined8 *)(param_1 + 0x20) = uVar1;
    *(undefined8 *)(param_1 + 0x28) = uVar2;
    *(undefined8 *)(param_1 + 8) = *param_2;
    *(undefined8 *)(param_1 + 0x10) = param_2[1];
    *(undefined8 *)(param_1 + 0x18) = param_2[2];
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    *param_1 = '\x01';
  }
  else {
    FUN_01ba4490(param_1 + 8);
    uVar1 = param_2[3];
    uVar2 = param_2[4];
    uVar3 = param_2[5];
    *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 6);
    *(undefined8 *)(param_1 + 0x20) = uVar1;
    *(undefined8 *)(param_1 + 0x28) = uVar2;
    *(undefined8 *)(param_1 + 0x30) = uVar3;
    *(undefined8 *)(param_1 + 8) = *param_2;
    *(undefined8 *)(param_1 + 0x10) = param_2[1];
    *(undefined8 *)(param_1 + 0x18) = param_2[2];
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
  }
  return;
}


