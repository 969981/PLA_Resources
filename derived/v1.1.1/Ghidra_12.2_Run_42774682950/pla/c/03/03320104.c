/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03320104; name: thunk_FUN_03320108
 */


void thunk_FUN_03320108(undefined8 *param_1)

{
  FUN_0331fe30();
  *param_1 = &PTR_LAB_0434fcf8;
  param_1[3] = 0;
  param_1[4] = 0xffffffff00000000;
  param_1[5] = 0;
  param_1[6] = 0x8000000000000000;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[7] = &LAB_033291d0;
  param_1[8] = 0;
  FUN_0332cf84(param_1 + 10);
  return;
}


