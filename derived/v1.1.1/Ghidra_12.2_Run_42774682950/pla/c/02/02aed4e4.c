/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02aed4e4; name: FUN_02aed4e4
 */


void FUN_02aed4e4(long param_1,undefined8 param_2,undefined4 *param_3)

{
  long *plVar1;
  long lVar2;
  undefined4 uVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  undefined4 *puVar7;
  long lVar8;
  
  lVar6 = nn::os::GetCurrentThread();
  plVar1 = (long *)(param_1 + 0x290);
  do {
    if (*plVar1 != 0 || *(long *)(param_1 + 0x298) != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x284));
        while (*plVar1 == 0 && *(long *)(param_1 + 0x298) == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = lVar6;
            *(undefined8 *)(param_1 + 0x298) = 0;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_02aed554;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar6;
      *(undefined8 *)(param_1 + 0x298) = 0;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_02aed554:
  uVar3 = *param_3;
  puVar7 = (undefined4 *)FUN_00aef474(param_1 + 8,param_2);
  *puVar7 = uVar3;
  do {
    lVar6 = *plVar1;
    lVar8 = *(long *)(param_1 + 0x298);
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar6;
      *(long *)(param_1 + 0x298) = lVar8;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  do {
    if (*plVar1 != lVar6 || *(long *)(param_1 + 0x298) != lVar8) {
      ClearExclusiveLocal();
      lVar6 = *plVar1;
      lVar8 = *(long *)(param_1 + 0x298);
      goto LAB_02aed5c4;
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = 0;
      *(long *)(param_1 + 0x294) = lVar8;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  goto LAB_02aed5ac;
LAB_02aed5c4:
  do {
    lVar2 = *plVar1;
    if (lVar2 == lVar6 && *(long *)(param_1 + 0x298) == lVar8) {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = 0;
        *(long *)(param_1 + 0x294) = lVar8;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 != '\0') goto LAB_02aed5c4;
      bVar5 = true;
    }
    else {
      bVar5 = false;
      ClearExclusiveLocal();
    }
    lVar6 = lVar2;
    lVar8 = *(long *)(param_1 + 0x298);
  } while (!bVar5);
LAB_02aed5ac:
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x284));
  return;
}


