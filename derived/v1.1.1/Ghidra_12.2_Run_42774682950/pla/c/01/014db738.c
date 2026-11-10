/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014db738; name: FUN_014db738
 */


void FUN_014db738(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_00d39e50();
  *param_1 = &PTR_LAB_04216498;
  param_1[9] = &PTR_LAB_042164e8;
  param_1[10] = &PTR_LAB_04216530;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  uVar1 = FUN_00d73f40();
  param_1[0xf] = uVar1;
  return;
}


