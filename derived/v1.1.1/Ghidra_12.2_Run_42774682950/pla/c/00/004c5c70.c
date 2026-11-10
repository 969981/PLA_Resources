/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004c5c70; name: FUN_004c5c70
 */


void FUN_004c5c70(undefined8 *param_1)

{
  *(undefined4 *)((long)param_1 + 0xc) = 0xf0;
  param_1[0x1ed] = 0;
  param_1[0x1ef] = 0;
  *(undefined4 *)(param_1 + 0x1f0) = 0;
  param_1[0x1e9] = 0;
  *(undefined4 *)(param_1 + 0x1ec) = 0;
  param_1[0x1eb] = 0;
  param_1[0x1ea] = 0;
  param_1[0x1f2] = 0;
  param_1[0x1f1] = 0;
  FUN_004c9550(param_1 + 4);
  FUN_004c9870(*param_1);
  param_1[2] = 0;
  FUN_004ce2f0(param_1 + 0xa9,0x20);
  param_1[500] = 0;
  param_1[499] = 0;
  if (param_1[0x1f6] == 0) {
    return;
  }
  FUN_004c8260(param_1);
  return;
}


