/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004c1170; name: FUN_004c1170
 */


long FUN_004c1170(int *param_1,long param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  byte bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  int *piVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  
  lVar10 = FUN_0044f850();
  if ((*(byte *)(*(long *)(param_1 + 0x122) + 0x1e) & 3) == 0) {
    if (((uint)param_1[0x173] >> 0x16 & 1) != 0) {
      if ((((((uint)param_1[0x173] >> 0x15 & 1) != 0) && (iVar7 = FUN_00407950(param_2), 0 < iVar7))
          && (lVar13 = FUN_00407970(param_2,0), *(int *)(lVar13 + 0x24) == 0x80000)) &&
         (iVar7 = FUN_00407950(param_3), 0 < iVar7)) {
        iVar8 = 0;
LAB_004c14fc:
        lVar13 = FUN_00407970(param_3,iVar8);
        if (*(int *)(lVar13 + 0x24) != 0x80000) goto code_r0x004c1514;
        lVar14 = FUN_00407210(0,iVar7);
        if (lVar14 != 0) {
          FUN_00407800(lVar14,lVar13);
          iVar8 = iVar8 + 1;
          if (iVar8 < iVar7) {
            do {
              lVar13 = FUN_00407970(param_3,iVar8);
              if (*(int *)(lVar13 + 0x24) == 0x80000) {
                FUN_00407800(lVar14,lVar13);
              }
              iVar8 = iVar8 + 1;
            } while (iVar7 != iVar8);
          }
          iVar8 = 0;
          do {
            lVar13 = FUN_00407970(param_3,iVar8);
            if (*(int *)(lVar13 + 0x24) != 0x80000) {
              FUN_00407800(lVar14,lVar13);
            }
            iVar8 = iVar8 + 1;
          } while (iVar7 != iVar8);
          piVar12 = *(int **)(param_1 + 2);
          bVar3 = *(byte *)(*(long *)(piVar12 + 0x30) + 0x60);
          lVar13 = lVar14;
          goto joined_r0x004c15dc;
        }
        goto LAB_004c11b4;
      }
      goto LAB_004c11b0;
    }
    lVar14 = 0;
    piVar12 = *(int **)(param_1 + 2);
    bVar3 = *(byte *)(*(long *)(piVar12 + 0x30) + 0x60);
    lVar13 = param_2;
    param_2 = param_3;
joined_r0x004c15dc:
    param_3 = lVar13;
    if ((bVar3 >> 3 & 1) == 0) goto LAB_004c11c8;
LAB_004c12a8:
    FUN_004dff80(param_1);
    FUN_004c48e0(param_1);
  }
  else {
LAB_004c11b0:
    lVar14 = 0;
LAB_004c11b4:
    piVar12 = *(int **)(param_1 + 2);
    if ((*(byte *)(*(long *)(piVar12 + 0x30) + 0x60) >> 3 & 1) != 0) goto LAB_004c12a8;
LAB_004c11c8:
    if ((*piVar12 < 0x304) || (*piVar12 == 0x10000)) goto LAB_004c12a8;
    if ((((((*(long *)(param_1 + 0x160) != 0) &&
           ((lVar13 = *(long *)(param_1 + 0x122), *(long *)(lVar13 + 0x20) == 0 ||
            (*(long *)(lVar13 + 0x28) == 0)))) &&
          ((*(long *)(lVar13 + 0x48) == 0 || (*(long *)(lVar13 + 0x50) == 0)))) &&
         ((((*(long *)(lVar13 + 0x70) == 0 || (*(long *)(lVar13 + 0x78) == 0)) &&
           ((*(long *)(lVar13 + 0x98) == 0 || (*(long *)(lVar13 + 0xa0) == 0)))) &&
          ((*(long *)(lVar13 + 0xc0) == 0 || (*(long *)(lVar13 + 200) == 0)))))) &&
        ((*(long *)(lVar13 + 0xe8) == 0 || (*(long *)(lVar13 + 0xf0) == 0)))) &&
       ((((*(long *)(lVar13 + 0x110) == 0 || (*(long *)(lVar13 + 0x118) == 0)) &&
         ((*(long *)(lVar13 + 0x138) == 0 || (*(long *)(lVar13 + 0x140) == 0)))) &&
        ((*(long *)(lVar13 + 0x160) == 0 || (*(long *)(lVar13 + 0x168) == 0)))))) {
      bVar4 = true;
      goto LAB_004c12bc;
    }
  }
  bVar4 = false;
LAB_004c12bc:
  iVar7 = FUN_00407950(param_3);
  if (iVar7 < 1) {
    lVar13 = 0;
  }
  else {
    lVar16 = 0;
    uVar15 = 0;
    uVar17 = 0;
    iVar7 = 0;
    do {
      lVar13 = FUN_00407970(param_3,iVar7);
      iVar8 = *param_1;
      if ((*(byte *)(*(long *)(*(int **)(param_1 + 2) + 0x30) + 0x60) >> 3 & 1) == 0) {
        if ((*(int *)(lVar13 + 0x2c) <= iVar8) && (iVar8 <= *(int *)(lVar13 + 0x30))) {
          iVar8 = **(int **)(param_1 + 2);
          if ((iVar8 < 0x304) || (iVar8 == 0x10000)) goto LAB_004c1384;
          goto LAB_004c13d0;
        }
      }
      else {
        iVar9 = 0xff00;
        if (iVar8 != 0x100) {
          iVar9 = iVar8;
        }
        iVar8 = 0xff00;
        if (*(int *)(lVar13 + 0x34) != 0x100) {
          iVar8 = *(int *)(lVar13 + 0x34);
        }
        if (iVar9 <= iVar8) {
          iVar8 = 0xff00;
          if (*(int *)(lVar13 + 0x38) != 0x100) {
            iVar8 = *(int *)(lVar13 + 0x38);
          }
          if (iVar8 <= iVar9) {
LAB_004c1384:
            uVar2 = *(uint *)(lVar13 + 0x1c);
            uVar17 = (ulong)uVar2;
            uVar15 = (ulong)*(uint *)(lVar13 + 0x20);
            if (((uVar2 & 0x1c8) == 0) || (*(long *)(param_1 + 0x160) != 0)) {
              bVar5 = ((*(ulong *)(param_1 + 0x1fa) & 0x20 |
                       (ulong)*(uint *)(*(long *)(param_1 + 0x2a) + 0x334)) & uVar17) != 0;
              bVar6 = (((ulong)*(uint *)(*(long *)(param_1 + 0x2a) + 0x338) |
                       (*(ulong *)(param_1 + 0x1fa) & 0x20) << 1) & uVar15) != 0;
              if ((uVar2 >> 2 & 1) == 0) {
                if (bVar5 && bVar6) goto LAB_004c13d0;
              }
              else if ((bVar5 && bVar6) &&
                      (iVar8 = FUN_004dc830(param_1,*(undefined4 *)(lVar13 + 0x18)), iVar8 != 0)) {
LAB_004c13d0:
                iVar8 = FUN_00407710(param_2,lVar13);
                if (-1 < iVar8) {
                  iVar9 = FUN_004e2fc0(param_1,0x10002,*(undefined4 *)(lVar13 + 0x44),0,lVar13);
                  if (iVar9 != 0) {
                    if (((((uint)uVar17 >> 2 & 1) == 0) || (((uint)uVar15 >> 3 & 1) == 0)) ||
                       (*(char *)(*(long *)(param_1 + 0x2a) + 0x404) == '\0')) {
                      lVar13 = FUN_00407970(param_2,iVar8);
                      if (!bVar4) break;
                      lVar11 = FUN_004bda40(*(undefined4 *)(lVar13 + 0x40));
                      lVar1 = lVar13;
                      if (lVar11 != lVar10 && lVar16 != 0) {
                        lVar1 = lVar16;
                      }
                      lVar16 = lVar1;
                      if (lVar11 == lVar10) break;
                    }
                    else if (lVar16 == 0) {
                      lVar16 = FUN_00407970(param_2,iVar8);
                    }
                  }
                }
              }
            }
          }
        }
      }
      iVar7 = iVar7 + 1;
      iVar8 = FUN_00407950(param_3);
      lVar13 = lVar16;
    } while (iVar7 < iVar8);
  }
  FUN_00407010(lVar14);
  return lVar13;
code_r0x004c1514:
  iVar8 = iVar8 + 1;
  if (iVar7 == iVar8) goto LAB_004c11b0;
  goto LAB_004c14fc;
}


