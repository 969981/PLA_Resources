/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0115e2a8; name: FUN_0115e2a8
 */


void FUN_0115e2a8(undefined8 *param_1,undefined8 param_2,uint param_3,undefined8 param_4)

{
  FUN_00d40044(param_1,param_2,param_3 & 1);
  *param_1 = &PTR_LAB_041f3598;
  param_1[9] = &PTR_LAB_041f36a0;
  param_1[10] = &PTR_LAB_041f36e8;
  FUN_0115e2f4(param_1 + 0xae);
  param_1[0xe4] = param_4;
  return;
}


