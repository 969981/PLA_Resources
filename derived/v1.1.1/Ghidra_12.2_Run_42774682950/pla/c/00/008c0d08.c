/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008c0d08; name: FUN_008c0d08
 */


void FUN_008c0d08(undefined8 *param_1,undefined1 *param_2)

{
  FUN_008b2820(param_1,8);
  *param_1 = &PTR_LAB_041b65f8;
  param_1[9] = &PTR_LAB_041b6660;
  param_1[10] = &PTR_LAB_041b66a8;
  *(undefined1 *)((long)param_1 + 0x7b) = *param_2;
  *(undefined4 *)((long)param_1 + 0x7c) = 0;
  param_1[0x10] = 0;
  return;
}


