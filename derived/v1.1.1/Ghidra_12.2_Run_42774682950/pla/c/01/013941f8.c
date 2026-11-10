/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013941f8; name: FUN_013941f8
 */


void FUN_013941f8(undefined8 *param_1,undefined8 param_2)

{
  param_1[6] = 0;
  *param_1 = &PTR_FUN_04209290;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[4] = param_2;
  param_1[5] = 0x35e50d79435e50d;
  FUN_013944b8();
  return;
}


