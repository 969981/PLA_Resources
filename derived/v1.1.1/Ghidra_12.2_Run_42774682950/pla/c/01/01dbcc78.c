/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01dbcc78; name: FUN_01dbcc78
 */


void FUN_01dbcc78(char *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  char cVar2;
  undefined2 uVar3;
  undefined8 uVar4;
  
  if (*param_1 == '\0') {
    FUN_01c106a4();
    return;
  }
  *(undefined8 *)(param_1 + 0x10) = *param_2;
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 3);
  uVar1 = *(undefined4 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x48) = param_2[7];
  uVar4 = param_2[6];
  *(undefined4 *)(param_1 + 0x50) = uVar1;
  *(undefined8 *)(param_1 + 0x40) = uVar4;
  cVar2 = *(char *)(param_2 + 0xc);
  *(undefined8 *)(param_1 + 0x68) = param_2[0xb];
  *(undefined8 *)(param_1 + 0x60) = param_2[10];
  param_1[0x70] = cVar2;
  if (param_1[0x80] == '\0') {
    if (*(char *)(param_2 + 0xe) != '\0') {
      *(undefined8 *)(param_1 + 0x98) = param_2[0x11];
      *(undefined8 *)(param_1 + 0x90) = param_2[0x10];
      param_1[0x80] = '\x01';
    }
  }
  else if (*(char *)(param_2 + 0xe) == '\0') {
    param_1[0x80] = '\0';
  }
  else {
    *(undefined8 *)(param_1 + 0x98) = param_2[0x11];
    *(undefined8 *)(param_1 + 0x90) = param_2[0x10];
  }
  uVar3 = *(undefined2 *)(param_2 + 0x14);
  *(undefined8 *)(param_1 + 0xa8) = param_2[0x13];
  uVar4 = param_2[0x12];
  *(undefined2 *)(param_1 + 0xb0) = uVar3;
  *(undefined8 *)(param_1 + 0xa0) = uVar4;
  return;
}


