/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 009e9518; name: FUN_009e9518
 */


float FUN_009e9518(float param_1)

{
  float fVar1;
  float __x;
  
  __x = 1.0 - (1.0 - param_1) * (1.0 - param_1);
  fVar1 = SQRT(__x);
  if (NAN(fVar1)) {
    fVar1 = sqrtf(__x);
  }
  return fVar1 + -1.0 + 1.0;
}


