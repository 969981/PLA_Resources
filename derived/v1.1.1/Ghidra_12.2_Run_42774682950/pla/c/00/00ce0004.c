/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00ce0004; name: FUN_00ce0004
 */


void FUN_00ce0004(undefined8 *param_1)

{
  FUN_00ce0064();
  *param_1 = &PTR_LAB_041e7e60;
  param_1[9] = &PTR_LAB_041e7e90;
  param_1[0xb] = 0;
  FUN_00ce090c(param_1 + 0xc);
  param_1[0x10] = 0;
  param_1[10] = param_1 + 0xb;
  FUN_02a48ac8((long)param_1 + 0x8c,1,0);
  param_1[0x13] = 0;
  return;
}


