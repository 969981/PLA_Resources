/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f400c0; name: FUN_02f400c0
 */


void FUN_02f400c0(undefined8 *param_1)

{
  *(undefined1 *)((long)param_1 + 0x4a) = 0;
  *param_1 = &PTR_FUN_042add50;
  param_1[1] = 0;
  param_1[7] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined8 *)((long)param_1 + 0x5c) = 0;
  *(undefined8 *)((long)param_1 + 100) = 0;
  *(byte *)((long)param_1 + 0x6c) = *(byte *)((long)param_1 + 0x6c) & 0xf8 | 4;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}


