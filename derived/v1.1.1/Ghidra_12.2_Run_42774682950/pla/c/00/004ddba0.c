/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004ddba0; name: FUN_004ddba0
 */


undefined8 FUN_004ddba0(long param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  short *psVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  short *psVar11;
  short *psVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  short *psVar17;
  undefined8 *puVar18;
  long local_68;
  
  lVar16 = *(long *)(param_1 + 0x488);
  lVar15 = *(long *)(param_1 + 0xa8);
  uVar1 = *(uint *)(lVar16 + 0x1c) & 0x30000;
  FUN_00400420(*(undefined8 *)(lVar16 + 0x1b8),"external/openssl/ssl/t1_lib.c",0x6bf);
  *(undefined8 *)(lVar16 + 0x1b8) = 0;
  *(undefined8 *)(lVar16 + 0x1c0) = 0;
  if ((*(int *)(param_1 + 0x38) == 0) &&
     (psVar7 = *(short **)(lVar16 + 0x1a8), uVar1 == 0 && psVar7 != (short *)0x0)) {
    lVar9 = *(long *)(lVar16 + 0x1b0);
  }
  else {
    psVar7 = *(short **)(lVar16 + 0x198);
    if (uVar1 == 0 && psVar7 != (short *)0x0) {
      lVar9 = *(long *)(lVar16 + 0x1a0);
    }
    else {
      lVar9 = *(long *)(param_1 + 0x488);
      uVar2 = *(uint *)(lVar9 + 0x1c) & 0x30000;
      if (uVar2 == 0x30000) {
        lVar9 = 2;
        psVar7 = &DAT_03a280da;
      }
      else if (uVar2 == 0x20000) {
        lVar9 = 1;
        psVar7 = &DAT_03a280dc;
      }
      else if (uVar2 == 0x10000) {
        lVar9 = 1;
        psVar7 = &DAT_03a280da;
      }
      else if ((*(int *)(param_1 + 0x38) == 0) &&
              (psVar7 = *(short **)(lVar9 + 0x1a8), psVar7 != (short *)0x0)) {
        lVar9 = *(long *)(lVar9 + 0x1b0);
      }
      else {
        psVar7 = *(short **)(lVar9 + 0x198);
        if (psVar7 == (short *)0x0) {
          lVar9 = 0x1a;
          psVar7 = &DAT_03a280de;
        }
        else {
          lVar9 = *(long *)(lVar9 + 0x1a0);
        }
      }
    }
  }
  psVar12 = *(short **)(*(long *)(param_1 + 0xa8) + 0x2e8);
  lVar10 = *(long *)(*(long *)(param_1 + 0xa8) + 0x2f8);
  psVar17 = psVar12;
  lVar3 = lVar9;
  if ((*(uint *)(param_1 + 0x5cc) & 0x400000) != 0 || uVar1 != 0) {
    psVar17 = psVar7;
    lVar3 = lVar10;
    lVar10 = lVar9;
    psVar7 = psVar12;
  }
  if (lVar10 != 0) {
    if (lVar3 == 0) {
      do {
        uVar5 = FUN_004dcbd0(*psVar17);
        FUN_004de470(param_1,0x5000c,uVar5);
        lVar10 = lVar10 + -1;
        psVar17 = psVar17 + 1;
      } while (lVar10 != 0);
    }
    else {
      lVar9 = 0;
      lVar14 = 0;
      psVar12 = psVar17;
      do {
        uVar5 = FUN_004dcbd0(*psVar12);
        iVar4 = FUN_004de470(param_1,0x5000c,uVar5);
        if (iVar4 != 0) {
          lVar8 = lVar3;
          psVar11 = psVar7;
          do {
            if (*psVar12 == *psVar11) {
              lVar9 = lVar9 + 1;
              break;
            }
            psVar11 = psVar11 + 1;
            lVar8 = lVar8 + -1;
          } while (lVar8 != 0);
        }
        lVar14 = lVar14 + 1;
        psVar12 = psVar12 + 1;
      } while (lVar14 != lVar10);
      if (lVar9 != 0) {
        puVar6 = (undefined8 *)FUN_00400260(lVar9 << 3,"external/openssl/ssl/t1_lib.c",0x6d8);
        if (puVar6 == (undefined8 *)0x0) {
          FUN_004014b0(0x14,0x277,0x41,"external/openssl/ssl/t1_lib.c",0x6d9);
          return 0;
        }
        lVar9 = 0;
        local_68 = 0;
        puVar18 = puVar6;
        do {
          uVar5 = FUN_004dcbd0(*psVar17);
          iVar4 = FUN_004de470(param_1,0x5000c,uVar5);
          if (iVar4 != 0) {
            lVar14 = lVar3;
            psVar12 = psVar7;
            do {
              if (*psVar17 == *psVar12) {
                local_68 = local_68 + 1;
                if (puVar18 != (undefined8 *)0x0) {
                  *puVar18 = uVar5;
                  puVar18 = puVar18 + 1;
                }
                break;
              }
              psVar12 = psVar12 + 1;
              lVar14 = lVar14 + -1;
            } while (lVar14 != 0);
          }
          lVar9 = lVar9 + 1;
          psVar17 = psVar17 + 1;
        } while (lVar9 != lVar10);
        goto LAB_004dde14;
      }
    }
  }
  local_68 = 0;
  puVar6 = (undefined8 *)0x0;
LAB_004dde14:
  *(undefined8 **)(lVar16 + 0x1b8) = puVar6;
  *(long *)(lVar16 + 0x1c0) = local_68;
  *(undefined4 *)(lVar15 + 0x330) = 0;
  *(undefined8 *)(lVar15 + 0x318) = 0;
  *(undefined8 *)(lVar15 + 0x310) = 0;
  *(undefined8 *)(lVar15 + 0x328) = 0;
  *(undefined8 *)(lVar15 + 800) = 0;
  if (*(long *)(lVar16 + 0x1c0) != 0) {
    uVar13 = 0;
    do {
      while( true ) {
        lVar9 = *(long *)(*(long *)(lVar16 + 0x1b8) + uVar13 * 8);
        if ((((((*(byte *)(*(long *)(*(int **)(param_1 + 8) + 0x30) + 0x60) >> 3 & 1) != 0) ||
              (iVar4 = **(int **)(param_1 + 8), iVar4 < 0x304)) || (iVar4 == 0x10000)) ||
            (*(int *)(lVar9 + 0x14) != 6)) &&
           ((lVar9 = lVar15 + (long)*(int *)(lVar9 + 0x18) * 4, *(int *)(lVar9 + 0x310) == 0 &&
            (iVar4 = FUN_004bf8e0(), iVar4 == 0)))) break;
        uVar13 = uVar13 + 1;
        if (*(ulong *)(lVar16 + 0x1c0) <= uVar13) {
          return 1;
        }
      }
      *(undefined4 *)(lVar9 + 0x310) = 0x102;
      uVar13 = uVar13 + 1;
    } while (uVar13 < *(ulong *)(lVar16 + 0x1c0));
  }
  return 1;
}


