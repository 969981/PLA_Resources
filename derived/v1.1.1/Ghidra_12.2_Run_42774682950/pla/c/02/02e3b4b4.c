/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e3b4b4; name: FUN_02e3b4b4
 */


void FUN_02e3b4b4(int *param_1,float *param_2,uint param_3,float *param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  float *pfVar8;
  float *pfVar9;
  int iVar10;
  uint uVar11;
  long lVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  long lVar16;
  long lVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  
  fVar21 = (float)param_1[9];
  fVar24 = (float)param_1[10];
  fVar20 = 1.0 / (float)param_3;
  fVar23 = (float)param_1[7];
  fVar22 = (float)param_1[8];
  fVar25 = (float)param_1[0xb];
  fVar26 = (float)param_1[0xc];
  fVar18 = (fVar24 - fVar23) * fVar20;
  fVar19 = (fVar25 - fVar22) * fVar20;
  fVar20 = (fVar26 - fVar21) * fVar20;
  uVar2 = param_1[2];
  lVar12 = *(long *)(param_1 + 4);
  uVar11 = param_1[6];
  iVar4 = uVar2 - *param_1;
  if (param_4 == (float *)0x0) {
    if (param_3 == 0) goto LAB_02e3ba6c;
    do {
      uVar13 = 0;
      if (uVar2 != 0) {
        uVar13 = (uVar11 + iVar4) / uVar2;
      }
      uVar13 = (uVar11 + iVar4) - uVar13 * uVar2;
      uVar1 = uVar2 - uVar11;
      if (uVar2 - uVar13 <= uVar2 - uVar11) {
        uVar1 = uVar2 - uVar13;
      }
      if (param_3 <= uVar1) {
        uVar1 = param_3;
      }
      param_3 = param_3 - uVar1;
      if (uVar1 != 0) {
        uVar14 = uVar1;
        if ((uVar1 & 1) != 0) {
          fVar24 = *(float *)(lVar12 + (ulong)uVar13 * 4);
          fVar23 = fVar23 + fVar18;
          fVar22 = fVar22 + fVar19;
          fVar25 = *param_2 + fVar23 * fVar24;
          fVar21 = fVar21 + fVar20;
          *(float *)(lVar12 + (ulong)uVar11 * 4) = fVar25;
          uVar11 = uVar11 + 1;
          *param_2 = fVar24 * fVar22 + fVar21 * fVar25;
          uVar13 = uVar13 + 1;
          uVar14 = uVar1 - 1;
          param_2 = param_2 + 1;
        }
        pfVar8 = param_2;
        if (uVar1 != 1) {
          do {
            fVar25 = *(float *)(lVar12 + (ulong)uVar13 * 4);
            fVar24 = fVar22 + fVar19;
            fVar26 = *pfVar8 + (fVar23 + fVar18) * fVar25;
            fVar22 = fVar24 + fVar19;
            *(float *)(lVar12 + (ulong)uVar11 * 4) = fVar26;
            *pfVar8 = fVar25 * fVar24 + (fVar21 + fVar20) * fVar26;
            uVar1 = uVar13 + 1;
            uVar13 = uVar13 + 2;
            fVar24 = *(float *)(lVar12 + (ulong)uVar1 * 4);
            fVar23 = fVar23 + fVar18 + fVar18;
            fVar25 = pfVar8[1] + fVar23 * fVar24;
            fVar21 = fVar21 + fVar20 + fVar20;
            *(float *)(lVar12 + (ulong)(uVar11 + 1) * 4) = fVar25;
            param_2 = pfVar8 + 2;
            uVar14 = uVar14 - 2;
            uVar11 = uVar11 + 2;
            pfVar8[1] = fVar24 * fVar22 + fVar21 * fVar25;
            pfVar8 = param_2;
          } while (uVar14 != 0);
        }
      }
      uVar13 = 0;
      if (uVar2 != 0) {
        uVar13 = uVar11 / uVar2;
      }
      uVar11 = uVar11 - uVar13 * uVar2;
    } while (param_3 != 0);
  }
  else {
    if (param_3 == 0) goto LAB_02e3ba6c;
    uVar13 = 0;
    if (uVar2 != 0) {
      uVar13 = (iVar4 + uVar11) / uVar2;
    }
    uVar1 = uVar2 + ~param_1[1];
    uVar13 = (iVar4 + uVar11) - uVar13 * uVar2;
    iVar3 = uVar2 - 1;
    fVar24 = (float)(uint)param_1[1];
    do {
      uVar14 = uVar1 - uVar13;
      if (iVar3 - uVar11 <= uVar1 - uVar13) {
        uVar14 = iVar3 - uVar11;
      }
      if (param_3 <= uVar14) {
        uVar14 = param_3;
      }
      pfVar8 = param_2;
      if (uVar13 < uVar1) goto LAB_02e3b700;
      do {
        do {
          pfVar9 = param_4 + 1;
          fVar25 = (float)(uVar11 + iVar4) + fVar24 * *param_4;
          uVar15 = (uint)fVar25;
          uVar14 = 0;
          if (uVar2 != 0) {
            uVar14 = uVar15 / uVar2;
          }
          uVar5 = 0;
          if (uVar2 != 0) {
            uVar5 = (uVar15 + 1) / uVar2;
          }
          uVar6 = 0;
          if (uVar2 != 0) {
            uVar6 = (uVar11 + 1) / uVar2;
          }
          uVar13 = uVar11 + iVar4 + 1;
          uVar7 = 0;
          if (uVar2 != 0) {
            uVar7 = uVar13 / uVar2;
          }
          fVar22 = fVar22 + fVar19;
          fVar21 = fVar21 + fVar20;
          param_3 = param_3 - 1;
          fVar25 = (fVar25 - (float)(int)fVar25) *
                   *(float *)(lVar12 + (ulong)((uVar15 + 1) - uVar5 * uVar2) * 4) +
                   *(float *)(lVar12 + (ulong)(uVar15 - uVar14 * uVar2) * 4) *
                   (1.0 - (fVar25 - (float)(int)fVar25));
          fVar23 = fVar23 + fVar18;
          fVar26 = *pfVar8 + fVar23 * fVar25;
          uVar13 = uVar13 - uVar7 * uVar2;
          *(float *)(lVar12 + (ulong)uVar11 * 4) = fVar26;
          uVar11 = (uVar11 + 1) - uVar6 * uVar2;
          uVar15 = iVar3 - uVar11;
          uVar14 = uVar1 - uVar13;
          if (uVar15 <= uVar1 - uVar13) {
            uVar14 = uVar15;
          }
          if (param_3 <= uVar14) {
            uVar14 = param_3;
          }
          param_2 = pfVar8 + 1;
          *pfVar8 = fVar25 * fVar22 + fVar21 * fVar26;
          param_4 = pfVar9;
          if (param_3 == 0) goto LAB_02e3b71c;
          pfVar8 = param_2;
        } while (uVar1 <= uVar13);
LAB_02e3b700:
        pfVar8 = param_2;
      } while (((uVar13 < (uint)param_1[1]) || (uVar14 < 8)) ||
              (uVar15 = iVar3 - uVar11, uVar15 == 0));
LAB_02e3b71c:
      uVar13 = 0;
      if (uVar2 != 0) {
        uVar13 = (uVar11 + iVar4) / uVar2;
      }
      uVar13 = (uVar11 + iVar4) - uVar13 * uVar2;
      uVar14 = uVar1 - uVar13;
      if (uVar15 <= uVar1 - uVar13) {
        uVar14 = uVar15;
      }
      if (param_3 <= uVar14) {
        uVar14 = param_3;
      }
      uVar15 = uVar14 >> 3;
      param_3 = param_3 - (uVar14 & 0xfffffff8);
      if (uVar15 != 0) {
        lVar16 = 0;
        lVar17 = 0;
        do {
          pfVar8 = param_4 + lVar16;
          pfVar9 = param_2 + lVar16;
          fVar25 = (float)uVar13 + fVar24 * *pfVar8;
          fVar26 = (fVar25 - (float)(int)fVar25) * *(float *)(lVar12 + (ulong)((int)fVar25 + 1) * 4)
                   + *(float *)(lVar12 + (ulong)(uint)(int)fVar25 * 4) *
                     (1.0 - (fVar25 - (float)(int)fVar25));
          fVar27 = *pfVar9 + (fVar23 + fVar18) * fVar26;
          fVar25 = fVar22 + fVar19 + fVar19;
          *(float *)(lVar12 + ((ulong)uVar11 + lVar16 & 0xffffffff) * 4) = fVar27;
          *pfVar9 = fVar26 * (fVar22 + fVar19) + (fVar21 + fVar20) * fVar27;
          fVar26 = (float)(uVar13 + 1) + fVar24 * pfVar8[1];
          fVar22 = (fVar26 - (float)(int)fVar26) * *(float *)(lVar12 + (ulong)((int)fVar26 + 1) * 4)
                   + *(float *)(lVar12 + (ulong)(uint)(int)fVar26 * 4) *
                     (1.0 - (fVar26 - (float)(int)fVar26));
          fVar23 = fVar23 + fVar18 + fVar18;
          fVar27 = pfVar9[1] + fVar23 * fVar22;
          fVar21 = fVar21 + fVar20 + fVar20;
          fVar26 = fVar25 + fVar19;
          iVar10 = (int)((ulong)uVar11 + lVar16);
          fVar23 = fVar23 + fVar18;
          *(float *)(lVar12 + (ulong)(iVar10 + 1) * 4) = fVar27;
          pfVar9[1] = fVar22 * fVar25 + fVar21 * fVar27;
          fVar25 = (float)(uVar13 + 2) + fVar24 * pfVar8[2];
          fVar22 = (fVar25 - (float)(int)fVar25) * *(float *)(lVar12 + (ulong)((int)fVar25 + 1) * 4)
                   + *(float *)(lVar12 + (ulong)(uint)(int)fVar25 * 4) *
                     (1.0 - (fVar25 - (float)(int)fVar25));
          fVar27 = pfVar9[2] + fVar23 * fVar22;
          fVar21 = fVar21 + fVar20;
          fVar25 = fVar26 + fVar19;
          *(float *)(lVar12 + (ulong)(iVar10 + 2) * 4) = fVar27;
          pfVar9[2] = fVar22 * fVar26 + fVar21 * fVar27;
          fVar26 = (float)(uVar13 + 3) + fVar24 * pfVar8[3];
          fVar26 = (fVar26 - (float)(int)fVar26) * *(float *)(lVar12 + (ulong)((int)fVar26 + 1) * 4)
                   + *(float *)(lVar12 + (ulong)(uint)(int)fVar26 * 4) *
                     (1.0 - (fVar26 - (float)(int)fVar26));
          fVar23 = fVar23 + fVar18;
          fVar22 = pfVar9[3] + fVar23 * fVar26;
          fVar21 = fVar21 + fVar20;
          *(float *)(lVar12 + (ulong)(iVar10 + 3) * 4) = fVar22;
          pfVar9[3] = fVar26 * fVar25 + fVar21 * fVar22;
          fVar26 = (float)(uVar13 + 4) + fVar24 * pfVar8[4];
          fVar22 = (fVar26 - (float)(int)fVar26) * *(float *)(lVar12 + (ulong)((int)fVar26 + 1) * 4)
                   + *(float *)(lVar12 + (ulong)(uint)(int)fVar26 * 4) *
                     (1.0 - (fVar26 - (float)(int)fVar26));
          fVar23 = fVar23 + fVar18;
          fVar25 = fVar25 + fVar19;
          fVar21 = fVar21 + fVar20;
          fVar27 = pfVar9[4] + fVar23 * fVar22;
          fVar26 = fVar25 + fVar19;
          fVar23 = fVar23 + fVar18;
          *(float *)(lVar12 + (ulong)(iVar10 + 4) * 4) = fVar27;
          pfVar9[4] = fVar22 * fVar25 + fVar21 * fVar27;
          fVar25 = (float)(uVar13 + 5) + fVar24 * pfVar8[5];
          fVar22 = (fVar25 - (float)(int)fVar25) * *(float *)(lVar12 + (ulong)((int)fVar25 + 1) * 4)
                   + *(float *)(lVar12 + (ulong)(uint)(int)fVar25 * 4) *
                     (1.0 - (fVar25 - (float)(int)fVar25));
          fVar27 = pfVar9[5] + fVar23 * fVar22;
          fVar21 = fVar21 + fVar20;
          fVar25 = fVar26 + fVar19;
          *(float *)(lVar12 + (ulong)(iVar10 + 5) * 4) = fVar27;
          pfVar9[5] = fVar22 * fVar26 + fVar21 * fVar27;
          fVar26 = (float)(uVar13 + 6) + fVar24 * pfVar8[6];
          fVar26 = (fVar26 - (float)(int)fVar26) * *(float *)(lVar12 + (ulong)((int)fVar26 + 1) * 4)
                   + *(float *)(lVar12 + (ulong)(uint)(int)fVar26 * 4) *
                     (1.0 - (fVar26 - (float)(int)fVar26));
          fVar23 = fVar23 + fVar18;
          fVar27 = pfVar9[6] + fVar23 * fVar26;
          fVar21 = fVar21 + fVar20;
          fVar22 = fVar25 + fVar19;
          *(float *)(lVar12 + (ulong)(iVar10 + 6) * 4) = fVar27;
          uVar14 = uVar13 + 7;
          uVar13 = uVar13 + 8;
          pfVar9[6] = fVar26 * fVar25 + fVar21 * fVar27;
          fVar25 = (float)uVar14 + fVar24 * pfVar8[7];
          fVar25 = (fVar25 - (float)(int)fVar25) * *(float *)(lVar12 + (ulong)((int)fVar25 + 1) * 4)
                   + *(float *)(lVar12 + (ulong)(uint)(int)fVar25 * 4) *
                     (1.0 - (fVar25 - (float)(int)fVar25));
          fVar23 = fVar23 + fVar18;
          fVar26 = pfVar9[7] + fVar23 * fVar25;
          fVar21 = fVar21 + fVar20;
          uVar15 = uVar15 - 1;
          lVar17 = lVar17 + -0x20;
          lVar16 = lVar16 + 8;
          *(float *)(lVar12 + (ulong)(iVar10 + 7) * 4) = fVar26;
          pfVar9[7] = fVar25 * fVar22 + fVar21 * fVar26;
        } while (uVar15 != 0);
        param_4 = (float *)((long)param_4 - lVar17);
        param_2 = (float *)((long)param_2 - lVar17);
        uVar11 = uVar11 + (int)lVar16;
      }
    } while (param_3 != 0);
  }
  fVar24 = (float)param_1[10];
  fVar25 = (float)param_1[0xb];
  fVar26 = (float)param_1[0xc];
LAB_02e3ba6c:
  param_1[6] = uVar11;
  param_1[7] = (int)fVar24;
  param_1[8] = (int)fVar25;
  param_1[9] = (int)fVar26;
  return;
}


