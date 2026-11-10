/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d40044; name: FUN_00d40044
 */


void FUN_00d40044(undefined8 *param_1,undefined8 param_2,uint param_3)

{
  FUN_00d37d1c(param_1,param_2,param_3 & 1,0);
  *param_1 = &PTR_LAB_041eae38;
  param_1[0x9c] = 0;
  param_1[9] = &PTR_LAB_041eaf40;
  param_1[10] = &PTR_LAB_041eaf88;
  param_1[0x9d] = 0;
  param_1[0x9e] = 0;
  param_1[0x9f] = 0;
  param_1[0xac] = 0;
  *(undefined1 *)(param_1 + 0xad) = 1;
  return;
}


