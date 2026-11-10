/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00833b28; name: FUN_00833b28
 */


void FUN_00833b28(long *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_04377e30 + 0x88;
  *param_1 = (long)(PTR_DAT_04377e30 + 0x10);
  param_1[0xc] = (long)puVar1;
  FUN_0084008c(param_1 + 0x30);
  FUN_0083fc40(param_1 + 0x1d);
  FUN_007e5c20(param_1 + 0xd);
  FUN_00847210(param_1);
  return;
}


