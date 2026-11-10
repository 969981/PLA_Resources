/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f12a88; name: FUN_02f12a88
 */


void FUN_02f12a88(int *param_1,uint *param_2,float *param_3,long param_4)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  float *pfVar6;
  float *pfVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  uVar4 = *param_2;
  if (uVar4 == *param_1 - 1U) {
    uVar4 = param_2[1];
  }
  uVar5 = param_2[2];
  if (uVar5 == *param_1 - 1U) {
    uVar5 = param_2[1];
  }
  pfVar7 = (float *)(*(long *)(param_1 + 0x12) + (ulong)uVar4 * 0xc);
  pfVar6 = (float *)(*(long *)(param_1 + 0x12) + (ulong)uVar5 * 0xc);
  fVar10 = *pfVar6;
  fVar11 = pfVar6[1];
  fVar8 = *pfVar7;
  fVar9 = pfVar7[1];
  fVar12 = fVar11 * fVar8 - fVar10 * fVar9;
  bVar1 = false;
  bVar2 = true;
  bVar3 = false;
  if (fVar12 < 1e-38) {
    bVar1 = false;
    bVar2 = false;
    bVar3 = true;
    if (!NAN(fVar12)) {
      bVar1 = fVar12 < -1e-38;
      bVar2 = fVar12 == -1e-38;
      bVar3 = false;
    }
  }
  if (bVar2 || bVar1 != bVar3) {
    fVar13 = *param_3 * (1.0 / fVar12);
    fVar12 = param_3[1] * (1.0 / fVar12);
    fVar10 = fVar13 * fVar11 - fVar12 * fVar10;
    fVar8 = fVar12 * fVar8 - fVar13 * fVar9;
    bVar1 = true;
    bVar2 = false;
    if (-1e-05 <= fVar10) {
      bVar1 = false;
      bVar2 = true;
      if (!NAN(fVar8)) {
        bVar1 = fVar8 < -1e-05;
        bVar2 = false;
      }
    }
    if (bVar1 != bVar2) {
      return;
    }
  }
  else {
    fVar10 = 0.0;
    fVar8 = 0.0;
  }
  fVar9 = fVar8 * fVar8 + fVar10 * fVar10;
  bVar1 = true;
  bVar2 = false;
  if (fVar9 <= 1.1920929e-07) {
    bVar1 = false;
    bVar2 = true;
    if (!NAN(fVar9)) {
      bVar1 = fVar9 < -1.1920929e-07;
      bVar2 = false;
    }
  }
  if (bVar1 != bVar2) {
    *(float *)(param_4 + (ulong)uVar4 * 4) =
         *(float *)(param_4 + (ulong)uVar4 * 4) + fVar10 * fVar10 * (1.0 / fVar9);
    *(float *)(param_4 + (ulong)uVar5 * 4) =
         *(float *)(param_4 + (ulong)uVar5 * 4) + fVar8 * fVar8 * (1.0 / fVar9);
  }
  return;
}


