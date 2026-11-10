/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00833b6c; name: FUN_00833b6c
 */


void FUN_00833b6c(long *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_04377e30 + 0x88;
  param_1[-0xc] = (long)(PTR_DAT_04377e30 + 0x10);
  *param_1 = (long)puVar1;
  FUN_0084008c(param_1 + 0x24);
  FUN_0083fc40(param_1 + 0x11);
  FUN_007e5c20(param_1 + 1);
  FUN_00847210(param_1 + -0xc);
  return;
}


