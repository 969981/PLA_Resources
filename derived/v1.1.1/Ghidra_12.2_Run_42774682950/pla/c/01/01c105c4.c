/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01c105c4; name: FUN_01c105c4
 */


void FUN_01c105c4(char *param_1,char *param_2)

{
  undefined4 uVar1;
  char cVar2;
  undefined2 uVar3;
  undefined8 uVar4;
  
  if (*param_1 == '\0') {
    if (*param_2 != '\0') {
      FUN_01c106a4(param_1,param_2 + 0x10);
      return;
    }
  }
  else {
    if (*param_2 != '\0') {
      *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
      *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
      uVar1 = *(undefined4 *)(param_2 + 0x50);
      *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
      uVar4 = *(undefined8 *)(param_2 + 0x40);
      *(undefined4 *)(param_1 + 0x50) = uVar1;
      *(undefined8 *)(param_1 + 0x40) = uVar4;
      cVar2 = param_2[0x70];
      *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0x68);
      *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
      param_1[0x70] = cVar2;
      if (param_1[0x80] == '\0') {
        if (param_2[0x80] != '\0') {
          *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_2 + 0x98);
          *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_2 + 0x90);
          param_1[0x80] = '\x01';
        }
      }
      else if (param_2[0x80] == '\0') {
        param_1[0x80] = '\0';
      }
      else {
        *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_2 + 0x98);
        *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_2 + 0x90);
      }
      uVar3 = *(undefined2 *)(param_2 + 0xb0);
      *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(param_2 + 0xa8);
      uVar4 = *(undefined8 *)(param_2 + 0xa0);
      *(undefined2 *)(param_1 + 0xb0) = uVar3;
      *(undefined8 *)(param_1 + 0xa0) = uVar4;
      return;
    }
    if (param_1[0x80] != '\0') {
      param_1[0x80] = '\0';
      *param_1 = '\0';
      return;
    }
    *param_1 = '\0';
  }
  return;
}


