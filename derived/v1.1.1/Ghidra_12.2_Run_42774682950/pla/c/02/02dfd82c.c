/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02dfd82c; name: FUN_02dfd82c
 */


void FUN_02dfd82c(long param_1,long param_2,uint param_3)

{
  int iVar1;
  float fVar2;
  float fVar3;
  
  if (-96.0 <= *(float *)(param_2 + 0x1c)) {
    fVar2 = (float)NEON_fminnm(*(float *)(param_2 + 0x1c),0x41c00000);
    fVar2 = fVar2 * 0.1660964;
  }
  else {
    fVar2 = -15.945255;
  }
  fVar2 = exp2f(fVar2);
  if (*(float *)(param_1 + 0x9c) != fVar2) {
    *(float *)(param_1 + 0x9c) = fVar2;
    if (param_3 == 0) {
      *(float *)(param_1 + 0xa0) = fVar2;
      fVar2 = 0.0;
    }
    else {
      fVar2 = (fVar2 - *(float *)(param_1 + 0xa0)) / (float)param_3;
    }
    *(float *)(param_1 + 0x98) = fVar2;
  }
  if (-96.0 <= *(float *)(param_2 + 0x14)) {
    fVar2 = (float)NEON_fminnm(*(float *)(param_2 + 0x14),0x41c00000);
    fVar2 = fVar2 * 0.1660964;
  }
  else {
    fVar2 = -15.945255;
  }
  fVar2 = exp2f(fVar2);
  if (*(float *)(param_1 + 0xa8) != fVar2) {
    *(float *)(param_1 + 0xa8) = fVar2;
    if (param_3 == 0) {
      *(float *)(param_1 + 0xac) = fVar2;
      fVar2 = 0.0;
    }
    else {
      fVar2 = (fVar2 - *(float *)(param_1 + 0xac)) / (float)param_3;
    }
    *(float *)(param_1 + 0xa4) = fVar2;
  }
  iVar1 = 4;
  if (*(char *)(param_1 + 0x14) == '\0') {
    iVar1 = 1;
  }
  param_3 = iVar1 * param_3;
  if (-96.0 <= *(float *)(param_2 + 0x34)) {
    fVar2 = (float)NEON_fminnm(*(float *)(param_2 + 0x34),0x41c00000);
    fVar2 = fVar2 * 0.1660964;
  }
  else {
    fVar2 = -15.945255;
  }
  fVar2 = exp2f(fVar2);
  if (*(float *)(param_1 + 0x40) != fVar2) {
    *(float *)(param_1 + 0x40) = fVar2;
    if (param_3 == 0) {
      *(float *)(param_1 + 0x44) = fVar2;
      fVar2 = 0.0;
    }
    else {
      fVar2 = (fVar2 - *(float *)(param_1 + 0x44)) / (float)param_3;
    }
    *(float *)(param_1 + 0x3c) = fVar2;
  }
  if (-96.0 <= *(float *)(param_2 + 0x48)) {
    fVar2 = (float)NEON_fminnm(*(float *)(param_2 + 0x48),0x41c00000);
    fVar2 = fVar2 * 0.1660964;
  }
  else {
    fVar2 = -15.945255;
  }
  fVar2 = exp2f(fVar2);
  if (*(float *)(param_1 + 0x80) != fVar2) {
    *(float *)(param_1 + 0x80) = fVar2;
    if (param_3 == 0) {
      *(float *)(param_1 + 0x84) = fVar2;
      fVar2 = 0.0;
    }
    else {
      fVar2 = (fVar2 - *(float *)(param_1 + 0x84)) / (float)param_3;
    }
    *(float *)(param_1 + 0x7c) = fVar2;
  }
  iVar1 = *(int *)(param_2 + 0x30);
  if (iVar1 < -0xe10) {
    fVar2 = -3.0;
  }
  else {
    if (0xe0f < iVar1) {
      iVar1 = 0xe10;
    }
    fVar2 = (float)iVar1 * 0.00083333335;
  }
  fVar2 = exp2f(fVar2);
  if (*(float *)(param_1 + 0x34) != fVar2) {
    *(float *)(param_1 + 0x34) = fVar2;
    if (param_3 == 0) {
      *(float *)(param_1 + 0x38) = fVar2;
      fVar2 = 0.0;
    }
    else {
      fVar2 = (fVar2 - *(float *)(param_1 + 0x38)) / (float)param_3;
    }
    *(float *)(param_1 + 0x30) = fVar2;
  }
  iVar1 = *(int *)(param_2 + 0x44);
  if (iVar1 < -0xe10) {
    fVar2 = -3.0;
  }
  else {
    if (0xe0f < iVar1) {
      iVar1 = 0xe10;
    }
    fVar2 = (float)iVar1 * 0.00083333335;
  }
  fVar2 = exp2f(fVar2);
  if (*(float *)(param_1 + 0x74) != fVar2) {
    *(float *)(param_1 + 0x74) = fVar2;
    if (param_3 == 0) {
      *(float *)(param_1 + 0x78) = fVar2;
      fVar2 = 0.0;
    }
    else {
      fVar2 = (fVar2 - *(float *)(param_1 + 0x78)) / (float)param_3;
    }
    *(float *)(param_1 + 0x70) = fVar2;
  }
  fVar2 = *(float *)(param_2 + 0x38);
  if (*(float *)(param_1 + 0x4c) != fVar2) {
    *(float *)(param_1 + 0x4c) = fVar2;
    if (param_3 == 0) {
      *(float *)(param_1 + 0x50) = fVar2;
      fVar2 = 0.0;
    }
    else {
      fVar2 = (fVar2 - *(float *)(param_1 + 0x50)) / (float)param_3;
    }
    *(float *)(param_1 + 0x48) = fVar2;
  }
  fVar2 = *(float *)(param_2 + 0x4c);
  if (*(float *)(param_1 + 0x8c) != fVar2) {
    *(float *)(param_1 + 0x8c) = fVar2;
    if (param_3 == 0) {
      *(float *)(param_1 + 0x90) = fVar2;
      fVar2 = 0.0;
    }
    else {
      fVar2 = (fVar2 - *(float *)(param_1 + 0x90)) / (float)param_3;
    }
    *(float *)(param_1 + 0x88) = fVar2;
  }
  fVar2 = *(float *)(param_2 + 0x20);
  if (0.0 <= fVar2) {
    fVar3 = 100.0;
    if (fVar2 <= 100.0) {
      fVar3 = fVar2;
    }
  }
  else {
    fVar3 = 0.0;
  }
  if (*(float *)(param_1 + 0xb4) != fVar3) {
    *(float *)(param_1 + 0xb4) = fVar3;
    if (param_3 == 0) {
      *(float *)(param_1 + 0xb8) = fVar3;
      fVar2 = 0.0;
    }
    else {
      fVar2 = (fVar3 - *(float *)(param_1 + 0xb8)) / (float)param_3;
    }
    *(float *)(param_1 + 0xb0) = fVar2;
  }
  return;
}


