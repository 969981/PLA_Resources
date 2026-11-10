/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d87a8c; name: FUN_00d87a8c
 */


void FUN_00d87a8c(undefined8 *param_1)

{
  FUN_00d87ae0();
  *param_1 = &PTR_LAB_041ec850;
  param_1[9] = &PTR_LAB_041ec880;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[10] = 0;
  param_1[0xd] = param_1[1];
  param_1[0xe] = 0x7ffffffffffffff;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  FUN_00d87bc8();
  return;
}


