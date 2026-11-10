/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01ee7d64; name: FUN_01ee7d64
 */


void FUN_01ee7d64(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  
  FUN_00d894e4();
  puVar1 = PTR_DAT_0437a508;
  *param_1 = &PTR_LAB_04258e38;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[9] = &PTR_LAB_04258ea8;
  param_1[10] = &PTR_LAB_04258ef0;
  param_1[0xf] = puVar1 + 0x10;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  FUN_01eeb51c(param_1 + 0x15);
  param_1[0x22] = &DAT_cbf29ce484222645;
  param_1[0x22] = *param_2;
  return;
}


