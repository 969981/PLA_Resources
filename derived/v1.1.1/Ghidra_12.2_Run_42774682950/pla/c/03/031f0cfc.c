/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031f0cfc; name: FUN_031f0cfc
 */


void FUN_031f0cfc(long *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  float *pfVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  long lVar7;
  uint uVar8;
  int iVar9;
  undefined8 *puVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  float fVar14;
  float fVar15;
  
  lVar7 = (long)(int)param_1[1] + -1;
  if ((int)lVar7 == 0) {
    *(undefined4 *)(param_1 + 1) = 0;
    return;
  }
  puVar10 = (undefined8 *)*param_1;
  pfVar3 = (float *)(puVar10 + lVar7 * 2)[1];
  fVar15 = *(float *)puVar10[1];
  fVar14 = *pfVar3;
  *puVar10 = puVar10[lVar7 * 2];
  puVar10[1] = pfVar3;
  *(int *)(param_1 + 1) = (int)param_1[1] + -1;
  if (fVar15 <= fVar14) {
    iVar6 = (int)param_1[1];
    if (iVar6 < 3) {
      uVar12 = 1;
      if (iVar6 < 2) {
        return;
      }
    }
    else {
      uVar8 = 2;
      if (**(float **)(*param_1 + 0x18) < **(float **)(*param_1 + 0x28)) {
        uVar8 = 1;
      }
      uVar12 = (ulong)uVar8;
      if (iVar6 <= (int)uVar8) {
        return;
      }
    }
    uVar13 = 0;
    do {
      uVar11 = uVar12 & 0xffffffff;
      lVar7 = *param_1;
      iVar9 = (int)uVar12;
      if (**(float **)(lVar7 + (long)(int)uVar13 * 0x10 + 8) <=
          **(float **)(lVar7 + (long)iVar9 * 0x10 + 8)) {
        return;
      }
      puVar10 = (undefined8 *)(lVar7 + (long)(int)uVar13 * 0x10);
      uVar2 = *puVar10;
      uVar4 = puVar10[1];
      puVar1 = (undefined8 *)(lVar7 + (long)iVar9 * 0x10);
      uVar5 = puVar1[1];
      *puVar10 = *puVar1;
      puVar10[1] = uVar5;
      *puVar1 = uVar2;
      puVar1[1] = uVar4;
      uVar12 = (long)(iVar9 << 1) | 1;
      lVar7 = (long)(iVar9 << 1) + 2;
      uVar8 = (uint)lVar7;
      if ((int)uVar8 < (int)param_1[1]) {
        if (**(float **)(*param_1 + uVar12 * 0x10 + 8) < **(float **)(*param_1 + lVar7 * 0x10 + 8))
        {
          uVar8 = (uint)uVar12;
        }
        uVar12 = (ulong)uVar8;
      }
      uVar13 = uVar11;
    } while ((int)uVar12 < iVar6);
    return;
  }
  return;
}


