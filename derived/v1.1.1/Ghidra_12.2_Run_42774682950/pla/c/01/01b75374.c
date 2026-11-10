/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b75374; name: FUN_01b75374
 */


void FUN_01b75374(long param_1)

{
  int *piVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  int iVar5;
  char cVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  long *local_78;
  undefined1 auStack_70 [8];
  long *local_68;
  undefined1 **ppuStack_60;
  undefined1 *local_58;
  
  FUN_016c24d0(&local_68,param_1 + 0x5b0);
  plVar2 = local_68;
  if (local_68 != (long *)0x0) {
    plVar13 = (long *)local_68[0x58];
    if (plVar13 != (long *)0x0) {
      do {
        *(uint *)(plVar13 + 3) = *(uint *)(plVar13 + 3) | 4;
        FUN_01839500(plVar2);
        plVar13 = (long *)*plVar13;
      } while (plVar13 != (long *)0x0);
      if (local_68 == (long *)0x0) goto LAB_01b753f4;
    }
    lVar11 = local_68[0xb];
    piVar1 = (int *)(lVar11 + 0xc);
    do {
      iVar5 = *piVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = iVar5 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar5 + -1 == 0) {
      *(undefined8 *)(lVar11 + 0x18) = 0;
      (**(code **)(*local_68 + 0x20))(local_68);
    }
  }
LAB_01b753f4:
  FUN_009c69bc(&local_78,param_1);
  plVar13 = local_78;
  local_58 = auStack_70;
  ppuStack_60 = &local_58;
  local_68 = local_78 + 0x1e;
  plVar2 = local_78 + 0x21;
  lVar12 = *plVar2;
  lVar11 = nn::os::GetCurrentThread();
  if (lVar11 == lVar12) {
    uVar10 = FUN_01b7d3b4(&local_68,plVar13 + 0x2d);
    if (((uVar10 & 1) != 0) || (uVar10 = FUN_01b7d3b4(&local_68,plVar13 + 0x34), (uVar10 & 1) != 0))
    goto LAB_01b755a8;
    bVar7 = false;
LAB_01b754e8:
    plVar2 = plVar13 + 0x28;
    do {
      lVar11 = *plVar2;
      cVar6 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar8) {
        *plVar2 = lVar11;
        plVar13[0x29] = plVar13[0x29];
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    lVar12 = nn::os::GetCurrentThread();
    if (lVar12 == lVar11) {
      FUN_01b7d3b4(&local_68,plVar13 + 0x3b);
    }
    else {
      lVar11 = nn::os::GetCurrentThread();
      do {
        if (*plVar2 != 0 || plVar13[0x29] != 0) {
          bVar8 = false;
          ClearExclusiveLocal();
          goto LAB_01b7552c;
        }
        cVar6 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar8) {
          *plVar2 = lVar11;
          plVar13[0x29] = 0;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      bVar8 = true;
LAB_01b7552c:
      lVar11 = nn::os::GetCurrentThread();
      plVar3 = plVar13 + 0x2c;
      do {
        if (*plVar3 != 0) {
          ClearExclusiveLocal();
          do {
            nn::os::WaitLightEvent((LightEventType *)((long)plVar13 + 0x154));
            while (*plVar3 == 0) {
              cVar6 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(plVar3,0x10);
              if (bVar9) {
                *plVar3 = lVar11;
                cVar6 = ExclusiveMonitorsStatus();
              }
              if (cVar6 == '\0') goto LAB_01b75574;
            }
            ClearExclusiveLocal();
          } while( true );
        }
        cVar6 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar9) {
          *plVar3 = lVar11;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
LAB_01b75574:
      if (bVar8) {
        uVar10 = FUN_01b7d524(plVar13 + 0x3b);
        if ((uVar10 & 1) != 0) {
          FUN_01b7d730(plVar13[0x3b],plVar13[0x3c]);
        }
        plVar13[0x2c] = 0;
        nn::os::SignalLightEvent((LightEventType *)((long)plVar13 + 0x154));
        do {
          lVar11 = *plVar2;
          lVar12 = plVar13[0x29];
          cVar6 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar8) {
            *plVar2 = lVar11;
            plVar13[0x29] = lVar12;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        do {
          if (*plVar2 != lVar11 || plVar13[0x29] != lVar12) {
            ClearExclusiveLocal();
            lVar11 = *plVar2;
            lVar12 = plVar13[0x29];
            goto LAB_01b756e4;
          }
          cVar6 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar8) {
            *plVar2 = 0;
            *(long *)((long)plVar13 + 0x144) = lVar12;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        goto LAB_01b756bc;
      }
      FUN_01b7d3b4(&local_68);
      plVar13[0x2c] = 0;
      nn::os::SignalLightEvent((LightEventType *)((long)plVar13 + 0x154));
    }
    goto joined_r0x01b756c4;
  }
  lVar11 = nn::os::GetCurrentThread();
  do {
    if (*plVar2 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)((long)plVar13 + 0xfc));
        while (*plVar2 == 0) {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar7) {
            *plVar2 = lVar11;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') goto LAB_01b75470;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar7) {
      *plVar2 = lVar11;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
LAB_01b75470:
  lVar11 = nn::os::GetCurrentThread();
  plVar2 = plVar13 + 0x24;
  do {
    if (*plVar2 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)((long)plVar13 + 0x114));
        while (*plVar2 == 0) {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar7) {
            *plVar2 = lVar11;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') goto LAB_01b754b8;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar7) {
      *plVar2 = lVar11;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
LAB_01b754b8:
  uVar10 = FUN_01b7d524(plVar13 + 0x2d);
  if ((uVar10 & 1) == 0) {
    uVar10 = FUN_01b7d524(plVar13 + 0x34);
    plVar13[0x24] = 0;
    nn::os::SignalLightEvent((LightEventType *)((long)plVar13 + 0x114));
    if ((uVar10 & 1) == 0) {
      bVar7 = true;
      goto LAB_01b754e8;
    }
  }
  else {
    plVar13[0x24] = 0;
    nn::os::SignalLightEvent((LightEventType *)((long)plVar13 + 0x114));
  }
  goto LAB_01b75598;
LAB_01b756e4:
  do {
    lVar4 = *plVar2;
    if (lVar4 == lVar11 && plVar13[0x29] == lVar12) {
      cVar6 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar8) {
        *plVar2 = 0;
        *(long *)((long)plVar13 + 0x144) = lVar12;
        cVar6 = ExclusiveMonitorsStatus();
      }
      if (cVar6 != '\0') goto LAB_01b756e4;
      bVar8 = true;
    }
    else {
      bVar8 = false;
      ClearExclusiveLocal();
    }
    lVar11 = lVar4;
    lVar12 = plVar13[0x29];
  } while (!bVar8);
LAB_01b756bc:
  nn::os::SignalLightEvent((LightEventType *)((long)plVar13 + 0x134));
joined_r0x01b756c4:
  if (!bVar7) goto LAB_01b755a8;
LAB_01b75598:
  plVar13[0x21] = 0;
  nn::os::SignalLightEvent((LightEventType *)((long)plVar13 + 0xfc));
LAB_01b755a8:
  if (local_78 != (long *)0x0) {
    lVar11 = local_78[0xb];
    piVar1 = (int *)(lVar11 + 0xc);
    do {
      iVar5 = *piVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = iVar5 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar5 + -1 == 0) {
      *(undefined8 *)(lVar11 + 0x18) = 0;
      (**(code **)(*local_78 + 0x20))();
    }
  }
  *(undefined4 *)(param_1 + 0x5f8) = 4;
  return;
}


