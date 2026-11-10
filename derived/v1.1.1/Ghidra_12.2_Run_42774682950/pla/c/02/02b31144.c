/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b31144; name: FUN_02b31144
 */


void FUN_02b31144(undefined1 *param_1,long *param_2,long param_3,ulong *param_4,long param_5)

{
  long *plVar1;
  int *piVar2;
  long *plVar3;
  long lVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long *plVar16;
  long *plVar17;
  long *local_78;
  long *local_70;
  undefined4 local_68;
  
  lVar9 = nn::os::GetCurrentThread();
  plVar1 = param_2 + 0x1e;
  do {
    if (*plVar1 != 0 || param_2[0x1f] != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)((long)param_2 + 0xe4));
        while (*plVar1 == 0 && param_2[0x1f] == 0) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *plVar1 = lVar9;
            param_2[0x1f] = 0;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_02b311c8;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar9;
      param_2[0x1f] = 0;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_02b311c8:
  if (param_5 == 0) {
    param_5 = param_2[1];
    uVar11 = param_2[0xf];
  }
  else {
    uVar11 = param_2[0xf];
  }
  if (uVar11 != 0) {
    uVar14 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar14 = (uVar14 & 0x3333333333333333) + (uVar14 >> 2 & 0x3333333333333333);
    uVar12 = *(ulong *)(param_3 + 8);
    uVar14 = (uVar14 + (uVar14 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar14 < 2) {
      uVar15 = uVar11 - 1 & uVar12;
    }
    else {
      uVar15 = uVar12;
      if (uVar11 <= uVar12) {
        uVar15 = 0;
        if (uVar11 != 0) {
          uVar15 = uVar12 / uVar11;
        }
        uVar15 = uVar12 - uVar15 * uVar11;
      }
    }
    plVar17 = *(long **)(param_2[0xe] + uVar15 * 8);
    if ((plVar17 != (long *)0x0) && (plVar17 = (long *)*plVar17, plVar17 != (long *)0x0)) {
      if (uVar14 < 2) {
        do {
          if (plVar17[1] == uVar12) {
            if (plVar17[2] == uVar12) goto LAB_02b312d0;
          }
          else if ((plVar17[1] & uVar11 - 1) != uVar15) break;
          plVar17 = (long *)*plVar17;
        } while (plVar17 != (long *)0x0);
      }
      else {
        do {
          uVar14 = plVar17[1];
          if (uVar14 == uVar12) {
            if (plVar17[2] == uVar12) goto LAB_02b312d0;
          }
          else {
            if (uVar11 <= uVar14) {
              uVar8 = 0;
              if (uVar11 != 0) {
                uVar8 = uVar14 / uVar11;
              }
              uVar14 = uVar14 - uVar8 * uVar11;
            }
            if (uVar14 != uVar15) break;
          }
          plVar17 = (long *)*plVar17;
        } while (plVar17 != (long *)0x0);
      }
    }
  }
LAB_02b31348:
  *param_1 = 0;
LAB_02b3134c:
  do {
    lVar9 = *plVar1;
    lVar13 = param_2[0x1f];
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar9;
      param_2[0x1f] = lVar13;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  do {
    if (*plVar1 != lVar9 || param_2[0x1f] != lVar13) {
      ClearExclusiveLocal();
      lVar9 = *plVar1;
      lVar13 = param_2[0x1f];
      goto LAB_02b315c8;
    }
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = 0;
      *(long *)((long)param_2 + 0xf4) = lVar13;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_02b31390:
  nn::os::SignalLightEvent((LightEventType *)((long)param_2 + 0xe4));
  return;
LAB_02b312d0:
  if (plVar17[6] == 0) goto LAB_02b31348;
  uVar14 = *param_4;
  uVar15 = param_4[1];
  uVar12 = param_4[2];
  plVar16 = (long *)param_4[3];
  if (plVar16 != (long *)0x0) {
    (**(code **)(*plVar16 + 0x18))(plVar16);
    uVar11 = param_2[0xf];
  }
  *(ulong *)(param_1 + 8) = uVar14;
  *(ulong *)(param_1 + 0x10) = uVar15;
  *param_1 = 1;
  *(ulong *)(param_1 + 0x18) = uVar12;
  *(long **)(param_1 + 0x20) = plVar16;
  if (uVar11 != 0) {
    uVar12 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
    uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar12 < 2) {
      uVar15 = uVar11 - 1 & uVar14;
    }
    else {
      uVar15 = uVar14;
      if (uVar11 <= uVar14) {
        uVar15 = 0;
        if (uVar11 != 0) {
          uVar15 = uVar14 / uVar11;
        }
        uVar15 = uVar14 - uVar15 * uVar11;
      }
    }
    plVar16 = *(long **)(param_2[0xe] + uVar15 * 8);
    if ((plVar16 != (long *)0x0) && (plVar16 = (long *)*plVar16, plVar16 != (long *)0x0)) {
      if (uVar12 < 2) {
        do {
          if (plVar16[1] == uVar14) {
            if (plVar16[2] == uVar14) goto LAB_02b3134c;
          }
          else if ((plVar16[1] & uVar11 - 1) != uVar15) break;
          plVar16 = (long *)*plVar16;
        } while (plVar16 != (long *)0x0);
      }
      else {
        do {
          uVar12 = plVar16[1];
          if (uVar12 == uVar14) {
            if (plVar16[2] == uVar14) goto LAB_02b3134c;
          }
          else {
            if (uVar11 <= uVar12) {
              uVar8 = 0;
              if (uVar11 != 0) {
                uVar8 = uVar12 / uVar11;
              }
              uVar12 = uVar12 - uVar8 * uVar11;
            }
            if (uVar12 != uVar15) break;
          }
          plVar16 = (long *)*plVar16;
        } while (plVar16 != (long *)0x0);
      }
    }
  }
  local_78 = param_2;
  plVar16 = (long *)FUN_02b34cc0(param_5,&local_78);
  if (plVar16 != (long *)0x0) {
    plVar10 = plVar16 + 10;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar6) {
        *(int *)plVar10 = (int)*plVar10 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  lVar9 = plVar17[6];
  if (lVar9 != 0) {
    piVar2 = (int *)(lVar9 + 0x50);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar6) {
        *piVar2 = *piVar2 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  plVar10 = (long *)plVar16[0x1a];
  plVar16[0x1a] = lVar9;
  if (plVar10 != (long *)0x0) {
    plVar3 = plVar10 + 10;
    do {
      iVar7 = (int)*plVar3 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar6) {
        *(int *)plVar3 = iVar7;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*plVar10 + 0x10))();
    }
  }
  *(undefined2 *)((long)plVar16 + 0x189) = 0x101;
  local_78 = (long *)plVar17[6];
  if (local_78 != (long *)0x0) {
    plVar17 = local_78 + 10;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar6) {
        *(int *)plVar17 = (int)*plVar17 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  plVar17 = plVar16 + 10;
  do {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
    if (bVar6) {
      *(int *)plVar17 = (int)*plVar17 + 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  local_68 = 1;
  local_70 = plVar16;
  FUN_02b30cf4(param_2 + 0xe,param_4,&local_78);
  if (local_70 != (long *)0x0) {
    plVar10 = local_70 + 10;
    do {
      iVar7 = (int)*plVar10 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar6) {
        *(int *)plVar10 = iVar7;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*local_70 + 0x10))();
    }
  }
  if (local_78 != (long *)0x0) {
    plVar10 = local_78 + 10;
    do {
      iVar7 = (int)*plVar10 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar6) {
        *(int *)plVar10 = iVar7;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*local_78 + 0x10))();
    }
  }
  do {
    iVar7 = (int)*plVar17 + -1;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
    if (bVar6) {
      *(int *)plVar17 = iVar7;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (iVar7 == 0) {
    (**(code **)(*plVar16 + 0x10))(plVar16);
  }
  goto LAB_02b3134c;
LAB_02b315c8:
  do {
    lVar4 = *plVar1;
    if (lVar4 == lVar9 && param_2[0x1f] == lVar13) {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = 0;
        *(long *)((long)param_2 + 0xf4) = lVar13;
        cVar5 = ExclusiveMonitorsStatus();
      }
      if (cVar5 != '\0') goto LAB_02b315c8;
      bVar6 = true;
    }
    else {
      bVar6 = false;
      ClearExclusiveLocal();
    }
    lVar9 = lVar4;
    lVar13 = param_2[0x1f];
  } while (!bVar6);
  goto LAB_02b31390;
}


