/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00dc3e58; name: FUN_00dc3e58
 */


void FUN_00dc3e58(int *param_1)

{
  param_1[0xb] = 0x3f666666;
  param_1[0xc] = 0x3f59999a;
  if (*param_1 == 1) {
    return;
  }
  *param_1 = 1;
  FUN_00dc3888();
  return;
}


