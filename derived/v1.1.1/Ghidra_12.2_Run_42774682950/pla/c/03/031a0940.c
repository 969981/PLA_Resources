/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031a0940; name: FUN_031a0940
 */


void FUN_031a0940(long param_1,long param_2)

{
  byte bVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  int iVar12;
  int iVar13;
  int *piVar14;
  long lVar15;
  int iVar16;
  int iVar17;
  ulong uVar18;
  int *piVar19;
  long lVar20;
  int iVar21;
  int iVar22;
  long lVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 auStack_280 [16];
  undefined1 auStack_270 [528];
  
  lVar20 = *(long *)(param_1 + 0x18);
  iVar16 = *(int *)(param_2 + 4);
  lVar5 = (long)*(int *)(param_2 + 8);
  piVar19 = (int *)(lVar20 + lVar5 * 0x38);
  iVar4 = *(int *)(param_1 + 0x70);
  if (0 < iVar4) {
    lVar11 = *(long *)(param_1 + 0x68);
    uVar18 = 0;
    lVar23 = -8;
    do {
      if (*(long *)(lVar11 + uVar18 * 8) == lVar20 + (long)iVar16 * 0x38) {
        iVar8 = (int)uVar18;
        if (iVar8 < 1) goto LAB_031a0a44;
        lVar15 = lVar20 + lVar5 * 0x38;
        iVar17 = (int)(uVar18 - 1);
        piVar14 = *(int **)(lVar11 + (long)iVar17 * 8);
        fVar26 = (float)piVar14[6];
        fVar24 = *(float *)(lVar15 + 8);
        fVar25 = *(float *)(lVar15 + 0xc);
        fVar27 = (float)piVar14[3] + fVar26 * (fVar24 - (float)piVar14[2]);
        if (fVar25 == fVar27) {
          fVar27 = *(float *)(lVar20 + lVar5 * 0x38 + 0x18);
          if (fVar27 == fVar26) {
            bVar1 = *(byte *)(lVar20 + lVar5 * 0x38 + 4);
            if (bVar1 == *(byte *)(piVar14 + 1)) {
              if (*piVar14 <= *piVar19) goto LAB_031a0a44;
            }
            else if (*(byte *)(piVar14 + 1) <= bVar1) goto LAB_031a0a44;
          }
          else if (fVar26 <= fVar27) goto LAB_031a0a44;
        }
        else if (fVar27 <= fVar25) goto LAB_031a0a44;
        if (0 < iVar17) {
          lVar15 = (long)iVar17;
          goto LAB_031a0dbc;
        }
        iVar16 = 0;
        goto LAB_031a0bd8;
      }
      uVar18 = uVar18 + 1;
      lVar23 = lVar23 + 8;
    } while ((long)iVar4 != uVar18);
  }
  FUN_0331fefc(auStack_280,auStack_270,0x200);
  FUN_0332448c(auStack_280,"edge not on sweep line");
  iVar4 = FUN_03320b30(0x3cbb03f2,auStack_270,
                       "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Ai/Pathfinding/NavMesh/ResolveEdgePenetrations/hkaiFindPointInPolygon.cpp"
                       ,0x359);
  if (iVar4 != 0) {
    CallSupervisor(0x26);
  }
  FUN_0331ff7c(auStack_280);
  iVar4 = *(int *)(param_1 + 0x70);
  uVar18 = 0;
LAB_031a0a44:
  iVar17 = (int)uVar18;
  lVar23 = (long)iVar17;
  iVar8 = (int)((long)iVar4 + -1);
  if (iVar17 < iVar8) {
    lVar11 = *(long *)(param_1 + 0x68);
    lVar15 = lVar20 + lVar5 * 0x38;
    piVar14 = *(int **)(lVar11 + (lVar23 + 1) * 8);
    fVar26 = (float)piVar14[6];
    fVar24 = *(float *)(lVar15 + 8);
    fVar25 = *(float *)(lVar15 + 0xc);
    fVar27 = (float)piVar14[3] + fVar26 * (fVar24 - (float)piVar14[2]);
    if (fVar25 == fVar27) {
      fVar27 = *(float *)(lVar20 + lVar5 * 0x38 + 0x18);
      if (fVar27 == fVar26) {
        bVar1 = *(byte *)(lVar20 + lVar5 * 0x38 + 4);
        if (bVar1 == *(byte *)(piVar14 + 1)) {
          if (*piVar14 <= *piVar19) {
LAB_031a0e38:
            lVar23 = lVar23 + 2;
            iVar16 = iVar4;
            if ((int)lVar23 < iVar4) {
              lVar15 = iVar4 - lVar23;
              puVar7 = (undefined8 *)(lVar11 + lVar23 * 8);
              iVar13 = iVar17 + 2;
              do {
                piVar14 = (int *)*puVar7;
                fVar26 = (float)piVar14[6];
                fVar27 = (float)piVar14[3] + fVar26 * (fVar24 - (float)piVar14[2]);
                bVar3 = fVar25 < fVar27;
                iVar16 = iVar13;
                if ((fVar25 == fVar27) &&
                   (fVar27 = *(float *)(lVar20 + lVar5 * 0x38 + 0x18), bVar3 = fVar27 < fVar26,
                   fVar27 == fVar26)) {
                  bVar1 = *(byte *)(lVar20 + lVar5 * 0x38 + 4);
                  if (bVar1 == *(byte *)(piVar14 + 1)) {
                    if (*piVar19 < *piVar14) break;
                  }
                  else if (bVar1 < *(byte *)(piVar14 + 1)) break;
                }
                else if (bVar3) break;
                iVar13 = iVar13 + 1;
                lVar15 = lVar15 + -1;
                puVar7 = puVar7 + 1;
                iVar16 = iVar4;
              } while (lVar15 != 0);
            }
            uVar2 = iVar16 - 1;
            if (iVar4 != 0) {
              iVar13 = iVar4;
              if (iVar17 + -1 <= iVar4) {
                iVar13 = iVar17 + -1;
              }
              iVar12 = 0;
              if (0 < iVar17) {
                iVar12 = iVar13;
              }
              iVar13 = iVar4;
              if (iVar16 <= iVar4) {
                iVar13 = iVar16;
              }
              iVar21 = 0;
              if (-1 < iVar16) {
                iVar21 = iVar13;
              }
              if (iVar21 == iVar4) {
                *(undefined4 *)(*(long *)(lVar11 + (long)iVar8 * 8) + 0x20) =
                     *(undefined4 *)(param_1 + 0x60);
                iVar21 = iVar8;
              }
              if (iVar12 < iVar21) {
                lVar23 = *(long *)(*(long *)(param_1 + 0x68) + (long)iVar12 * 8);
                if (*(int *)(lVar23 + 0x1c) == 0) {
                  FUN_031a1f60(param_1);
                  lVar23 = *(long *)(*(long *)(param_1 + 0x68) + (long)iVar12 * 8);
                }
                iVar4 = iVar12 + 1;
                *(undefined4 *)(lVar23 + 0x20) = *(undefined4 *)(param_1 + 0x60);
                if (iVar21 != iVar4) {
                  lVar23 = (long)iVar12 * 8;
                  do {
                    lVar23 = lVar23 + 8;
                    lVar11 = *(long *)(*(long *)(param_1 + 0x68) + lVar23);
                    if (*(int *)(lVar11 + 0x1c) == 0) {
                      FUN_031a1f60(param_1,iVar4);
                      lVar11 = *(long *)(*(long *)(param_1 + 0x68) + lVar23);
                    }
                    iVar4 = iVar4 + 1;
                    *(undefined4 *)(lVar11 + 0x20) = *(undefined4 *)(param_1 + 0x60);
                  } while (iVar21 != iVar4);
                }
              }
            }
            iVar4 = 1;
            if (*(char *)(lVar20 + lVar5 * 0x38 + 4) == '\0') {
              iVar4 = -1;
            }
            if (iVar17 < (int)uVar2) {
              uVar10 = uVar18 & 0xffffffff;
              *(undefined8 *)(*(long *)(param_1 + 0x68) + uVar10 * 8) =
                   *(undefined8 *)(*(long *)(param_1 + 0x68) + (uVar10 + 1) * 8);
              lVar23 = *(long *)(*(long *)(param_1 + 0x68) + uVar10 * 8);
              *(int *)(lVar23 + 0x1c) = *(int *)(lVar23 + 0x1c) + iVar4;
              if (uVar10 + 1 != (ulong)uVar2) {
                do {
                  lVar11 = uVar10 * 8;
                  uVar10 = uVar10 + 1;
                  lVar23 = *(long *)(param_1 + 0x68) + lVar11;
                  *(undefined8 *)(lVar23 + 8) = *(undefined8 *)(lVar23 + 0x10);
                  lVar23 = *(long *)(*(long *)(param_1 + 0x68) + lVar11 + 8);
                  *(int *)(lVar23 + 0x1c) = *(int *)(lVar23 + 0x1c) + iVar4;
                } while ((ulong)uVar2 - 1 != uVar10);
              }
            }
            lVar20 = lVar20 + lVar5 * 0x38;
            *(int *)(lVar20 + 0x1c) =
                 *(int *)(*(long *)(*(long *)(param_1 + 0x68) + (long)(iVar16 + -2) * 8) + 0x1c) -
                 iVar4;
            *(int **)(*(long *)(param_1 + 0x68) + (long)(int)uVar2 * 8) = piVar19;
            *(undefined4 *)(lVar20 + 0x20) = *(undefined4 *)(param_1 + 0x60);
            FUN_031a1a88(param_1,uVar18 & 0xffffffff);
            FUN_031a1a88(param_1,iVar16 + -2);
            uVar18 = (ulong)uVar2;
            goto LAB_031a0b90;
          }
        }
        else if (*(byte *)(piVar14 + 1) <= bVar1) goto LAB_031a0e38;
      }
      else if (fVar26 <= fVar27) goto LAB_031a0e38;
    }
    else if (fVar27 <= fVar25) goto LAB_031a0e38;
  }
  iVar13 = iVar17 + -1;
  if (iVar4 != 0) {
    iVar12 = iVar4;
    if (iVar13 <= iVar4) {
      iVar12 = iVar13;
    }
    iVar21 = 0;
    if (0 < iVar17) {
      iVar21 = iVar12;
    }
    iVar12 = (int)(lVar23 + 1);
    iVar17 = iVar4;
    if (iVar12 <= iVar4) {
      iVar17 = iVar12;
    }
    iVar22 = 0;
    if (-1 < iVar12) {
      iVar22 = iVar17;
    }
    if (iVar22 == iVar4) {
      *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x68) + ((long)iVar4 + -1) * 8) + 0x20) =
           *(undefined4 *)(param_1 + 0x60);
      iVar22 = iVar8;
    }
    if (iVar21 < iVar22) {
      lVar11 = *(long *)(*(long *)(param_1 + 0x68) + (long)iVar21 * 8);
      if (*(int *)(lVar11 + 0x1c) == 0) {
        FUN_031a1f60(param_1);
        lVar11 = *(long *)(*(long *)(param_1 + 0x68) + (long)iVar21 * 8);
      }
      iVar4 = iVar21 + 1;
      *(undefined4 *)(lVar11 + 0x20) = *(undefined4 *)(param_1 + 0x60);
      if (iVar22 != iVar4) {
        lVar11 = (long)iVar21 * 8;
        do {
          lVar11 = lVar11 + 8;
          lVar15 = *(long *)(*(long *)(param_1 + 0x68) + lVar11);
          if (*(int *)(lVar15 + 0x1c) == 0) {
            FUN_031a1f60(param_1,iVar4);
            lVar15 = *(long *)(*(long *)(param_1 + 0x68) + lVar11);
          }
          iVar4 = iVar4 + 1;
          *(undefined4 *)(lVar15 + 0x20) = *(undefined4 *)(param_1 + 0x60);
        } while (iVar22 != iVar4);
      }
    }
  }
  lVar5 = lVar20 + lVar5 * 0x38;
  *(undefined4 *)(lVar5 + 0x1c) = *(undefined4 *)(lVar20 + (long)iVar16 * 0x38 + 0x1c);
  *(undefined4 *)(lVar5 + 0x20) = *(undefined4 *)(param_1 + 0x60);
  *(int **)(*(long *)(param_1 + 0x68) + lVar23 * 8) = piVar19;
  FUN_031a1a88(param_1,iVar13);
  uVar18 = uVar18 & 0xffffffff;
LAB_031a0b90:
  FUN_031a1a88(param_1,uVar18);
  return;
LAB_031a0dbc:
  do {
    piVar14 = *(int **)(lVar11 + -8 + lVar15 * 8);
    fVar26 = (float)piVar14[6];
    fVar27 = (float)piVar14[3] + fVar26 * (fVar24 - (float)piVar14[2]);
    bVar3 = fVar25 < fVar27;
    iVar16 = (int)lVar15;
    if ((fVar25 == fVar27) &&
       (fVar27 = *(float *)(lVar20 + lVar5 * 0x38 + 0x18), bVar3 = fVar27 < fVar26, fVar27 == fVar26
       )) {
      bVar1 = *(byte *)(lVar20 + lVar5 * 0x38 + 4);
      if (bVar1 == *(byte *)(piVar14 + 1)) {
        if (*piVar14 <= *piVar19) break;
      }
      else if (*(byte *)(piVar14 + 1) <= bVar1) break;
    }
    else if (!bVar3) break;
    lVar15 = lVar15 + -1;
    iVar16 = 0;
  } while (0 < lVar15);
LAB_031a0bd8:
  lVar15 = (long)iVar16;
  uVar10 = lVar15 - 1;
  if (iVar4 != 0) {
    iVar13 = iVar8 + 1;
    iVar17 = iVar4;
    if ((int)uVar10 <= iVar4) {
      iVar17 = (int)uVar10;
    }
    iVar12 = 0;
    if (0 < iVar16) {
      iVar12 = iVar17;
    }
    iVar17 = iVar4;
    if (iVar13 <= iVar4) {
      iVar17 = iVar13;
    }
    iVar21 = 0;
    if (-1 < iVar13) {
      iVar21 = iVar17;
    }
    if (iVar21 == iVar4) {
      *(undefined4 *)(*(long *)(lVar11 + (long)(iVar4 + -1) * 8) + 0x20) =
           *(undefined4 *)(param_1 + 0x60);
      iVar21 = iVar4 + -1;
    }
    if (iVar12 < iVar21) {
      lVar11 = *(long *)(*(long *)(param_1 + 0x68) + (long)iVar12 * 8);
      if (*(int *)(lVar11 + 0x1c) == 0) {
        FUN_031a1f60(param_1);
        lVar11 = *(long *)(*(long *)(param_1 + 0x68) + (long)iVar12 * 8);
      }
      iVar4 = iVar12 + 1;
      *(undefined4 *)(lVar11 + 0x20) = *(undefined4 *)(param_1 + 0x60);
      if (iVar21 != iVar4) {
        lVar11 = (long)iVar12 * 8;
        do {
          lVar11 = lVar11 + 8;
          lVar6 = *(long *)(*(long *)(param_1 + 0x68) + lVar11);
          if (*(int *)(lVar6 + 0x1c) == 0) {
            FUN_031a1f60(param_1);
            lVar6 = *(long *)(*(long *)(param_1 + 0x68) + lVar11);
          }
          iVar4 = iVar4 + 1;
          *(undefined4 *)(lVar6 + 0x20) = *(undefined4 *)(param_1 + 0x60);
        } while (iVar21 != iVar4);
      }
    }
  }
  iVar4 = -1;
  if (*(char *)(lVar20 + lVar5 * 0x38 + 4) == '\0') {
    iVar4 = 1;
  }
  if (iVar16 < iVar8) {
    puVar7 = (undefined8 *)(*(long *)(param_1 + 0x68) + lVar23);
    puVar7[1] = *puVar7;
    lVar23 = *(long *)(*(long *)(param_1 + 0x68) + uVar18 * 8);
    *(int *)(lVar23 + 0x1c) = *(int *)(lVar23 + 0x1c) + iVar4;
    if (lVar15 < (long)(uVar18 - 1)) {
      uVar9 = uVar18;
      do {
        lVar23 = *(long *)(param_1 + 0x68) + uVar9 * 8;
        *(undefined8 *)(lVar23 + -8) = *(undefined8 *)(lVar23 + -0x10);
        lVar23 = *(long *)(*(long *)(param_1 + 0x68) + uVar9 * 8 + -8);
        lVar11 = uVar9 - 2;
        uVar9 = uVar9 - 1;
        *(int *)(lVar23 + 0x1c) = *(int *)(lVar23 + 0x1c) + iVar4;
      } while (lVar15 < lVar11);
    }
  }
  if (iVar16 == 0) {
    *(int *)(lVar20 + lVar5 * 0x38 + 0x1c) = iVar4 + 1;
    puVar7 = *(undefined8 **)(param_1 + 0x68);
  }
  else {
    *(int *)(lVar20 + lVar5 * 0x38 + 0x1c) =
         *(int *)(*(long *)(*(long *)(param_1 + 0x68) + uVar10 * 8) + 0x1c) + iVar4;
    puVar7 = (undefined8 *)(*(long *)(param_1 + 0x68) + lVar15 * 8);
  }
  *puVar7 = piVar19;
  *(undefined4 *)(lVar20 + lVar5 * 0x38 + 0x20) = *(undefined4 *)(param_1 + 0x60);
  FUN_031a1a88(param_1,uVar10 & 0xffffffff);
  FUN_031a1a88(param_1,iVar16);
  FUN_031a1a88(param_1,uVar18 & 0xffffffff);
  return;
}


