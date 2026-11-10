/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00b7db40; name: FUN_00b7db40
 */


void FUN_00b7db40(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = nn::os::GetCurrentThread();
  plVar1 = (long *)(param_1 + 0xa0);
  do {
    if (*plVar1 != 0 || *(long *)(param_1 + 0xa8) != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x94));
        while (*plVar1 == 0 && *(long *)(param_1 + 0xa8) == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar5;
            *(undefined8 *)(param_1 + 0xa8) = 0;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_00b7dba4;
        }
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar5;
      *(undefined8 *)(param_1 + 0xa8) = 0;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_00b7dba4:
  FUN_00b7dc50(*(long *)(param_1 + 0x70) + 0x1f8,param_2,param_3);
  do {
    lVar5 = *plVar1;
    lVar6 = *(long *)(param_1 + 0xa8);
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar5;
      *(long *)(param_1 + 0xa8) = lVar6;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  do {
    if (*plVar1 != lVar5 || *(long *)(param_1 + 0xa8) != lVar6) {
      ClearExclusiveLocal();
      lVar5 = *plVar1;
      lVar6 = *(long *)(param_1 + 0xa8);
      goto LAB_00b7dc14;
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = 0;
      *(long *)(param_1 + 0xa4) = lVar6;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  goto LAB_00b7dbfc;
LAB_00b7dc14:
  do {
    lVar2 = *plVar1;
    if (lVar2 == lVar5 && *(long *)(param_1 + 0xa8) == lVar6) {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = 0;
        *(long *)(param_1 + 0xa4) = lVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 != '\0') goto LAB_00b7dc14;
      bVar4 = true;
    }
    else {
      bVar4 = false;
      ClearExclusiveLocal();
    }
    lVar5 = lVar2;
    lVar6 = *(long *)(param_1 + 0xa8);
  } while (!bVar4);
LAB_00b7dbfc:
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x94));
  return;
}


