/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 009e91b4; name: FUN_009e91b4
 */


float FUN_009e91b4(float param_1)

{
  float fVar1;
  
  fVar1 = param_1 + param_1 + -1.0;
  if (0.5 <= param_1) {
    fVar1 = sinf(((1.0 - fVar1) + -1.0) * 1.5707964);
    fVar1 = (1.0 - (fVar1 + 1.0)) * 0.5 + 0.5;
  }
  else {
    fVar1 = sinf(fVar1 * 1.5707964);
    fVar1 = (fVar1 + 1.0) * 0.5;
  }
  return fVar1;
}


