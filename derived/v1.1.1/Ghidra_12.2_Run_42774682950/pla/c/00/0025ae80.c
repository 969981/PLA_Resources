/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0025ae80; name: FUN_0025ae80
 */


float FUN_0025ae80(float param_1,ushort *param_2)

{
  long lVar1;
  float *pfVar2;
  bool bVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  float *pfVar7;
  float fVar8;
  float fVar9;
  
  uVar5 = (ulong)*param_2;
  lVar1 = uVar5 - 1;
  if (uVar5 == 0 || lVar1 == 0) {
    return *(float *)(param_2 + 4);
  }
  pfVar7 = *(float **)(param_2 + 4);
  if (*pfVar7 < param_1) {
    if (pfVar7[lVar1 * 8] <= param_1) {
      lVar6 = -2;
      if (((uint)pfVar7[lVar1 * 8 + 7] & 1) != 0) {
        lVar6 = -1;
      }
      pfVar7 = pfVar7 + (lVar6 + uVar5) * 8;
      fVar8 = 1.0;
      goto joined_r0x0025af3c;
    }
    lVar6 = 0;
    pfVar2 = pfVar7;
    fVar8 = *pfVar7;
    do {
      pfVar7 = pfVar2;
      fVar9 = pfVar7[8];
      bVar3 = false;
      bVar4 = true;
      if (param_1 < fVar9) {
        bVar3 = false;
        bVar4 = true;
        if (!NAN(fVar8) && !NAN(param_1)) {
          bVar3 = fVar8 == param_1;
          bVar4 = param_1 <= fVar8;
        }
      }
      if (!bVar4 || bVar3) {
        fVar8 = (param_1 - fVar8) / (fVar9 - fVar8);
        if (fVar8 <= 0.0) {
          fVar8 = 0.0;
        }
        if (1.0 < fVar8) {
          fVar8 = 1.0;
        }
        fVar8 = (float)FUN_0025ac80(fVar8,pfVar7);
        fVar9 = 1.0 - fVar8;
        fVar8 = fVar8 * fVar8 * fVar8 +
                pfVar7[4] * fVar9 * fVar8 * 3.0 * fVar9 + pfVar7[2] * fVar9 * fVar8 * fVar8 * 3.0;
        goto LAB_0025afa4;
      }
      lVar6 = lVar6 + 1;
      pfVar2 = pfVar7 + 8;
      fVar8 = fVar9;
    } while (lVar6 < lVar1);
  }
  fVar8 = 0.0;
joined_r0x0025af3c:
  if (pfVar7 == (float *)0x0) {
    return 0.0;
  }
LAB_0025afa4:
  return pfVar7[5] + fVar8 * (pfVar7[6] - pfVar7[5]);
}


