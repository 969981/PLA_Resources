/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a68488; name: FUN_02a68488
 */


void FUN_02a68488(undefined8 *param_1)

{
  FUN_02a6f65c(param_1,DAT_043eef30);
  *param_1 = &DAT_0427e7a0;
  param_1[0x71] = 0;
  param_1[9] = &PTR_LAB_0427e828;
  param_1[10] = &PTR_LAB_0427e870;
  param_1[0x72] = 0;
  *(undefined4 *)(param_1 + 0x73) = 1;
  *(undefined1 *)((long)param_1 + 0x39c) = 0;
  return;
}


