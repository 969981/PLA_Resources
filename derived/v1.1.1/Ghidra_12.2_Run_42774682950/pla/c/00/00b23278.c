/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00b23278; name: FUN_00b23278
 */


void FUN_00b23278(undefined8 *param_1,long param_2)

{
  FUN_00d0b3c0();
  *param_1 = &PTR_FUN_041d4f88;
  param_1[9] = &PTR_LAB_041d4fe8;
  param_1[10] = &PTR_LAB_041d5030;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  FUN_00b23d24(param_1 + 0x22,param_2 + 0x18);
  *(undefined1 *)(param_1 + 0x24) = 0;
  return;
}


