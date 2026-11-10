/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 009bd48c; name: FUN_009bd48c
 */


/* WARNING: Removing unreachable block (ram,0x009bd6a8) */

long FUN_009bd48c(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  bool bVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  plVar1 = (long *)(param_1 + 0x18);
  lVar9 = *plVar1;
  lVar7 = nn::os::GetCurrentThread();
  if (lVar7 == lVar9) {
    bVar5 = false;
  }
  else {
    lVar7 = nn::os::GetCurrentThread();
    do {
      if (*plVar1 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xc));
          while (*plVar1 == 0) {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar5) {
              *plVar1 = lVar7;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') goto LAB_009bd4fc;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar7;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
LAB_009bd4fc:
    bVar5 = true;
  }
  lVar7 = nn::os::GetCurrentThread();
  plVar1 = (long *)(param_1 + 0x30);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x24));
        while (*plVar1 == 0) {
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *plVar1 = lVar7;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_009bd548;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar4 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar7;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_009bd548:
  lVar7 = FUN_009bd740(param_1 + 0xb0);
  if (lVar7 == 0) {
    lVar7 = FUN_009bd740(param_1 + 0x78);
    bVar6 = lVar7 == 0;
  }
  else {
    bVar6 = false;
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x24));
  if (bVar5) {
    *(undefined8 *)(param_1 + 0x18) = 0;
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 0xc));
  }
  if (!bVar6) {
    return lVar7;
  }
  lVar7 = nn::os::GetCurrentThread();
  plVar1 = (long *)(param_1 + 0x50);
  do {
    lVar9 = *plVar1;
    lVar8 = *(long *)(param_1 + 0x58);
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar9;
      *(long *)(param_1 + 0x58) = lVar8;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  do {
    while ((lVar9 != 0 && (lVar7 != lVar9))) {
      nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x44));
      do {
        lVar9 = *plVar1;
        lVar8 = *(long *)(param_1 + 0x58);
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = lVar9;
          *(long *)(param_1 + 0x58) = lVar8;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    while( true ) {
      if (*plVar1 != lVar9 || *(long *)(param_1 + 0x58) != lVar8) break;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar9;
        *(long *)(param_1 + 0x54) = lVar8 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 == '\0') {
        plVar2 = (long *)(param_1 + 0x70);
        lVar9 = *plVar2;
        lVar7 = nn::os::GetCurrentThread();
        if (lVar7 == lVar9) {
          lVar7 = FUN_009bd740(param_1 + 0xe8);
          goto LAB_009bd674;
        }
        lVar7 = nn::os::GetCurrentThread();
        goto LAB_009bd61c;
      }
    }
    ClearExclusiveLocal();
    lVar9 = *plVar1;
    lVar8 = *(long *)(param_1 + 0x58);
  } while( true );
  while( true ) {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar5) {
      *plVar2 = lVar7;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') break;
LAB_009bd61c:
    if (*plVar2 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 100));
        while (*plVar2 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar5) {
            *plVar2 = lVar7;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_009bd658;
        }
        ClearExclusiveLocal();
      } while( true );
    }
  }
LAB_009bd658:
  lVar7 = FUN_009bd740(param_1 + 0xe8);
  *(undefined8 *)(param_1 + 0x70) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 100));
LAB_009bd674:
  do {
    lVar9 = *plVar1;
    lVar8 = *(long *)(param_1 + 0x58);
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar9;
      *(long *)(param_1 + 0x58) = lVar8;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  while( true ) {
    if (*plVar1 != lVar9 || *(long *)(param_1 + 0x58) != lVar8) break;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar9;
      *(long *)(param_1 + 0x54) = lVar8 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_009bd6b8;
  }
  ClearExclusiveLocal();
  lVar9 = *plVar1;
  lVar8 = *(long *)(param_1 + 0x58);
  do {
    do {
      lVar3 = *plVar1;
      if (lVar3 != lVar9 || *(long *)(param_1 + 0x58) != lVar8) {
        bVar5 = false;
        ClearExclusiveLocal();
        goto LAB_009bd720;
      }
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar9;
        *(long *)(param_1 + 0x54) = lVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    bVar5 = true;
LAB_009bd720:
    lVar9 = lVar3;
    lVar8 = *(long *)(param_1 + 0x58);
  } while (!bVar5);
LAB_009bd6b8:
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x44));
  return lVar7;
}


