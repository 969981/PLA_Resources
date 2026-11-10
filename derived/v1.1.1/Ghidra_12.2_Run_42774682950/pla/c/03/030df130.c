/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030df130; name: FUN_030df130
 */


void FUN_030df130(uint param_1,long param_2,undefined1 *param_3)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  float *pfVar9;
  ulong uVar10;
  long lVar11;
  float *pfVar12;
  uint uVar13;
  long lVar14;
  long lVar15;
  float *pfVar16;
  float *pfVar17;
  undefined4 uVar18;
  float fVar19;
  
  *param_3 = 0;
  if (0 < (int)param_1) {
    uVar10 = 0;
    lVar11 = (long)(int)param_1;
    pfVar12 = (float *)(param_2 + 8);
    lVar5 = 0;
    while( true ) {
      lVar5 = lVar5 + (int)uVar10;
      fVar19 = *(float *)(param_2 + lVar5 * 4);
      bVar4 = true;
      if ((fVar19 <= 1e-05) && (bVar4 = false, !NAN(fVar19))) {
        bVar4 = fVar19 < -1e-05;
      }
      if (bVar4) {
        *(float *)(param_2 + lVar5 * 4) = 1.0 / fVar19;
      }
      else {
        uVar18 = 0xb727c5ac;
        if (0.0 <= fVar19) {
          uVar18 = 0x3727c5ac;
        }
        *(undefined4 *)(param_2 + lVar5 * 4) = uVar18;
        *param_3 = 1;
      }
      uVar10 = uVar10 + 1;
      pfVar12 = (float *)((long)pfVar12 +
                         (-(ulong)(param_1 >> 0x1f) & 0xfffffffc00000000 | (ulong)param_1 << 2));
      if (uVar10 == param_1) break;
      lVar5 = uVar10 * lVar11;
      if (uVar10 != 0) {
        iVar6 = 0;
        uVar7 = 0;
        lVar8 = 2;
        pfVar9 = pfVar12;
        uVar13 = param_1;
        uVar2 = param_1;
        do {
          uVar2 = uVar2 + 1;
          lVar14 = uVar7 + lVar5;
          fVar19 = *(float *)(param_2 + lVar14 * 4);
          bVar4 = true;
          if ((fVar19 <= 1e-08) && (bVar4 = false, !NAN(fVar19))) {
            bVar4 = fVar19 < -1e-08;
          }
          if (bVar4) {
            lVar1 = uVar7 * lVar11 + (long)(int)uVar7;
            fVar19 = fVar19 * *(float *)(param_2 + lVar1 * 4);
            *(float *)(param_2 + lVar14 * 4) = fVar19;
            if (1 < (long)(lVar11 - uVar7)) {
              iVar3 = param_1 - (int)uVar7;
              if (iVar3 == 2) {
                lVar15 = 1;
              }
              else {
                lVar15 = 1;
                pfVar16 = (float *)(param_2 + (lVar8 + iVar6) * 4);
                pfVar17 = pfVar9;
                do {
                  lVar15 = lVar15 + 2;
                  pfVar17[-1] = pfVar17[-1] - fVar19 * pfVar16[-1];
                  *pfVar17 = *pfVar17 - fVar19 * *pfVar16;
                  pfVar16 = pfVar16 + 2;
                  pfVar17 = pfVar17 + 2;
                } while ((ulong)uVar13 - ((ulong)uVar2 & 1) != lVar15);
                if ((iVar3 - 1U & 1) == 0) goto LAB_030df1e8;
              }
              lVar14 = (lVar15 + lVar14) * 4;
              *(float *)(param_2 + lVar14) =
                   *(float *)(param_2 + lVar14) -
                   fVar19 * *(float *)(param_2 + (lVar15 + lVar1) * 4);
            }
          }
LAB_030df1e8:
          uVar7 = uVar7 + 1;
          uVar13 = uVar13 - 1;
          pfVar9 = pfVar9 + 1;
          lVar8 = lVar8 + lVar11;
          iVar6 = iVar6 + 1;
        } while (uVar7 != uVar10);
      }
    }
  }
  return;
}


