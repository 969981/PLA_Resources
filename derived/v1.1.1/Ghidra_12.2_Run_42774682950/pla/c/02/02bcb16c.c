/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bcb16c; name: FUN_02bcb16c
 */


undefined1  [32] FUN_02bcb16c(undefined1 (*param_1) [16],undefined1 (*param_2) [16])

{
  undefined1 auVar1 [32];
  
  auVar1._16_16_ = NEON_fmax(param_1[1],param_2[1],4);
  auVar1._0_16_ = NEON_fmin(*param_1,*param_2,4);
  return auVar1;
}


