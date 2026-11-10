/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010f42dc; name: FUN_010f42dc
 */


void FUN_010f42dc(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  undefined4 uVar12;
  
  FUN_010f4750(param_1 + 0x68,*(undefined8 *)(param_1 + 0x1b8));
  FUN_010f4750(param_1 + 0x98,*(undefined8 *)(param_1 + 0x1b8));
  FUN_010f4750(param_1 + 200,*(undefined8 *)(param_1 + 0x1b8));
  FUN_010f4900(param_1 + 0xf8,*(undefined8 *)(param_1 + 0x1d8));
  FUN_010f4900(param_1 + 0x128,*(undefined8 *)(param_1 + 0x1d8));
  FUN_010f4900(param_1 + 0x158,*(undefined8 *)(param_1 + 0x1d8));
  FUN_010f4900(param_1 + 0x188,*(undefined8 *)(param_1 + 0x1d8));
  if (((*PTR_DAT_04379660 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04379660), iVar5 != 0))
  {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar9 = *(long *)PTR_DAT_04379668;
  *(long *)PTR_DAT_04379670 = lVar9;
  uVar6 = *(ulong *)(lVar9 + 0x60);
  if (uVar6 != 0) {
    uVar7 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
    uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
    uVar7 = (uVar7 + (uVar7 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar7 < 2) {
      uVar8 = uVar6 - 1 & 0x33d7a99ea4ec41ed;
    }
    else if (uVar6 < 0x33d7a99ea4ec41ee) {
      uVar8 = 0;
      if (uVar6 != 0) {
        uVar8 = 0x33d7a99ea4ec41ed / uVar6;
      }
      uVar8 = 0x33d7a99ea4ec41ed - uVar8 * uVar6;
    }
    else {
      uVar8 = 0x33d7a99ea4ec41ed;
    }
    plVar10 = *(long **)(*(long *)(lVar9 + 0x58) + uVar8 * 8);
    if ((plVar10 != (long *)0x0) && (plVar10 = (long *)*plVar10, plVar10 != (long *)0x0)) {
      if (uVar7 < 2) {
        do {
          if (plVar10[1] == 0x33d7a99ea4ec41ed) {
            if (plVar10[2] == 0x33d7a99ea4ec41ed) goto LAB_010f44a8;
          }
          else if ((plVar10[1] & uVar6 - 1) != uVar8) goto LAB_010f46b4;
          plVar10 = (long *)*plVar10;
          uVar12 = 0;
        } while (plVar10 != (long *)0x0);
        goto LAB_010f45e4;
      }
      do {
        uVar7 = plVar10[1];
        if (uVar7 == 0x33d7a99ea4ec41ed) {
          if (plVar10[2] == 0x33d7a99ea4ec41ed) goto LAB_010f44a8;
        }
        else {
          if (uVar6 <= uVar7) {
            uVar4 = 0;
            if (uVar6 != 0) {
              uVar4 = uVar7 / uVar6;
            }
            uVar7 = uVar7 - uVar4 * uVar6;
          }
          if (uVar7 != uVar8) break;
        }
        plVar10 = (long *)*plVar10;
      } while (plVar10 != (long *)0x0);
    }
  }
LAB_010f46b4:
  uVar12 = 0;
  goto LAB_010f45e4;
LAB_010f44a8:
  plVar10 = (long *)plVar10[3];
  if (plVar10 == (long *)0x0) goto LAB_010f46b4;
  plVar1 = plVar10 + 10;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = (int)*plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  uVar6 = plVar10[0x14];
  if (uVar6 == 0) {
    uVar12 = 0;
  }
  else {
    uVar7 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
    uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
    uVar7 = (uVar7 + (uVar7 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar7 < 2) {
      uVar8 = uVar6 - 1 & 0xfd34622823c0be13;
    }
    else if (uVar6 < 0xfd34622823c0be14) {
      uVar8 = 0;
      if (uVar6 != 0) {
        uVar8 = 0xfd34622823c0be13 / uVar6;
      }
      uVar8 = 0xfd34622823c0be13 - uVar8 * uVar6;
    }
    else {
      uVar8 = 0xfd34622823c0be13;
    }
    plVar11 = *(long **)(plVar10[0x13] + uVar8 * 8);
    if (plVar11 == (long *)0x0) {
      uVar12 = 0;
    }
    else {
      plVar11 = (long *)*plVar11;
      if (plVar11 == (long *)0x0) {
        uVar12 = 0;
      }
      else if (uVar7 < 2) {
        do {
          if (plVar11[1] == 0xfd34622823c0be13) {
            if (plVar11[2] == -0x2cb9dd7dc3f41ed) goto LAB_010f45cc;
          }
          else if ((plVar11[1] & uVar6 - 1) != uVar8) {
            uVar12 = 0;
            break;
          }
          plVar11 = (long *)*plVar11;
          uVar12 = 0;
        } while (plVar11 != (long *)0x0);
      }
      else {
        do {
          uVar7 = plVar11[1];
          if (uVar7 == 0xfd34622823c0be13) {
            if (plVar11[2] == -0x2cb9dd7dc3f41ed) goto LAB_010f45cc;
          }
          else {
            if (uVar6 <= uVar7) {
              uVar4 = 0;
              if (uVar6 != 0) {
                uVar4 = uVar7 / uVar6;
              }
              uVar7 = uVar7 - uVar4 * uVar6;
            }
            if (uVar7 != uVar8) {
              uVar12 = 0;
              goto LAB_010f45d0;
            }
          }
          plVar11 = (long *)*plVar11;
        } while (plVar11 != (long *)0x0);
        uVar12 = 0;
      }
    }
  }
  goto LAB_010f45d0;
LAB_010f45cc:
  uVar12 = (undefined4)plVar11[6];
LAB_010f45d0:
  do {
    iVar5 = (int)*plVar1 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = iVar5;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar5 == 0) {
    (**(code **)(*plVar10 + 0x10))();
  }
LAB_010f45e4:
  uVar6 = (*(long **)(param_1 + 0x1d8))[1];
  if (uVar6 != 0) {
    uVar7 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
    uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
    uVar7 = (uVar7 + (uVar7 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar7 < 2) {
      uVar8 = uVar6 - 1 & 0xa10222dd4cf1f5d3;
    }
    else if (uVar6 < 0xa10222dd4cf1f5d4) {
      uVar8 = 0;
      if (uVar6 != 0) {
        uVar8 = 0xa10222dd4cf1f5d3 / uVar6;
      }
      uVar8 = 0xa10222dd4cf1f5d3 - uVar8 * uVar6;
    }
    else {
      uVar8 = 0xa10222dd4cf1f5d3;
    }
    plVar10 = *(long **)(**(long **)(param_1 + 0x1d8) + uVar8 * 8);
    if ((plVar10 != (long *)0x0) && (plVar10 = (long *)*plVar10, plVar10 != (long *)0x0)) {
      if (uVar7 < 2) {
        do {
          if (plVar10[1] == 0xa10222dd4cf1f5d3) {
            if (plVar10[2] == -0x5efddd22b30e0a2d) goto LAB_010f4718;
          }
          else if ((plVar10[1] & uVar6 - 1) != uVar8) {
            return;
          }
          plVar10 = (long *)*plVar10;
        } while (plVar10 != (long *)0x0);
      }
      else {
        do {
          uVar7 = plVar10[1];
          if (uVar7 == 0xa10222dd4cf1f5d3) {
            if (plVar10[2] == -0x5efddd22b30e0a2d) {
LAB_010f4718:
              *(undefined4 *)(plVar10 + 3) = uVar12;
              return;
            }
          }
          else {
            if (uVar6 <= uVar7) {
              uVar4 = 0;
              if (uVar6 != 0) {
                uVar4 = uVar7 / uVar6;
              }
              uVar7 = uVar7 - uVar4 * uVar6;
            }
            if (uVar7 != uVar8) {
              return;
            }
          }
          plVar10 = (long *)*plVar10;
        } while (plVar10 != (long *)0x0);
      }
    }
  }
  return;
}


