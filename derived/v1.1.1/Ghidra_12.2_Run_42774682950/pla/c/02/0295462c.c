/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0295462c; name: FUN_0295462c
 */


undefined8 FUN_0295462c(char *param_1,char param_2)

{
  if ((*param_1 != '\0') && (param_1[2] == param_2)) {
    return 0;
  }
  if ((param_1[3] != '\0') && (param_1[5] == param_2)) {
    return 1;
  }
  if ((param_1[6] != '\0') && (param_1[8] == param_2)) {
    return 2;
  }
  if ((param_1[9] != '\0') && (param_1[0xb] == param_2)) {
    return 3;
  }
  if ((param_1[0xc] != '\0') && (param_1[0xe] == param_2)) {
    return 4;
  }
  if ((param_1[0xf] == '\0') || (param_1[0x11] != param_2)) {
    return 6;
  }
  return 5;
}


