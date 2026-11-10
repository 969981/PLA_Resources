/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0191e7ac; name: FUN_0191e7ac
 */


float FUN_0191e7ac(float param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = param_2[2];
  if (fVar1 < param_1) {
    if (param_2[3] <= param_1) {
      return param_2[1];
    }
    fVar2 = param_2[3] - fVar1;
    if (1.1920929e-07 <= fVar2) {
      return *param_2 + ((param_1 - fVar1) / fVar2) * (param_2[1] - *param_2);
    }
  }
  return *param_2;
}


