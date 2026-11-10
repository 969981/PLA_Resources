/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 009b1360; name: FUN_009b1360
 */


long FUN_009b1360(long param_1)

{
  long lVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  
  plVar10 = (long *)(param_1 + 0x18);
  lVar9 = *plVar10;
  lVar6 = nn::os::GetCurrentThread();
  if (lVar6 == lVar9) {
    bVar4 = false;
  }
  else {
    lVar6 = nn::os::GetCurrentThread();
    do {
      if (*plVar10 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xc));
          while (*plVar10 == 0) {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
            if (bVar4) {
              *plVar10 = lVar6;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') goto LAB_009b13d0;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *plVar10 = lVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
LAB_009b13d0:
    bVar4 = true;
  }
  lVar6 = nn::os::GetCurrentThread();
  plVar10 = (long *)(param_1 + 0x30);
  do {
    if (*plVar10 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x24));
        while (*plVar10 == 0) {
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar5) {
            *plVar10 = lVar6;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_009b141c;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar3 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar5) {
      *plVar10 = lVar6;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_009b141c:
  plVar10 = *(long **)(param_1 + 0xb0);
  plVar11 = *(long **)(param_1 + 0xb8);
  if (plVar10 != plVar11) {
    do {
      uVar7 = FUN_009b16c8(plVar10);
      if ((uVar7 & 1) != 0) goto LAB_009b1444;
      plVar10 = plVar10 + 1;
    } while (plVar11 != plVar10);
    plVar10 = plVar11;
LAB_009b1444:
    if ((plVar10 != *(long **)(param_1 + 0xb8)) && (*plVar10 != 0)) {
      bVar5 = false;
      lVar6 = *plVar10 + -0x48;
      goto LAB_009b1490;
    }
  }
  plVar10 = *(long **)(param_1 + 0x78);
  plVar11 = *(long **)(param_1 + 0x80);
  if (plVar10 == plVar11) {
LAB_009b1484:
    lVar6 = 0;
  }
  else {
    do {
      uVar7 = FUN_009b16c8(plVar10);
      if ((uVar7 & 1) != 0) goto LAB_009b1478;
      plVar10 = plVar10 + 1;
    } while (plVar11 != plVar10);
    plVar10 = plVar11;
LAB_009b1478:
    if (plVar10 == *(long **)(param_1 + 0x80)) goto LAB_009b1484;
    lVar6 = 0;
    if (*plVar10 != 0) {
      lVar6 = *plVar10 + -0x48;
    }
  }
  bVar5 = lVar6 == 0;
LAB_009b1490:
  *(undefined8 *)(param_1 + 0x30) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x24));
  if (bVar4) {
    *(undefined8 *)(param_1 + 0x18) = 0;
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 0xc));
  }
  if (!bVar5) {
    return lVar6;
  }
  lVar6 = nn::os::GetCurrentThread();
  plVar10 = (long *)(param_1 + 0x50);
  do {
    lVar9 = *plVar10;
    lVar8 = *(long *)(param_1 + 0x58);
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar4) {
      *plVar10 = lVar9;
      *(long *)(param_1 + 0x58) = lVar8;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  do {
    while ((lVar9 != 0 && (lVar6 != lVar9))) {
      nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x44));
      do {
        lVar9 = *plVar10;
        lVar8 = *(long *)(param_1 + 0x58);
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar4) {
          *plVar10 = lVar9;
          *(long *)(param_1 + 0x58) = lVar8;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    while( true ) {
      if (*plVar10 != lVar9 || *(long *)(param_1 + 0x58) != lVar8) break;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *plVar10 = lVar9;
        *(long *)(param_1 + 0x54) = lVar8 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 == '\0') {
        plVar11 = (long *)(param_1 + 0x70);
        lVar9 = *plVar11;
        lVar6 = nn::os::GetCurrentThread();
        if (lVar6 == lVar9) {
          bVar4 = false;
          goto LAB_009b15a0;
        }
        lVar6 = nn::os::GetCurrentThread();
        goto LAB_009b154c;
      }
    }
    ClearExclusiveLocal();
    lVar9 = *plVar10;
    lVar8 = *(long *)(param_1 + 0x58);
  } while( true );
  while( true ) {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar4) {
      *plVar11 = lVar6;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') break;
LAB_009b154c:
    if (*plVar11 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 100));
        while (*plVar11 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar4) {
            *plVar11 = lVar6;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_009b159c;
        }
        ClearExclusiveLocal();
      } while( true );
    }
  }
LAB_009b159c:
  bVar4 = true;
LAB_009b15a0:
  plVar11 = *(long **)(param_1 + 0xe8);
  plVar2 = *(long **)(param_1 + 0xf0);
  if (plVar11 != plVar2) {
    do {
      uVar7 = FUN_009b16c8(plVar11);
      if ((uVar7 & 1) != 0) goto LAB_009b15c8;
      plVar11 = plVar11 + 1;
    } while (plVar2 != plVar11);
    plVar11 = plVar2;
LAB_009b15c8:
    if (plVar11 != *(long **)(param_1 + 0xf0)) {
      lVar6 = 0;
      if (*plVar11 != 0) {
        lVar6 = *plVar11 + -0x48;
      }
      goto joined_r0x009b15d8;
    }
  }
  lVar6 = 0;
joined_r0x009b15d8:
  if (bVar4) {
    *(undefined8 *)(param_1 + 0x70) = 0;
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 100));
  }
  do {
    lVar9 = *plVar10;
    lVar8 = *(long *)(param_1 + 0x58);
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar4) {
      *plVar10 = lVar9;
      *(long *)(param_1 + 0x58) = lVar8;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  while( true ) {
    if (*plVar10 != lVar9 || *(long *)(param_1 + 0x58) != lVar8) break;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar4) {
      *plVar10 = lVar9;
      *(long *)(param_1 + 0x54) = lVar8 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') goto LAB_009b166c;
  }
  ClearExclusiveLocal();
  lVar9 = *plVar10;
  lVar8 = *(long *)(param_1 + 0x58);
  do {
    do {
      lVar1 = *plVar10;
      if (lVar1 != lVar9 || *(long *)(param_1 + 0x58) != lVar8) {
        bVar4 = false;
        ClearExclusiveLocal();
        goto LAB_009b1650;
      }
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *plVar10 = lVar9;
        *(long *)(param_1 + 0x54) = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    bVar4 = true;
LAB_009b1650:
    lVar9 = lVar1;
    lVar8 = *(long *)(param_1 + 0x58);
  } while (!bVar4);
LAB_009b166c:
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x44));
  return lVar6;
}


