/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01cb4ba0; name: FUN_01cb4ba0
 */


void FUN_01cb4ba0(long *param_1,ulong *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  byte bVar8;
  int iVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  long *plVar15;
  long *plVar16;
  undefined4 uVar17;
  undefined8 local_60;
  char *pcStack_58;
  undefined8 local_50;
  long *local_48;
  
  if (*param_1 == 0) {
    return;
  }
  local_60 = 0xa1e24990f3f56855;
  pcStack_58 = "control_enableAirMove";
  local_50 = 0x15;
  local_48 = (long *)0x0;
  bVar8 = FUN_00e9e50c(param_2,&local_60);
  *(byte *)(*param_1 + 0xd4) = bVar8 & 1;
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  puVar5 = PTR_DAT_04379660;
  if (((*PTR_DAT_04379660 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379660), iVar9 != 0))
  {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  puVar7 = PTR_DAT_04379670;
  puVar6 = PTR_DAT_04379668;
  lVar14 = *(long *)PTR_DAT_04379668;
  *(long *)PTR_DAT_04379670 = lVar14;
  uVar11 = *(ulong *)(lVar14 + 0x60);
  uVar17 = 0;
  if (uVar11 != 0) {
    uVar12 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
    uVar10 = *param_2;
    uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar12 < 2) {
      uVar13 = uVar11 - 1 & uVar10;
    }
    else if (uVar10 < uVar11) {
      uVar13 = uVar10;
    }
    else {
      uVar13 = 0;
      if (uVar11 != 0) {
        uVar13 = uVar10 / uVar11;
      }
      uVar13 = uVar10 - uVar13 * uVar11;
    }
    plVar15 = *(long **)(*(long *)(lVar14 + 0x58) + uVar13 * 8);
    if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
      if (uVar12 < 2) {
        do {
          if (plVar15[1] == uVar10) {
            if (plVar15[2] == uVar10) goto LAB_01cb4cd0;
          }
          else if ((plVar15[1] & uVar11 - 1) != uVar13) break;
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
      else {
        do {
          uVar12 = plVar15[1];
          if (uVar12 == uVar10) {
            if (plVar15[2] == uVar10) goto LAB_01cb4cd0;
          }
          else {
            if (uVar11 <= uVar12) {
              uVar4 = 0;
              if (uVar11 != 0) {
                uVar4 = uVar12 / uVar11;
              }
              uVar12 = uVar12 - uVar4 * uVar11;
            }
            if (uVar12 != uVar13) break;
          }
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
    }
  }
LAB_01cb4e2c:
  *(undefined4 *)(*param_1 + 0xd8) = uVar17;
  local_60 = 0xb64181f9025eb9fa;
  pcStack_58 = "control_airMoveRotation";
  local_50 = 0x17;
  local_48 = (long *)0x0;
  bVar8 = FUN_00e9e50c(param_2,&local_60);
  *(byte *)(*param_1 + 0xdc) = bVar8 & 1;
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379660), iVar9 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar14 = *(long *)puVar6;
  *(long *)puVar7 = lVar14;
  uVar11 = *(ulong *)(lVar14 + 0x60);
  uVar17 = 0;
  if (uVar11 != 0) {
    uVar12 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
    uVar10 = *param_2;
    uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar12 < 2) {
      uVar13 = uVar11 - 1 & uVar10;
    }
    else if (uVar10 < uVar11) {
      uVar13 = uVar10;
    }
    else {
      uVar13 = 0;
      if (uVar11 != 0) {
        uVar13 = uVar10 / uVar11;
      }
      uVar13 = uVar10 - uVar13 * uVar11;
    }
    plVar15 = *(long **)(*(long *)(lVar14 + 0x58) + uVar13 * 8);
    if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
      if (uVar12 < 2) {
        do {
          if (plVar15[1] == uVar10) {
            if (plVar15[2] == uVar10) goto LAB_01cb4f20;
          }
          else if ((plVar15[1] & uVar11 - 1) != uVar13) break;
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
      else {
        do {
          uVar12 = plVar15[1];
          if (uVar12 == uVar10) {
            if (plVar15[2] == uVar10) goto LAB_01cb4f20;
          }
          else {
            if (uVar11 <= uVar12) {
              uVar4 = 0;
              if (uVar11 != 0) {
                uVar4 = uVar12 / uVar11;
              }
              uVar12 = uVar12 - uVar4 * uVar11;
            }
            if (uVar12 != uVar13) break;
          }
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
    }
  }
LAB_01cb507c:
  *(undefined4 *)(*param_1 + 0xe0) = uVar17;
  return;
LAB_01cb4cd0:
  plVar15 = (long *)plVar15[3];
  if (plVar15 != (long *)0x0) {
    plVar1 = plVar15 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    uVar11 = plVar15[0x21];
    uVar17 = 0;
    if (uVar11 != 0) {
      uVar12 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
      uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
      uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar12 < 2) {
        uVar10 = uVar11 - 1 & 0x531bad62c34be3ce;
      }
      else if (uVar11 < 0x531bad62c34be3cf) {
        uVar10 = 0;
        if (uVar11 != 0) {
          uVar10 = 0x531bad62c34be3ce / uVar11;
        }
        uVar10 = 0x531bad62c34be3ce - uVar10 * uVar11;
      }
      else {
        uVar10 = 0x531bad62c34be3ce;
      }
      plVar16 = *(long **)(plVar15[0x20] + uVar10 * 8);
      if ((plVar16 != (long *)0x0) && (plVar16 = (long *)*plVar16, plVar16 != (long *)0x0)) {
        if (uVar12 < 2) {
          do {
            if (plVar16[1] == 0x531bad62c34be3ce) {
              if (plVar16[2] == 0x531bad62c34be3ce) goto LAB_01cb4e14;
            }
            else if ((plVar16[1] & uVar11 - 1) != uVar10) break;
            plVar16 = (long *)*plVar16;
          } while (plVar16 != (long *)0x0);
        }
        else {
          do {
            uVar12 = plVar16[1];
            if (uVar12 == 0x531bad62c34be3ce) {
              if (plVar16[2] == 0x531bad62c34be3ce) goto LAB_01cb4e14;
            }
            else {
              if (uVar11 <= uVar12) {
                uVar13 = 0;
                if (uVar11 != 0) {
                  uVar13 = uVar12 / uVar11;
                }
                uVar12 = uVar12 - uVar13 * uVar11;
              }
              if (uVar12 != uVar10) break;
            }
            plVar16 = (long *)*plVar16;
          } while (plVar16 != (long *)0x0);
        }
      }
    }
    goto LAB_01cb4e18;
  }
  goto LAB_01cb4e2c;
LAB_01cb4e14:
  uVar17 = (undefined4)plVar16[6];
LAB_01cb4e18:
  do {
    iVar9 = (int)*plVar1 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = iVar9;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar9 == 0) {
    (**(code **)(*plVar15 + 0x10))();
  }
  goto LAB_01cb4e2c;
LAB_01cb4f20:
  plVar15 = (long *)plVar15[3];
  if (plVar15 == (long *)0x0) goto LAB_01cb507c;
  plVar1 = plVar15 + 10;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = (int)*plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  uVar11 = plVar15[0x21];
  uVar17 = 0;
  if (uVar11 != 0) {
    uVar12 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
    uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar12 < 2) {
      uVar10 = uVar11 - 1 & 0x234b93bf3589fde8;
    }
    else if (uVar11 < 0x234b93bf3589fde9) {
      uVar10 = 0;
      if (uVar11 != 0) {
        uVar10 = 0x234b93bf3589fde8 / uVar11;
      }
      uVar10 = 0x234b93bf3589fde8 - uVar10 * uVar11;
    }
    else {
      uVar10 = 0x234b93bf3589fde8;
    }
    plVar16 = *(long **)(plVar15[0x20] + uVar10 * 8);
    if ((plVar16 != (long *)0x0) && (plVar16 = (long *)*plVar16, plVar16 != (long *)0x0)) {
      if (uVar12 < 2) {
        do {
          if (plVar16[1] == 0x234b93bf3589fde8) {
            if (plVar16[2] == 0x234b93bf3589fde8) goto LAB_01cb5064;
          }
          else if ((plVar16[1] & uVar11 - 1) != uVar10) break;
          plVar16 = (long *)*plVar16;
        } while (plVar16 != (long *)0x0);
      }
      else {
        do {
          uVar12 = plVar16[1];
          if (uVar12 == 0x234b93bf3589fde8) {
            if (plVar16[2] == 0x234b93bf3589fde8) goto LAB_01cb5064;
          }
          else {
            if (uVar11 <= uVar12) {
              uVar13 = 0;
              if (uVar11 != 0) {
                uVar13 = uVar12 / uVar11;
              }
              uVar12 = uVar12 - uVar13 * uVar11;
            }
            if (uVar12 != uVar10) break;
          }
          plVar16 = (long *)*plVar16;
        } while (plVar16 != (long *)0x0);
      }
    }
  }
  goto LAB_01cb5068;
LAB_01cb5064:
  uVar17 = (undefined4)plVar16[6];
LAB_01cb5068:
  do {
    iVar9 = (int)*plVar1 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = iVar9;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar9 == 0) {
    (**(code **)(*plVar15 + 0x10))();
  }
  goto LAB_01cb507c;
}


