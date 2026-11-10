/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0289fdcc; name: FUN_0289fdcc
 */


void FUN_0289fdcc(undefined4 param_1,long param_2,long *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  undefined4 *apuStack_c0 [13];
  undefined4 local_54;
  long *local_48;
  
  local_54 = param_1;
  lVar6 = nn::os::GetCurrentThread();
  plVar9 = (long *)(param_2 + 0x210);
  do {
    if (*plVar9 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x204));
        while (*plVar9 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar3) {
            *plVar9 = lVar6;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_0289fe3c;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar3) {
      *plVar9 = lVar6;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_0289fe3c:
  uVar5 = local_54;
  apuStack_c0[0] = &local_54;
  plVar9 = *(long **)(param_2 + 0x250);
  plVar10 = *(long **)(param_2 + 600);
  if (*(char *)param_3[1] == '\0') {
    if (plVar9 != plVar10) {
      do {
        plVar8 = (long *)*plVar9;
        if (plVar8 != (long *)0x0) {
          plVar1 = plVar8 + 10;
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *(int *)plVar1 = (int)*plVar1 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          local_48 = plVar8;
          FUN_028a40ec(apuStack_c0,&local_48);
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
            (**(code **)(*plVar8 + 0x10))(plVar8);
          }
        }
        plVar9 = plVar9 + 1;
      } while (plVar9 != plVar10);
    }
  }
  else if (plVar9 == plVar10) {
LAB_0289feb4:
    if ((plVar9 != plVar10) && (lVar6 = *plVar9, lVar6 != 0)) {
      lVar7 = nn::os::GetCurrentThread();
      plVar9 = (long *)(lVar6 + 0x98);
      do {
        if (*plVar9 != 0) {
          ClearExclusiveLocal();
          do {
            nn::os::WaitLightEvent((LightEventType *)(lVar6 + 0x8c));
            while (*plVar9 == 0) {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
              if (bVar3) {
                *plVar9 = lVar7;
                cVar2 = ExclusiveMonitorsStatus();
              }
              if (cVar2 == '\0') goto LAB_0289ff80;
            }
            ClearExclusiveLocal();
          } while( true );
        }
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar3) {
          *plVar9 = lVar7;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
LAB_0289ff80:
      *(undefined4 *)(lVar6 + 0x130) = uVar5;
      *(undefined8 *)(lVar6 + 0x98) = 0;
      nn::os::SignalLightEvent((LightEventType *)(lVar6 + 0x8c));
    }
  }
  else {
    do {
      if (*(long *)(*plVar9 + 0x158) == *param_3) goto LAB_0289feb4;
      plVar9 = plVar9 + 1;
    } while (plVar10 != plVar9);
  }
  FUN_028a417c(apuStack_c0);
  *(undefined8 *)(param_2 + 0x210) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_2 + 0x204));
  return;
}


