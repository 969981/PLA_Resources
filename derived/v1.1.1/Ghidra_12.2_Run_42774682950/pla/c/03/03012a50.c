/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03012a50; name: FUN_03012a50
 */


void FUN_03012a50(undefined8 *param_1)

{
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[2] = 0;
  param_1[3] = 0x3f003f000000;
  param_1[6] = 0;
  param_1[7] = 0x40a00000;
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[4] = 0;
  param_1[5] = 0x3f8000007f7fffee;
  *(undefined2 *)(param_1 + 4) = 0x201;
  *(undefined4 *)((long)param_1 + 0x24) = 0x3d4ccccd;
  *(undefined2 *)((long)param_1 + 0x32) = 0x3f80;
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


