/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03109c98; name: FUN_03109c98
 */


void FUN_03109c98(undefined8 *param_1)

{
  *(undefined1 *)((long)param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 10) = 1;
  param_1[1] = 0xffffffff;
  param_1[2] = 1;
  *param_1 = &PTR_LAB_042b7448;
  *(undefined4 *)(param_1 + 3) = 0x20;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[5] = 0;
  param_1[0xf] = 0xffffffff;
  param_1[0x10] = 1;
  *(undefined1 *)(param_1 + 0x11) = 8;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = &PTR_LAB_042b75b0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  return;
}


