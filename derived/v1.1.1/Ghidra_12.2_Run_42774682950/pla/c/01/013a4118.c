/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013a4118; name: FUN_013a4118
 */


void FUN_013a4118(char *param_1,undefined4 *param_2)

{
  char cVar1;
  
  cVar1 = *(char *)(param_2 + 1);
  *(undefined4 *)(param_1 + 8) = *param_2;
  param_1[0xc] = cVar1;
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 2);
  if (*param_1 == '\0') {
    FUN_013a3ec0(param_1 + 0x18,param_2 + 4);
    *(undefined2 *)(param_1 + 0x50) = *(undefined2 *)(param_2 + 0x12);
    *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x14);
    FUN_01396868(param_1 + 0x60,param_2 + 0x16);
    param_1[0x98] = '\0';
    if (*(char *)(param_2 + 0x24) != '\0') {
      memcpy(param_1 + 0xa0,param_2 + 0x26,0x2c8);
      param_1[0x98] = '\x01';
    }
    *(undefined8 *)(param_1 + 0x368) = *(undefined8 *)(param_2 + 0xd8);
    *(undefined4 *)(param_1 + 0x370) = param_2[0xda];
    *param_1 = '\x01';
  }
  else {
    FUN_013a4238();
    *(undefined2 *)(param_1 + 0x50) = *(undefined2 *)(param_2 + 0x12);
    *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x14);
    FUN_013a47d4(param_1 + 0x60,param_2 + 0x16);
    if (param_1[0x98] == '\0') {
      if (*(char *)(param_2 + 0x24) != '\0') {
        memcpy(param_1 + 0xa0,param_2 + 0x26,0x2c8);
        param_1[0x98] = '\x01';
      }
    }
    else if (*(char *)(param_2 + 0x24) == '\0') {
      param_1[0x98] = '\0';
    }
    else {
      memcpy(param_1 + 0xa0,param_2 + 0x26,0x2c8);
    }
    *(undefined8 *)(param_1 + 0x368) = *(undefined8 *)(param_2 + 0xd8);
    *(undefined4 *)(param_1 + 0x370) = param_2[0xda];
  }
  return;
}


