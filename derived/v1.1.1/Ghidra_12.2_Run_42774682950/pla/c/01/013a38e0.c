/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013a38e0; name: FUN_013a38e0
 */


void FUN_013a38e0(long param_1,char *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (*(char *)(param_1 + 0x7c) == '\0') {
    if (*param_2 != '\0') {
      uVar2 = *(undefined8 *)(param_2 + 0xc);
      *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_2 + 4);
      *(undefined8 *)(param_1 + 0x88) = uVar2;
      uVar2 = *(undefined8 *)(param_2 + 0x14);
      uVar3 = *(undefined8 *)(param_2 + 0x1c);
      uVar4 = *(undefined8 *)(param_2 + 0x2c);
      *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_2 + 0x24);
      *(undefined8 *)(param_1 + 0xa8) = uVar4;
      *(undefined8 *)(param_1 + 0x90) = uVar2;
      *(undefined8 *)(param_1 + 0x98) = uVar3;
      uVar2 = *(undefined8 *)(param_2 + 0x3c);
      uVar3 = *(undefined8 *)(param_2 + 0x44);
      uVar1 = *(undefined4 *)(param_2 + 0x4c);
      *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_2 + 0x34);
      *(undefined4 *)(param_1 + 200) = uVar1;
      *(undefined8 *)(param_1 + 0xb8) = uVar2;
      *(undefined8 *)(param_1 + 0xc0) = uVar3;
      *(undefined1 *)(param_1 + 0x7c) = 1;
    }
    return;
  }
  if (*param_2 == '\0') {
    *(undefined1 *)(param_1 + 0x7c) = 0;
    return;
  }
  uVar2 = *(undefined8 *)(param_2 + 0xc);
  *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 0x88) = uVar2;
  uVar2 = *(undefined8 *)(param_2 + 0x14);
  uVar3 = *(undefined8 *)(param_2 + 0x1c);
  uVar4 = *(undefined8 *)(param_2 + 0x2c);
  *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_2 + 0x24);
  *(undefined8 *)(param_1 + 0xa8) = uVar4;
  *(undefined8 *)(param_1 + 0x90) = uVar2;
  *(undefined8 *)(param_1 + 0x98) = uVar3;
  uVar2 = *(undefined8 *)(param_2 + 0x34);
  uVar3 = *(undefined8 *)(param_2 + 0x3c);
  uVar4 = *(undefined8 *)(param_2 + 0x44);
  *(undefined2 *)(param_1 + 200) = *(undefined2 *)(param_2 + 0x4c);
  *(undefined8 *)(param_1 + 0xb8) = uVar3;
  *(undefined8 *)(param_1 + 0xc0) = uVar4;
  *(undefined8 *)(param_1 + 0xb0) = uVar2;
  return;
}


