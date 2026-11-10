/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011df3e8; name: FUN_011df3e8
 */


void FUN_011df3e8(undefined8 *param_1,undefined8 param_2,uint param_3,undefined8 param_4)

{
  FUN_00d37d1c(param_1,param_2,param_3 & 1,0);
  *param_1 = &PTR_LAB_041fa168;
  param_1[9] = &PTR_LAB_041fa268;
  param_1[10] = &PTR_LAB_041fa2b0;
  FUN_011df438(param_1 + 0x9b);
  param_1[0xd1] = param_4;
  return;
}


