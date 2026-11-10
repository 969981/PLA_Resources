/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002f8b00; name: FUN_002f8b00
 */


void FUN_002f8b00(double param_1,long param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3ff0000000000000,8);
  *(double *)(param_2 + 0x20) = *(double *)(param_2 + 0x20) + auVar1._8_8_;
  *(double *)(param_2 + 0x18) = *(double *)(param_2 + 0x18) + param_1;
  return;
}


