/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027a70a4; name: FUN_027a70a4
 */


void FUN_027a70a4(char *param_1,undefined4 *param_2)

{
  if (*param_1 == '\0') {
    *(undefined4 *)(param_1 + 4) = *param_2;
    param_1[8] = '\0';
    if (*(char *)(param_2 + 1) != '\0') {
      *(undefined4 *)(param_1 + 0xc) = param_2[2];
      param_1[8] = '\x01';
    }
    *param_1 = '\x01';
  }
  else {
    *(undefined4 *)(param_1 + 4) = *param_2;
    if (param_1[8] != '\0') {
      if (*(char *)(param_2 + 1) == '\0') {
        param_1[8] = '\0';
        return;
      }
      *(undefined4 *)(param_1 + 0xc) = param_2[2];
      return;
    }
    if (*(char *)(param_2 + 1) != '\0') {
      *(undefined4 *)(param_1 + 0xc) = param_2[2];
      param_1[8] = '\x01';
      return;
    }
  }
  return;
}


