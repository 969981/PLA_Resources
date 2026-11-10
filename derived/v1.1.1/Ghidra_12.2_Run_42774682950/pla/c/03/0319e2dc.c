/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0319e2dc; name: FUN_0319e2dc
 */


float FUN_0319e2dc(float param_1,float param_2,long *param_3)

{
  float *pfVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  float *pfVar6;
  long lVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  uVar5 = (ulong)*(uint *)(param_3 + 1);
  if ((int)*(uint *)(param_3 + 1) < 1) {
    fVar9 = 0.0;
  }
  else {
    fVar15 = 3.4028235e+38;
    lVar7 = 0;
    lVar8 = 0;
    bVar3 = true;
    do {
      pfVar1 = (float *)(*param_3 + lVar7);
      lVar8 = lVar8 + 1;
      bVar3 = (bool)(bVar3 & pfVar1[4] + param_1 * pfVar1[2] + param_2 * pfVar1[3] <= 0.0);
      iVar2 = 0;
      iVar4 = (int)uVar5;
      if (iVar4 != 0) {
        iVar2 = (int)lVar8 / iVar4;
      }
      pfVar6 = (float *)(*param_3 + (ulong)(uint)((int)lVar8 - iVar2 * iVar4) * 0x14);
      fVar9 = *pfVar6;
      fVar10 = pfVar6[1];
      fVar14 = fVar10 - pfVar1[1];
      fVar12 = param_2 - pfVar1[1];
      fVar13 = fVar9 - *pfVar1;
      fVar11 = param_1 - *pfVar1;
      fVar13 = (fVar11 * fVar13 + fVar12 * fVar14) / (fVar13 * fVar13 + fVar14 * fVar14);
      if (fVar13 < 0.0) {
        fVar9 = fVar11 * fVar11;
        fVar10 = fVar12 * fVar12;
LAB_0319e3d4:
        fVar9 = (float)FUN_032c8ed0(fVar9 + fVar10);
      }
      else {
        if (1.0 < fVar13) {
          fVar9 = param_1 - fVar9;
          fVar10 = param_2 - fVar10;
          fVar9 = fVar9 * fVar9;
          fVar10 = fVar10 * fVar10;
          goto LAB_0319e3d4;
        }
        fVar9 = (float)FUN_032c8ef0();
      }
      uVar5 = (ulong)(int)param_3[1];
      if (fVar15 <= fVar9) {
        fVar9 = fVar15;
      }
      fVar15 = fVar9;
      lVar7 = lVar7 + 0x14;
    } while (lVar8 < (long)uVar5);
    fVar9 = 0.0;
    if (!bVar3) {
      fVar9 = fVar15;
    }
  }
  return fVar9;
}


