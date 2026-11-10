/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e4ca54; name: FUN_02e4ca54
 */


long FUN_02e4ca54(long param_1)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  if (*(int *)(param_1 + 0x28) == 0) {
    lVar1 = 0;
  }
  else {
    do {
      fVar4 = **(float **)(param_1 + 0x20);
      lVar1 = *(long *)(*(float **)(param_1 + 0x20) + 2);
      FUN_02e4daf4(param_1 + 0x20);
      fVar2 = (float)NEON_fminnm(*(float *)(lVar1 + 0x44) + *(float *)(lVar1 + 0x40) * 0.31830987,
                                 0x3f800000);
      fVar3 = (float)NEON_fminnm(*(float *)(lVar1 + 0x34) + *(float *)(lVar1 + 0x38),
                                 *(float *)(param_1 + 0x30));
      if (ABS(fVar4 + (fVar2 * -2.0 - fVar3 / *(float *)(param_1 + 0x30)) * 0.33333334) <=
          1.1920929e-07) {
        return lVar1;
      }
    } while (*(int *)(param_1 + 0x28) != 0);
  }
  return lVar1;
}


