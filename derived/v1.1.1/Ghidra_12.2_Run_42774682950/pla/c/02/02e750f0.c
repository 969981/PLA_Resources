/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e750f0; name: FUN_02e750f0
 */


void FUN_02e750f0(undefined8 *param_1)

{
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *param_1 = 0;
  param_1[1] = 0x40000000000ff;
  *(undefined8 *)((long)param_1 + 0x14) = 0x40000000001;
  *(undefined4 *)((long)param_1 + 0x1c) = 0x40000;
  *(undefined2 *)((long)param_1 + 0x34) = 0x101;
  *(undefined4 *)(param_1 + 6) = 1000;
  *(undefined4 *)(param_1 + 0xc) = 1;
  param_1[0xd] = 0x4180000000008000;
  FUN_02f33294(param_1 + 4);
  return;
}


