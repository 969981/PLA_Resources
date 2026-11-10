/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0333d904; name: FUN_0333d904
 */


float FUN_0333d904(float param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  if (0.0031308 < param_1) {
    fVar1 = (float)(((int)param_1 + 0x7f000000U) / 3);
    fVar2 = fVar1 * fVar1 * fVar1;
    fVar3 = fVar2 + param_1;
    fVar1 = ((fVar3 + param_1) / (fVar2 + fVar3)) * fVar1;
    fVar2 = fVar1 * fVar1 * fVar1;
    fVar3 = fVar2 + param_1;
    FUN_032c8ed0(fVar1 * ((fVar3 + param_1) / (fVar2 + fVar3)));
    fVar1 = (float)FUN_032c8ed0();
    return fVar1 * fVar1 * fVar1 * fVar1 * fVar1 * 1.055 + -0.055;
  }
  return param_1 * 12.92;
}


