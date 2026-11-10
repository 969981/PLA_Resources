/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014e7094; name: FUN_014e7094
 */


void FUN_014e7094(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  FUN_00d37d1c(param_1,param_2,0,0);
  *param_1 = &PTR_LAB_04217088;
  param_1[9] = &PTR_LAB_04217188;
  param_1[10] = &PTR_LAB_042171d0;
  FUN_014e70e8(param_1 + 0x9b);
  *(undefined4 *)(param_1 + 0xd1) = *param_3;
  return;
}


