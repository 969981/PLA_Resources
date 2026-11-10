/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013b0a50; name: FUN_013b0a50
 */


void FUN_013b0a50(char *param_1,char *param_2)

{
  if (*param_1 == '\0') {
    if (*param_2 != '\0') {
      *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
      FUN_01396868(param_1 + 0x10,param_2 + 0x10);
      param_1[0x48] = '\0';
      if (param_2[0x48] != '\0') {
        memcpy(param_1 + 0x50,param_2 + 0x50,0x2c8);
        param_1[0x48] = '\x01';
      }
      *(undefined8 *)(param_1 + 0x318) = *(undefined8 *)(param_2 + 0x318);
      *param_1 = '\x01';
    }
  }
  else if (*param_2 == '\0') {
    FUN_01395560(param_1 + 8);
    *param_1 = '\0';
  }
  else {
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
    FUN_013b0b44(param_1 + 0x10,param_2 + 0x10);
    if (param_1[0x48] == '\0') {
      if (param_2[0x48] != '\0') {
        memcpy(param_1 + 0x50,param_2 + 0x50,0x2c8);
        param_1[0x48] = '\x01';
      }
    }
    else if (param_2[0x48] == '\0') {
      param_1[0x48] = '\0';
    }
    else {
      memcpy(param_1 + 0x50,param_2 + 0x50,0x2c8);
    }
    *(undefined8 *)(param_1 + 0x318) = *(undefined8 *)(param_2 + 0x318);
  }
  return;
}


