/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03348ddc; name: FUN_03348ddc
 */


void FUN_03348ddc(long *param_1)

{
  undefined *puVar1;
  
  param_1[2] = 1;
  param_1[3] = 0;
  puVar1 = PTR_DAT_043893e0;
  param_1[4] = -0x8000000000000000;
  param_1[5] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[1] = 0xffffffff;
  param_1[6] = -0x8000000000000000;
  FUN_032c2320(param_1 + 7);
  return;
}


