/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02727bf4; name: FUN_02727bf4
 */


void FUN_02727bf4(undefined1 *param_1,undefined8 *param_2)

{
  *param_1 = 0;
  param_1[8] = 0;
  param_1[0x20] = 0;
  param_1[0x30] = 0;
  *(undefined8 *)(param_1 + 0x34) = *param_2;
  param_1[0x30] = 1;
  param_1[0x3c] = 0;
  return;
}


