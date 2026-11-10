/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f1faf4; name: FUN_02f1faf4
 */


void FUN_02f1faf4(undefined8 *param_1,long param_2)

{
  param_1[2] = 0;
  param_1[3] = param_2;
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  *(undefined8 *)((long)param_1 + 0x2c) = 0;
  *(byte *)(param_1 + 4) = *(byte *)(param_1 + 4) & 0xf8;
  *param_1 = &PTR_FUN_042ac108;
  param_1[1] = 0;
  *(undefined8 *)((long)param_1 + 0x34) = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  if (param_2 == 0) {
    *(undefined2 *)((long)param_1 + 0x54) = 1;
    return;
  }
  *(undefined2 *)((long)param_1 + 0x54) = *(undefined2 *)(param_2 + 0x2a0);
  return;
}


