/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028a1440; name: FUN_028a1440
 */


uint FUN_028a1440(long param_1,long *param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  int iVar11;
  long *plVar12;
  long *local_60;
  long *local_58;
  long *local_50;
  long *local_48;
  
  lVar7 = nn::os::GetCurrentThread();
  plVar12 = (long *)(param_1 + 0x210);
  do {
    if (*plVar12 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x204));
        while (*plVar12 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar4) {
            *plVar12 = lVar7;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_028a14a8;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
    if (bVar4) {
      *plVar12 = lVar7;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_028a14a8:
  FUN_00956dac(&local_58,param_1 + 0x1a8);
  lVar7 = FUN_00d82b2c(*param_2 + 0xf0,&local_48);
  uVar6 = 0;
  if (lVar7 != 0) {
    FUN_00956dac(&local_48,lVar7 + 0x268);
    plVar12 = local_48;
    if (local_48 == (long *)0x0) {
      lVar10 = *(long *)(lVar7 + 0x288);
      if ((lVar10 != 0) && (*(int *)(lVar10 + 0xc) != 0)) {
        piVar1 = (int *)(lVar10 + 0xc);
        iVar11 = *(int *)(lVar10 + 0xc);
        do {
          while( true ) {
            plVar12 = *(long **)(lVar10 + 0x10);
            lVar8 = FUN_00ad3750();
            while( true ) {
              if (plVar12 == (long *)0x0) goto LAB_028a1574;
              if (plVar12 == (long *)lVar8) break;
              plVar12 = (long *)*plVar12;
            }
            iVar2 = *piVar1;
            if (iVar2 != iVar11) break;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar11 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') {
              lVar10 = *(long *)(lVar10 + 0x18);
              if (lVar10 != 0) {
                plVar12 = (long *)(lVar10 + -0x50);
                FUN_00956dac(&local_50,lVar10 + 0x158);
                goto LAB_028a157c;
              }
              goto LAB_028a1574;
            }
            iVar11 = iVar2;
            if (iVar2 == 0) goto LAB_028a1574;
          }
          ClearExclusiveLocal();
          iVar11 = iVar2;
        } while (iVar2 != 0);
      }
LAB_028a1574:
      plVar12 = (long *)0x0;
      local_50 = (long *)0x0;
LAB_028a157c:
      plVar5 = local_48;
      local_48 = (long *)0x0;
      if (plVar5 != (long *)0x0) {
        lVar10 = plVar5[0xb];
        piVar1 = (int *)(lVar10 + 0xc);
        do {
          iVar11 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar11 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar11 + -1 == 0) {
          *(undefined8 *)(lVar10 + 0x18) = 0;
          (**(code **)(*plVar5 + 0x20))();
        }
      }
      local_48 = local_50;
      if (local_50 == (long *)0x0) {
        FUN_00956dac(&local_50,lVar7 + 0x1a8);
      }
      else {
        local_48 = (long *)0x0;
      }
      if (plVar12 != (long *)0x0) {
        lVar7 = plVar12[0xb];
        piVar1 = (int *)(lVar7 + 0xc);
        do {
          iVar11 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar11 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar11 + -1 == 0) {
          *(undefined8 *)(lVar7 + 0x18) = 0;
          (**(code **)(*plVar12 + 0x20))(plVar12);
        }
      }
      plVar12 = local_50;
      if (local_48 != (long *)0x0) {
        lVar7 = local_48[0xb];
        piVar1 = (int *)(lVar7 + 0xc);
        do {
          iVar11 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar11 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar11 + -1 == 0) {
          *(undefined8 *)(lVar7 + 0x18) = 0;
          (**(code **)(*local_48 + 0x20))();
          plVar12 = local_50;
        }
      }
    }
    else {
      local_48 = (long *)0x0;
    }
    local_50 = plVar12;
    if (plVar12 == (long *)0x0) {
      uVar6 = 0;
    }
    else {
      if (local_58 == plVar12) {
        uVar6 = 1;
      }
      else {
        lVar7 = plVar12[0xb];
        local_60 = plVar12;
        if (*(undefined8 **)(lVar7 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl("","","",0);
        }
        if (*(long *)(lVar7 + 0x10) == 0) {
          uVar9 = (**(code **)**(undefined8 **)(lVar7 + 0x18))();
          *(undefined8 *)(lVar7 + 0x10) = uVar9;
        }
        piVar1 = (int *)(lVar7 + 0xc);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = *piVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        uVar6 = FUN_028a1440(param_1,&local_60);
        lVar7 = plVar12[0xb];
        piVar1 = (int *)(lVar7 + 0xc);
        do {
          iVar11 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar11 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar11 + -1 == 0) {
          *(undefined8 *)(lVar7 + 0x18) = 0;
          (**(code **)(*plVar12 + 0x20))(plVar12);
        }
      }
      if (local_50 != (long *)0x0) {
        lVar7 = local_50[0xb];
        piVar1 = (int *)(lVar7 + 0xc);
        do {
          iVar11 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar11 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar11 + -1 == 0) {
          *(undefined8 *)(lVar7 + 0x18) = 0;
          (**(code **)(*local_50 + 0x20))();
        }
      }
    }
  }
  if (local_58 != (long *)0x0) {
    lVar7 = local_58[0xb];
    piVar1 = (int *)(lVar7 + 0xc);
    do {
      iVar11 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar11 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar11 + -1 == 0) {
      *(undefined8 *)(lVar7 + 0x18) = 0;
      (**(code **)(*local_58 + 0x20))();
    }
  }
  *(undefined8 *)(param_1 + 0x210) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x204));
  return uVar6 & 1;
}


