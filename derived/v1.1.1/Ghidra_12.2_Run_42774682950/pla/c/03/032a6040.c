/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032a6040; name: FUN_032a6040
 */


void FUN_032a6040(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = 0x100000001;
  param_1[1] = 1;
  param_1[2] = 0x100000000;
  param_1[0x28] = 0;
  *(undefined1 *)(param_1 + 0x29) = 0;
  param_1[4] = param_1 + 6;
  param_1[5] = 0x8000001000000000;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  return;
}


