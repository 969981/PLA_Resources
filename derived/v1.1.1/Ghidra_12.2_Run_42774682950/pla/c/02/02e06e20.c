/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e06e20; name: FUN_02e06e20
 */


/* WARNING: Removing unreachable block (ram,0x02e06f54) */

void FUN_02e06e20(float param_1,long *param_2,float *param_3,float *param_4,float *param_5,
                 undefined8 param_6,uint param_7)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  float *pfVar4;
  ulong uVar5;
  long lVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  ulong uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  pfVar4 = (float *)*param_2;
  uVar1 = *(uint *)(param_2 + 1);
  uVar5 = (ulong)(uVar1 >> 1) + 1;
  pfVar7 = param_3;
  pfVar8 = param_4;
  pfVar9 = pfVar4;
  uVar10 = uVar5;
  do {
    *pfVar9 = *pfVar7 * (1.0 - param_1) + param_1 * *pfVar8;
    uVar10 = uVar10 - 1;
    pfVar7 = pfVar7 + 2;
    pfVar8 = pfVar8 + 2;
    pfVar9 = pfVar9 + 2;
  } while (uVar10 != 0);
  if ((param_7 & 1) != 0) {
    if (uVar1 >> 1 == 0) {
      lVar6 = 0;
    }
    else {
      lVar6 = 0;
      pfVar7 = param_3 + 3;
      do {
        pfVar8 = param_5 + lVar6;
        lVar6 = lVar6 + 2;
        *pfVar8 = pfVar7[-2];
        pfVar8[1] = *pfVar7;
        pfVar7 = pfVar7 + 4;
      } while (uVar5 - (uVar5 & 1) != lVar6);
      if ((uVar5 & 1) == 0) goto LAB_02e06eb8;
    }
    param_5[lVar6] = param_3[lVar6 * 2 + 1];
  }
LAB_02e06eb8:
  pfVar7 = pfVar4 + 1;
  pfVar8 = param_3 + 1;
  pfVar9 = param_4 + 1;
  do {
    fVar11 = *pfVar9;
    fVar13 = *pfVar8;
    *pfVar7 = *param_5;
    fVar13 = *param_5 + (fVar11 - fVar13);
    fVar11 = fVar13;
    if (3.1415927 <= fVar13) {
      fVar11 = fVar13 + -6.2831855;
    }
    fVar12 = fVar11 + 6.2831855;
    if (-3.1415927 <= fVar11) {
      fVar12 = fVar11;
    }
    bVar2 = true;
    bVar3 = false;
    if (fVar13 < 3.1415927) {
      bVar2 = false;
      bVar3 = true;
      if (!NAN(fVar11)) {
        bVar2 = fVar11 < -3.1415927;
        bVar3 = false;
      }
    }
    if (bVar2 == bVar3) {
      fVar12 = fVar13;
    }
    uVar5 = uVar5 - 1;
    *param_5 = fVar12;
    param_5 = param_5 + 1;
    pfVar7 = pfVar7 + 2;
    pfVar8 = pfVar8 + 2;
    pfVar9 = pfVar9 + 2;
  } while (uVar5 != 0);
  *(undefined2 *)((long)param_2 + 0xc) = 0x101;
  return;
}


