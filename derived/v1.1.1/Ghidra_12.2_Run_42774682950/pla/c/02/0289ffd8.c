/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0289ffd8; name: FUN_0289ffd8
 */


undefined4 FUN_0289ffd8(long param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  undefined4 uVar7;
  
  lVar3 = nn::os::GetCurrentThread();
  plVar5 = (long *)(param_1 + 0x210);
  do {
    if (*plVar5 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x204));
        while (*plVar5 == 0) {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar2) {
            *plVar5 = lVar3;
            cVar1 = ExclusiveMonitorsStatus();
          }
          if (cVar1 == '\0') goto LAB_028a0040;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar2) {
      *plVar5 = lVar3;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
LAB_028a0040:
  plVar5 = *(long **)(param_1 + 0x250);
  uVar7 = 0x3f800000;
  plVar6 = *(long **)(param_1 + 600);
  if (plVar5 == plVar6) {
LAB_028a0078:
    if ((plVar5 != plVar6) && (lVar3 = *plVar5, lVar3 != 0)) {
      lVar4 = nn::os::GetCurrentThread();
      plVar5 = (long *)(lVar3 + 0x98);
      do {
        if (*plVar5 != 0) {
          ClearExclusiveLocal();
          do {
            nn::os::WaitLightEvent((LightEventType *)(lVar3 + 0x8c));
            while (*plVar5 == 0) {
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
              if (bVar2) {
                *plVar5 = lVar4;
                cVar1 = ExclusiveMonitorsStatus();
              }
              if (cVar1 == '\0') goto LAB_028a00d4;
            }
            ClearExclusiveLocal();
          } while( true );
        }
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = lVar4;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
LAB_028a00d4:
      uVar7 = *(undefined4 *)(lVar3 + 0x130);
      *(undefined8 *)(lVar3 + 0x98) = 0;
      nn::os::SignalLightEvent((LightEventType *)(lVar3 + 0x8c));
    }
  }
  else {
    do {
      if (*(long *)(*plVar5 + 0x158) == *param_2) goto LAB_028a0078;
      plVar5 = plVar5 + 1;
    } while (plVar6 != plVar5);
  }
  *(undefined8 *)(param_1 + 0x210) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x204));
  return uVar7;
}


