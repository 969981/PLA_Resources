/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014d7328; name: FUN_014d7328
 */


void FUN_014d7328(char *param_1,char *param_2)

{
  if (*param_1 == '\0') {
    param_1[8] = '\0';
    if (*param_2 != '\0') {
      *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 4);
      param_1[8] = '\x01';
    }
    param_1[0x10] = '\0';
    if (param_2[8] != '\0') {
      FUN_007ee578(param_1 + 0x14,param_2 + 0xc);
      param_1[0x10] = '\x01';
    }
    param_1[0x28] = '\0';
    if (param_2[0x20] != '\0') {
      *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x28);
      param_1[0x28] = '\x01';
    }
    param_1[0x38] = '\0';
    if (param_2[0x30] != '\0') {
      *(undefined8 *)(param_1 + 0x3c) = *(undefined8 *)(param_2 + 0x34);
      param_1[0x38] = '\x01';
    }
    *(undefined8 *)(param_1 + 0x44) = *(undefined8 *)(param_2 + 0x3c);
    *param_1 = '\x01';
  }
  else {
    if (param_1[8] == '\0') {
      if (*param_2 != '\0') {
        *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 4);
        param_1[8] = '\x01';
      }
    }
    else if (*param_2 == '\0') {
      param_1[8] = '\0';
    }
    else {
      *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 4);
    }
    FUN_013b1924(param_1 + 0x10,param_2 + 8);
    if (param_1[0x28] == '\0') {
      if (param_2[0x20] != '\0') {
        *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x28);
        param_1[0x28] = '\x01';
      }
    }
    else if (param_2[0x20] == '\0') {
      param_1[0x28] = '\0';
    }
    else {
      *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x28);
    }
    if (param_1[0x38] == '\0') {
      if (param_2[0x30] != '\0') {
        *(undefined8 *)(param_1 + 0x3c) = *(undefined8 *)(param_2 + 0x34);
        param_1[0x38] = '\x01';
      }
    }
    else if (param_2[0x30] == '\0') {
      param_1[0x38] = '\0';
    }
    else {
      *(undefined8 *)(param_1 + 0x3c) = *(undefined8 *)(param_2 + 0x34);
    }
    *(undefined8 *)(param_1 + 0x44) = *(undefined8 *)(param_2 + 0x3c);
  }
  return;
}


