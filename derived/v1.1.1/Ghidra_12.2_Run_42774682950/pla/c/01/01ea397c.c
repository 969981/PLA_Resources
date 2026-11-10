/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01ea397c; name: FUN_01ea397c
 */


void FUN_01ea397c(undefined8 *param_1,long *param_2,undefined4 param_3,ulong param_4)

{
  long *plVar1;
  ushort uVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  int *piVar10;
  char *pcVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *plVar15;
  long *plVar16;
  float fVar17;
  float fVar18;
  undefined8 uVar19;
  undefined4 uVar20;
  long *local_48;
  
  FUN_00956dac(&local_48,param_2 + 0x35);
  if (((*PTR_DAT_0437a648 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_0437a648), iVar7 != 0))
  {
    FUN_00100250(PTR_LAB_0437b598,PTR_DAT_0437a650,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a648);
  }
  lVar8 = *(long *)PTR_DAT_0437a650;
  *(long *)PTR_DAT_0437a658 = lVar8;
  puVar6 = PTR_DAT_04382858;
  uVar9 = *(undefined8 *)(lVar8 + 0x230);
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *param_1 = uVar9;
  param_1[2] = puVar6 + 0x10;
  *(undefined4 *)(param_1 + 3) = 1;
  *(undefined4 *)(param_1 + 10) = param_3;
  *(undefined8 *)((long)param_1 + 0x59) = 0;
  *(undefined8 *)((long)param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x12) = 1;
  *(undefined2 *)(param_1 + 0x14) = 1;
  *(undefined8 *)((long)param_1 + 0x94) = 0x3f000000bf800000;
  param_1[4] = &PTR_FUN_04287c08;
  *(undefined4 *)((long)param_1 + 0x9c) = 0x3f000000;
  pcVar11 = (char *)param_2[0x41];
  if (*pcVar11 == '\0') {
    piVar10 = *(int **)(pcVar11 + 0x10);
    if (piVar10 == (int *)0x0) {
      piVar10 = *(int **)(pcVar11 + 8);
    }
    uVar20 = 0;
    if (0x1e < *(ushort *)((long)piVar10 - (long)*piVar10)) {
      uVar2 = ((ushort *)((long)piVar10 - (long)*piVar10))[0xf];
      goto joined_r0x01ea3b98;
    }
  }
  else {
    piVar10 = *(int **)(pcVar11 + 0x18);
    uVar20 = 0;
    if (0x1a < *(ushort *)((long)piVar10 - (long)*piVar10)) {
      uVar2 = ((ushort *)((long)piVar10 - (long)*piVar10))[0xd];
joined_r0x01ea3b98:
      uVar20 = 0;
      if ((ulong)uVar2 != 0) {
        uVar20 = *(undefined4 *)((long)piVar10 + (ulong)uVar2);
      }
    }
  }
  if ((param_4 & 1) == 0) {
    fVar18 = (float)(**(code **)(*param_2 + 0x160))(param_2);
    uVar9 = DAT_0388a140;
    uVar19 = DAT_0388a148;
    goto LAB_01ea3db8;
  }
  if (((*PTR_DAT_04379660 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04379660), iVar7 != 0))
  {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar8 = *(long *)PTR_DAT_04379668;
  *(long *)PTR_DAT_04379670 = lVar8;
  uVar12 = *(ulong *)(lVar8 + 0x60);
  fVar18 = 0.0;
  if (uVar12 != 0) {
    uVar13 = uVar12 - (uVar12 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar14 = uVar12 - 1 & 0xd65830cac3e925da;
    }
    else if (uVar12 < 0xd65830cac3e925db) {
      uVar14 = 0;
      if (uVar12 != 0) {
        uVar14 = 0xd65830cac3e925da / uVar12;
      }
      uVar14 = 0xd65830cac3e925da - uVar14 * uVar12;
    }
    else {
      uVar14 = 0xd65830cac3e925da;
    }
    plVar15 = *(long **)(*(long *)(lVar8 + 0x58) + uVar14 * 8);
    if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar15[1] == 0xd65830cac3e925da) {
            if (plVar15[2] == -0x29a7cf353c16da26) goto LAB_01ea3c5c;
          }
          else if ((plVar15[1] & uVar12 - 1) != uVar14) break;
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar15[1];
          if (uVar13 == 0xd65830cac3e925da) {
            if (plVar15[2] == -0x29a7cf353c16da26) goto LAB_01ea3c5c;
          }
          else {
            if (uVar12 <= uVar13) {
              uVar5 = 0;
              if (uVar12 != 0) {
                uVar5 = uVar13 / uVar12;
              }
              uVar13 = uVar13 - uVar5 * uVar12;
            }
            if (uVar13 != uVar14) break;
          }
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
    }
  }
LAB_01ea3d94:
  fVar17 = (float)(**(code **)(*param_2 + 0x160))(param_2);
  fVar18 = 1.0 / fVar18;
  uVar9 = CONCAT44((float)((ulong)DAT_0388a140 >> 0x20) * fVar17,(float)DAT_0388a140 * fVar17);
  uVar19 = CONCAT44((float)((ulong)DAT_0388a148 >> 0x20) * fVar17,(float)DAT_0388a148 * fVar17);
LAB_01ea3db8:
  param_1[7] = CONCAT44((float)((ulong)uVar19 >> 0x20) * fVar18,(float)uVar19 * fVar18);
  param_1[6] = CONCAT44((float)((ulong)uVar9 >> 0x20) * fVar18,(float)uVar9 * fVar18);
  *(undefined4 *)(param_1 + 8) = uVar20;
  if (local_48 != (long *)0x0) {
    lVar8 = local_48[0xb];
    piVar10 = (int *)(lVar8 + 0xc);
    do {
      iVar7 = *piVar10;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
      if (bVar4) {
        *piVar10 = iVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar8 + 0x18) = 0;
      (**(code **)(*local_48 + 0x20))();
    }
  }
  return;
LAB_01ea3c5c:
  plVar15 = (long *)plVar15[3];
  if (plVar15 != (long *)0x0) {
    plVar1 = plVar15 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar12 = plVar15[0x21];
    fVar18 = 0.0;
    if (uVar12 != 0) {
      uVar13 = uVar12 - (uVar12 >> 1 & 0x5555555555555555);
      uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
      uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar13 < 2) {
        uVar14 = uVar12 - 1 & 0xc7ec54c7b3ff34b3;
      }
      else if (uVar12 < 0xc7ec54c7b3ff34b4) {
        uVar14 = 0;
        if (uVar12 != 0) {
          uVar14 = 0xc7ec54c7b3ff34b3 / uVar12;
        }
        uVar14 = 0xc7ec54c7b3ff34b3 - uVar14 * uVar12;
      }
      else {
        uVar14 = 0xc7ec54c7b3ff34b3;
      }
      plVar16 = *(long **)(plVar15[0x20] + uVar14 * 8);
      if ((plVar16 != (long *)0x0) && (plVar16 = (long *)*plVar16, plVar16 != (long *)0x0)) {
        if (uVar13 < 2) {
          do {
            if (plVar16[1] == 0xc7ec54c7b3ff34b3) {
              if (plVar16[2] == -0x3813ab384c00cb4d) goto LAB_01ea3d7c;
            }
            else if ((plVar16[1] & uVar12 - 1) != uVar14) break;
            plVar16 = (long *)*plVar16;
          } while (plVar16 != (long *)0x0);
        }
        else {
          do {
            uVar13 = plVar16[1];
            if (uVar13 == 0xc7ec54c7b3ff34b3) {
              if (plVar16[2] == -0x3813ab384c00cb4d) goto LAB_01ea3d7c;
            }
            else {
              if (uVar12 <= uVar13) {
                uVar5 = 0;
                if (uVar12 != 0) {
                  uVar5 = uVar13 / uVar12;
                }
                uVar13 = uVar13 - uVar5 * uVar12;
              }
              if (uVar13 != uVar14) break;
            }
            plVar16 = (long *)*plVar16;
          } while (plVar16 != (long *)0x0);
        }
      }
    }
    goto LAB_01ea3d80;
  }
  goto LAB_01ea3d94;
LAB_01ea3d7c:
  fVar18 = *(float *)(plVar16 + 6);
LAB_01ea3d80:
  do {
    iVar7 = (int)*plVar1 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar7;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar7 == 0) {
    (**(code **)(*plVar15 + 0x10))();
  }
  goto LAB_01ea3d94;
}


