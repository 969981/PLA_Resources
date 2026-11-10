/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e9b2ec; name: FUN_02e9b2ec
 */


undefined8 FUN_02e9b2ec(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  if (param_1[5] != 0) {
    (*DAT_0442d158)(0);
    param_1[5] = 0;
  }
  *(undefined1 *)(param_1 + 0xb) = 0;
  return 1;
}


