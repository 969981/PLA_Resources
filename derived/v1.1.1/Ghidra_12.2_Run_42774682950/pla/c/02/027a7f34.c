/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027a7f34; name: FUN_027a7f34
 */


void FUN_027a7f34(undefined1 *param_1,char *param_2)

{
  *param_1 = 0;
  if (*param_2 != '\0') {
    param_1[8] = 0;
    if (param_2[8] != '\0') {
      *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
      param_1[8] = 1;
    }
    param_1[0x10] = 0;
    if (param_2[0x10] != '\0') {
      FUN_007ee578(param_1 + 0x14,param_2 + 0x14);
      param_1[0x10] = 1;
    }
    param_1[0x28] = 0;
    if (param_2[0x28] != '\0') {
      *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
      param_1[0x28] = 1;
    }
    param_1[0x38] = 0;
    if (param_2[0x38] != '\0') {
      *(undefined8 *)(param_1 + 0x3c) = *(undefined8 *)(param_2 + 0x3c);
      param_1[0x38] = 1;
    }
    *(undefined8 *)(param_1 + 0x44) = *(undefined8 *)(param_2 + 0x44);
    *param_1 = 1;
  }
  return;
}


