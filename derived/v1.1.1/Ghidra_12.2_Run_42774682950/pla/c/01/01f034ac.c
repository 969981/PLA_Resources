/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f034ac; name: FUN_01f034ac
 */


void FUN_01f034ac(undefined8 *param_1,long param_2)

{
  undefined1 uVar1;
  
  FUN_00d894e4();
  *param_1 = &PTR_FUN_04259710;
  param_1[0x10] = 0;
  param_1[9] = &PTR_LAB_04259780;
  param_1[10] = &PTR_LAB_042597c8;
  param_1[0xf] = 0;
  FUN_01b00b94(param_1 + 0xf,param_2);
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  FUN_01b0167c(param_1 + 0x11,param_2 + 0x10);
  uVar1 = *(undefined1 *)(param_2 + 0x20);
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined1 *)(param_1 + 0x13) = uVar1;
  FUN_0095aa3c(param_1 + 0x14,param_2 + 0x28);
  param_1[0x16] = *(undefined8 *)(param_2 + 0x38);
  return;
}


