/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e741b8; name: FUN_02e741b8
 */


void FUN_02e741b8(long param_1,long param_2,float *param_3,float *param_4)

{
  bool bVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  *param_3 = 0.0;
  *param_4 = 0.0;
  fVar6 = *(float *)(param_2 + 0x24);
  if (fVar6 <= 0.0) {
    return;
  }
  fVar4 = *(float *)(param_2 + 0x1c) - *(float *)(param_1 + 0x7c);
  fVar7 = *(float *)(param_2 + 0x18) - *(float *)(param_1 + 0x78);
  fVar8 = *(float *)(param_2 + 0x20) - *(float *)(param_1 + 0x80);
  fVar3 = *(float *)(param_1 + 0x3c) * fVar7 + fVar4 * *(float *)(param_1 + 0x40) +
          fVar8 * *(float *)(param_1 + 0x44);
  fVar5 = *(float *)(param_1 + 0x48) * fVar7 + fVar4 * *(float *)(param_1 + 0x4c) +
          fVar8 * *(float *)(param_1 + 0x50);
  fVar4 = *(float *)(param_1 + 0x54) * fVar7 + fVar4 * *(float *)(param_1 + 0x58) +
          fVar8 * *(float *)(param_1 + 0x5c);
  if (fVar4 == 0.0) {
    if (fVar3 == 0.0) {
      fVar6 = 1.5707964;
      if (fVar5 <= 0.0) {
        fVar6 = -1.5707964;
      }
      fVar3 = 0.0;
      if (fVar5 != 0.0) {
        fVar3 = fVar6;
      }
      *param_3 = 0.0;
      *param_4 = fVar3;
      return;
    }
    fVar4 = 1.5707964;
    if (fVar3 <= 0.0) {
      fVar4 = -1.5707964;
    }
    *param_3 = fVar4;
    fVar6 = (float)NEON_fminnm(fVar5 / fVar6,0x3f800000);
  }
  else {
    fVar7 = fVar3 / fVar4;
    if (1.0 <= ABS(fVar7)) {
      fVar8 = fVar7 / (fVar7 * fVar7 + 0.28);
      bVar2 = NAN(fVar3);
      bVar1 = fVar3 < 0.0;
      fVar7 = 1.5707964 - fVar8;
      fVar8 = -1.5707964 - fVar8;
    }
    else {
      fVar7 = fVar7 / (fVar7 * fVar7 * 0.28 + 1.0);
      fVar8 = fVar7 + 3.1415927;
      if (fVar3 < 0.0) {
        fVar8 = fVar7 + -3.1415927;
      }
      bVar1 = false;
      bVar2 = true;
      if (!NAN(fVar4)) {
        bVar1 = fVar4 < 0.0;
        bVar2 = false;
      }
    }
    if (bVar1 != bVar2) {
      fVar7 = fVar8;
    }
    *param_3 = fVar7;
    fVar6 = (float)NEON_fminnm(fVar5 / fVar6,0x3f800000);
  }
  if (fVar6 <= -1.0) {
    fVar6 = -1.0;
  }
  fVar4 = ABS(fVar6);
  fVar5 = fVar4 * (fVar4 * (fVar4 * (fVar4 * (fVar4 * 84.31466 + -242.71996) + 262.81305) +
                           -131.11235) + 29.66154) + -1.4518384;
  fVar3 = fVar4 * fVar5 + 0.0328437;
  if (fVar6 < 0.0) {
    fVar3 = -(fVar5 * fVar4) - 0.0328437;
  }
  *param_4 = fVar3;
  return;
}


