/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01dbc66c; name: FUN_01dbc66c
 */


void FUN_01dbc66c(char *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  if (*param_1 != '\0') {
    *(undefined4 *)(param_1 + 0x10) = *param_2;
    FUN_01c105c4(param_1 + 0x20,param_2 + 4);
    FUN_01c10748(param_1 + 0xe0,param_2 + 0x34);
    FUN_01c108e4(param_1 + 0x1b0,param_2 + 0x68);
    return;
  }
  uVar1 = *param_2;
  param_1[0x20] = '\0';
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  if (*(char *)(param_2 + 4) != '\0') {
    FUN_01c106a4(param_1 + 0x20,param_2 + 8);
  }
  param_1[0xe0] = '\0';
  if (*(char *)(param_2 + 0x34) != '\0') {
    FUN_01c10838(param_1 + 0xe0,param_2 + 0x38);
  }
  param_1[0x1b0] = '\0';
  if (*(char *)(param_2 + 0x68) != '\0') {
    FUN_01c109dc(param_1 + 0x1b0,param_2 + 0x6c);
  }
  *param_1 = '\x01';
  return;
}


