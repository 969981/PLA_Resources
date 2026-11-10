/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01c104b0; name: FUN_01c104b0
 */


void FUN_01c104b0(char *param_1,char *param_2)

{
  undefined4 uVar1;
  
  if (*param_1 == '\0') {
    if (*param_2 != '\0') {
      uVar1 = *(undefined4 *)(param_2 + 0x10);
      param_1[0x20] = '\0';
      *(undefined4 *)(param_1 + 0x10) = uVar1;
      if (param_2[0x20] != '\0') {
        FUN_01c106a4(param_1 + 0x20,param_2 + 0x30);
      }
      param_1[0xe0] = '\0';
      if (param_2[0xe0] != '\0') {
        FUN_01c10838(param_1 + 0xe0,param_2 + 0xf0);
      }
      param_1[0x1b0] = '\0';
      if (param_2[0x1b0] != '\0') {
        FUN_01c109dc(param_1 + 0x1b0,param_2 + 0x1c0);
      }
      *param_1 = '\x01';
    }
  }
  else {
    if (*param_2 != '\0') {
      *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
      FUN_01c105c4(param_1 + 0x20,param_2 + 0x20);
      FUN_01c10748(param_1 + 0xe0,param_2 + 0xe0);
      FUN_01c108e4(param_1 + 0x1b0,param_2 + 0x1b0);
      return;
    }
    if (param_1[0x1b0] != '\0') {
      if (param_1[0x240] != '\0') {
        param_1[0x240] = '\0';
      }
      param_1[0x1b0] = '\0';
    }
    if (param_1[0xe0] != '\0') {
      if (param_1[0x170] != '\0') {
        param_1[0x170] = '\0';
      }
      param_1[0xe0] = '\0';
    }
    if (param_1[0x20] != '\0') {
      if (param_1[0xa0] != '\0') {
        param_1[0xa0] = '\0';
      }
      param_1[0x20] = '\0';
    }
    *param_1 = '\0';
  }
  return;
}


