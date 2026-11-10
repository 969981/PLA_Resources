/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 009e99a4; name: FUN_009e99a4
 */


float FUN_009e99a4(float param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = param_1 + -1.0 + 1.0;
  if (fVar1 < 0.36363637) {
    fVar2 = fVar1 * fVar1 * 121.0 * 0.0625;
  }
  else if (0.72727275 <= fVar1) {
    fVar2 = fVar1 * fVar1 * 10.8 + fVar1 * -20.52 + 10.72;
    if (fVar1 < 0.9) {
      fVar2 = fVar1 * fVar1 * 12.066482 + fVar1 * -19.635458 + 8.898061;
    }
  }
  else {
    fVar2 = fVar1 * fVar1 * 9.075 + fVar1 * -9.9 + 3.4;
  }
  return fVar2 + -1.0 + 1.0;
}


