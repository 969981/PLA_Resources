/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01088530; name: FUN_01088530
 */


ulong FUN_01088530(ulong param_1,long param_2)

{
  float *pfVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  float *pfVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  uVar10 = *(long *)(param_2 + 0x70) - *(long *)(param_2 + 0x68) >> 5;
  uVar4 = uVar10 - 1;
  if (uVar10 == 0 || uVar4 == 0) {
    *(undefined4 *)(param_2 + 0xa4) = 0;
    return param_1;
  }
  if (*(char *)(param_2 + 0xa0) == '\0') {
    uVar9 = *(long *)(param_2 + 0xb0) - *(long *)(param_2 + 0xa8) >> 2;
    if (uVar9 <= uVar4 && uVar4 - uVar9 != 0) {
      param_1 = FUN_01088c58(param_2 + 0xa8,uVar4 - uVar9);
      goto joined_r0x01088760;
    }
    if (uVar9 <= uVar4) goto joined_r0x01088760;
    lVar5 = *(long *)(param_2 + 0xa8) + uVar4 * 4;
  }
  else {
    uVar4 = *(long *)(param_2 + 0xb0) - *(long *)(param_2 + 0xa8) >> 2;
    if (uVar4 <= uVar10 && uVar10 - uVar4 != 0) {
      param_1 = FUN_01088c58(param_2 + 0xa8,uVar10 - uVar4);
      goto joined_r0x01088760;
    }
    if (uVar4 <= uVar10) goto joined_r0x01088760;
    lVar5 = *(long *)(param_2 + 0xa8) + uVar10 * 4;
  }
  *(long *)(param_2 + 0xb0) = lVar5;
joined_r0x01088760:
  if (uVar10 != 1) {
    lVar3 = uVar10 - 1;
    param_1 = 0;
    lVar5 = 0;
    lVar8 = 0;
    do {
      pfVar7 = (float *)(*(long *)(param_2 + 0x68) + lVar5);
      lVar5 = lVar5 + 0x20;
      fVar11 = (float)*(undefined8 *)(pfVar7 + 8) - *pfVar7;
      fVar12 = (float)((ulong)*(undefined8 *)(pfVar7 + 8) >> 0x20) - pfVar7[1];
      *(float *)(*(long *)(param_2 + 0xa8) + lVar8 * 4) =
           SQRT((pfVar7[10] - pfVar7[2]) * (pfVar7[10] - pfVar7[2]) + fVar11 * fVar11 +
                fVar12 * fVar12 + 0.0);
      lVar8 = lVar8 + 1;
    } while (lVar3 != lVar8);
    if ((1 < uVar10) && (*(char *)(param_2 + 0xa0) != '\0')) {
      puVar6 = *(undefined8 **)(param_2 + 0x68);
      uVar2 = puVar6[lVar3 * 4];
      fVar11 = *(float *)(puVar6 + 1) - *(float *)(puVar6 + lVar3 * 4 + 1);
      fVar12 = (float)*puVar6 - (float)uVar2;
      fVar13 = (float)((ulong)*puVar6 >> 0x20) - (float)((ulong)uVar2 >> 0x20);
      fVar11 = fVar11 * fVar11 + fVar12 * fVar12;
      fVar13 = fVar13 * fVar13 + 0.0;
      fVar12 = SQRT(fVar11 + fVar13);
      param_1 = CONCAT44(SQRT(fVar11 + fVar13),fVar12);
      *(float *)(*(long *)(param_2 + 0xa8) + lVar3 * 4) = fVar12;
    }
  }
  pfVar7 = *(float **)(param_2 + 0xa8);
  pfVar1 = *(float **)(param_2 + 0xb0);
  *(undefined4 *)(param_2 + 0xa4) = 0;
  if (pfVar7 != pfVar1) {
    fVar11 = *pfVar7 + 0.0;
    param_1 = (ulong)(uint)fVar11;
    *(float *)(param_2 + 0xa4) = fVar11;
    if (pfVar7 + 1 != pfVar1) {
      fVar11 = fVar11 + pfVar7[1];
      param_1 = (ulong)(uint)fVar11;
      *(float *)(param_2 + 0xa4) = fVar11;
      if (pfVar7 + 2 != pfVar1) {
        fVar11 = fVar11 + pfVar7[2];
        param_1 = (ulong)(uint)fVar11;
        *(float *)(param_2 + 0xa4) = fVar11;
        if (pfVar7 + 3 != pfVar1) {
          fVar11 = fVar11 + pfVar7[3];
          param_1 = (ulong)(uint)fVar11;
          *(float *)(param_2 + 0xa4) = fVar11;
          if (pfVar7 + 4 != pfVar1) {
            fVar11 = fVar11 + pfVar7[4];
            param_1 = (ulong)(uint)fVar11;
            *(float *)(param_2 + 0xa4) = fVar11;
            if (pfVar7 + 5 != pfVar1) {
              fVar11 = fVar11 + pfVar7[5];
              *(float *)(param_2 + 0xa4) = fVar11;
              for (pfVar7 = pfVar7 + 6; param_1 = (ulong)(uint)fVar11, pfVar7 != pfVar1;
                  pfVar7 = pfVar7 + 1) {
                fVar11 = fVar11 + *pfVar7;
                *(float *)(param_2 + 0xa4) = fVar11;
              }
            }
          }
        }
      }
    }
  }
  return param_1;
}


