/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00816b34; name: FUN_00816b34
 */


void FUN_00816b34(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_DAT_04377a78;
  puVar1 = PTR_DAT_04377558;
  *param_1 = (long)(PTR_DAT_04377a70 + 0x10);
  param_1[100] = (long)(puVar2 + 0x10);
  param_1[0x68] = (long)(puVar1 + 0x10);
  FUN_007e81d4(param_1 + 0x6e);
  FUN_0080008c(param_1);
  return;
}


