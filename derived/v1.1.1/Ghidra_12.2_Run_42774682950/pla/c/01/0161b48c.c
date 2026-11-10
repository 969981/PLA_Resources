/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0161b48c; name: FUN_0161b48c
 */


void FUN_0161b48c(undefined8 *param_1,undefined8 *param_2)

{
  FUN_00d894e4();
  *(undefined4 *)(param_1 + 0x18) = 0;
  *param_1 = &PTR_LAB_0421ff58;
  param_1[9] = &PTR_LAB_0421ffc8;
  param_1[10] = &PTR_FUN_04220010;
  param_1[0xf] = &DAT_cbf29ce484222645;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x15) = 3;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0xf] = *param_2;
  return;
}


