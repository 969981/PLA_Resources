/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032cb790; name: FUN_032cb790
 */


undefined8 FUN_032cb790(long *param_1,long *param_2)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  float *pfVar8;
  int *piVar9;
  int iVar10;
  float *pfVar11;
  long lVar12;
  ulong uVar13;
  float *pfVar14;
  uint uVar15;
  int *piVar16;
  long lVar17;
  int iVar18;
  float *pfVar19;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  undefined8 uVar23;
  uint uVar24;
  ulong uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  
  uVar24 = *(uint *)(param_1 + 1);
  uVar25 = (ulong)uVar24;
  lVar7 = tpidr_el0;
  lVar12 = *(long *)(lVar7 + 0x38d490);
  if (lVar12 == 0) {
    lVar12 = FUN_0333d16c(0,1);
    *(long *)(lVar7 + 0x38d490) = lVar12;
  }
  lVar5 = *(long *)(lVar12 + 8);
  uVar21 = (ulong)(int)(uVar24 * 8 + 0x7f & 0xffffff80);
  if (*(ulong *)(lVar5 + 0x10) < uVar21) {
LAB_032cbe6c:
    pfVar8 = (float *)FUN_032ce670(lVar5,uVar21);
    lVar12 = *(long *)(lVar7 + 0x38d490);
  }
  else {
    pfVar8 = *(float **)(lVar5 + 0x18);
    if (*(ulong *)(lVar5 + 0x20) < (long)pfVar8 + uVar21) goto LAB_032cbe6c;
    *(ulong *)(lVar5 + 0x18) = (long)pfVar8 + uVar21;
  }
  if (lVar12 == 0) {
    lVar12 = FUN_0333d16c(0,1);
    *(long *)(lVar7 + 0x38d490) = lVar12;
  }
  lVar12 = *(long *)(lVar12 + 8);
  uVar22 = (ulong)(int)(uVar24 * 4 + 0x7f & 0xffffff80);
  if (*(ulong *)(lVar12 + 0x10) < uVar22) {
LAB_032cbeb8:
    piVar9 = (int *)FUN_032ce670(lVar12,uVar22);
  }
  else {
    piVar9 = *(int **)(lVar12 + 0x18);
    if (*(ulong *)(lVar12 + 0x20) < (long)piVar9 + uVar22) goto LAB_032cbeb8;
    *(ulong *)(lVar12 + 0x18) = (long)piVar9 + uVar22;
  }
  uVar23 = 0x80040200;
  if ((pfVar8 == (float *)0x0) || (piVar9 == (int *)0x0)) goto LAB_032cbd68;
  if ((int)uVar24 < 1) {
LAB_032cb8d8:
    bVar1 = false;
  }
  else {
    uVar13 = uVar25 & 3;
    if (uVar25 - 1 < 3) {
      lVar12 = 0;
    }
    else {
      lVar12 = 0;
      piVar16 = piVar9 + 2;
      do {
        iVar18 = (int)lVar12;
        piVar16[-2] = iVar18;
        piVar16[-1] = iVar18 + 1;
        lVar12 = lVar12 + 4;
        *piVar16 = iVar18 + 2;
        piVar16[1] = iVar18 + 3;
        piVar16 = piVar16 + 4;
      } while (uVar25 - uVar13 != lVar12);
    }
    if ((uVar24 & 3) != 0) {
      do {
        piVar9[lVar12] = (int)lVar12;
        lVar12 = lVar12 + 1;
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
    }
    if ((int)uVar24 < 2) goto LAB_032cb8d8;
    FUN_032cbf90(piVar9,0,uVar24 - 1,param_1);
    bVar1 = true;
  }
  uVar13 = 0;
  iVar18 = 0;
  *(undefined8 *)pfVar8 = *(undefined8 *)(*param_1 + (long)*piVar9 * 8);
  if (bVar1) {
    lVar12 = uVar25 - 1;
    piVar16 = piVar9;
    do {
      piVar16 = piVar16 + 1;
      pfVar14 = (float *)(*param_1 + (long)*piVar16 * 8);
      if ((*(float *)((long)pfVar8 +
                     (-(uVar13 >> 0x1f & 1) & 0xfffffff800000000 | (uVar13 & 0xffffffff) << 3)) !=
           *pfVar14) || (pfVar8[(long)(int)uVar13 * 2 + 1] != pfVar14[1])) {
        uVar13 = (long)(int)uVar13 + 1;
        *(undefined8 *)(pfVar8 + uVar13 * 2) = *(undefined8 *)pfVar14;
        piVar9[uVar13] = *piVar16;
      }
      iVar18 = (int)uVar13;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
    uVar24 = iVar18 + 1;
    if (iVar18 != -1) goto LAB_032cb960;
    uVar24 = 0;
    pfVar14 = (float *)0x0;
  }
  else {
    uVar24 = 1;
LAB_032cb960:
    lVar12 = *(long *)(lVar7 + 0x38d490);
    if (lVar12 == 0) {
      lVar12 = FUN_0333d16c(0,1);
      *(long *)(lVar7 + 0x38d490) = lVar12;
    }
    lVar12 = *(long *)(lVar12 + 8);
    uVar25 = (ulong)(int)(uVar24 * 8 + 0x7f & 0xffffff80);
    if (*(ulong *)(lVar12 + 0x10) < uVar25) {
LAB_032cbec8:
      pfVar14 = (float *)FUN_032ce670();
    }
    else {
      pfVar14 = *(float **)(lVar12 + 0x18);
      uVar25 = (long)pfVar14 + uVar25;
      if (*(ulong *)(lVar12 + 0x20) < uVar25) goto LAB_032cbec8;
      *(ulong *)(lVar12 + 0x18) = uVar25;
    }
    if (pfVar14 != (float *)0x0) {
      fVar26 = *pfVar8;
      if (iVar18 < 1) {
        uVar15 = 1;
        if (uVar24 != 1) goto LAB_032cba5c;
LAB_032cb9f0:
        uVar23 = 0;
        iVar10 = (int)param_2[1];
        *(undefined4 *)(*param_2 + (long)iVar10 * 4) = 0;
        *(int *)(param_2 + 1) = iVar10 + 1;
        if (pfVar8[(long)iVar18 * 2 + 1] == pfVar8[1]) goto LAB_032cbd10;
        *(int *)(*param_2 + (long)(iVar10 + 1) * 4) = iVar18;
        iVar18 = iVar10 + 3;
        *(undefined4 *)(*param_2 + (long)(iVar10 + 2) * 4) = 0;
      }
      else {
        uVar25 = 1;
        pfVar19 = pfVar8;
        do {
          pfVar19 = pfVar19 + 2;
          if (*pfVar19 != fVar26) break;
          uVar25 = uVar25 + 1;
        } while (uVar24 != uVar25);
        uVar15 = (uint)uVar25;
        if (uVar15 == uVar24) goto LAB_032cb9f0;
LAB_032cba5c:
        pfVar19 = pfVar8 + (long)iVar18 * 2;
        lVar17 = (long)iVar18;
        uVar4 = uVar15 - 1;
        lVar12 = -(lVar17 << 0x20);
        lVar5 = 0;
        pfVar11 = pfVar19;
        do {
          lVar20 = lVar5;
          lVar6 = lVar12;
          pfVar11 = pfVar11 + -2;
          if (lVar17 + lVar20 < 1) break;
          lVar12 = lVar6 + 0x100000000;
          lVar5 = lVar20 + -1;
        } while (*pfVar11 == *pfVar19);
        pfVar11 = (float *)((long)pfVar8 + (-lVar6 >> 0x1d));
        lVar12 = param_2[1];
        fVar27 = *pfVar11;
        fVar29 = pfVar11[1];
        fVar28 = pfVar8[1];
        *(int *)(*param_2 + (long)(int)lVar12 * 4) = *piVar9;
        *(int *)(param_2 + 1) = (int)lVar12 + 1;
        iVar18 = (int)lVar20 + iVar18;
        *pfVar14 = fVar26;
        pfVar14[1] = fVar28;
        if ((int)uVar4 <= iVar18) {
          uVar25 = (ulong)uVar4;
          iVar10 = 1;
          do {
            fVar2 = pfVar8[uVar25 * 2];
            fVar3 = (pfVar8 + uVar25 * 2)[1];
            if ((-lVar6 >> 0x20 <= (long)uVar25) ||
               ((fVar27 - fVar26) * (fVar3 - fVar28) - (fVar29 - fVar28) * (fVar2 - fVar26) < 0.0))
            {
              if (1 < iVar10) {
                lVar12 = (long)iVar10;
                pfVar11 = pfVar14 + (long)iVar10 * 2 + -2;
                do {
                  if ((fVar2 - pfVar11[-2]) * (pfVar11[1] - pfVar11[-1]) -
                      (fVar3 - pfVar11[-1]) * (*pfVar11 - pfVar11[-2]) < 0.0) break;
                  lVar12 = lVar12 + -1;
                  pfVar11 = pfVar11 + -2;
                  *(int *)(param_2 + 1) = (int)param_2[1] + -1;
                } while (1 < lVar12);
                iVar10 = (int)lVar12;
              }
              lVar12 = param_2[1];
              *(int *)(*param_2 + (long)(int)lVar12 * 4) = piVar9[uVar25];
              *(int *)(param_2 + 1) = (int)lVar12 + 1;
              lVar12 = (long)iVar10;
              iVar10 = iVar10 + 1;
              pfVar14[lVar12 * 2] = fVar2;
              (pfVar14 + lVar12 * 2)[1] = fVar3;
            }
            uVar25 = uVar25 + 1;
          } while (iVar18 + 1 != (int)uVar25);
        }
        if ((int)lVar20 != 0) {
          lVar12 = param_2[1];
          *(int *)(*param_2 + (long)(int)lVar12 * 4) = piVar9[lVar17];
          *(int *)(param_2 + 1) = (int)lVar12 + 1;
        }
        *(undefined8 *)pfVar14 = *(undefined8 *)pfVar19;
        if ((int)uVar15 <= iVar18) {
          fVar26 = pfVar8[(long)(int)uVar4 * 2];
          fVar28 = (pfVar8 + (long)(int)uVar4 * 2)[1];
          fVar29 = pfVar8[lVar17 * 2 + 1];
          fVar27 = *pfVar19;
          iVar18 = 1;
          lVar12 = -0x100000000 - lVar6 >> 0x20;
          do {
            fVar2 = pfVar8[lVar12 * 2];
            fVar3 = (pfVar8 + lVar12 * 2)[1];
            if ((lVar12 < (int)uVar15) ||
               (0.0 < (fVar27 - fVar26) * (fVar3 - fVar28) - (fVar29 - fVar28) * (fVar2 - fVar26)))
            {
              if (1 < iVar18) {
                lVar5 = (long)iVar18;
                pfVar19 = pfVar14 + (long)iVar18 * 2 + -2;
                do {
                  if (0.0 < (pfVar19[-2] - fVar2) * (pfVar19[1] - fVar3) -
                            (*pfVar19 - fVar2) * (pfVar19[-1] - fVar3)) break;
                  lVar5 = lVar5 + -1;
                  pfVar19 = pfVar19 + -2;
                  *(int *)(param_2 + 1) = (int)param_2[1] + -1;
                } while (1 < lVar5);
                iVar18 = (int)lVar5;
              }
              lVar5 = param_2[1];
              *(int *)(*param_2 + (long)(int)lVar5 * 4) = piVar9[lVar12];
              *(int *)(param_2 + 1) = (int)lVar5 + 1;
              lVar5 = (long)iVar18;
              iVar18 = iVar18 + 1;
              pfVar14[lVar5 * 2] = fVar2;
              (pfVar14 + lVar5 * 2)[1] = fVar3;
            }
            bVar1 = (int)uVar15 <= lVar12;
            lVar12 = lVar12 + -1;
          } while (bVar1);
        }
        uVar23 = 0;
        if (uVar4 == 0) goto LAB_032cbd10;
        lVar12 = param_2[1];
        *(int *)(*param_2 + (long)(int)lVar12 * 4) = *piVar9;
        iVar18 = (int)lVar12 + 1;
      }
      uVar23 = 0;
      *(int *)(param_2 + 1) = iVar18;
    }
  }
LAB_032cbd10:
  lVar12 = *(long *)(lVar7 + 0x38d490);
  if (lVar12 == 0) {
    lVar12 = FUN_0333d16c(0,1);
    *(long *)(lVar7 + 0x38d490) = lVar12;
  }
  lVar12 = *(long *)(lVar12 + 8);
  uVar25 = (ulong)(int)(uVar24 * 8 + 0x7f & 0xffffff80);
  if (((*(ulong *)(lVar12 + 0x10) < uVar25) || (*(long *)(lVar12 + 0x18) != (long)pfVar14 + uVar25))
     || (*(float **)(lVar12 + 0x28) == pfVar14)) {
    FUN_032cedf0(lVar12,pfVar14);
  }
  else {
    *(float **)(lVar12 + 0x18) = pfVar14;
  }
LAB_032cbd68:
  lVar12 = *(long *)(lVar7 + 0x38d490);
  if (lVar12 == 0) {
    lVar12 = FUN_0333d16c(0,1);
    *(long *)(lVar7 + 0x38d490) = lVar12;
  }
  lVar5 = *(long *)(lVar12 + 8);
  if (((*(ulong *)(lVar5 + 0x10) < uVar22) || (*(long *)(lVar5 + 0x18) != (long)piVar9 + uVar22)) ||
     (*(int **)(lVar5 + 0x28) == piVar9)) {
    FUN_032cedf0(lVar5,piVar9,uVar22);
    lVar12 = *(long *)(lVar7 + 0x38d490);
  }
  else {
    *(int **)(lVar5 + 0x18) = piVar9;
  }
  if (lVar12 == 0) {
    lVar12 = FUN_0333d16c(0,1);
    *(long *)(lVar7 + 0x38d490) = lVar12;
  }
  lVar7 = *(long *)(lVar12 + 8);
  if (((*(ulong *)(lVar7 + 0x10) < uVar21) || (*(long *)(lVar7 + 0x18) != (long)pfVar8 + uVar21)) ||
     (*(float **)(lVar7 + 0x28) == pfVar8)) {
    FUN_032cedf0(lVar7,pfVar8,uVar21);
  }
  else {
    *(float **)(lVar7 + 0x18) = pfVar8;
  }
  return uVar23;
}


