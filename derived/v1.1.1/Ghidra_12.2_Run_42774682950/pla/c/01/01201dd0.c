/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01201dd0; name: FUN_01201dd0
 */


void FUN_01201dd0(undefined4 *param_1)

{
  *(undefined2 *)(param_1 + 1) = 0x1212;
  *(undefined8 *)(param_1 + 2) = 0x1900000000;
  param_1[4] = 3;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0xffffffff00000000;
  param_1[0xe] = 0xffff;
  *param_1 = 0;
  *(undefined2 *)(param_1 + 5) = 0;
  *(undefined1 *)((long)param_1 + 0x16) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  param_1[0xc] = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined1 *)(param_1 + 0xf) = 0x12;
  return;
}


