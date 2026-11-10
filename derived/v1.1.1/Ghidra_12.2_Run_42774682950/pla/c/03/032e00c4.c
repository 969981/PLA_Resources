/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032e00c4; name: FUN_032e00c4
 */


void FUN_032e00c4(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_0434b070;
  param_1[1] = 0xffffffff;
  param_1[2] = 1;
  param_1[3] = 0;
  param_1[4] = 0x8000000000000000;
  FUN_032c2320(param_1 + 5);
  param_1[7] = 0;
  param_1[8] = 0x8000000000000000;
  FUN_032c2320(param_1 + 9);
  FUN_032e80d0(param_1 + 0xb,0xffffffffffffffff);
  FUN_032e8760(param_1 + 0x10);
  param_1[0x14] = 0;
  param_1[0x15] = 0x8000000000000000;
  FUN_032c2320(param_1 + 0x16);
  FUN_0332cf84(param_1 + 0x18);
  return;
}


