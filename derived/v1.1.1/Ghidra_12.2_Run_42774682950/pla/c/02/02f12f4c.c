/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f12f4c; name: FUN_02f12f4c
 */


bool FUN_02f12f4c(float *param_1,float *param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar4 = param_1[2];
  fVar5 = ABS(param_1[1] - param_2[1]);
  fVar6 = ABS(*param_1 - *param_2);
  if (fVar5 + fVar6 <= fVar4) {
    return true;
  }
  bVar1 = false;
  bVar2 = false;
  bVar3 = false;
  if (fVar6 <= fVar4) {
    bVar1 = false;
    bVar2 = false;
    bVar3 = true;
    if (!NAN(fVar5) && !NAN(fVar4)) {
      bVar1 = fVar5 < fVar4;
      bVar2 = fVar5 == fVar4;
      bVar3 = false;
    }
  }
  if (bVar2 || bVar1 != bVar3) {
    fVar5 = *param_1 - *param_2;
    fVar6 = param_1[1] - param_2[1];
    return fVar5 * fVar5 + fVar6 * fVar6 <= (fVar4 + 0.05) * (fVar4 + 0.05);
  }
  return false;
}


