/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d11528; name: FUN_00d11528
 */


/* WARNING: Removing unreachable block (ram,0x00d117c4) */

long FUN_00d11528(long param_1)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  plVar6 = (long *)(param_1 + 0x18);
  lVar10 = *plVar6;
  lVar5 = nn::os::GetCurrentThread();
  if (lVar5 == lVar10) {
    bVar3 = false;
  }
  else {
    lVar5 = nn::os::GetCurrentThread();
    do {
      if (*plVar6 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xc));
          while (*plVar6 == 0) {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar3) {
              *plVar6 = lVar5;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') goto LAB_00d11598;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar5;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
LAB_00d11598:
    bVar3 = true;
  }
  lVar5 = nn::os::GetCurrentThread();
  plVar6 = (long *)(param_1 + 0x30);
  do {
    if (*plVar6 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x24));
        while (*plVar6 == 0) {
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar4) {
            *plVar6 = lVar5;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_00d115e4;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar2 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar4) {
      *plVar6 = lVar5;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_00d115e4:
  plVar6 = (long *)FUN_00d11850(*(undefined8 *)(param_1 + 0xb0),*(undefined8 *)(param_1 + 0xb8));
  if ((*(long **)(param_1 + 0xb8) == plVar6) || (*plVar6 == 0)) {
    plVar6 = (long *)FUN_00d11850(*(undefined8 *)(param_1 + 0x78),*(undefined8 *)(param_1 + 0x80));
    if (*(long **)(param_1 + 0x80) == plVar6) {
      lVar5 = 0;
    }
    else {
      lVar5 = 0;
      if (*plVar6 != 0) {
        lVar5 = *plVar6 + -0x48;
      }
    }
    bVar4 = lVar5 == 0;
  }
  else {
    bVar4 = false;
    lVar5 = *plVar6 + -0x48;
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x24));
  if (bVar3) {
    *(undefined8 *)(param_1 + 0x18) = 0;
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 0xc));
  }
  if (!bVar4) {
    return lVar5;
  }
  lVar5 = nn::os::GetCurrentThread();
  plVar6 = (long *)(param_1 + 0x50);
  do {
    lVar10 = *plVar6;
    lVar1 = *(long *)(param_1 + 0x58);
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar3) {
      *plVar6 = lVar10;
      *(long *)(param_1 + 0x58) = lVar1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  do {
    while ((lVar10 != 0 && (lVar5 != lVar10))) {
      nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x44));
      do {
        lVar10 = *plVar6;
        lVar1 = *(long *)(param_1 + 0x58);
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = lVar10;
          *(long *)(param_1 + 0x58) = lVar1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    while( true ) {
      if (*plVar6 != lVar10 || *(long *)(param_1 + 0x58) != lVar1) break;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar10;
        *(long *)(param_1 + 0x54) = lVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        plVar7 = (long *)(param_1 + 0x70);
        lVar10 = *plVar7;
        lVar5 = nn::os::GetCurrentThread();
        if (lVar5 != lVar10) {
          lVar5 = nn::os::GetCurrentThread();
          goto LAB_00d116e8;
        }
        plVar7 = (long *)FUN_00d11850(*(undefined8 *)(param_1 + 0xe8),
                                      *(undefined8 *)(param_1 + 0xf0));
        if (*(long **)(param_1 + 0xf0) == plVar7) {
          lVar5 = 0;
        }
        else {
          lVar5 = 0;
          if (*plVar7 != 0) {
            lVar5 = *plVar7 + -0x48;
          }
        }
        goto LAB_00d11780;
      }
    }
    ClearExclusiveLocal();
    lVar10 = *plVar6;
    lVar1 = *(long *)(param_1 + 0x58);
  } while( true );
  while( true ) {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar3) {
      *plVar7 = lVar5;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') break;
LAB_00d116e8:
    if (*plVar7 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 100));
        while (*plVar7 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar3) {
            *plVar7 = lVar5;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_00d1174c;
        }
        ClearExclusiveLocal();
      } while( true );
    }
  }
LAB_00d1174c:
  plVar7 = (long *)FUN_00d11850(*(undefined8 *)(param_1 + 0xe8),*(undefined8 *)(param_1 + 0xf0));
  if (*(long **)(param_1 + 0xf0) == plVar7) {
    lVar5 = 0;
  }
  else {
    lVar5 = 0;
    if (*plVar7 != 0) {
      lVar5 = *plVar7 + -0x48;
    }
  }
  *(undefined8 *)(param_1 + 0x70) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 100));
LAB_00d11780:
  do {
    lVar10 = *plVar6;
    lVar1 = *(long *)(param_1 + 0x58);
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar3) {
      *plVar6 = lVar10;
      *(long *)(param_1 + 0x58) = lVar1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  while( true ) {
    lVar8 = *plVar6;
    lVar9 = *(long *)(param_1 + 0x58);
    if (lVar8 != lVar10 || lVar9 != lVar1) break;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar3) {
      *plVar6 = lVar10;
      *(long *)(param_1 + 0x54) = lVar1 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') goto LAB_00d11804;
  }
  ClearExclusiveLocal();
  do {
    do {
      lVar10 = *plVar6;
      if (lVar10 != lVar8 || *(long *)(param_1 + 0x58) != lVar9) {
        bVar3 = false;
        ClearExclusiveLocal();
        goto LAB_00d117d0;
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar8;
        *(long *)(param_1 + 0x54) = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    bVar3 = true;
LAB_00d117d0:
    lVar8 = lVar10;
    lVar9 = *(long *)(param_1 + 0x58);
  } while (!bVar3);
LAB_00d11804:
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x44));
  return lVar5;
}


