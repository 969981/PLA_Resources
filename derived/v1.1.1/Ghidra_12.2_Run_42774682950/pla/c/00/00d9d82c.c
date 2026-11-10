/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d9d82c; name: FUN_00d9d82c
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_00d9d82c(float param_1,float param_2,long param_3,uint param_4,uint param_5)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  float fVar9;
  float __x;
  float fVar10;
  float fVar11;
  
  if (*(int *)(param_3 + 0x38) == 2) {
    return;
  }
  fVar10 = *(float *)(param_3 + 0x2c);
  fVar11 = *(float *)(param_3 + 0x30);
  uVar2 = *(ulong *)(param_3 + 8);
  lVar3 = *(long *)(param_3 + 0x10);
  cVar4 = *(char *)(param_3 + 0x35);
  if ((*(int *)(param_3 + 0x38) == 1) && ((param_5 & 1) == 0)) {
    return;
  }
  __x = param_1 * param_1 + param_2 * param_2;
  fVar9 = SQRT(__x);
  if (NAN(fVar9)) {
    fVar9 = sqrtf(__x);
  }
  if (fVar11 < fVar9) {
    param_1 = param_1 / fVar9;
    param_2 = param_2 / fVar9;
    fVar11 = param_1 + param_2 * 0.0;
    fVar9 = param_2 * 0.0 - param_1;
    uVar6 = (uint)(0.0 < fVar11);
    uVar8 = (ulong)(fVar10 < fVar11);
    fVar11 = param_2 + param_1 * 0.0;
    uVar1 = uVar8 << 0xe | 0x1000;
    if (fVar9 <= fVar10) {
      uVar1 = uVar8 << 0xe;
    }
    uVar5 = uVar6 << 0xe | 0x1000;
    if (fVar9 <= 0.0) {
      uVar5 = uVar6 << 0xe;
    }
    param_2 = param_1 * 0.0 - param_2;
    uVar8 = uVar1 | 0x2000;
    if (fVar11 <= fVar10) {
      uVar8 = uVar1;
    }
    uVar6 = uVar5 | 0x2000;
    if (fVar11 <= 0.0) {
      uVar6 = uVar5;
    }
    uVar1 = uVar8 | 0x8000;
    if (param_2 <= fVar10) {
      uVar1 = uVar8;
    }
    uVar5 = (uint)uVar1;
    uVar7 = uVar6 | 0x8000;
    if (param_2 <= 0.0) {
      uVar7 = uVar6;
    }
    if (uVar1 != 0) goto joined_r0x00d9d8b0;
  }
  else {
    uVar7 = 0;
  }
  if ((lVar3 == 0) && (cVar4 != '\0')) {
    if ((param_4 & 1) == 0) {
      uVar5 = (uint)(uVar2 >> 8) & 0xf000;
    }
    else {
      uVar5 = (uint)(uVar2 >> 4) & 0xf000;
    }
  }
  else {
    uVar5 = uVar7 & (uint)lVar3;
  }
joined_r0x00d9d8b0:
  if ((uVar5 >> 0xd & 1) != 0) {
    *(ulong *)(param_3 + 8) = *(ulong *)(param_3 + 8) | 0x1000000;
  }
  if (uVar5 >> 0xf != 0) {
    *(ulong *)(param_3 + 8) = *(ulong *)(param_3 + 8) | 0x4000000;
  }
  if ((uVar5 >> 0xc & 1) != 0) {
    *(ulong *)(param_3 + 8) = *(ulong *)(param_3 + 8) | 0x8000000;
  }
  if ((uVar5 >> 0xe & 1) != 0) {
    *(ulong *)(param_3 + 8) = *(ulong *)(param_3 + 8) | 0x2000000;
  }
  return;
}


