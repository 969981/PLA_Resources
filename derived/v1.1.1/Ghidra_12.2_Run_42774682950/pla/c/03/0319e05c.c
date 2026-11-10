/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0319e05c; name: FUN_0319e05c
 */


/* WARNING: Removing unreachable block (ram,0x0319e1c8) */
/* WARNING: Removing unreachable block (ram,0x0319e224) */

undefined8 FUN_0319e05c(long *param_1,long *param_2)

{
  float *pfVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  long lVar6;
  float *pfVar7;
  float *pfVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  int iVar13;
  bool bVar14;
  int iVar15;
  float *pfVar16;
  float fVar17;
  float fVar18;
  
  if ((((*(float *)(param_1 + 2) <= *(float *)(param_2 + 3)) &&
       (*(float *)(param_2 + 2) <= *(float *)(param_1 + 3))) &&
      (*(float *)((long)param_1 + 0x14) <= *(float *)((long)param_2 + 0x1c))) &&
     (*(float *)((long)param_2 + 0x14) <= *(float *)((long)param_1 + 0x1c))) {
    iVar3 = (int)param_2[1];
    uVar9 = iVar3 - 1;
    iVar4 = (int)param_1[1];
    pfVar7 = (float *)*param_1;
    lVar6 = *param_2;
    if (0 < (int)uVar9) {
      lVar12 = lVar6 + (long)(int)uVar9 * 0x14;
      pfVar16 = (float *)(lVar6 + 0xc);
      fVar18 = *(float *)(lVar12 + 0xc) * -pfVar7[(long)(iVar4 + -1) * 5 + 2] -
               *(float *)(lVar12 + 8) * -pfVar7[(long)(iVar4 + -1) * 5 + 3];
      uVar11 = 0;
      do {
        bVar14 = fVar18 <= 0.0;
        fVar18 = *pfVar16 * -pfVar7[(long)(iVar4 + -1) * 5 + 2] -
                 pfVar16[-1] * -pfVar7[(long)(iVar4 + -1) * 5 + 3];
        if ((bVar14) && (0.0 < fVar18)) {
          uVar9 = (uint)uVar11;
          break;
        }
        uVar11 = uVar11 + 1;
        pfVar16 = pfVar16 + 5;
      } while (uVar9 != uVar11);
    }
    iVar13 = 0;
    uVar10 = uVar9;
    do {
      while( true ) {
        lVar12 = lVar6 + (long)(int)uVar10 * 0x14;
        fVar17 = *(float *)(lVar12 + 8);
        fVar18 = *(float *)(lVar12 + 0xc);
        if (pfVar7[(long)iVar13 * 5 + 2] * fVar18 - pfVar7[(long)iVar13 * 5 + 3] * fVar17 < 0.0)
        break;
        if (0.0 < *(float *)(lVar6 + (long)(int)uVar10 * 0x14 + 0x10) +
                  fVar17 * pfVar7[(long)iVar13 * 5] + fVar18 * (pfVar7 + (long)iVar13 * 5)[1]) {
          iVar15 = 1;
          goto LAB_0319e230;
        }
        uVar2 = 0;
        if (uVar10 + 1 != iVar3) {
          uVar2 = uVar10 + 1;
        }
        uVar10 = uVar2;
        if (uVar2 == uVar9) {
          iVar15 = 3;
          uVar10 = uVar9;
          goto LAB_0319e230;
        }
      }
      pfVar16 = (float *)(lVar6 + (long)(int)uVar10 * 0x14);
      if (0.0 < pfVar7[(long)iVar13 * 5 + 4] +
                pfVar7[(long)iVar13 * 5 + 2] * *pfVar16 + pfVar7[(long)iVar13 * 5 + 3] * pfVar16[1])
      {
        iVar15 = 1;
        goto LAB_0319e230;
      }
      iVar13 = iVar13 + 1;
    } while (iVar13 != iVar4);
    iVar15 = 3;
    iVar13 = iVar4;
LAB_0319e230:
    if (iVar15 == 3) {
      pfVar8 = (float *)(lVar6 + (long)(int)uVar10 * 0x14);
      lVar12 = ((long)iVar4 - (long)iVar13) + 1;
      pfVar16 = pfVar7 + (long)iVar13 * 5 + 4;
      do {
        lVar12 = lVar12 + -1;
        if (lVar12 == 0) {
          if (uVar10 == uVar9) {
            return 1;
          }
          do {
            lVar12 = lVar6 + (long)(int)uVar10 * 0x14;
            if (0.0 < *(float *)(lVar12 + 0x10) +
                      *pfVar7 * *(float *)(lVar12 + 8) + pfVar7[1] * *(float *)(lVar12 + 0xc)) {
              return 0;
            }
            uVar2 = 0;
            if (uVar10 + 1 != iVar3) {
              uVar2 = uVar10 + 1;
            }
            uVar10 = uVar2;
          } while (uVar2 != uVar9);
          return 1;
        }
        pfVar1 = pfVar16 + -2;
        pfVar5 = pfVar16 + -1;
        fVar18 = *pfVar16;
        pfVar16 = pfVar16 + 5;
      } while (fVar18 + *pfVar1 * *pfVar8 + *pfVar5 * pfVar8[1] <= 0.0);
    }
  }
  return 0;
}


