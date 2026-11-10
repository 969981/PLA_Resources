/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b69224; name: FUN_02b69224
 */


/* WARNING: Removing unreachable block (ram,0x02b69314) */

undefined1  [16] FUN_02b69224(long param_1,short param_2)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  undefined1 auVar5 [16];
  long lVar6;
  long lVar7;
  
  lVar6 = nn::os::GetCurrentThread();
  plVar1 = (long *)(param_1 + 0x470);
  do {
    lVar7 = *plVar1;
    lVar2 = *(long *)(param_1 + 0x478);
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar7;
      *(long *)(param_1 + 0x478) = lVar2;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
joined_r0x02b69258:
  while ((lVar7 != 0 && (lVar6 != lVar7))) {
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x464));
    do {
      lVar7 = *plVar1;
      lVar2 = *(long *)(param_1 + 0x478);
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar7;
        *(long *)(param_1 + 0x478) = lVar2;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  do {
    if (*plVar1 != lVar7 || *(long *)(param_1 + 0x478) != lVar2) goto LAB_02b69260;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar7;
      *(long *)(param_1 + 0x474) = lVar2 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  auVar5 = *(undefined1 (*) [16])
            (*(long *)(param_1 + 0x270) +
            (long)*(short *)(*(long *)(param_1 + 200) + (long)param_2 * 2) * 0x30);
  do {
    lVar6 = *plVar1;
    lVar7 = *(long *)(param_1 + 0x478);
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar6;
      *(long *)(param_1 + 0x478) = lVar7;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  while( true ) {
    if (*plVar1 != lVar6 || *(long *)(param_1 + 0x478) != lVar7) break;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar6;
      *(long *)(param_1 + 0x474) = lVar7 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') goto LAB_02b69324;
  }
  ClearExclusiveLocal();
  lVar6 = *plVar1;
  lVar7 = *(long *)(param_1 + 0x478);
  do {
    do {
      lVar2 = *plVar1;
      if (lVar2 != lVar6 || *(long *)(param_1 + 0x478) != lVar7) {
        bVar4 = false;
        ClearExclusiveLocal();
        goto LAB_02b6936c;
      }
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar6;
        *(long *)(param_1 + 0x474) = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    bVar4 = true;
LAB_02b6936c:
    lVar6 = lVar2;
    lVar7 = *(long *)(param_1 + 0x478);
  } while (!bVar4);
LAB_02b69324:
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x464));
  return auVar5;
LAB_02b69260:
  ClearExclusiveLocal();
  lVar7 = *plVar1;
  lVar2 = *(long *)(param_1 + 0x478);
  goto joined_r0x02b69258;
}


