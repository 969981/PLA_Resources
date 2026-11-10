/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032d3760; name: FUN_032d3760
 */


void FUN_032d3760(undefined8 *param_1)

{
  FUN_032cf01c();
  *(undefined4 *)(param_1 + 4) = 0;
  *param_1 = &PTR_FUN_0434a628;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[7] = 0x8000004000000000;
  param_1[5] = 0;
  param_1[6] = param_1 + 8;
  FUN_0332cf84(param_1 + 0x88);
  return;
}


