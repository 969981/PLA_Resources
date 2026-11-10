/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0333d820; name: FUN_0333d820
 */


float FUN_0333d820(float param_1)

{
  float fVar1;
  float fVar2;
  
  if (0.04045 < param_1) {
    param_1 = param_1 + 0.055;
    fVar1 = (float)(int)((float)(uint)(param_1 * 3.6116227e+09) * 0.8);
    fVar2 = param_1 * param_1 * param_1 * param_1;
    fVar1 = fVar1 * 4.0 + fVar2 / (fVar1 * fVar1 * fVar1 * fVar1);
    fVar1 = fVar1 * 0.00128 + fVar2 / (fVar1 * fVar1 * fVar1 * fVar1);
    fVar1 = fVar1 * 1.2207031e+11 + fVar2 / (fVar1 * fVar1 * fVar1 * fVar1);
    return fVar1 * 4.834638e-28 * fVar1 * fVar1;
  }
  return param_1 * 0.07739938;
}


