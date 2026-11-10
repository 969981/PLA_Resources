/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d12c50; name: FUN_00d12c50
 */


void FUN_00d12c50(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_00d12cb8();
  *param_1 = &PTR_LAB_041e9f70;
  param_1[9] = &PTR_LAB_041e9fa0;
  FUN_00d12d9c(param_1 + 10);
  param_1[0xf] = 0;
  FUN_00d14558(param_1 + 0x11);
  uVar1 = FUN_00d12e80(DAT_043ab4f8,*(undefined8 *)(*(long *)PTR_DAT_0437b160 + 8));
  param_1[0xf] = uVar1;
  return;
}


