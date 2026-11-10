/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0319f78c; name: FUN_0319f78c
 */


void FUN_0319f78c(float param_1,long *param_2)

{
  float *pfVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  uVar4 = *(uint *)(param_2 + 1);
  lVar3 = *param_2;
  if ((int)uVar4 < 1) {
    uVar8 = 1;
  }
  else {
    pfVar1 = (float *)(lVar3 + (long)(int)(uVar4 - 1) * 8);
    lVar6 = 0;
    fVar9 = *pfVar1;
    fVar10 = pfVar1[1];
    lVar7 = 0;
    uVar8 = 0;
    do {
      fVar12 = fVar10 - ((float *)(lVar3 + lVar6))[1];
      fVar11 = fVar9 - *(float *)(lVar3 + lVar6);
      if (param_1 < fVar11 * fVar11 + fVar12 * fVar12) {
        *(undefined8 *)(lVar3 + (long)(int)uVar8 * 8) = *(undefined8 *)(lVar3 + lVar6);
        lVar3 = *param_2;
        fVar9 = *(float *)(lVar3 + lVar6);
        fVar10 = ((float *)(lVar3 + lVar6))[1];
        uVar4 = *(uint *)(param_2 + 1);
        uVar8 = uVar8 + 1;
      }
      lVar7 = lVar7 + 1;
      lVar6 = lVar6 + 8;
    } while (lVar7 < (int)uVar4);
    if ((int)uVar8 < 2) {
      uVar8 = 1;
    }
  }
  uVar5 = *(uint *)((long)param_2 + 0xc);
  if ((uVar5 & 0x3fffffff) < uVar8) {
    if (uVar8 >> 0x1e != 0) {
      FUN_032bd0a8(uVar8);
      uVar5 = *(uint *)((long)param_2 + 0xc);
    }
    uVar5 = (uVar5 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar5) {
      uVar5 = 0x3fffffff;
    }
    uVar2 = uVar8;
    if ((int)uVar8 <= (int)uVar5) {
      uVar2 = uVar5;
    }
    lVar3 = FUN_032bd1d4(PTR_PTR_0434a080,uVar2,8,lVar3,uVar4);
    uVar4 = *(uint *)(param_2 + 1);
    *param_2 = lVar3;
  }
  if (uVar4 != uVar8) {
    *(uint *)(param_2 + 1) = uVar8;
  }
  return;
}


