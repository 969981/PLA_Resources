/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011c6c98; name: FUN_011c6c98
 */


void FUN_011c6c98(undefined8 *param_1,undefined8 param_2,uint param_3)

{
  FUN_00d40044(param_1,param_2,param_3 & 1);
  *param_1 = &PTR_LAB_041f7330;
  param_1[9] = &PTR_LAB_041f7438;
  param_1[10] = &PTR_LAB_041f7480;
  FUN_011c6ce0(param_1 + 0xae);
  param_1[0xe4] = 0;
  return;
}


