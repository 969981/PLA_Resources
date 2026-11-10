/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0289fbb4; name: FUN_0289fbb4
 */


byte FUN_0289fbb4(long param_1,long *param_2)

{
  long *plVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  byte *local_b0 [12];
  byte local_4c [4];
  long *local_48;
  
  lVar6 = nn::os::GetCurrentThread();
  plVar9 = (long *)(param_1 + 0x210);
  do {
    if (*plVar9 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x204));
        while (*plVar9 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar4) {
            *plVar9 = lVar6;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_0289fc1c;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar4) {
      *plVar9 = lVar6;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_0289fc1c:
  local_4c[0] = 0;
  local_b0[0] = local_4c;
  plVar9 = *(long **)(param_1 + 0x250);
  plVar10 = *(long **)(param_1 + 600);
  if (*(char *)param_2[1] == '\0') {
    if (plVar9 != plVar10) {
      do {
        plVar8 = (long *)*plVar9;
        if (plVar8 != (long *)0x0) {
          plVar1 = plVar8 + 10;
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *(int *)plVar1 = (int)*plVar1 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          local_48 = plVar8;
          FUN_028a4030(local_b0,&local_48);
          do {
            iVar5 = (int)*plVar1 + -1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *(int *)plVar1 = iVar5;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar5 == 0) {
            (**(code **)(*plVar8 + 0x10))(plVar8);
          }
        }
        plVar9 = plVar9 + 1;
      } while (plVar9 != plVar10);
    }
  }
  else if (plVar9 == plVar10) {
LAB_0289fc98:
    if ((plVar9 != plVar10) && (lVar6 = *plVar9, lVar6 != 0)) {
      lVar7 = nn::os::GetCurrentThread();
      plVar9 = (long *)(lVar6 + 0x98);
      do {
        if (*plVar9 != 0) {
          ClearExclusiveLocal();
          do {
            nn::os::WaitLightEvent((LightEventType *)(lVar6 + 0x8c));
            while (*plVar9 == 0) {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
              if (bVar4) {
                *plVar9 = lVar7;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 == '\0') goto LAB_0289fd60;
            }
            ClearExclusiveLocal();
          } while( true );
        }
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar4) {
          *plVar9 = lVar7;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
LAB_0289fd60:
      bVar2 = *(byte *)(lVar6 + 0x12a);
      *(undefined8 *)(lVar6 + 0x98) = 0;
      nn::os::SignalLightEvent((LightEventType *)(lVar6 + 0x8c));
      *local_b0[0] = *local_b0[0] | bVar2;
    }
  }
  else {
    do {
      if (*(long *)(*plVar9 + 0x158) == *param_2) goto LAB_0289fc98;
      plVar9 = plVar9 + 1;
    } while (plVar10 != plVar9);
  }
  FUN_028a40d0(local_b0);
  bVar2 = local_4c[0];
  *(undefined8 *)(param_1 + 0x210) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x204));
  return bVar2;
}


