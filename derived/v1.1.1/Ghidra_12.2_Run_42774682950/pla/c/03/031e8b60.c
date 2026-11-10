/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031e8b60; name: FUN_031e8b60
 */


void FUN_031e8b60(long param_1,int *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  undefined8 *puVar13;
  int *piVar14;
  long lVar15;
  int iVar16;
  long lVar17;
  int *piVar18;
  ulong uVar19;
  long lVar20;
  float fVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  float fVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  float fVar27;
  float fVar28;
  int *local_70;
  undefined8 local_68;
  
  iVar7 = *(int *)(param_1 + 0x98);
  if (0 < iVar7) {
    piVar14 = *(int **)(param_1 + 0x90);
    lVar10 = 0;
    uVar19 = 0;
    do {
      if (*piVar14 == *param_2) {
        lVar9 = *(long *)(param_1 + 0x30);
        lVar10 = lVar10 >> 0x20;
        local_70 = (int *)0x0;
        local_68 = -0x8000000000000000;
        FUN_001d58f0(param_1 + 0x40,lVar9 + lVar10 * 0x50,&local_70);
        lVar15 = tpidr_el0;
        iVar7 = (int)uVar19;
        if ((int)local_68 != 0) {
          piVar1 = local_70 + (int)local_68;
          piVar14 = local_70;
          do {
            uVar5 = *(uint *)(param_1 + 0x88);
            if (0 < (int)uVar5) {
              lVar12 = *(long *)(param_1 + 0x80);
              lVar17 = 0;
              lVar20 = 0;
              piVar18 = (int *)(lVar12 + 4);
              do {
                if ((piVar18[-1] == *piVar14) && (*piVar18 == iVar7)) {
                  if ((int)lVar17 != 1) {
                    *(uint *)(param_1 + 0x88) = uVar5 - 1;
                    if (uVar5 + (int)lVar17 != 1) {
                      *(undefined8 *)(lVar12 + (lVar20 >> 0x1d)) =
                           *(undefined8 *)(lVar12 + (long)(int)(uVar5 - 1) * 8);
                    }
                    FUN_031ed6b8(param_1,-lVar17);
                  }
                  break;
                }
                lVar17 = lVar17 + -1;
                lVar20 = lVar20 + 0x100000000;
                piVar18 = piVar18 + 2;
              } while ((ulong)uVar5 + lVar17 != 0);
            }
            lVar12 = (long)DAT_0444b53c;
            lVar20 = *(long *)(lVar15 + 0x38d490);
            if (lVar20 == 0) {
              lVar20 = FUN_0333d16c(0,1);
              *(long *)(lVar15 + 0x38d490) = lVar20;
            }
            if (*(long *)(lVar20 + lVar12 * 8 + 0x18) != 0) {
              FUN_0332a954();
            }
            piVar14 = piVar14 + 1;
          } while (piVar14 != piVar1);
        }
        lVar20 = local_68;
        uVar5 = local_68._4_4_;
        local_68 = (ulong)local_68._4_4_ << 0x20;
        if ((-1 < lVar20) && (local_70 != (int *)0x0)) {
          (**(code **)(*(long *)PTR_PTR_0434a090 + 0x18))(PTR_PTR_0434a090,local_70,uVar5 << 2);
        }
        FUN_001d530c(param_1 + 0x60,*(undefined4 *)(lVar9 + lVar10 * 0x50 + 0x44));
        iVar16 = *(int *)(param_1 + 0x38);
        iVar6 = iVar16 + -1;
        *(int *)(param_1 + 0x38) = iVar6;
        if (iVar7 - iVar16 != -1) {
          puVar8 = (undefined8 *)(*(long *)(param_1 + 0x30) + (long)iVar6 * 0x50);
          puVar13 = (undefined8 *)(*(long *)(param_1 + 0x30) + lVar10 * 0x50);
          uVar25 = puVar8[1];
          *puVar13 = *puVar8;
          uVar22 = puVar8[2];
          uVar23 = puVar8[3];
          uVar26 = puVar8[5];
          puVar13[4] = puVar8[4];
          puVar13[5] = uVar26;
          puVar13[2] = uVar22;
          puVar13[3] = uVar23;
          uVar22 = puVar8[6];
          uVar26 = puVar8[7];
          uVar23 = puVar8[8];
          uVar4 = puVar8[9];
          puVar13[1] = uVar25;
          puVar13[8] = uVar23;
          puVar13[9] = uVar4;
          puVar13[6] = uVar22;
          puVar13[7] = uVar26;
        }
        lVar20 = (long)DAT_0444b53c;
        lVar9 = *(long *)(lVar15 + 0x38d490);
        if (lVar9 == 0) {
          lVar9 = FUN_0333d16c(0,1);
          *(long *)(lVar15 + 0x38d490) = lVar9;
        }
        if (*(long *)(lVar9 + lVar20 * 8 + 0x18) != 0) {
          FUN_0332a954();
        }
        if (*(int *)(param_1 + 0x38) != iVar7) {
          FUN_001d4ecc(param_1 + 0x60,
                       *(undefined4 *)(*(long *)(param_1 + 0x30) + lVar10 * 0x50 + 0x44),
                       uVar19 & 0xffffffff);
          iVar16 = *(int *)(param_1 + 0x88);
          if (0 < iVar16) {
            lVar9 = 0;
            lVar15 = 0;
            lVar10 = 0;
            do {
              lVar20 = *(long *)(param_1 + 0x80) + lVar9;
              if (*(int *)(lVar20 + 4) == *(int *)(param_1 + 0x38)) {
                *(int *)(lVar20 + 4) = iVar7;
                puVar2 = (undefined4 *)(*(long *)(param_1 + 0x80) + lVar9);
                uVar3 = puVar2[1];
                *(undefined4 *)(*(long *)(param_1 + 0xb0) + lVar15) = *puVar2;
                *(undefined4 *)(*(long *)(param_1 + 0xb0) + lVar15 + 4) = uVar3;
                iVar16 = *(int *)(param_1 + 0x88);
              }
              lVar10 = lVar10 + 1;
              lVar15 = lVar15 + 0x60;
              lVar9 = lVar9 + 8;
            } while (lVar10 < iVar16);
          }
        }
        FUN_031ed88c(*(long *)(param_1 + 0x90) + (uVar19 & 0xffffffff) * 0xd0);
        iVar16 = *(int *)(param_1 + 0x98);
        iVar6 = iVar16 + -1;
        *(int *)(param_1 + 0x98) = iVar6;
        if (iVar7 - iVar16 != -1) {
          lVar10 = *(long *)(param_1 + 0x90) + (long)iVar6 * 0xd0;
          FUN_031eeac4(*(long *)(param_1 + 0x90) + (uVar19 & 0xffffffff) * 0xd0,lVar10);
          FUN_031ed88c(lVar10);
          iVar7 = *(int *)(param_1 + 0x98);
        }
        break;
      }
      uVar19 = uVar19 + 1;
      lVar10 = lVar10 + 0x100000000;
      piVar14 = piVar14 + 0x34;
    } while ((long)iVar7 != uVar19);
  }
  fVar21 = *(float *)(param_1 + 0x180);
  *(undefined4 *)(param_1 + 0x180) = 0;
  if (iVar7 == 0) {
    fVar24 = 0.0;
  }
  else {
    fVar24 = *(float *)(*(long *)(*(long *)(param_1 + 0x90) + 8) + 0xb0);
    if (fVar24 <= 0.0) {
      fVar24 = 0.0;
    }
    *(float *)(param_1 + 0x180) = fVar24;
    if (iVar7 != 1) {
      lVar10 = (long)iVar7 * 0xd0 + -0xd0;
      plVar11 = (long *)(*(long *)(param_1 + 0x90) + 0xd8);
      do {
        if (fVar24 <= *(float *)(*plVar11 + 0xb0)) {
          fVar24 = *(float *)(*plVar11 + 0xb0);
        }
        lVar10 = lVar10 + -0xd0;
        *(float *)(param_1 + 0x180) = fVar24;
        plVar11 = plVar11 + 0x1a;
      } while (lVar10 != 0);
    }
  }
  if (fVar24 != fVar21) {
    if (0 < *(int *)(param_1 + 0xa8)) {
      lVar9 = 0;
      lVar10 = 0;
      lVar15 = 0;
      do {
        lVar20 = *(long *)(param_1 + 0xa0) + lVar10;
        lVar10 = lVar10 + 0x60;
        uVar23 = *(undefined8 *)(lVar20 + 0x18);
        uVar22 = *(undefined8 *)(lVar20 + 0x10);
        uVar26 = *(undefined8 *)(lVar20 + 0x28);
        uVar25 = *(undefined8 *)(lVar20 + 0x20);
        fVar21 = (float)*(undefined8 *)(lVar20 + 0x40);
        fVar24 = (float)((ulong)*(undefined8 *)(lVar20 + 0x40) >> 0x20);
        fVar27 = (float)*(undefined8 *)(lVar20 + 0x48);
        fVar28 = (float)((ulong)*(undefined8 *)(lVar20 + 0x48) >> 0x20);
        lVar12 = *(long *)(param_1 + 0x20) + lVar9;
        *(undefined1 *)(lVar12 + 0x40) = 1;
        lVar15 = lVar15 + 1;
        *(ulong *)(lVar12 + 0x28) =
             CONCAT44((float)((ulong)uVar23 >> 0x20) + fVar28,(float)uVar23 + fVar27);
        *(ulong *)(lVar12 + 0x20) =
             CONCAT44((float)((ulong)uVar22 >> 0x20) + fVar24,(float)uVar22 + fVar21);
        *(ulong *)(lVar12 + 0x38) =
             CONCAT44((float)((ulong)uVar26 >> 0x20) + fVar28,(float)uVar26 + fVar27);
        *(ulong *)(lVar12 + 0x30) =
             CONCAT44((float)((ulong)uVar25 >> 0x20) + fVar24,(float)uVar25 + fVar21);
        *(undefined1 *)(lVar20 + 0x52) = 1;
        lVar9 = lVar9 + 0x50;
      } while (lVar15 < *(int *)(param_1 + 0xa8));
    }
    *(undefined1 *)(param_1 + 0xc4) = 1;
  }
  return;
}


