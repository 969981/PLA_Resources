/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03011690; name: FUN_03011690
 */


void FUN_03011690(undefined8 *param_1)

{
  *param_1 = &DAT_042daa20;
  param_1[1] = 0xffffffff;
  *(undefined2 *)(param_1 + 4) = 0x10;
  *(undefined2 *)(param_1 + 6) = 2;
  *(undefined1 *)((long)param_1 + 0xc2) = 1;
  *(undefined2 *)(param_1 + 0x18) = 0x1c;
  param_1[0x1a] = 0;
  param_1[2] = 1;
  param_1[3] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  return;
}


