/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 009e9458; name: FUN_009e9458
 */


float FUN_009e9458(float param_1)

{
  float fVar1;
  
  fVar1 = param_1 + param_1;
  if (0.5 <= param_1) {
    fVar1 = 1.0 - (fVar1 + -1.0);
    if (fVar1 != 0.0) {
      fVar1 = exp2f((fVar1 + -1.0) * 10.0);
    }
    fVar1 = (1.0 - fVar1) * 0.5 + 0.5;
  }
  else {
    if (fVar1 != 0.0) {
      fVar1 = exp2f((fVar1 + -1.0) * 10.0);
    }
    fVar1 = fVar1 * 0.5;
  }
  return fVar1;
}


