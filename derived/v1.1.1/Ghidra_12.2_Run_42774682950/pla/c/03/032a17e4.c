/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032a17e4; name: FUN_032a17e4
 */


void FUN_032a17e4(undefined8 *param_1)

{
  FUN_0329c898();
  *param_1 = &PTR_LAB_04341c00;
  FUN_0329c8d0(param_1 + 3);
  param_1[0x34] = 0;
  param_1[0x35] = 0x8000000000000000;
  FUN_0332cf84(param_1 + 0x38);
  *(undefined4 *)(param_1 + 0x37) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  param_1[0x36] = 0;
  *(undefined2 *)((long)param_1 + 0x1e4) = 0x100;
  return;
}


