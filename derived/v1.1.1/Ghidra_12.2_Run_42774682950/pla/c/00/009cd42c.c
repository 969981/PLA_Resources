/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 009cd42c; name: FUN_009cd42c
 */


/* WARNING: Removing unreachable block (ram,0x009cd694) */

long FUN_009cd42c(long param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  bool bVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  undefined8 local_48;
  
  plVar11 = (long *)(param_1 + 0x18);
  lVar10 = *plVar11;
  lVar6 = nn::os::GetCurrentThread();
  if (lVar6 == lVar10) {
    bVar3 = false;
  }
  else {
    lVar6 = nn::os::GetCurrentThread();
    bVar3 = true;
    do {
      if (*plVar11 != 0) {
        bVar3 = true;
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xc));
          while (*plVar11 == 0) {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar5) {
              *plVar11 = lVar6;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') goto LAB_009cd464;
          }
        } while( true );
      }
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar5) {
        *plVar11 = lVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
LAB_009cd464:
  lVar6 = nn::os::GetCurrentThread();
  plVar11 = (long *)(param_1 + 0x30);
  do {
    if (*plVar11 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x24));
        while (*plVar11 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar5) {
            *plVar11 = lVar6;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_009cd4ac;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar5) {
      *plVar11 = lVar6;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_009cd4ac:
  plVar11 = *(long **)(param_1 + 0xb0);
  plVar12 = *(long **)(param_1 + 0xb8);
  local_48 = param_2;
  if (plVar11 != plVar12) {
    do {
      uVar7 = FUN_009cd7ac(&local_48,plVar11);
      if ((uVar7 & 1) != 0) goto LAB_009cd4dc;
      plVar11 = plVar11 + 1;
    } while (plVar12 != plVar11);
    plVar11 = plVar12;
LAB_009cd4dc:
    if ((plVar11 != *(long **)(param_1 + 0xb8)) && (*plVar11 != 0)) {
      bVar5 = false;
      lVar6 = *plVar11 + -0x48;
      goto LAB_009cd530;
    }
  }
  plVar11 = *(long **)(param_1 + 0x78);
  plVar12 = *(long **)(param_1 + 0x80);
  local_48 = param_2;
  if (plVar11 == plVar12) {
LAB_009cd524:
    lVar6 = 0;
  }
  else {
    do {
      uVar7 = FUN_009cd7ac(&local_48,plVar11);
      if ((uVar7 & 1) != 0) goto LAB_009cd518;
      plVar11 = plVar11 + 1;
    } while (plVar12 != plVar11);
    plVar11 = plVar12;
LAB_009cd518:
    if (plVar11 == *(long **)(param_1 + 0x80)) goto LAB_009cd524;
    lVar6 = 0;
    if (*plVar11 != 0) {
      lVar6 = *plVar11 + -0x48;
    }
  }
  bVar5 = lVar6 == 0;
LAB_009cd530:
  *(undefined8 *)(param_1 + 0x30) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x24));
  if (bVar3) {
    *(undefined8 *)(param_1 + 0x18) = 0;
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 0xc));
  }
  if (!bVar5) {
    return lVar6;
  }
  lVar6 = nn::os::GetCurrentThread();
  plVar11 = (long *)(param_1 + 0x50);
  do {
    lVar10 = *plVar11;
    lVar2 = *(long *)(param_1 + 0x58);
    cVar4 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar3) {
      *plVar11 = lVar10;
      *(long *)(param_1 + 0x58) = lVar2;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  do {
    while ((lVar10 != 0 && (lVar6 != lVar10))) {
      nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x44));
      do {
        lVar10 = *plVar11;
        lVar2 = *(long *)(param_1 + 0x58);
        cVar4 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar3) {
          *plVar11 = lVar10;
          *(long *)(param_1 + 0x58) = lVar2;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    while( true ) {
      if (*plVar11 != lVar10 || *(long *)(param_1 + 0x58) != lVar2) break;
      cVar4 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar3) {
        *plVar11 = lVar10;
        *(long *)(param_1 + 0x54) = lVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 == '\0') {
        plVar12 = (long *)(param_1 + 0x70);
        lVar10 = *plVar12;
        lVar6 = nn::os::GetCurrentThread();
        if (lVar6 == lVar10) {
          bVar3 = false;
          goto LAB_009cd5e8;
        }
        lVar6 = nn::os::GetCurrentThread();
        bVar3 = true;
        goto LAB_009cd774;
      }
    }
    ClearExclusiveLocal();
    lVar10 = *plVar11;
    lVar2 = *(long *)(param_1 + 0x58);
  } while( true );
  while( true ) {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
    if (bVar5) {
      *plVar12 = lVar6;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') break;
LAB_009cd774:
    if (*plVar12 != 0) {
      bVar3 = true;
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 100));
        while (*plVar12 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar5) {
            *plVar12 = lVar6;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_009cd5e8;
        }
      } while( true );
    }
  }
LAB_009cd5e8:
  plVar12 = *(long **)(param_1 + 0xe8);
  plVar1 = *(long **)(param_1 + 0xf0);
  local_48 = param_2;
  if (plVar12 != plVar1) {
    do {
      uVar7 = FUN_009cd7ac(&local_48,plVar12);
      if ((uVar7 & 1) != 0) goto LAB_009cd618;
      plVar12 = plVar12 + 1;
    } while (plVar1 != plVar12);
    plVar12 = plVar1;
LAB_009cd618:
    if (plVar12 != *(long **)(param_1 + 0xf0)) {
      lVar6 = 0;
      if (*plVar12 != 0) {
        lVar6 = *plVar12 + -0x48;
      }
      goto joined_r0x009cd628;
    }
  }
  lVar6 = 0;
joined_r0x009cd628:
  if (bVar3) {
    *(undefined8 *)(param_1 + 0x70) = 0;
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 100));
  }
  do {
    lVar10 = *plVar11;
    lVar2 = *(long *)(param_1 + 0x58);
    cVar4 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar3) {
      *plVar11 = lVar10;
      *(long *)(param_1 + 0x58) = lVar2;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  while( true ) {
    lVar8 = *plVar11;
    lVar9 = *(long *)(param_1 + 0x58);
    if (lVar8 != lVar10 || lVar9 != lVar2) break;
    cVar4 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar3) {
      *plVar11 = lVar10;
      *(long *)(param_1 + 0x54) = lVar2 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_009cd6d4;
  }
  ClearExclusiveLocal();
  do {
    do {
      lVar10 = *plVar11;
      if (lVar10 != lVar8 || *(long *)(param_1 + 0x58) != lVar9) {
        bVar3 = false;
        ClearExclusiveLocal();
        goto LAB_009cd6a0;
      }
      cVar4 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar3) {
        *plVar11 = lVar8;
        *(long *)(param_1 + 0x54) = lVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    bVar3 = true;
LAB_009cd6a0:
    lVar8 = lVar10;
    lVar9 = *(long *)(param_1 + 0x58);
  } while (!bVar3);
LAB_009cd6d4:
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x44));
  return lVar6;
}


