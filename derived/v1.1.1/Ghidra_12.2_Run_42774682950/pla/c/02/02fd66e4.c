/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02fd66e4; name: FUN_02fd66e4
 */


void FUN_02fd66e4(undefined8 *param_1,undefined1 param_2)

{
  param_1[2] = 1;
  *(undefined1 *)(param_1 + 3) = param_2;
  *param_1 = &PTR_LAB_042b9f70;
  param_1[1] = 0xffffffff;
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  *(undefined1 *)((long)param_1 + 0x19) = 3;
  *(undefined1 *)((long)param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[7] = 0;
  *(undefined2 *)((long)param_1 + 0x1a) = 4;
  param_1[5] = 0;
  param_1[6] = 0;
  return;
}


