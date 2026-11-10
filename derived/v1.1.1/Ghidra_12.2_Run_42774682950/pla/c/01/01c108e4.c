/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01c108e4; name: FUN_01c108e4
 */


void FUN_01c108e4(char *param_1,char *param_2)

{
  char cVar1;
  undefined2 uVar2;
  undefined8 uVar3;
  
  if (*param_1 == '\0') {
    if (*param_2 != '\0') {
      FUN_01c109dc(param_1,param_2 + 0x10);
      return;
    }
  }
  else {
    if (*param_2 != '\0') {
      *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
      *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
      uVar3 = *(undefined8 *)(param_2 + 0x68);
      *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
      *(undefined8 *)(param_1 + 0x68) = uVar3;
      *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
      *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
      uVar3 = *(undefined8 *)(param_2 + 0x50);
      *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
      *(undefined8 *)(param_1 + 0x50) = uVar3;
      cVar1 = param_2[0x80];
      *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_2 + 0x78);
      *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
      param_1[0x80] = cVar1;
      if (param_1[0x90] == '\0') {
        if (param_2[0x90] != '\0') {
          *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(param_2 + 0xa8);
          *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_2 + 0xa0);
          param_1[0x90] = '\x01';
        }
      }
      else if (param_2[0x90] == '\0') {
        param_1[0x90] = '\0';
      }
      else {
        *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(param_2 + 0xa8);
        *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_2 + 0xa0);
      }
      uVar2 = *(undefined2 *)(param_2 + 0xc0);
      *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_2 + 0xb8);
      uVar3 = *(undefined8 *)(param_2 + 0xb0);
      *(undefined2 *)(param_1 + 0xc0) = uVar2;
      *(undefined8 *)(param_1 + 0xb0) = uVar3;
      return;
    }
    if (param_1[0x90] != '\0') {
      param_1[0x90] = '\0';
      *param_1 = '\0';
      return;
    }
    *param_1 = '\0';
  }
  return;
}


