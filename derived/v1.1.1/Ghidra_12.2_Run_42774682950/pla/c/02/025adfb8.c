/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 025adfb8; name: FUN_025adfb8
 */


void FUN_025adfb8(undefined8 *param_1,undefined8 param_2,uint param_3,undefined8 param_4)

{
  FUN_01089a98(param_1,param_2,param_3 & 1);
  *param_1 = &PTR_LAB_0425e3e8;
  param_1[9] = &PTR_LAB_0425e458;
  param_1[10] = &PTR_LAB_0425e4a0;
  nn::os::InitializeLightEvent((long)param_1 + 0x154,0,1);
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x2c] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  FUN_00cf98c8(param_1 + 0x31,param_4);
  return;
}


