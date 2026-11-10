/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e4bb18; name: FUN_02e4bb18
 */


undefined4 FUN_02e4bb18(float *param_1,float *param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  
  fVar5 = param_1[6] * (*param_2 - *param_1) + (param_2[1] - param_1[1]) * param_1[7] +
          (param_2[2] - param_1[2]) * param_1[8];
  fVar6 = param_1[9] * (*param_2 - *param_1) + (param_2[1] - param_1[1]) * param_1[10] +
          (param_2[2] - param_1[2]) * param_1[0xb];
  bVar1 = false;
  bVar2 = false;
  if (-0.0001 < fVar5) {
    bVar1 = false;
    bVar2 = true;
    if (!NAN(fVar6)) {
      bVar1 = fVar6 < 0.0001;
      bVar2 = false;
    }
  }
  if (bVar1 != bVar2) {
    return 0;
  }
  bVar1 = false;
  bVar2 = true;
  bVar3 = false;
  if (fVar5 < 0.0001) {
    bVar1 = false;
    bVar2 = false;
    bVar3 = true;
    if (!NAN(fVar6)) {
      bVar1 = fVar6 < -0.0001;
      bVar2 = fVar6 == -0.0001;
      bVar3 = false;
    }
  }
  if (bVar2 || bVar1 != bVar3) {
    bVar1 = false;
    bVar2 = true;
    bVar3 = false;
    if (0.0001 < fVar6) {
      bVar1 = false;
      bVar2 = false;
      bVar3 = true;
      if (!NAN(fVar5)) {
        bVar1 = fVar5 < 0.0001;
        bVar2 = fVar5 == 0.0001;
        bVar3 = false;
      }
    }
    uVar4 = 0xfffffffe;
    if (!bVar2 && bVar1 == bVar3) {
      uVar4 = 0xffffffff;
    }
    return uVar4;
  }
  return 1;
}


