/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030de690; name: FUN_030de690
 */


void FUN_030de690(long param_1,undefined4 *param_2,uint param_3,undefined4 *param_4)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  float *pfVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  float fVar16;
  float fVar17;
  undefined1 auStack_34 [4];
  
  FUN_030df130((ulong)param_3,param_1,auStack_34);
  *param_4 = *param_2;
  if (0 < (int)param_3) {
    lVar9 = 0;
    lVar10 = 0;
    lVar8 = (long)(int)param_3;
    pfVar12 = (float *)(param_1 + 8);
    fVar16 = 0.0;
    uVar15 = 0;
    while( true ) {
      uVar11 = uVar15;
      uVar15 = uVar11 + 1;
      lVar10 = lVar10 + lVar8;
      lVar9 = lVar9 + -1;
      pfVar12 = (float *)((long)pfVar12 +
                         (-(ulong)(param_3 >> 0x1f) & 0xfffffffc00000000 | (ulong)param_3 << 2));
      param_4[uVar11] = (float)param_2[uVar11] - fVar16;
      if (uVar15 == param_3) break;
      fVar16 = 0.0;
      if (uVar15 != 0) {
        uVar13 = uVar15 & 3;
        if (uVar11 < 3) {
          lVar14 = 0;
          fVar16 = 0.0;
        }
        else {
          fVar16 = 0.0;
          lVar14 = 0;
          pfVar4 = (float *)(param_4 + 2);
          pfVar5 = pfVar12;
          do {
            lVar14 = lVar14 + -4;
            fVar16 = fVar16 + pfVar5[-2] * pfVar4[-2] + pfVar5[-1] * pfVar4[-1] + *pfVar5 * *pfVar4
                     + pfVar5[1] * pfVar4[1];
            pfVar4 = pfVar4 + 4;
            pfVar5 = pfVar5 + 4;
          } while (lVar9 + uVar13 != lVar14);
          lVar14 = -lVar14;
        }
        if (uVar13 != 0) {
          pfVar4 = (float *)(param_4 + lVar14);
          pfVar5 = (float *)(param_1 + (lVar14 + lVar10) * 4);
          do {
            uVar13 = uVar13 - 1;
            fVar16 = fVar16 + *pfVar5 * *pfVar4;
            pfVar4 = pfVar4 + 1;
            pfVar5 = pfVar5 + 1;
          } while (uVar13 != 0);
        }
      }
    }
    lVar14 = 0;
    uVar11 = 0;
    pfVar12 = (float *)(param_4 + lVar8 + 2);
    iVar6 = param_3 * param_3 + -1;
    uVar15 = 1;
    lVar9 = lVar8;
    lVar10 = lVar8;
    do {
      lVar10 = lVar10 + -1;
      lVar9 = lVar9 + -1;
      fVar16 = 0.0;
      if (1 < (ulong)(lVar8 - lVar9)) {
        uVar13 = uVar11 & 3;
        if (uVar11 - 1 < 3) {
          lVar7 = 1;
          fVar16 = 0.0;
        }
        else {
          fVar16 = 0.0;
          pfVar4 = (float *)(param_1 + 8 + (long)iVar6 * 4);
          lVar7 = 0;
          pfVar5 = pfVar12;
          do {
            pfVar2 = pfVar4 + -1;
            lVar7 = lVar7 + -4;
            fVar17 = *pfVar4;
            pfVar3 = pfVar4 + 1;
            pfVar1 = pfVar4 + 2;
            pfVar4 = pfVar4 + 4;
            fVar16 = fVar16 + *pfVar2 * pfVar5[-2] + fVar17 * pfVar5[-1] + *pfVar3 * *pfVar5 +
                     *pfVar1 * pfVar5[1];
            pfVar5 = pfVar5 + 4;
          } while (lVar14 + uVar13 != lVar7);
          lVar7 = 1 - lVar7;
        }
        if (uVar13 != 0) {
          pfVar4 = (float *)(param_4 + lVar7 + lVar10);
          pfVar5 = (float *)(param_1 + (lVar7 + iVar6) * 4);
          do {
            uVar13 = uVar13 - 1;
            fVar16 = fVar16 + *pfVar5 * *pfVar4;
            pfVar4 = pfVar4 + 1;
            pfVar5 = pfVar5 + 1;
          } while (uVar13 != 0);
        }
      }
      uVar15 = uVar15 + 1;
      uVar11 = uVar11 + 1;
      lVar14 = lVar14 + -1;
      iVar6 = iVar6 + ~param_3;
      pfVar12 = pfVar12 + -1;
      param_4[lVar9] =
           ((float)param_4[lVar9] - fVar16) *
           *(float *)(param_1 + (long)(int)((int)lVar9 + (int)lVar9 * param_3) * 4);
    } while (uVar15 != param_3 + 1);
  }
  return;
}


