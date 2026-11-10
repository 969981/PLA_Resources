/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0020cb34; name: FUN_0020cb34
 */


void FUN_0020cb34(byte *param_1,undefined4 *param_2)

{
  FUN_00205718(param_1,*param_2);
  if (*(char *)(param_2 + 2) != '\0') {
    *param_1 = *param_1 | 0x80;
  }
  param_1[4] = *(char *)(param_2 + 1) - 1;
  return;
}


