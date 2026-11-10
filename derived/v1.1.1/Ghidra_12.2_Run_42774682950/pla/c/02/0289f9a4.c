/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0289f9a4; name: FUN_0289f9a4
 */


void FUN_0289f9a4(long param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  undefined1 auStack_b0 [104];
  long *local_48;
  
  lVar5 = nn::os::GetCurrentThread();
  plVar8 = (long *)(param_1 + 0x210);
  do {
    if (*plVar8 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x204));
        while (*plVar8 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *plVar8 = lVar5;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_0289fa0c;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar3) {
      *plVar8 = lVar5;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_0289fa0c:
  plVar8 = *(long **)(param_1 + 0x250);
  plVar9 = *(long **)(param_1 + 600);
  if (*(char *)param_2[1] == '\0') {
    if (plVar8 != plVar9) {
      plVar7 = (long *)*plVar8;
      while( true ) {
        if (plVar7 != (long *)0x0) {
          plVar1 = plVar7 + 10;
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *(int *)plVar1 = (int)*plVar1 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          local_48 = plVar7;
          FUN_028a3fa4(auStack_b0,&local_48);
          do {
            iVar4 = (int)*plVar1 + -1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *(int *)plVar1 = iVar4;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar4 == 0) {
            (**(code **)(*plVar7 + 0x10))(plVar7);
          }
        }
        plVar8 = plVar8 + 1;
        if (plVar8 == plVar9) break;
        plVar7 = (long *)*plVar8;
      }
    }
  }
  else if (plVar8 != plVar9) {
    do {
      if (*(long *)(*plVar8 + 0x158) == *param_2) goto LAB_0289fa7c;
      plVar8 = plVar8 + 1;
    } while (plVar9 != plVar8);
  }
  else {
LAB_0289fa7c:
    if ((plVar8 != plVar9) && (lVar5 = *plVar8, lVar5 != 0)) {
      lVar6 = nn::os::GetCurrentThread();
      plVar8 = (long *)(lVar5 + 0x98);
      do {
        if (*plVar8 != 0) {
          ClearExclusiveLocal();
          do {
            nn::os::WaitLightEvent((LightEventType *)(lVar5 + 0x8c));
            while (*plVar8 == 0) {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
              if (bVar3) {
                *plVar8 = lVar6;
                cVar2 = ExclusiveMonitorsStatus();
              }
              if (cVar2 == '\0') goto LAB_0289fb5c;
            }
            ClearExclusiveLocal();
          } while( true );
        }
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar3) {
          *plVar8 = lVar6;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
LAB_0289fb5c:
      *(undefined1 *)(lVar5 + 0x12a) = 0;
      *(undefined8 *)(lVar5 + 0x98) = 0;
      nn::os::SignalLightEvent((LightEventType *)(lVar5 + 0x8c));
    }
  }
  FUN_028a4024(auStack_b0);
  *(undefined8 *)(param_1 + 0x210) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x204));
  return;
}


