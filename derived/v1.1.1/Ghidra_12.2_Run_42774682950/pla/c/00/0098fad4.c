/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0098fad4; name: FUN_0098fad4
 */


void FUN_0098fad4(undefined8 *param_1)

{
  float fVar1;
  
  fVar1 = (float)((ulong)param_1[1] >> 0x20) * (float)*param_1 -
          (float)((ulong)*param_1 >> 0x20) * (float)param_1[1];
  fVar1 = fVar1 + fVar1;
  if (ABS(fVar1) <= 0.9999999) {
    if (0.0 <= fVar1) {
      if (0.70710677 < fVar1) {
        fVar1 = 1.0 - fVar1 * fVar1;
        if (NAN(SQRT(fVar1))) {
          sqrtf(fVar1);
        }
      }
      else {
        fVar1 = 1.0 - fVar1 * fVar1;
        if (NAN(SQRT(fVar1))) {
          sqrtf(fVar1);
        }
      }
    }
    else if (fVar1 < -0.70710677) {
      fVar1 = 1.0 - fVar1 * fVar1;
      if (NAN(SQRT(fVar1))) {
        sqrtf(fVar1);
      }
    }
    else {
      fVar1 = 1.0 - fVar1 * fVar1;
      if (NAN(SQRT(fVar1))) {
        sqrtf(fVar1);
      }
    }
  }
  return;
}


