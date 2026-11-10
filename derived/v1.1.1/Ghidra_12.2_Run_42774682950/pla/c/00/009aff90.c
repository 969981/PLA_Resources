/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 009aff90; name: FUN_009aff90
 */


/* WARNING: Removing unreachable block (ram,0x009b0150) */

long FUN_009aff90(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  bool bVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  plVar1 = (long *)(param_1 + 0x18);
  lVar9 = *plVar1;
  lVar7 = nn::os::GetCurrentThread();
  if (lVar7 == lVar9) {
    bVar4 = false;
  }
  else {
    lVar7 = nn::os::GetCurrentThread();
    bVar4 = true;
    do {
      if (*plVar1 != 0) {
        bVar4 = true;
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xc));
          while (*plVar1 == 0) {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar6) {
              *plVar1 = lVar7;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 == '\0') goto LAB_009affc0;
          }
        } while( true );
      }
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar7;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
LAB_009affc0:
  lVar7 = nn::os::GetCurrentThread();
  plVar1 = (long *)(param_1 + 0x30);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x24));
        while (*plVar1 == 0) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *plVar1 = lVar7;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_009b0008;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar7;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_009b0008:
  lVar7 = FUN_009b0230(param_1 + 0xb0);
  if (lVar7 == 0) {
    lVar7 = FUN_009b0230(param_1 + 0x78);
    bVar6 = lVar7 == 0;
  }
  else {
    bVar6 = false;
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x24));
  if (bVar4) {
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
    cVar5 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar9;
      *(long *)(param_1 + 0x58) = lVar8;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  do {
    while ((lVar9 != 0 && (lVar7 != lVar9))) {
      nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x44));
      do {
        lVar9 = *plVar1;
        lVar8 = *(long *)(param_1 + 0x58);
        cVar5 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar9;
          *(long *)(param_1 + 0x58) = lVar8;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    while( true ) {
      if (*plVar1 != lVar9 || *(long *)(param_1 + 0x58) != lVar8) break;
      cVar5 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar9;
        *(long *)(param_1 + 0x54) = lVar8 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
      if (cVar5 == '\0') {
        plVar2 = (long *)(param_1 + 0x70);
        lVar9 = *plVar2;
        lVar7 = nn::os::GetCurrentThread();
        if (lVar7 != lVar9) {
          lVar7 = nn::os::GetCurrentThread();
          goto LAB_009b01e0;
        }
        lVar7 = FUN_009b0230(param_1 + 0xe8);
        goto LAB_009b011c;
      }
    }
    ClearExclusiveLocal();
    lVar9 = *plVar1;
    lVar8 = *(long *)(param_1 + 0x58);
  } while( true );
  while( true ) {
    cVar5 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar4) {
      *plVar2 = lVar7;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 == '\0') break;
LAB_009b01e0:
    if (*plVar2 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 100));
        while (*plVar2 == 0) {
          cVar5 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *plVar2 = lVar7;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_009b0210;
        }
      } while( true );
    }
  }
LAB_009b0210:
  lVar7 = FUN_009b0230(param_1 + 0xe8);
  *(undefined8 *)(param_1 + 0x70) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 100));
LAB_009b011c:
  do {
    lVar9 = *plVar1;
    lVar8 = *(long *)(param_1 + 0x58);
    cVar5 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar9;
      *(long *)(param_1 + 0x58) = lVar8;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  while( true ) {
    if (*plVar1 != lVar9 || *(long *)(param_1 + 0x58) != lVar8) break;
    cVar5 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar9;
      *(long *)(param_1 + 0x54) = lVar8 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 == '\0') goto LAB_009b0160;
  }
  ClearExclusiveLocal();
  lVar9 = *plVar1;
  lVar8 = *(long *)(param_1 + 0x58);
  do {
    do {
      lVar3 = *plVar1;
      if (lVar3 != lVar9 || *(long *)(param_1 + 0x58) != lVar8) {
        bVar4 = false;
        ClearExclusiveLocal();
        goto LAB_009b01c8;
      }
      cVar5 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar9;
        *(long *)(param_1 + 0x54) = lVar8 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    bVar4 = true;
LAB_009b01c8:
    lVar9 = lVar3;
    lVar8 = *(long *)(param_1 + 0x58);
  } while (!bVar4);
LAB_009b0160:
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x44));
  return lVar7;
}


