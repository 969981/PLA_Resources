/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032a54e8; name: FUN_032a54e8
 */


void FUN_032a54e8(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_04341b38;
  param_1[1] = 0xffffffff;
  param_1[2] = 1;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined8 *)((long)param_1 + 0x2c) = 0x2000080000000;
  *(undefined4 *)((long)param_1 + 0x34) = 0xffffffff;
  return;
}


