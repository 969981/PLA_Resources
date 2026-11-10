/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f15a38; name: FUN_02f15a38
 */


void FUN_02f15a38(void)

{
  bool bVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  undefined4 uVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  int iVar13;
  int *piVar14;
  int *piVar15;
  long lVar16;
  long lVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  
  uVar9 = (ulong)DAT_0440ae38;
  if (DAT_0440ae38 != 0) {
    plVar10 = DAT_0440ae30;
    plVar3 = DAT_0440ae30;
    do {
      if (*(int *)(*plVar3 + 0x140) == 1) {
        FUN_02f2d7b0();
        uVar9 = (ulong)DAT_0440ae38;
        plVar10 = DAT_0440ae30;
      }
      plVar3 = plVar3 + 1;
    } while (plVar3 != plVar10 + uVar9);
  }
  lVar12 = DAT_0440ae58;
  do {
    if (lVar12 == 0) {
      lVar17 = 0;
    }
    else {
      uVar9 = FUN_02f2547c(*(undefined8 *)(lVar12 + 400));
      if ((uVar9 & 1) == 0) {
        if (*(long *)(lVar12 + 0x48) == 0) {
          lVar17 = 0;
        }
        else {
          *(undefined8 *)(*(long *)(lVar12 + 0x48) + 0x198) = *(undefined8 *)(lVar12 + 0x198);
          lVar17 = *(long *)(lVar12 + 0x48);
        }
        plVar3 = &DAT_0440ae58;
        if (DAT_0440ae58 != lVar12) {
          plVar3 = (long *)&DAT_00000048;
        }
        *plVar3 = lVar17;
        *(undefined8 *)(lVar12 + 0x198) = 0;
        *(undefined8 *)(lVar12 + 0x48) = 0;
        lVar6 = 0;
      }
      else {
        lVar17 = *(long *)(lVar12 + 0x48);
        lVar6 = lVar12;
      }
      if (lVar17 != 0) {
        uVar9 = FUN_02f2547c(*(undefined8 *)(lVar17 + 400));
        if ((uVar9 & 1) == 0) {
          if (*(long *)(lVar17 + 0x48) == 0) {
            lVar16 = 0;
          }
          else {
            *(undefined8 *)(*(long *)(lVar17 + 0x48) + 0x198) = *(undefined8 *)(lVar17 + 0x198);
            lVar16 = *(long *)(lVar17 + 0x48);
          }
          plVar3 = &DAT_0440ae58;
          if (DAT_0440ae58 != lVar17) {
            plVar3 = (long *)(lVar6 + 0x48);
          }
          *plVar3 = lVar16;
          *(undefined8 *)(lVar17 + 0x198) = 0;
          *(undefined8 *)(lVar17 + 0x48) = 0;
        }
        else {
          lVar6 = lVar17;
          lVar16 = *(long *)(lVar17 + 0x48);
        }
        while (lVar16 != 0) {
          uVar9 = FUN_02f2547c(*(undefined8 *)(lVar16 + 400));
          if ((uVar9 & 1) == 0) {
            lVar17 = 0;
            if (*(long *)(lVar16 + 0x48) != 0) {
              *(undefined8 *)(*(long *)(lVar16 + 0x48) + 0x198) = *(undefined8 *)(lVar16 + 0x198);
              lVar17 = *(long *)(lVar16 + 0x48);
            }
            plVar3 = &DAT_0440ae58;
            if (DAT_0440ae58 != lVar16) {
              plVar3 = (long *)(lVar6 + 0x48);
            }
            *plVar3 = lVar17;
            *(undefined8 *)(lVar16 + 0x198) = 0;
            *(undefined8 *)(lVar16 + 0x48) = 0;
            lVar16 = lVar17;
          }
          else {
            lVar6 = lVar16;
            lVar16 = *(long *)(lVar16 + 0x48);
          }
        }
      }
      lVar17 = DAT_0440ae58;
    }
    bVar1 = lVar12 != lVar17;
    lVar12 = lVar17;
  } while (bVar1);
  FUN_02f16088();
  if (DAT_0440ae08 != 0) {
    uVar9 = 0;
    do {
      lVar12 = *(long *)(DAT_0440ae00 + uVar9 * 8);
      if ((*(byte *)(lVar12 + 0x33c) & 3) == 1) {
        plVar3 = *(long **)(lVar12 + 8);
        if (plVar3 == (long *)0x0) goto LAB_02f15c7c;
LAB_02f15b8c:
        if ((*(ushort *)(plVar3 + 0x30) & 1) == 0) {
          (**(code **)(*plVar3 + 0x50))(plVar3,0);
        }
        else if ((*(ushort *)(plVar3 + 0x30) >> 4 & 1) != 0) {
          (**(code **)(*plVar3 + 0x58))();
        }
        lVar17 = *(long *)(lVar12 + 8);
        fVar18 = 0.0;
        if (-37.0 <= *(float *)(lVar17 + 0x60) * 0.05) {
          uVar7 = (uint)(*(float *)(lVar17 + 0x60) * 1393317.6 + 1.0653532e+09);
          fVar18 = (float)(uVar7 & 0x7fffff | 0x3f800000);
          fVar18 = (fVar18 * (fVar18 * 0.32518977 + 0.020805772) + 0.65304345) *
                   (float)(uVar7 & 0xff800000);
        }
        *(float *)(lVar12 + 0x10) = *(float *)(lVar17 + 200) * fVar18;
        if (((*(byte *)(lVar17 + 0x10c) >> 3 & 1) != 0) &&
           (iVar2 = FUN_02e9d1a0(lVar17), iVar2 != 0)) {
          FUN_02e73cd0(lVar17,lVar17 + 0x140);
        }
        if ((*(long *)(lVar12 + 8) == 0) || (*(long *)(lVar12 + 0x28) == 0)) goto LAB_02f15c84;
        FUN_02f24a00(lVar12,0);
      }
      else {
        uVar8 = 0xf;
        if ((*(byte *)(lVar12 + 0x33c) & 1) != 0) {
          uVar8 = 0;
        }
        FUN_02f29158(lVar12,uVar8);
        plVar3 = *(long **)(lVar12 + 8);
        if (plVar3 != (long *)0x0) goto LAB_02f15b8c;
LAB_02f15c7c:
        *(undefined4 *)(lVar12 + 0x10) = 0x3f800000;
LAB_02f15c84:
        fVar18 = (float)(*(uint *)(lVar12 + 0x10) & 0x7fffff | 0x3f800000);
        fVar19 = fVar18 + 1.0;
        *(float *)(lVar12 + 0x14) =
             ((float)(*(uint *)(lVar12 + 0x10) >> 0x17 & 0xff) * 0.30103 + -38.230812 +
             (fVar18 * fVar18 * fVar18 * 1.1581186 + -1.1581186) / (fVar19 * fVar19 * fVar19)) *
             20.0;
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < DAT_0440ae08);
  }
  FUN_02f16088();
  uVar9 = (ulong)DAT_0440ae38;
  uVar7 = DAT_0440ae08;
  if (DAT_0440ae38 != 0) {
    plVar10 = DAT_0440ae30;
    plVar3 = DAT_0440ae30;
    do {
      if (*(int *)(*plVar3 + 0x140) == 1) {
        FUN_02f24a00(*plVar3,1);
        uVar9 = (ulong)DAT_0440ae38;
        plVar10 = DAT_0440ae30;
      }
      plVar3 = plVar3 + 1;
      uVar7 = DAT_0440ae08;
    } while (plVar3 != plVar10 + uVar9);
  }
  while (uVar7 = uVar7 - 1, -1 < (int)uVar7) {
    while ((*(byte *)(*(long *)(DAT_0440ae00 + (ulong)uVar7 * 8) + 0x34c) >> 2 & 1) != 0) {
      FUN_02f16454();
      uVar7 = uVar7 - 1;
      if ((int)uVar7 < 0) goto LAB_02f15d90;
    }
  }
LAB_02f15d90:
  fVar18 = DAT_042ac98c;
  plVar3 = DAT_0440ae30;
  if (DAT_0440ae50 != 0) {
    fVar18 = -3.4028235e+38;
    piVar14 = DAT_0440ae48 + 6;
    iVar2 = *DAT_0440ae48;
    do {
      piVar15 = piVar14;
      iVar13 = iVar2;
      while( true ) {
        fVar19 = (float)piVar15[-2];
        FUN_02f1693c(fVar19,iVar13,*(undefined8 *)(piVar15 + -4));
        if (fVar18 <= fVar19) {
          fVar18 = fVar19;
        }
        if (piVar15 == DAT_0440ae48 + (ulong)DAT_0440ae50 * 6) {
          FUN_02f1693c(fVar18,iVar13,0xffffffffffffffff);
          fVar18 = DAT_042ac98c;
          plVar3 = DAT_0440ae30;
          goto joined_r0x02f15da0;
        }
        piVar14 = piVar15 + 6;
        iVar2 = *piVar15;
        if (iVar13 == iVar2) break;
        FUN_02f1693c(fVar18,iVar13,0xffffffffffffffff);
        fVar18 = -3.4028235e+38;
        iVar13 = *piVar15;
        piVar15 = piVar14;
      }
    } while( true );
  }
joined_r0x02f15da0:
  DAT_0440ae50 = 0;
  DAT_042ac98c = fVar18;
  DAT_0440ae30 = plVar3;
  if (DAT_0440ae38 != 0) {
    DAT_0440ae50 = 0;
    plVar10 = plVar3 + DAT_0440ae38;
    do {
      lVar12 = *plVar3;
      if ((*(int *)(lVar12 + 0x140) == 1) && (uVar7 = *(uint *)(lVar12 + 0x48), uVar7 != 0)) {
        plVar4 = *(long **)(lVar12 + 0x40);
        plVar11 = plVar4;
        do {
          lVar17 = *plVar11;
          fVar19 = *(float *)(lVar17 + 0x358);
          if (*(float *)(lVar17 + 0x358) <= *(float *)(plVar11 + 1)) {
            fVar19 = *(float *)(plVar11 + 1);
          }
          fVar19 = *(float *)(lVar17 + 0x14) - fVar19;
          fVar20 = 0.0;
          if (-37.0 <= fVar19 * 0.05) {
            uVar5 = (uint)(fVar19 * 1393317.6 + 1.0653532e+09);
            fVar20 = (float)(uVar5 & 0x7fffff | 0x3f800000);
            fVar20 = (fVar20 * (fVar20 * 0.32518977 + 0.020805772) + 0.65304345) *
                     (float)(uVar5 & 0xff800000);
          }
          lVar6 = *(long *)(lVar12 + 0x28);
          if (lVar6 != 0) {
            do {
              if (*(long *)(lVar6 + 0x60) == lVar17) {
                *(float *)(lVar6 + 0x158) = *(float *)(lVar6 + 0x158) * fVar20;
                fVar21 = *(float *)(lVar6 + 0x15c) + fVar19;
                *(byte *)(lVar6 + 0x168) = *(byte *)(lVar6 + 0x168) & 0xfe | fVar21 <= fVar18;
                *(float *)(lVar6 + 0x15c) = fVar21;
              }
              lVar6 = *(long *)(lVar6 + 0x48);
            } while (lVar6 != 0);
            plVar4 = *(long **)(lVar12 + 0x40);
            uVar7 = *(uint *)(lVar12 + 0x48);
          }
          plVar11 = plVar11 + 2;
        } while (plVar11 != plVar4 + (ulong)uVar7 * 2);
      }
      plVar3 = plVar3 + 1;
    } while (plVar3 != plVar10);
  }
  return;
}


