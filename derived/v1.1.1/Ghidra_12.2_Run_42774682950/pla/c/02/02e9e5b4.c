/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e9e5b4; name: FUN_02e9e5b4
 */


void FUN_02e9e5b4(long param_1,long *param_2)

{
  long lVar1;
  int iVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  char cVar6;
  byte bVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  undefined8 *puVar16;
  int *piVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined8 local_88;
  
  if (((*(uint *)(*(long *)(param_1 + 0x10) + 0x40) < 2) ||
      (lVar14 = *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x38) + 8), lVar14 == 0)) &&
     (lVar14 = DAT_0440a410, DAT_0440a410 == 0)) {
    FUN_02e43d1c();
    lVar14 = DAT_0440a410;
    if ((*(byte *)(param_1 + 0xee) & 1) == 0) goto LAB_02e9e614;
LAB_02e9e6e8:
    if (*(float *)(param_1 + 0x88) * 0.05 < -37.0) {
      fVar19 = 0.0;
    }
    else {
      uVar8 = (uint)(*(float *)(param_1 + 0x88) * 1393317.6 + 1.0653532e+09);
      fVar19 = (float)(uVar8 & 0x7fffff | 0x3f800000);
      fVar19 = (fVar19 * (fVar19 * 0.32518977 + 0.020805772) + 0.65304345) *
               (float)(uVar8 & 0xff800000);
    }
    uVar22 = *(undefined4 *)(param_1 + 0xbc);
    uVar21 = *(undefined4 *)(param_1 + 0xc0);
    FUN_02e9ec08(fVar19,uVar22,uVar21,lVar14,param_2);
  }
  else {
    if ((*(byte *)(param_1 + 0xee) & 1) != 0) goto LAB_02e9e6e8;
LAB_02e9e614:
    uVar21 = 0;
    uVar22 = 0;
    fVar19 = 0.0;
  }
  local_88 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x48);
  if ((*(byte *)(param_1 + 0x10c) >> 3 & 1) == 0) {
    uVar11 = 1;
    puVar12 = &local_88;
  }
  else {
    lVar15 = DAT_0440a410;
    if (*(char *)(lVar14 + 0xb8) == '\0') {
      while( true ) {
        if (lVar15 == 0) {
          FUN_02e43d1c();
          cVar6 = *(char *)(DAT_0440a410 + 0xb8);
          lVar14 = DAT_0440a410;
        }
        else {
          cVar6 = *(char *)(lVar15 + 0xb8);
          lVar14 = lVar15;
        }
        if (cVar6 != '\0') break;
        lVar15 = lVar14;
      }
    }
    uVar11 = (ulong)*(uint *)(lVar14 + 0x58);
    if (*(uint *)(lVar14 + 0x58) == 0) goto LAB_02e9e97c;
    puVar12 = *(undefined8 **)(lVar14 + 0x50);
  }
  lVar15 = 0;
  lVar14 = param_1 + 0x60;
  do {
    piVar17 = (int *)(param_1 + lVar15 * 4 + 0xcc);
    if (*piVar17 != 0) {
      lVar1 = lVar15 + 6;
      if (DAT_042ac98c < *(float *)(lVar14 + lVar1 * 4)) {
        uVar4 = *(uint *)(param_2 + 1);
        uVar8 = *(uint *)((long)param_2 + 0xc);
        if (uVar8 <= uVar4) {
          iVar2 = uVar8 + (uVar8 >> 1);
          if (uVar8 == 0) {
            iVar2 = 1;
          }
          uVar8 = iVar2 + uVar8;
          lVar10 = (*DAT_0442d148)(0,*param_2,(ulong)uVar8 << 5);
          if (lVar10 == 0) goto LAB_02e9e8a0;
          *param_2 = lVar10;
          *(uint *)((long)param_2 + 0xc) = uVar8;
        }
        if (uVar4 < uVar8) {
          uVar8 = *(uint *)(param_2 + 1);
          lVar10 = *param_2;
          *(uint *)(param_2 + 1) = uVar8 + 1;
          puVar16 = (undefined8 *)(lVar10 + (ulong)uVar8 * 0x20);
          if (puVar16 != (undefined8 *)0x0) {
            *puVar16 = *puVar12;
            lVar10 = lVar10 + (ulong)uVar8 * 0x20;
            *(int *)(lVar10 + 8) = *piVar17;
            fVar18 = *(float *)(lVar14 + lVar1 * 4);
            fVar20 = 0.0;
            if (-37.0 <= fVar18 * 0.05) {
              uVar8 = (uint)(fVar18 * 1393317.6 + 1.0653532e+09);
              fVar18 = (float)(uVar8 & 0x7fffff | 0x3f800000);
              fVar20 = (fVar18 * (fVar18 * 0.32518977 + 0.020805772) + 0.65304345) *
                       (float)(uVar8 & 0xff800000);
            }
            *(float *)(lVar10 + 0xc) = fVar20;
            *(undefined4 *)(lVar10 + 0x14) = *(undefined4 *)(lVar14 + (lVar15 + 0xf) * 4);
            uVar5 = *(undefined4 *)(lVar14 + (lVar15 + 0x13) * 4);
            *(undefined4 *)(lVar10 + 0x10) = 2;
            *(undefined4 *)(lVar10 + 0x18) = uVar5;
          }
        }
      }
LAB_02e9e8a0:
      lVar10 = uVar11 - 1;
      puVar16 = puVar12;
      if ((int)uVar11 != 1) {
        do {
          puVar16 = puVar16 + 1;
          if (DAT_042ac98c < *(float *)(lVar14 + lVar1 * 4)) {
            uVar4 = *(uint *)(param_2 + 1);
            uVar8 = *(uint *)((long)param_2 + 0xc);
            if (uVar8 <= uVar4) {
              iVar2 = uVar8 + (uVar8 >> 1);
              if (uVar8 == 0) {
                iVar2 = 1;
              }
              uVar8 = iVar2 + uVar8;
              lVar9 = (*DAT_0442d148)(0,*param_2,(ulong)uVar8 << 5);
              if (lVar9 == 0) goto LAB_02e9e7ac;
              *param_2 = lVar9;
              *(uint *)((long)param_2 + 0xc) = uVar8;
            }
            if (uVar4 < uVar8) {
              uVar8 = *(uint *)(param_2 + 1);
              lVar9 = *param_2;
              *(uint *)(param_2 + 1) = uVar8 + 1;
              puVar3 = (undefined8 *)(lVar9 + (ulong)uVar8 * 0x20);
              if (puVar3 != (undefined8 *)0x0) {
                *puVar3 = *puVar16;
                lVar9 = lVar9 + (ulong)uVar8 * 0x20;
                *(int *)(lVar9 + 8) = *piVar17;
                fVar18 = *(float *)(lVar14 + lVar1 * 4);
                fVar20 = 0.0;
                if (-37.0 <= fVar18 * 0.05) {
                  uVar8 = (uint)(fVar18 * 1393317.6 + 1.0653532e+09);
                  fVar18 = (float)(uVar8 & 0x7fffff | 0x3f800000);
                  fVar20 = (fVar18 * (fVar18 * 0.32518977 + 0.020805772) + 0.65304345) *
                           (float)(uVar8 & 0xff800000);
                }
                *(float *)(lVar9 + 0xc) = fVar20;
                *(undefined4 *)(lVar9 + 0x14) = *(undefined4 *)(lVar14 + (lVar15 + 0xf) * 4);
                uVar5 = *(undefined4 *)(lVar14 + (lVar15 + 0x13) * 4);
                *(undefined4 *)(lVar9 + 0x10) = 2;
                *(undefined4 *)(lVar9 + 0x18) = uVar5;
              }
            }
          }
LAB_02e9e7ac:
          lVar10 = lVar10 + -1;
        } while (lVar10 != 0);
      }
    }
    lVar15 = lVar15 + 1;
  } while (lVar15 != 4);
LAB_02e9e97c:
  if (*(long *)(param_1 + 0x170) == 0) {
    if ((((*(byte *)(param_1 + 0xee) & 1) != 0) && (5 < *(uint *)(*(long *)(param_1 + 0x10) + 0x40))
        ) && (*(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x38) + 0x28) != 0)) {
      FUN_02ef71c4(fVar19,uVar22,uVar21);
    }
  }
  else {
    lVar14 = *(long *)(*(long *)(param_1 + 0x170) + 8);
    if (*(uint *)(*(long *)(lVar14 + 0x10) + 0x40) < 6) {
      uVar13 = 0;
      bVar7 = *(byte *)(lVar14 + 0xee);
    }
    else {
      uVar13 = *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x10) + 0x38) + 0x28);
      bVar7 = *(byte *)(lVar14 + 0xee);
    }
    if ((bVar7 & 1) != 0) {
      FUN_02ef71c4(fVar19,uVar22,uVar21,uVar13,param_2);
    }
    if (*(float *)(lVar14 + 0xc4) * 0.05 < -37.0) {
      fVar19 = 0.0;
    }
    else {
      uVar8 = (uint)(*(float *)(lVar14 + 0xc4) * 1393317.6 + 1.0653532e+09);
      fVar19 = (float)(uVar8 & 0x7fffff | 0x3f800000);
      fVar19 = (fVar19 * (fVar19 * 0.32518977 + 0.020805772) + 0.65304345) *
               (float)(uVar8 & 0xff800000);
    }
    FUN_02ef73bc(fVar19,uVar13,param_2,*(undefined4 *)(lVar14 + 0xdc));
  }
  return;
}


