/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005578ac; name: FUN_005578ac
 */


undefined8 FUN_005578ac(long *param_1,int *param_2,int *param_3,uint param_4)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  int *piVar5;
  undefined8 uVar6;
  int *piVar7;
  int *piVar8;
  bool bVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  uint uVar13;
  long lVar14;
  int iVar15;
  int iVar16;
  int *piVar17;
  uint uVar18;
  __less a_Stack_60 [8];
  __less a_Stack_58 [8];
  
  piVar5 = (int *)FUN_002e2e80(PTR_FUN_04373078,
                               -(ulong)((uint)(param_2[0xb] + param_2[10]) >> 0x1f) &
                               0xfffffffc00000000 | (ulong)(uint)(param_2[0xb] + param_2[10]) << 2);
  if (*param_2 == 0) {
    uVar18 = 0;
    iVar15 = 0;
  }
  else {
    piVar7 = *(int **)(param_2 + 6);
    if ((param_4 >> 8 & 1) == 0) {
      iVar15 = 0;
      uVar18 = 0;
      bVar9 = false;
      iVar10 = *piVar7;
      piVar8 = piVar7;
LAB_005579b8:
      if (iVar10 < param_2[10]) goto LAB_00557960;
      do {
        if ((0 < iVar15) && (piVar5[(long)iVar15 + -1] != -1)) {
          lVar11 = (long)iVar15;
          iVar15 = iVar15 + 1;
          piVar5[lVar11] = -1;
        }
        while( true ) {
          piVar8 = piVar8 + 1;
          if (piVar8 == piVar7 + *param_2) goto LAB_00557b80;
          iVar10 = *piVar8;
          if (!bVar9) goto LAB_005579b8;
          if (((int)param_1[1] == 0) || (param_2[10] <= iVar10)) goto LAB_00557b80;
          if (param_2[10] <= iVar10) break;
LAB_00557960:
          lVar11 = *param_1;
          lVar12 = *(long *)(lVar11 + 0x60);
          puVar1 = (uint *)(lVar12 + (long)iVar10 * 8);
          if ((*(byte *)(lVar12 + (-(ulong)(iVar10 - 1U >> 0x1f) & 0xfffffff800000000 |
                                  (ulong)(iVar10 - 1U) << 3)) >> 3 & 1) != 0) {
            piVar5[iVar15] = iVar10;
            iVar15 = iVar15 + 1;
          }
          uVar13 = *puVar1 & 7;
          if (uVar13 == 4) {
            uVar18 = puVar1[1] | uVar18;
          }
          else if (uVar13 == 5) {
            bVar9 = (bool)(bVar9 | *(char *)(lVar11 + 1) == '\0');
          }
        }
      } while( true );
    }
    lVar11 = 0;
    iVar15 = 0;
    uVar18 = 0;
    bVar9 = false;
    bVar4 = 0;
    uVar6 = 2;
    iVar10 = *piVar7;
LAB_00557abc:
    if (iVar10 < param_2[10]) goto LAB_00557a64;
LAB_00557ac8:
    if (iVar15 < 1) goto LAB_00557a30;
    if (piVar5[(long)iVar15 + -1] == -1) goto LAB_00557a30;
    lVar12 = (long)iVar15;
    iVar15 = iVar15 + 1;
    piVar5[lVar12] = -1;
    bVar4 = 1;
    lVar11 = lVar11 + 4;
    if (lVar11 != (long)*param_2 * 4) {
LAB_00557a40:
      do {
        iVar10 = *(int *)((long)piVar7 + lVar11);
        if (!bVar9) goto LAB_00557abc;
        if (((int)param_1[1] == 0) || (param_2[10] <= iVar10)) break;
        if (param_2[10] <= iVar10) goto LAB_00557ac8;
LAB_00557a64:
        lVar12 = *param_1;
        lVar14 = *(long *)(lVar12 + 0x60);
        puVar1 = (uint *)(lVar14 + (long)iVar10 * 8);
        uVar13 = *puVar1;
        if (((uVar13 & 7) == 1) && (iVar16 = (int)param_1[1], iVar16 != 3)) {
          if (iVar16 == 0) {
            if (lVar11 == 0) {
              uVar3 = *(uint *)(lVar14 + ((ulong)(uVar13 >> 1) & 0x7ffffff8));
              uVar2 = uVar3 & 7;
              if (uVar2 == 6) {
                uVar2 = *(uint *)(lVar14 + ((ulong)(uVar3 >> 1) & 0x7ffffff8)) & 7;
              }
              if (uVar2 == 2) goto joined_r0x00557cc4;
            }
          }
          else if ((bool)(iVar16 != 1 | bVar4 ^ 1)) goto joined_r0x00557cc4;
        }
        if ((*(byte *)(lVar14 + (-(ulong)(iVar10 - 1U >> 0x1f) & 0xfffffff800000000 |
                                (ulong)(iVar10 - 1U) << 3)) >> 3 & 1) != 0) {
          piVar5[iVar15] = iVar10;
          uVar13 = *puVar1;
          iVar15 = iVar15 + 1;
        }
        if ((uVar13 & 7) == 5) {
          bVar9 = (bool)(bVar9 | *(char *)(lVar12 + 1) == '\0');
        }
        else if ((uVar13 & 7) == 4) {
          uVar18 = puVar1[1] | uVar18;
          lVar11 = lVar11 + 4;
          if (lVar11 == (long)*param_2 * 4) break;
          goto LAB_00557a40;
        }
LAB_00557a30:
        lVar11 = lVar11 + 4;
        if (lVar11 == (long)*param_2 * 4) break;
      } while( true );
    }
  }
LAB_00557b80:
  if (param_2[0xb] + param_2[10] < iVar15) {
                    /* try { // try from 00557d1c to 00557d3b has its CatchHandler @ 00557d3c */
                    /* WARNING: Subroutine does not return */
    __assert_fail("(n) <= (q->size())","external/com_github_google_re2/re2/dfa.cc",0x289,
                  "WorkqToCachedState");
  }
  iVar10 = iVar15;
  if ((0 < iVar15) && (iVar10 = iVar15 + -1, piVar5[iVar15 + -1] != -1)) {
    iVar10 = iVar15;
  }
  uVar13 = param_4 & 0x100;
  if (uVar18 != 0) {
    uVar13 = param_4;
  }
  if (iVar10 == 0 && uVar13 == 0) {
    uVar6 = 1;
    goto joined_r0x00557cc4;
  }
  iVar15 = (int)param_1[1];
  if (iVar15 == 1) {
    piVar7 = piVar5 + iVar10;
    if (piVar5 < piVar7) {
      piVar8 = piVar5;
      do {
        piVar17 = piVar8;
        if (piVar8 < piVar7) {
          do {
            if (*piVar17 == -1) {
              bVar9 = true;
              goto LAB_00557c10;
            }
            piVar17 = piVar17 + 1;
          } while (piVar17 < piVar7);
          bVar9 = false;
        }
        else {
          bVar9 = false;
        }
LAB_00557c10:
                    /* try { // try from 00557c10 to 00557c1b has its CatchHandler @ 00557d60 */
        std::__sort<std::__less<int,int>&,int*>(piVar8,piVar17,a_Stack_58);
        piVar8 = piVar17 + 1;
        if (!bVar9) {
          piVar8 = piVar17;
        }
      } while (piVar8 < piVar7);
      iVar15 = (int)param_1[1];
      goto LAB_00557c34;
    }
  }
  else {
LAB_00557c34:
    if (iVar15 == 3) {
                    /* try { // try from 00557c40 to 00557c4b has its CatchHandler @ 00557d48 */
      std::__sort<std::__less<int,int>&,int*>(piVar5,piVar5 + iVar10,a_Stack_60);
    }
  }
  if (param_3 != (int *)0x0) {
    piVar5[iVar10] = -2;
    iVar15 = *param_3;
    iVar10 = iVar10 + 1;
    if (iVar15 != 0) {
      piVar8 = *(int **)(param_3 + 6);
      lVar11 = *(long *)(*param_1 + 0x60);
      piVar7 = piVar8;
      iVar16 = iVar10;
      do {
        iVar10 = iVar16;
        if ((*(uint *)(lVar11 + (long)*piVar7 * 8) & 7) == 5) {
          iVar10 = iVar16 + 1;
          piVar5[iVar16] = *(int *)(lVar11 + (long)*piVar7 * 8 + 4);
          iVar15 = *param_3;
        }
        piVar7 = piVar7 + 1;
        iVar16 = iVar10;
      } while (piVar7 != piVar8 + iVar15);
    }
  }
                    /* try { // try from 00557d00 to 00557d0f has its CatchHandler @ 00557d54 */
  uVar6 = FUN_00557d80(param_1,piVar5,iVar10,uVar13 | uVar18 << 0x10);
joined_r0x00557cc4:
  if (piVar5 != (int *)0x0) {
    FUN_002e2ea0(PTR_LAB_04373088,piVar5);
  }
  return uVar6;
}


