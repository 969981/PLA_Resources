/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b68f84; name: FUN_02b68f84
 */


/* WARNING: Removing unreachable block (ram,0x02b6906c) */

long FUN_02b68f84(long param_1,short param_2)

{
  long *plVar1;
  long lVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar6 = nn::os::GetCurrentThread();
  plVar1 = (long *)(param_1 + 0x470);
  do {
    lVar7 = *plVar1;
    lVar8 = *(long *)(param_1 + 0x478);
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar7;
      *(long *)(param_1 + 0x478) = lVar8;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
joined_r0x02b68fb8:
  while ((lVar7 != 0 && (lVar6 != lVar7))) {
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x464));
    do {
      lVar7 = *plVar1;
      lVar8 = *(long *)(param_1 + 0x478);
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar7;
        *(long *)(param_1 + 0x478) = lVar8;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  do {
    if (*plVar1 != lVar7 || *(long *)(param_1 + 0x478) != lVar8) goto LAB_02b68fc0;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar7;
      *(long *)(param_1 + 0x474) = lVar8 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  sVar3 = *(short *)(*(long *)(param_1 + 200) + (long)param_2 * 2);
  lVar6 = *(long *)(param_1 + 0x238);
  do {
    lVar7 = *plVar1;
    lVar8 = *(long *)(param_1 + 0x478);
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar7;
      *(long *)(param_1 + 0x478) = lVar8;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  while( true ) {
    if (*plVar1 != lVar7 || *(long *)(param_1 + 0x478) != lVar8) break;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar7;
      *(long *)(param_1 + 0x474) = lVar8 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_02b6907c;
  }
  ClearExclusiveLocal();
  lVar7 = *plVar1;
  lVar8 = *(long *)(param_1 + 0x478);
  do {
    do {
      lVar2 = *plVar1;
      if (lVar2 != lVar7 || *(long *)(param_1 + 0x478) != lVar8) {
        bVar5 = false;
        ClearExclusiveLocal();
        goto LAB_02b690c4;
      }
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar7;
        *(long *)(param_1 + 0x474) = lVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    bVar5 = true;
LAB_02b690c4:
    lVar7 = lVar2;
    lVar8 = *(long *)(param_1 + 0x478);
  } while (!bVar5);
LAB_02b6907c:
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x464));
  return lVar6 + (long)sVar3 * 0x30;
LAB_02b68fc0:
  ClearExclusiveLocal();
  lVar7 = *plVar1;
  lVar8 = *(long *)(param_1 + 0x478);
  goto joined_r0x02b68fb8;
}


