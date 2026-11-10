/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e4da04; name: FUN_02e4da04
 */


void FUN_02e4da04(long param_1,long param_2)

{
  long lVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = (float)NEON_fminnm(*(float *)(param_2 + 0x44) + *(float *)(param_2 + 0x40) * 0.31830987,
                             0x3f800000);
  fVar3 = (float)NEON_fminnm(*(float *)(param_2 + 0x34) + *(float *)(param_2 + 0x38),
                             *(float *)(param_1 + 0x30));
  lVar1 = FUN_02e4da7c((fVar3 / *(float *)(param_1 + 0x30) + fVar2 * 2.0) * 0.33333334,
                       param_1 + 0x20);
  if (lVar1 != 0) {
    *(long *)(lVar1 + 8) = param_2;
  }
  return;
}


