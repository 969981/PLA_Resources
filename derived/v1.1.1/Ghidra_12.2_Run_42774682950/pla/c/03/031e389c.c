/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031e389c; name: FUN_031e389c
 */


void FUN_031e389c(long param_1,long *param_2)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  ulong uVar10;
  long lVar11;
  int *piVar12;
  long lVar13;
  long lVar14;
  uint *puVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  long lVar19;
  
  puVar3 = PTR_PTR_0434a090;
  iVar8 = *(int *)(param_1 + 0x10) + -1;
  if (0 < *(int *)(param_1 + 0x10)) {
    puVar15 = (uint *)((long)param_2 + 0xc);
    do {
      lVar13 = (long)iVar8;
      lVar11 = *(long *)(param_1 + 8);
      piVar9 = (int *)(lVar11 + (long)iVar8 * 0x68);
      iVar2 = *piVar9;
      iVar16 = piVar9[4];
      uVar10 = (ulong)(iVar16 - 1);
      if (0 < iVar16) {
        iVar16 = (int)param_2[1];
        do {
          uVar18 = *(uint *)(*(long *)(lVar11 + lVar13 * 0x68 + 8) +
                            (-(uVar10 >> 0x1f & 1) & 0xfffffffc00000000 | (uVar10 & 0xffffffff) << 2
                            ));
          uVar5 = *puVar15;
          iVar1 = iVar16 + 1;
          if (iVar16 < (int)(uVar5 & 0x3fffffff)) {
            lVar19 = *param_2;
          }
          else {
            lVar19 = *param_2;
            if (0x3ffffffe < iVar16) {
              FUN_032bd0a8(iVar1);
              uVar5 = *puVar15;
            }
            uVar5 = (uVar5 & 0x3fffffff) << 1;
            if (0x3ffffffe < uVar5) {
              uVar5 = 0x3fffffff;
            }
            if ((int)uVar5 < iVar1) {
              uVar5 = iVar16 + 1;
            }
            lVar19 = FUN_032bd1d4(puVar3,uVar5,4,lVar19,iVar16,puVar15);
            iVar16 = (int)param_2[1];
            *param_2 = lVar19;
          }
          *(uint *)(lVar19 + (long)iVar16 * 4) = uVar18 | iVar2 << 0x16;
          uVar10 = uVar10 + 0xffffffff;
          *(int *)(param_2 + 1) = iVar1;
          iVar16 = iVar1;
        } while (-1 < (int)uVar10);
      }
      iVar16 = *(int *)(lVar11 + lVar13 * 0x68 + 0x50);
      uVar5 = iVar16 - 1;
      if (0 < iVar16) {
        do {
          lVar19 = *(long *)(*(long *)(lVar11 + lVar13 * 0x68 + 0x48) +
                             ((long)((ulong)uVar5 << 0x20) >> 0x1c) + 8);
          if (*(int *)(lVar19 + 0x18) == iVar2) {
            iVar16 = *(int *)(lVar19 + 0x28) + -1;
            if (0 < *(int *)(lVar19 + 0x28)) {
              uVar18 = *(uint *)(param_2 + 1);
              do {
                uVar6 = *puVar15;
                lVar14 = *(long *)(lVar19 + 0x20);
                uVar17 = uVar18 + 1;
                if ((int)uVar18 < (int)(uVar6 & 0x3fffffff)) {
                  lVar4 = *param_2;
                  uVar6 = uVar18;
                }
                else {
                  lVar4 = *param_2;
                  if (0x3ffffffe < (int)uVar18) {
                    FUN_032bd0a8(uVar17);
                    uVar6 = *puVar15;
                  }
                  uVar6 = (uVar6 & 0x3fffffff) << 1;
                  if (0x3ffffffe < uVar6) {
                    uVar6 = 0x3fffffff;
                  }
                  uVar7 = uVar17;
                  if ((int)uVar17 <= (int)uVar6) {
                    uVar7 = uVar6;
                  }
                  lVar4 = FUN_032bd1d4(puVar3,uVar7,4,lVar4,uVar18,puVar15);
                  uVar6 = *(uint *)(param_2 + 1);
                  *param_2 = lVar4;
                }
                *(undefined4 *)(lVar4 + (long)(int)uVar6 * 4) =
                     *(undefined4 *)(lVar14 + (long)iVar16 * 8);
                uVar7 = *(uint *)((long)param_2 + 0xc);
                uVar6 = uVar18 + 2;
                *(uint *)(param_2 + 1) = uVar17;
                if ((int)uVar17 < (int)(uVar7 & 0x3fffffff)) {
                  lVar4 = *param_2;
                }
                else {
                  lVar4 = *param_2;
                  if (0x3ffffffd < (int)uVar18) {
                    FUN_032bd0a8(uVar6);
                    uVar7 = *puVar15;
                  }
                  uVar18 = (uVar7 & 0x3fffffff) << 1;
                  if (0x3ffffffe < uVar18) {
                    uVar18 = 0x3fffffff;
                  }
                  uVar7 = uVar6;
                  if ((int)uVar6 <= (int)uVar18) {
                    uVar7 = uVar18;
                  }
                  lVar4 = FUN_032bd1d4(puVar3,uVar7,4,lVar4,uVar17,puVar15);
                  uVar17 = *(uint *)(param_2 + 1);
                  *param_2 = lVar4;
                }
                *(undefined4 *)(lVar4 + (long)(int)uVar17 * 4) =
                     *(undefined4 *)(lVar14 + (long)iVar16 * 8 + 4);
                iVar16 = iVar16 + -1;
                *(uint *)(param_2 + 1) = uVar6;
                uVar18 = uVar6;
              } while (-1 < iVar16);
            }
          }
          uVar5 = uVar5 - 1;
        } while (-1 < (int)uVar5);
      }
      iVar8 = iVar8 + -1;
    } while (-1 < iVar8);
  }
  uVar5 = *(uint *)(param_2 + 1);
  if (uVar5 - 1 != 0 && 0 < (int)uVar5) {
    FUN_0319da60(*param_2,0,uVar5 - 1);
    uVar5 = *(uint *)(param_2 + 1);
  }
  if (uVar5 == 0) {
    uVar5 = 0;
  }
  else {
    if ((int)uVar5 < 2) {
      iVar8 = 0;
    }
    else {
      piVar12 = (int *)*param_2;
      lVar11 = 0;
      lVar13 = (ulong)uVar5 - 1;
      piVar9 = piVar12;
      do {
        piVar9 = piVar9 + 1;
        if (piVar12[(int)lVar11] != *piVar9) {
          lVar11 = (long)(int)lVar11 + 1;
          piVar12[lVar11] = *piVar9;
        }
        iVar8 = (int)lVar11;
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
    }
    puVar15 = (uint *)((long)param_2 + 0xc);
    uVar18 = *puVar15;
    uVar5 = iVar8 + 1;
    if ((int)(uVar18 & 0x3fffffff) <= iVar8) {
      lVar13 = *param_2;
      lVar11 = param_2[1];
      if (0x3ffffffe < iVar8) {
        FUN_032bd0a8(uVar5);
        uVar18 = *puVar15;
      }
      uVar18 = (uVar18 & 0x3fffffff) << 1;
      if (0x3ffffffe < uVar18) {
        uVar18 = 0x3fffffff;
      }
      uVar17 = uVar5;
      if ((int)uVar5 <= (int)uVar18) {
        uVar17 = uVar18;
      }
      lVar11 = FUN_032bd1d4(PTR_PTR_0434a090,uVar17,4,lVar13,(int)lVar11,puVar15);
      *param_2 = lVar11;
    }
  }
  if (*(uint *)(param_2 + 1) != uVar5) {
    *(uint *)(param_2 + 1) = uVar5;
  }
  return;
}


