/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00bd8364; name: FUN_00bd8364
 */


void FUN_00bd8364(long param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  
  uVar5 = FUN_00bd9518(*(long *)(param_1 + 0x68) + 0x2c8);
  if ((uVar5 & 1) != 0) {
    return;
  }
  lVar6 = nn::os::GetCurrentThread();
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
            *plVar1 = lVar6;
            *(undefined8 *)(param_1 + 0xa8) = 0;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_00bd83e0;
        }
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar6;
      *(undefined8 *)(param_1 + 0xa8) = 0;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_00bd83e0:
  FUN_00bd97f4(*(long *)(param_1 + 0x70) + 0x2c8,param_2);
  plVar1 = (long *)(param_1 + 0xa0);
  do {
    lVar6 = *plVar1;
    lVar7 = *(long *)(param_1 + 0xa8);
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar6;
      *(long *)(param_1 + 0xa8) = lVar7;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  do {
    if (*plVar1 != lVar6 || *(long *)(param_1 + 0xa8) != lVar7) {
      ClearExclusiveLocal();
      lVar6 = *plVar1;
      lVar7 = *(long *)(param_1 + 0xa8);
      goto LAB_00bd844c;
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = 0;
      *(long *)(param_1 + 0xa4) = lVar7;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  goto LAB_00bd8438;
LAB_00bd844c:
  do {
    lVar2 = *plVar1;
    if (lVar2 == lVar6 && *(long *)(param_1 + 0xa8) == lVar7) {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = 0;
        *(long *)(param_1 + 0xa4) = lVar7;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 != '\0') goto LAB_00bd844c;
      bVar4 = true;
    }
    else {
      bVar4 = false;
      ClearExclusiveLocal();
    }
    lVar6 = lVar2;
    lVar7 = *(long *)(param_1 + 0xa8);
  } while (!bVar4);
LAB_00bd8438:
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x94));
  return;
}


