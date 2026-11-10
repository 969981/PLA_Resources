/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00ac8f48; name: FUN_00ac8f48
 */


void FUN_00ac8f48(undefined8 *param_1,byte param_2)

{
  FUN_00aba188();
  *param_1 = &PTR_LAB_041d2780;
  param_1[0x41] = 0;
  param_1[9] = &PTR_LAB_041d28a0;
  param_1[10] = &PTR_LAB_041d2980;
  param_1[0x42] = 0;
  *(undefined4 *)((long)param_1 + 0x217) = 0;
  *(byte *)((long)param_1 + 0x21b) = param_2 & 1;
  return;
}


