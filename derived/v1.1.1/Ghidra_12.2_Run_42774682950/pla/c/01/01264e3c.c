/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01264e3c; name: FUN_01264e3c
 */


void FUN_01264e3c(undefined8 *param_1,undefined8 param_2,uint param_3)

{
  FUN_00d40044(param_1,param_2,param_3 & 1);
  *param_1 = &PTR_LAB_041ffae0;
  param_1[9] = &PTR_LAB_041ffbe8;
  param_1[10] = &PTR_LAB_041ffc30;
  FUN_01264e84(param_1 + 0xae);
  param_1[0xe4] = 0;
  return;
}


