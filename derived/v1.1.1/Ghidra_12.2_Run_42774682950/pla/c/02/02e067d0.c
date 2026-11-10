/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e067d0; name: FUN_02e067d0
 */


void FUN_02e067d0(float param_1,long *param_2,long param_3)

{
  float *pfVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  float *pfVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  float fVar10;
  
  lVar3 = *param_2;
  if (param_1 != 1.0) {
    uVar4 = *(uint *)(param_2 + 1);
    uVar2 = uVar4 >> 1;
    if (uVar2 != 0) {
      if (uVar2 == 1) {
        lVar8 = 0;
      }
      else {
        lVar8 = 0;
        do {
          lVar9 = lVar8 * 4;
          lVar8 = lVar8 + 2;
          pfVar6 = (float *)(lVar3 + lVar9);
          pfVar1 = (float *)(param_3 + lVar9);
          fVar10 = pfVar6[1];
          *pfVar1 = *pfVar6 * param_1 * *pfVar1;
          pfVar1[1] = fVar10 * param_1 * pfVar1[1];
        } while ((ulong)uVar2 - ((ulong)(uVar4 >> 1) & 1) != lVar8);
      }
      if ((uVar4 >> 1 & 1) != 0) {
        lVar8 = lVar8 * 4;
        *(float *)(param_3 + lVar8) =
             *(float *)(lVar3 + lVar8) * param_1 * *(float *)(param_3 + lVar8);
      }
    }
    if (uVar2 < uVar4) {
      lVar8 = (ulong)uVar4 - (ulong)uVar2;
      uVar4 = ~uVar2 + uVar4;
      pfVar6 = (float *)(param_3 + (ulong)uVar2 * 4);
      do {
        uVar5 = (ulong)uVar4;
        uVar4 = uVar4 - 1;
        lVar8 = lVar8 + -1;
        *pfVar6 = *(float *)(lVar3 + uVar5 * 4) * param_1 * *pfVar6;
        pfVar6 = pfVar6 + 1;
      } while (lVar8 != 0);
    }
    return;
  }
  uVar4 = *(uint *)(param_2 + 1);
  uVar2 = uVar4 >> 1;
  uVar5 = (ulong)uVar2;
  if (uVar2 != 0) {
    if (uVar2 == 1) {
      lVar8 = 0;
    }
    else {
      lVar8 = 0;
      do {
        lVar9 = lVar8 * 4;
        lVar8 = lVar8 + 2;
        pfVar6 = (float *)(lVar3 + lVar9);
        pfVar1 = (float *)(param_3 + lVar9);
        fVar10 = pfVar6[1];
        *pfVar1 = *pfVar1 * *pfVar6;
        pfVar1[1] = pfVar1[1] * fVar10;
      } while (uVar5 - ((ulong)(uVar4 >> 1) & 1) != lVar8);
    }
    if ((uVar4 >> 1 & 1) != 0) {
      lVar8 = lVar8 * 4;
      *(float *)(param_3 + lVar8) = *(float *)(param_3 + lVar8) * *(float *)(lVar3 + lVar8);
    }
  }
  if (uVar2 < uVar4) {
    uVar7 = ~uVar5;
    if ((uVar4 - uVar2 & 1) != 0) {
      lVar8 = uVar5 * 4;
      uVar5 = uVar5 + 1;
      *(float *)(param_3 + lVar8) =
           *(float *)(param_3 + lVar8) * *(float *)(lVar3 + (ulong)(uVar4 + ~uVar2) * 4);
    }
    if (uVar7 + uVar4 != 0) {
      lVar8 = uVar4 - uVar5;
      uVar4 = ~(uint)uVar5 + uVar4;
      pfVar6 = (float *)(param_3 + uVar5 * 4 + 4);
      do {
        lVar8 = lVar8 + -2;
        fVar10 = *(float *)(lVar3 + (ulong)(uVar4 - 1) * 4);
        pfVar6[-1] = pfVar6[-1] * *(float *)(lVar3 + (ulong)uVar4 * 4);
        *pfVar6 = *pfVar6 * fVar10;
        uVar4 = uVar4 - 2;
        pfVar6 = pfVar6 + 2;
      } while (lVar8 != 0);
    }
  }
  return;
}


