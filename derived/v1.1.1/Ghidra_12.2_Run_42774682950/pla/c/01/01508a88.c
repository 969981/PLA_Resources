/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01508a88; name: FUN_01508a88
 */


void FUN_01508a88(undefined8 *param_1,undefined8 param_2,uint param_3,undefined8 param_4)

{
  FUN_00d40044(param_1,param_2,param_3 & 1);
  *param_1 = &PTR_LAB_042182f8;
  param_1[9] = &PTR_LAB_04218400;
  param_1[10] = &PTR_LAB_04218448;
  FUN_01508adc(param_1 + 0xae);
  param_1[0xe4] = param_4;
  *(undefined1 *)(param_1 + 0xe5) = 1;
  return;
}


