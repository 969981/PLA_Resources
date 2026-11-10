/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00814de8; name: FUN_00814de8
 */


void FUN_00814de8(long *param_1)

{
  undefined *puVar1;
  
  FUN_007ff5d8();
  puVar1 = PTR_DAT_04377a50 + 0x48;
  *param_1 = (long)(PTR_DAT_04377a50 + 0x10);
  param_1[1] = (long)puVar1;
  FUN_007e3400(param_1 + 0x11);
  FUN_007e3400(param_1 + 0x15);
  FUN_007e3400(param_1 + 0x19);
  FUN_007e3400(param_1 + 0x1d);
  param_1[0x21] = 0;
  *(undefined1 *)(param_1 + 0x22) = 0;
  return;
}


