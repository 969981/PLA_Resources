/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00201da0; name: FUN_00201da0
 */


void FUN_00201da0(undefined8 *param_1)

{
  FUN_002044d4(*param_1);
  *param_1 = 0;
  FUN_002044d4(param_1[1]);
  param_1[1] = 0;
  FUN_002044d4(param_1[2]);
  param_1[2] = 0;
  FUN_002044d4(param_1[4]);
  param_1[4] = 0;
  FUN_002044d4(param_1[5]);
  param_1[5] = 0;
  FUN_002044d4(param_1[6]);
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *(byte *)((long)param_1 + 0x3c) = *(byte *)((long)param_1 + 0x3c) & 0xfc;
  return;
}


