/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013e01e0; name: FUN_013e01e0
 */


/* WARNING: Removing unreachable block (ram,0x013e0994) */
/* WARNING: Removing unreachable block (ram,0x013e0a84) */
/* WARNING: Removing unreachable block (ram,0x013e092c) */

void FUN_013e01e0(ulong *param_1,ulong *param_2,undefined8 *param_3)

{
  ushort *puVar1;
  undefined4 uVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong *puVar8;
  long lVar9;
  ulong uVar10;
  int iVar11;
  ulong *puVar12;
  ulong *puVar13;
  int iVar14;
  ulong uVar15;
  long lVar16;
  ushort uVar17;
  ushort uVar18;
  ulong *puVar19;
  ulong *puVar20;
  
LAB_013e0220:
  puVar19 = (ulong *)((long)param_2 - 0xc);
  puVar20 = param_1;
LAB_013e022c:
  param_1 = puVar20;
  uVar6 = (long)param_2 - (long)param_1;
  switch(((long)uVar6 >> 2) * -0x5555555555555555) {
  case 0:
  case 1:
    goto switchD_013e0478_caseD_0;
  case 2:
    if ((int)*puVar19 < 0x3d5) {
      uVar17 = *(ushort *)(*(long *)*param_3 + (*puVar19 & 0xffffffff) * 0x58 + 0xe8);
    }
    else {
      uVar17 = 0;
    }
    if (0x3d4 < (int)*param_1) {
      return;
    }
    if (uVar17 < *(ushort *)(*(long *)*param_3 + (*param_1 & 0xffffffff) * 0x58 + 0xe8)) {
      uVar15 = *param_1;
      uVar6 = param_1[1];
      uVar10 = *puVar19;
      *(undefined4 *)(param_1 + 1) = *(undefined4 *)((long)param_2 - 4);
      *param_1 = uVar10;
      *(int *)((long)param_2 - 4) = (int)uVar6;
      *puVar19 = uVar15;
      return;
    }
    return;
  case 3:
    FUN_013e0ae0(param_1,(long)param_1 + 0xc,puVar19,param_3);
    return;
  case 4:
    FUN_013e0d80(param_1,(long)param_1 + 0xc,param_1 + 3,puVar19,param_3);
    return;
  case 5:
    FUN_013e0fa0(param_1,(long)param_1 + 0xc,param_1 + 3,(long)param_1 + 0x24,puVar19,param_3);
    return;
  default:
    if (0x173 < (long)uVar6) {
      puVar20 = (ulong *)((long)param_1 + (uVar6 / 0x18) * 0xc);
      if ((long)uVar6 < 0x2ed5) {
        iVar4 = FUN_013e0ae0(param_1,puVar20,puVar19,param_3);
      }
      else {
        lVar9 = (uVar6 / 0x30) * 0xc;
        iVar4 = FUN_013e0fa0(param_1,(long)param_1 + lVar9,puVar20,(long)puVar20 + lVar9,puVar19,
                             param_3);
      }
      uVar6 = *param_1 & 0xffffffff;
      lVar9 = *(long *)*param_3;
      iVar11 = (int)*param_1;
      if (iVar11 < 0x3d5) {
        uVar17 = *(ushort *)(lVar9 + uVar6 * 0x58 + 0xe8);
      }
      else {
        uVar17 = 0;
      }
      uVar15 = *puVar20 & 0xffffffff;
      iVar14 = (int)*puVar20;
      if ((0x3d4 < iVar14) || (*(ushort *)(lVar9 + uVar15 * 0x58 + 0xe8) <= uVar17)) {
        lVar9 = lVar9 + 0x6c;
        puVar8 = param_2 + -3;
        while (puVar7 = puVar8, param_1 != puVar7) {
          if ((int)*puVar7 < 0x3d5) {
            uVar17 = *(ushort *)(lVar9 + (*puVar7 & 0xffffffff) * 0x58 + 0x7c);
            if (0x3d4 < iVar14) goto LAB_013e093c;
LAB_013e0270:
            uVar18 = *(ushort *)(lVar9 + uVar15 * 0x58 + 0x7c);
          }
          else {
            uVar17 = 0;
            if (iVar14 < 0x3d5) goto LAB_013e0270;
LAB_013e093c:
            uVar18 = 0;
          }
          puVar8 = (ulong *)((long)puVar7 - 0xc);
          if (uVar17 < uVar18) goto LAB_013e08c8;
        }
        iVar4 = (int)*puVar19;
        if (iVar11 < 0x3d5) {
          uVar17 = *(ushort *)(lVar9 + uVar6 * 0x58 + 0x7c);
          if (0x3d4 < iVar4) goto LAB_013e0ad8;
LAB_013e07f8:
          uVar18 = *(ushort *)(lVar9 + (*puVar19 & 0xffffffff) * 0x58 + 0x7c);
        }
        else {
          uVar17 = 0;
          if (iVar4 < 0x3d5) goto LAB_013e07f8;
LAB_013e0ad8:
          uVar18 = 0;
        }
        puVar8 = (ulong *)((long)param_1 + 0xc);
        if (uVar18 <= uVar17) {
          if (puVar8 == puVar19) {
            return;
          }
          puVar8 = param_1 + 3;
          while( true ) {
            if (iVar11 < 0x3d5) {
              uVar17 = *(ushort *)(lVar9 + uVar6 * 0x58 + 0x7c);
            }
            else {
              uVar17 = 0;
            }
            if (((int)*(ulong *)((long)puVar8 - 0xc) < 0x3d5) &&
               (uVar17 < *(ushort *)
                          (lVar9 + (*(ulong *)((long)puVar8 - 0xc) & 0xffffffff) * 0x58 + 0x7c)))
            break;
            puVar8 = (ulong *)((long)puVar8 + 0xc);
            if (param_2 == puVar8) {
              return;
            }
          }
          uVar6 = *(ulong *)((long)puVar8 - 0xc);
          uVar2 = *(undefined4 *)((long)puVar8 - 4);
          uVar15 = *puVar19;
          *(undefined4 *)((long)puVar8 - 4) = *(undefined4 *)((long)param_2 - 4);
          *(ulong *)((long)puVar8 - 0xc) = uVar15;
          *(undefined4 *)((long)param_2 - 4) = uVar2;
          *puVar19 = uVar6;
        }
        if (puVar8 == puVar19) {
          return;
        }
        puVar7 = puVar19;
        do {
          lVar9 = *(long *)*param_3 + 0x6c;
          puVar1 = (ushort *)(lVar9 + (*param_1 & 0xffffffff) * 0x58 + 0x7c);
          puVar20 = (ulong *)((long)puVar8 - 0xc);
          do {
            puVar13 = puVar20;
            iVar4 = (int)*param_1;
            iVar11 = (int)*(ulong *)((long)puVar13 + 0xc);
            if (iVar4 < 0x3d5) {
              uVar17 = *puVar1;
              if (0x3d4 < iVar11) goto LAB_013e0964;
LAB_013e03e0:
              uVar18 = *(ushort *)
                        (lVar9 + (*(ulong *)((long)puVar13 + 0xc) & 0xffffffff) * 0x58 + 0x7c);
            }
            else {
              uVar17 = 0;
              if (iVar11 < 0x3d5) goto LAB_013e03e0;
LAB_013e0964:
              uVar18 = 0;
            }
            puVar20 = (ulong *)((long)puVar13 + 0xc);
          } while (uVar18 <= uVar17);
          puVar8 = puVar13 + 3;
          do {
            puVar12 = puVar7;
            puVar7 = (ulong *)((long)puVar12 - 0xc);
            if (iVar4 < 0x3d5) {
              uVar17 = *puVar1;
            }
            else {
              uVar17 = 0;
            }
          } while (((int)*puVar7 < 0x3d5) &&
                  (uVar17 < *(ushort *)(lVar9 + (*puVar7 & 0xffffffff) * 0x58 + 0x7c)));
          if (puVar7 <= puVar20) goto LAB_013e022c;
          uVar6 = *puVar20;
          uVar2 = *(undefined4 *)((long)puVar13 + 0x14);
          uVar15 = *puVar7;
          *(undefined4 *)((long)puVar13 + 0x14) = *(undefined4 *)((long)puVar12 - 4);
          *puVar20 = uVar15;
          *(undefined4 *)((long)puVar12 - 4) = uVar2;
          *puVar7 = uVar6;
        } while( true );
      }
      puVar7 = puVar19;
      goto LAB_013e05f8;
    }
    FUN_013e0ae0(param_1,(long)param_1 + 0xc,param_1 + 3,param_3);
    if ((ulong *)((long)param_1 + 0x24U) == param_2) {
      return;
    }
    lVar9 = 0;
    puVar20 = (ulong *)((long)param_1 + 0x24U);
    puVar19 = param_1 + 3;
    goto LAB_013e06ec;
  }
LAB_013e08c8:
  uVar15 = *param_1;
  iVar4 = iVar4 + 1;
  uVar6 = param_1[1];
  uVar10 = *puVar7;
  *(int *)(param_1 + 1) = (int)puVar7[1];
  *param_1 = uVar10;
  *(int *)(puVar7 + 1) = (int)uVar6;
  *puVar7 = uVar15;
LAB_013e05f8:
  puVar8 = (ulong *)((long)param_1 + 0xc);
  if (puVar8 < puVar7) {
    do {
      lVar9 = *(long *)*param_3 + 0x6c;
      if ((int)*puVar8 < 0x3d5) {
        uVar17 = *(ushort *)(lVar9 + (*puVar8 & 0xffffffff) * 0x58 + 0x7c);
      }
      else {
        uVar17 = 0;
      }
      puVar1 = (ushort *)(lVar9 + (*puVar20 & 0xffffffff) * 0x58 + 0x7c);
      iVar11 = (int)*puVar20;
      if (iVar11 < 0x3d5) {
        uVar18 = *puVar1;
      }
      else {
        uVar18 = 0;
      }
      puVar13 = (ulong *)((long)puVar8 + 0xc);
      if (uVar17 < uVar18) {
        do {
          puVar8 = puVar13;
          if ((int)*puVar8 < 0x3d5) {
            uVar17 = *(ushort *)(lVar9 + (*puVar8 & 0xffffffff) * 0x58 + 0x7c);
            if (0x3d4 < iVar11) goto LAB_013e0950;
LAB_013e0330:
            uVar18 = *puVar1;
          }
          else {
            uVar17 = 0;
            if (iVar11 < 0x3d5) goto LAB_013e0330;
LAB_013e0950:
            uVar18 = 0;
          }
          puVar13 = (ulong *)((long)puVar8 + 0xc);
        } while (uVar17 < uVar18);
      }
      puVar7 = (ulong *)((long)puVar7 - 0xc);
      if ((int)*puVar7 < 0x3d5) {
        uVar17 = *(ushort *)(lVar9 + (*puVar7 & 0xffffffff) * 0x58 + 0x7c);
      }
      else {
        uVar17 = 0;
      }
      if (iVar11 < 0x3d5) goto LAB_013e0368;
      do {
        do {
          puVar7 = (ulong *)((long)puVar7 - 0xc);
          if ((int)*puVar7 < 0x3d5) {
            uVar17 = *(ushort *)(lVar9 + (*puVar7 & 0xffffffff) * 0x58 + 0x7c);
          }
          else {
            uVar17 = 0;
          }
        } while (0x3d4 < iVar11);
LAB_013e0368:
      } while (*puVar1 <= uVar17);
      if (puVar7 < puVar8) break;
      uVar15 = *puVar8;
      iVar4 = iVar4 + 1;
      uVar6 = puVar8[1];
      uVar10 = *puVar7;
      *(int *)(puVar8 + 1) = (int)puVar7[1];
      *puVar8 = uVar10;
      *(int *)(puVar7 + 1) = (int)uVar6;
      *puVar7 = uVar15;
      puVar12 = puVar7;
      if (puVar20 != puVar8) {
        puVar12 = puVar20;
      }
      puVar20 = puVar12;
      puVar8 = puVar13;
    } while( true );
  }
  if (puVar8 != puVar20) {
    if ((int)*puVar20 < 0x3d5) {
      uVar17 = *(ushort *)(*(long *)*param_3 + (*puVar20 & 0xffffffff) * 0x58 + 0xe8);
    }
    else {
      uVar17 = 0;
    }
    if (((int)*puVar8 < 0x3d5) &&
       (uVar17 < *(ushort *)(*(long *)*param_3 + (*puVar8 & 0xffffffff) * 0x58 + 0xe8))) {
      uVar15 = *puVar8;
      iVar4 = iVar4 + 1;
      uVar6 = puVar8[1];
      uVar10 = *puVar20;
      *(int *)(puVar8 + 1) = (int)puVar20[1];
      *puVar8 = uVar10;
      *(int *)(puVar20 + 1) = (int)uVar6;
      *puVar20 = uVar15;
    }
  }
  if (iVar4 == 0) {
    uVar5 = FUN_013e1260(param_1,puVar8,param_3);
    uVar6 = FUN_013e1260((ulong *)((long)puVar8 + 0xcU),param_2,param_3);
    if ((uVar6 & 1) != 0) goto LAB_013e0998;
    puVar20 = (ulong *)((long)puVar8 + 0xcU);
    if ((uVar5 & 1) != 0) goto LAB_013e022c;
  }
  if (((long)param_2 - (long)puVar8 >> 2) * -0x5555555555555555 <=
      ((long)puVar8 - (long)param_1 >> 2) * -0x5555555555555555) {
    FUN_013e01e0((long)puVar8 + 0xc,param_2,param_3);
    param_2 = puVar8;
    goto LAB_013e0220;
  }
  FUN_013e01e0(param_1,puVar8,param_3);
  puVar20 = (ulong *)((long)puVar8 + 0xc);
  goto LAB_013e022c;
LAB_013e0998:
  param_2 = puVar8;
  if ((uVar5 & 1) != 0) {
    return;
  }
  goto LAB_013e0220;
LAB_013e06ec:
  puVar8 = puVar20;
  uVar6 = *puVar8;
  if ((int)uVar6 < 0x3d5) {
    uVar17 = *(ushort *)(*(long *)*param_3 + (uVar6 & 0xffffffff) * 0x58 + 0xe8);
  }
  else {
    uVar17 = 0;
  }
  if (((int)*puVar19 < 0x3d5) &&
     (uVar17 < *(ushort *)(*(long *)*param_3 + (*puVar19 & 0xffffffff) * 0x58 + 0xe8))) {
    uVar15 = puVar8[1];
    lVar3 = lVar9;
    do {
      lVar16 = lVar3;
      *(undefined8 *)((long)param_1 + lVar16 + 0x24) =
           *(undefined8 *)((long)param_1 + lVar16 + 0x18);
      *(undefined4 *)((long)param_1 + lVar16 + 0x2c) =
           *(undefined4 *)((long)param_1 + lVar16 + 0x20);
      if (lVar16 == -0x18) {
        puVar20 = param_1;
        goto LAB_013e0798;
      }
      uVar10 = *(ulong *)((long)param_1 + lVar16 + 0xc);
      iVar4 = (int)uVar10;
      if ((int)uVar6 < 0x3d5) {
        uVar17 = *(ushort *)(*(long *)*param_3 + (uVar6 & 0xffffffff) * 0x58 + 0xe8);
        if (0x3d4 < iVar4) goto LAB_013e090c;
LAB_013e0778:
        uVar18 = *(ushort *)(*(long *)*param_3 + (uVar10 & 0xffffffff) * 0x58 + 0xe8);
      }
      else {
        uVar17 = 0;
        if (iVar4 < 0x3d5) goto LAB_013e0778;
LAB_013e090c:
        uVar18 = 0;
      }
      lVar3 = lVar16 + -0xc;
    } while (uVar17 < uVar18);
    puVar20 = (ulong *)((long)param_1 + lVar16 + 0x18);
LAB_013e0798:
    *puVar20 = uVar6;
    *(int *)(puVar20 + 1) = (int)uVar15;
  }
  lVar9 = lVar9 + 0xc;
  puVar20 = (ulong *)((long)puVar8 + 0xcU);
  puVar19 = puVar8;
  if ((ulong *)((long)puVar8 + 0xcU) == param_2) {
switchD_013e0478_caseD_0:
    return;
  }
  goto LAB_013e06ec;
}


