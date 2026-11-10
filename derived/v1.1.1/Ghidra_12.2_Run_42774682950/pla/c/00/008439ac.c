/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008439ac; name: FUN_008439ac
 */


long * FUN_008439ac(long *param_1)

{
  FUN_00843724();
  *param_1 = (long)(PTR_DAT_04377fd8 + 0x10);
  param_1[8] = 0;
  param_1[9] = 0;
  FUN_00848470(param_1 + 10);
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  param_1[0x1b] = (long)param_1;
  param_1[0x1c] = 0;
  return param_1 + 0x1d;
}


