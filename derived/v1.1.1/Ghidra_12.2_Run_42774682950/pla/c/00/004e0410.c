/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004e0410; name: FUN_004e0410
 */


undefined8 FUN_004e0410(long param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  int *piVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  uint uVar15;
  short *psVar16;
  ulong uVar17;
  
  lVar12 = *(long *)(param_1 + 0xa8);
  *(undefined8 *)(lVar12 + 0x2e0) = 0;
  *(undefined8 *)(lVar12 + 0x2d8) = 0;
  uVar1 = *(uint *)(*(long *)(*(int **)(param_1 + 8) + 0x30) + 0x60);
  if ((((uVar1 >> 3 & 1) == 0) && (iVar3 = **(int **)(param_1 + 8), 0x303 < iVar3)) &&
     (iVar3 != 0x10000)) {
    lVar13 = *(long *)(param_1 + 0x488);
    if (*(long *)(lVar13 + 0x1c0) != 0) {
      uVar17 = 0;
      iVar3 = -1;
      do {
        lVar12 = *(long *)(*(long *)(lVar13 + 0x1b8) + uVar17 * 8);
        iVar2 = *(int *)(lVar12 + 0xc);
        if (((((iVar2 != 0x40) && (iVar2 != 0x2a3)) &&
             ((*(int *)(lVar12 + 0x14) != 6 && (*(int *)(lVar12 + 0x14) != 0x74)))) &&
            ((iVar2 == 0 || (lVar13 = FUN_004bda40(*(undefined4 *)(lVar12 + 0x10)), lVar13 != 0))))
           && (iVar2 = FUN_004e0b90(param_1,lVar12,0xffffffff), iVar2 != 0)) {
          if (*(int *)(lVar12 + 0x14) == 0x390) {
            lVar13 = FUN_004235b0(*(undefined8 *)
                                   (*(long *)(param_1 + 0x488) +
                                    (long)*(int *)(lVar12 + 0x18) * 0x28 + 0x28));
            if (((lVar13 != 0) && (*(int *)(lVar12 + 0xc) != 0)) &&
               (lVar7 = FUN_004bda40(*(undefined4 *)(lVar12 + 0x10)), lVar7 != 0)) {
              iVar2 = FUN_00456840(lVar13);
              iVar4 = FUN_0041ccc0(lVar7);
              if (iVar4 * 2 + 2 <= iVar2) break;
            }
          }
          else {
            if (*(int *)(lVar12 + 0x14) != 0x198) break;
            if (iVar3 == -1) {
              FUN_004238d0(*(undefined8 *)(*(long *)(param_1 + 0x488) + 0xa0));
              FUN_0042d4f0();
              iVar3 = FUN_0042e3e0();
            }
            if ((*(int *)(lVar12 + 0x20) == 0) || (iVar3 == *(int *)(lVar12 + 0x20))) break;
          }
        }
        lVar13 = *(long *)(param_1 + 0x488);
        uVar17 = uVar17 + 1;
      } while (uVar17 < *(ulong *)(lVar13 + 0x1c0));
      if (uVar17 != *(ulong *)(*(long *)(param_1 + 0x488) + 0x1c0)) goto LAB_004e05ec;
    }
    if (param_2 == 0) {
      return 1;
    }
    uVar9 = 0x28;
    uVar10 = 0x76;
    uVar11 = 0xa59;
    goto LAB_004e0b58;
  }
  if ((*(byte *)(*(long *)(lVar12 + 0x238) + 0x20) & 0xab) == 0) {
    return 1;
  }
  if (*(int *)(param_1 + 0x38) == 0) {
    plVar14 = *(long **)(param_1 + 0x488);
    uVar15 = (int)((*plVar14 - (long)plVar14) + -0x20 >> 3) * -0x33333333;
    if (8 < uVar15) {
      return 1;
    }
    if (plVar14[(long)(int)uVar15 * 5 + 4] == 0) {
      return 1;
    }
    if (plVar14[(long)(int)uVar15 * 5 + 5] == 0) {
      return 1;
    }
  }
  if ((uVar1 >> 1 & 1) == 0) {
    lVar12 = FUN_004dc940(param_1,0xffffffff);
    if (lVar12 == 0) {
      if (param_2 == 0) {
        return 1;
      }
      uVar9 = 0x50;
      uVar10 = 0x44;
      uVar11 = 0xabe;
      goto LAB_004e0b58;
    }
    goto LAB_004e05ec;
  }
  if (*(long *)(lVar12 + 0x2e8) != 0) {
    plVar14 = *(long **)(param_1 + 0x488);
    if ((*(byte *)((long)plVar14 + 0x1e) & 3) == 0) {
      iVar3 = -1;
      if (plVar14[0x38] != 0) goto LAB_004e069c;
    }
    else {
      FUN_004238d0(plVar14[0x14]);
      FUN_0042d4f0();
      iVar3 = FUN_0042e3e0();
      plVar14 = *(long **)(param_1 + 0x488);
      if (plVar14[0x38] != 0) {
LAB_004e069c:
        if (iVar3 != -1) {
          uVar17 = 0;
          lVar12 = *(long *)plVar14[0x37];
          if (*(int *)(param_1 + 0x38) != 0) goto LAB_004e06f4;
LAB_004e0758:
          iVar2 = (int)((*plVar14 - (long)plVar14) - 0x20U >> 3) * -0x33333333;
          iVar4 = *(int *)(lVar12 + 0x18);
          if (*(int *)(lVar12 + 0x18) != iVar2) goto LAB_004e06d0;
          do {
            iVar5 = FUN_004e0b90(param_1,lVar12,iVar2);
            iVar4 = iVar2;
            if (iVar5 != 0) {
              if (*(int *)(lVar12 + 0x14) == 0x390) {
                lVar13 = FUN_004235b0(*(undefined8 *)
                                       (*(long *)(param_1 + 0x488) + (long)iVar2 * 0x28 + 0x28));
                if (((lVar13 != 0) && (*(int *)(lVar12 + 0xc) != 0)) &&
                   (lVar7 = FUN_004bda40(*(undefined4 *)(lVar12 + 0x10)), lVar7 != 0)) {
                  iVar5 = FUN_00456840(lVar13);
                  iVar6 = FUN_0041ccc0(lVar7);
                  if (iVar6 * 2 + 2 <= iVar5) goto LAB_004e07f4;
                }
              }
              else {
LAB_004e07f4:
                if (*(int *)(lVar12 + 0x20) == iVar3) {
                  plVar14 = *(long **)(param_1 + 0x488);
                  if (uVar17 != plVar14[0x38]) goto LAB_004e08ac;
                  goto LAB_004e0b3c;
                }
              }
            }
LAB_004e06d0:
            do {
              while( true ) {
                iVar2 = iVar4;
                plVar14 = *(long **)(param_1 + 0x488);
                uVar17 = uVar17 + 1;
                if ((ulong)plVar14[0x38] <= uVar17) goto LAB_004e0b2c;
                lVar12 = *(long *)(plVar14[0x37] + uVar17 * 8);
                if (*(int *)(param_1 + 0x38) == 0) goto LAB_004e0758;
LAB_004e06f4:
                iVar2 = *(int *)(lVar12 + 0x18);
                piVar8 = (int *)FUN_004e31d0((long)iVar2);
                if (piVar8 != (int *)0x0) break;
LAB_004e06cc:
                iVar4 = -1;
              }
              lVar13 = *(long *)(*(long *)(param_1 + 0xa8) + 0x238);
              if ((*(uint *)(lVar13 + 0x20) & piVar8[1]) == 0) goto LAB_004e06cc;
            } while (((*piVar8 == 0x390) && (iVar4 = -1, (*(byte *)(lVar13 + 0x1c) & 1) != 0)) ||
                    (iVar4 = -1,
                    iVar2 == -1 ||
                    (*(uint *)(*(long *)(param_1 + 0xa8) + (long)iVar2 * 4 + 0x310) & 1) == 0));
          } while( true );
        }
        uVar17 = 0;
        lVar12 = *(long *)plVar14[0x37];
        if (*(int *)(param_1 + 0x38) != 0) goto LAB_004e0908;
LAB_004e096c:
        iVar2 = (int)((*plVar14 - (long)plVar14) - 0x20U >> 3) * -0x33333333;
        iVar3 = *(int *)(lVar12 + 0x18);
        if (*(int *)(lVar12 + 0x18) != iVar2) goto LAB_004e08e4;
        do {
          iVar4 = FUN_004e0b90(param_1,lVar12,iVar2);
          iVar3 = iVar2;
          if (iVar4 != 0) {
            if (*(int *)(lVar12 + 0x14) != 0x390) {
              plVar14 = *(long **)(param_1 + 0x488);
              if (uVar17 == plVar14[0x38]) goto LAB_004e0b3c;
              goto LAB_004e08ac;
            }
            lVar13 = FUN_004235b0(*(undefined8 *)
                                   (*(long *)(param_1 + 0x488) + (long)iVar2 * 0x28 + 0x28));
            if (((lVar13 != 0) && (*(int *)(lVar12 + 0xc) != 0)) &&
               (lVar7 = FUN_004bda40(*(undefined4 *)(lVar12 + 0x10)), lVar7 != 0)) {
              iVar4 = FUN_00456840(lVar13);
              iVar5 = FUN_0041ccc0(lVar7);
              if (iVar5 * 2 + 2 <= iVar4) goto LAB_004e0b2c;
            }
          }
LAB_004e08e4:
          do {
            while( true ) {
              iVar2 = iVar3;
              plVar14 = *(long **)(param_1 + 0x488);
              uVar17 = uVar17 + 1;
              if ((ulong)plVar14[0x38] <= uVar17) goto LAB_004e0b2c;
              lVar12 = *(long *)(plVar14[0x37] + uVar17 * 8);
              if (*(int *)(param_1 + 0x38) == 0) goto LAB_004e096c;
LAB_004e0908:
              iVar2 = *(int *)(lVar12 + 0x18);
              piVar8 = (int *)FUN_004e31d0((long)iVar2);
              if (piVar8 != (int *)0x0) break;
LAB_004e08e0:
              iVar3 = -1;
            }
            lVar13 = *(long *)(*(long *)(param_1 + 0xa8) + 0x238);
            if ((*(uint *)(lVar13 + 0x20) & piVar8[1]) == 0) goto LAB_004e08e0;
          } while (((*piVar8 == 0x390) && (iVar3 = -1, (*(byte *)(lVar13 + 0x1c) & 1) != 0)) ||
                  (iVar3 = -1,
                  iVar2 == -1 ||
                  (*(uint *)(*(long *)(param_1 + 0xa8) + (long)iVar2 * 4 + 0x310) & 1) == 0));
        } while( true );
      }
    }
    lVar12 = 0;
    iVar2 = -1;
    plVar14 = *(long **)(param_1 + 0x488);
    if (plVar14[0x38] != 0) goto LAB_004e08ac;
    goto LAB_004e0b3c;
  }
  lVar12 = FUN_004dc940(param_1,0xffffffff);
  if (lVar12 == 0) {
    if (param_2 == 0) {
      return 1;
    }
    uVar9 = 0x50;
    uVar10 = 0x44;
    uVar11 = 0xaa5;
    goto LAB_004e0b58;
  }
  lVar13 = *(long *)(param_1 + 0x488);
  uVar1 = *(uint *)(lVar13 + 0x1c) & 0x30000;
  if (uVar1 == 0x30000) {
    lVar13 = 2;
    psVar16 = &DAT_03a280da;
LAB_004e0abc:
    lVar7 = 0;
    if (*(short *)(lVar12 + 8) == *psVar16) goto LAB_004e0aec;
    do {
      do {
        lVar7 = lVar7 + 1;
        if (lVar13 == lVar7) goto LAB_004e0b08;
      } while (*(short *)(lVar12 + 8) != psVar16[lVar7]);
LAB_004e0aec:
      iVar3 = FUN_004e0b90(param_1,lVar12,*(undefined4 *)(lVar12 + 0x18));
    } while (iVar3 == 0);
    if (lVar7 != lVar13) goto LAB_004e05ec;
  }
  else {
    if (uVar1 == 0x20000) {
      lVar13 = 1;
      psVar16 = &DAT_03a280dc;
      goto LAB_004e0abc;
    }
    if (uVar1 == 0x10000) {
      lVar13 = 1;
      psVar16 = &DAT_03a280da;
      goto LAB_004e0abc;
    }
    if ((*(int *)(param_1 + 0x38) != 1) ||
       (psVar16 = *(short **)(lVar13 + 0x1a8), psVar16 == (short *)0x0)) {
      psVar16 = *(short **)(lVar13 + 0x198);
      if (psVar16 == (short *)0x0) {
        lVar13 = 0x1a;
        psVar16 = &DAT_03a280de;
      }
      else {
        lVar13 = *(long *)(lVar13 + 0x1a0);
        if (lVar13 == 0) goto LAB_004e0b08;
      }
      goto LAB_004e0abc;
    }
    lVar13 = *(long *)(lVar13 + 0x1b0);
    if (lVar13 != 0) goto LAB_004e0abc;
  }
LAB_004e0b08:
  if (param_2 == 0) {
    return 1;
  }
  uVar9 = 0x2f;
  uVar10 = 0x172;
  uVar11 = 0xab5;
LAB_004e0b58:
  FUN_004c99a0(param_1,uVar9,0x201,uVar10,"external/openssl/ssl/t1_lib.c",uVar11);
  return 0;
LAB_004e0b2c:
  plVar14 = *(long **)(param_1 + 0x488);
  if (uVar17 == plVar14[0x38]) {
LAB_004e0b3c:
    if (param_2 == 0) {
      return 1;
    }
    uVar9 = 0x28;
    uVar10 = 0x76;
    uVar11 = 0xa97;
    goto LAB_004e0b58;
  }
LAB_004e08ac:
  if (iVar2 != -1) goto LAB_004e05f4;
LAB_004e05ec:
  iVar2 = *(int *)(lVar12 + 0x18);
  plVar14 = *(long **)(param_1 + 0x488);
LAB_004e05f4:
  lVar13 = *(long *)(param_1 + 0xa8);
  *(long **)(lVar13 + 0x2e0) = plVar14 + (long)iVar2 * 5 + 4;
  *plVar14 = (long)(plVar14 + (long)iVar2 * 5 + 4);
  *(long *)(lVar13 + 0x2d8) = lVar12;
  return 1;
}


