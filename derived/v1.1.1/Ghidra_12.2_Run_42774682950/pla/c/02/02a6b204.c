/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a6b204; name: FUN_02a6b204
 */


void FUN_02a6b204(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  
  lVar5 = nn::os::GetCurrentThread();
  plVar7 = (long *)(param_1 + 0x60);
  do {
    if (*plVar7 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x54));
        while (*plVar7 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar4) {
            *plVar7 = lVar5;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_02a6b26c;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar4) {
      *plVar7 = lVar5;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_02a6b26c:
  plVar7 = *(long **)(param_1 + 0xd0);
  plVar1 = *(long **)(param_1 + 0xd8);
  if (plVar7 != plVar1) {
    do {
      lVar5 = *plVar7;
      puVar2 = *(undefined8 **)(lVar5 + 0x168);
      for (puVar9 = *(undefined8 **)(lVar5 + 0x160); puVar9 != puVar2; puVar9 = puVar9 + 1) {
        FUN_02a71838(lVar5 + 0x68,*puVar9);
      }
      puVar9 = *(undefined8 **)(lVar5 + 0x198);
      puVar2 = *(undefined8 **)(lVar5 + 0x1a0);
      if (puVar9 != puVar2) {
        do {
          puVar8 = puVar9 + 1;
          FUN_02a71970(lVar5 + 0x68,*puVar9);
          puVar9 = puVar8;
        } while (puVar2 != puVar8);
        puVar9 = *(undefined8 **)(lVar5 + 0x198);
      }
      plVar7 = plVar7 + 1;
      *(undefined8 **)(lVar5 + 0x1a0) = puVar9;
      *(undefined8 *)(lVar5 + 0x168) = *(undefined8 *)(lVar5 + 0x160);
    } while (plVar7 != plVar1);
    plVar7 = *(long **)(param_1 + 0xd0);
    plVar1 = *(long **)(param_1 + 0xd8);
    if (plVar7 != plVar1) {
      do {
        plVar6 = plVar7 + 1;
        FUN_02a708e8(*plVar7,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
        plVar7 = plVar6;
      } while (plVar1 != plVar6);
      plVar7 = *(long **)(param_1 + 0xd0);
    }
  }
  *(long **)(param_1 + 0xd8) = plVar7;
  *(undefined8 *)(param_1 + 0x60) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x54));
  return;
}


