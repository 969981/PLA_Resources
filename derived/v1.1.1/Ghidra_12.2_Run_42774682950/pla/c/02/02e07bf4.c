/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e07bf4; name: FUN_02e07bf4
 */


void FUN_02e07bf4(long param_1)

{
  char cVar1;
  char cVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  cVar1 = *(char *)(param_1 + 0x174);
  if (cVar1 == '\0') {
    fVar6 = *(float *)(param_1 + 0x138);
    fVar7 = *(float *)(param_1 + 0x144);
    fVar3 = fVar6;
    if (fVar6 <= fVar7) {
      fVar3 = fVar7;
    }
    cVar2 = *(char *)(param_1 + 0x175);
  }
  else {
    fVar3 = log10f(*(float *)(param_1 + 0x13c));
    fVar3 = fVar3 * 20.0;
    if (-0.1 <= fVar3) {
      fVar3 = -0.1;
    }
    fVar6 = *(float *)(param_1 + 0x138);
    fVar3 = (fVar6 * -60.0) / fVar3;
    fVar4 = log10f(*(float *)(param_1 + 0x148));
    fVar4 = fVar4 * 20.0;
    if (-0.1 <= fVar4) {
      fVar4 = -0.1;
    }
    fVar7 = *(float *)(param_1 + 0x144);
    fVar4 = (fVar7 * -60.0) / fVar4;
    if (fVar3 <= fVar4) {
      fVar3 = fVar4;
    }
    cVar2 = *(char *)(param_1 + 0x175);
  }
  if (cVar2 != '\0') {
    fVar4 = log10f(*(float *)(param_1 + 0x14c) * *(float *)(param_1 + 0x140));
    fVar4 = fVar4 * 20.0;
    if (-0.1 <= fVar4) {
      fVar4 = -0.1;
    }
    fVar5 = -60.0;
    if (cVar1 != '\0') {
      fVar5 = -120.0;
    }
    fVar3 = ((fVar6 + fVar7) * fVar5) / fVar4 + fVar3;
  }
  fVar6 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0x1c4));
  if (60.0 <= fVar3) {
    fVar3 = 60.0;
  }
  *(int *)(param_1 + 0x1c0) = (int)(fVar3 * fVar6);
  return;
}


