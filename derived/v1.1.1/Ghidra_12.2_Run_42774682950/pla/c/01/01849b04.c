/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01849b04; name: FUN_01849b04
 */


uint FUN_01849b04(float param_1,float param_2,float param_3,float param_4,long param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  fVar9 = *(float *)(param_5 + 0xd4);
  fVar10 = fVar9;
  if ((fVar9 <= param_1) && (fVar10 = param_1, *(float *)(param_5 + 0xdc) <= param_1)) {
    fVar10 = *(float *)(param_5 + 0xdc) + -1.0;
  }
  fVar8 = *(float *)(param_5 + 0xd8);
  fVar11 = fVar8;
  if ((fVar8 <= param_2) && (fVar11 = param_2, *(float *)(param_5 + 0xe0) <= param_2)) {
    fVar11 = *(float *)(param_5 + 0xe0) + -1.0;
  }
  fVar12 = fVar9;
  if ((fVar9 <= param_3) && (fVar12 = param_3, *(float *)(param_5 + 0xdc) <= param_3)) {
    fVar12 = *(float *)(param_5 + 0xdc) + -1.0;
  }
  fVar13 = fVar8;
  if ((fVar8 <= param_4) && (fVar13 = param_4, *(float *)(param_5 + 0xe0) <= param_4)) {
    fVar13 = *(float *)(param_5 + 0xe0) + -1.0;
  }
  uVar3 = (uint)((fVar13 - fVar8) / *(float *)(param_5 + 0xe8));
  uVar4 = (uint)((fVar12 - fVar9) / *(float *)(param_5 + 0xe4));
  uVar3 = (uVar3 | uVar3 << 8) & 0xff00ff;
  uVar4 = (uVar4 | uVar4 << 8) & 0xff00ff;
  uVar3 = (uVar3 | uVar3 << 4) & 0xf0f0f0f;
  uVar4 = (uVar4 | uVar4 << 4) & 0xf0f0f0f;
  uVar3 = (uVar3 | uVar3 << 2) & 0x33333333;
  uVar4 = (uVar4 | uVar4 << 2) & 0x33333333;
  uVar3 = ((uVar3 | uVar3 << 1) & 0x55555555) << 1 | (uVar4 | uVar4 << 1) & 0x55555555;
  iVar1 = *(int *)(param_5 + 0xf0);
  if (iVar1 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (uint)((fVar11 - fVar8) / *(float *)(param_5 + 0xe8));
    uVar5 = (uint)((fVar10 - fVar9) / *(float *)(param_5 + 0xe4));
    uVar4 = (uVar4 | uVar4 << 8) & 0xff00ff;
    uVar5 = (uVar5 | uVar5 << 8) & 0xff00ff;
    uVar4 = (uVar4 | uVar4 << 4) & 0xf0f0f0f;
    uVar5 = (uVar5 | uVar5 << 4) & 0xf0f0f0f;
    uVar4 = (uVar4 | uVar4 << 2) & 0x33333333;
    uVar5 = (uVar5 | uVar5 << 2) & 0x33333333;
    uVar5 = uVar3 ^ (((uVar4 | uVar4 << 1) & 0x55555555) << 1 | (uVar5 | uVar5 << 1) & 0x55555555);
    uVar4 = (uint)((uVar5 & 3) != 0);
    if (iVar1 != 1) {
      if ((uVar5 & 0xc) != 0) {
        uVar4 = 2;
      }
      if (iVar1 != 2) {
        if ((uVar5 & 0x30) != 0) {
          uVar4 = 3;
        }
        if (iVar1 != 3) {
          if ((uVar5 & 0xc0) != 0) {
            uVar4 = 4;
          }
          if (iVar1 != 4) {
            if ((uVar5 & 0x300) != 0) {
              uVar4 = 5;
            }
            if (iVar1 != 5) {
              iVar7 = 5;
              uVar6 = 10;
              do {
                uVar2 = uVar6 & 0x1f;
                uVar6 = uVar6 + 2;
                if ((3 << (ulong)uVar2 & uVar5) != 0) {
                  uVar4 = iVar7 + 1;
                }
                iVar7 = iVar7 + 1;
              } while (iVar1 != iVar7);
            }
          }
        }
      }
    }
  }
  uVar3 = (*(int *)(param_5 + (ulong)(iVar1 - uVar4) * 4 + 0xb0) - 1U) / 3 +
          (uVar3 >> (ulong)((uVar4 & 0xf) << 1));
  if (*(uint *)(param_5 + 0xec) < uVar3) {
    return 0xffffffff;
  }
  return uVar3;
}


