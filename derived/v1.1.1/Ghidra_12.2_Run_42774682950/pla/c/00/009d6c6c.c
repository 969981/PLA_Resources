/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 009d6c6c; name: FUN_009d6c6c
 */


/* WARNING: Removing unreachable block (ram,0x009d6f5c) */

long FUN_009d6c6c(long param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
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
    bVar4 = false;
  }
  else {
    lVar6 = nn::os::GetCurrentThread();
    do {
      if (*plVar11 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xc));
          while (*plVar11 == 0) {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar4) {
              *plVar11 = lVar6;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') goto LAB_009d6ce4;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar4) {
        *plVar11 = lVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
LAB_009d6ce4:
    bVar4 = true;
  }
  lVar6 = nn::os::GetCurrentThread();
  plVar11 = (long *)(param_1 + 0x30);
  do {
    if (*plVar11 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x24));
        while (*plVar11 == 0) {
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar5) {
            *plVar11 = lVar6;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_009d6d30;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar3 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar5) {
      *plVar11 = lVar6;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_009d6d30:
  plVar11 = *(long **)(param_1 + 0xb0);
  plVar12 = *(long **)(param_1 + 0xb8);
  local_48 = param_2;
  if (plVar11 != plVar12) {
    do {
      uVar7 = FUN_009d6ffc(&local_48,plVar11);
      if ((uVar7 & 1) != 0) goto LAB_009d6d60;
      plVar11 = plVar11 + 1;
    } while (plVar12 != plVar11);
    plVar11 = plVar12;
LAB_009d6d60:
    if ((plVar11 != *(long **)(param_1 + 0xb8)) && (*plVar11 != 0)) {
      bVar5 = false;
      lVar6 = *plVar11 + -0x48;
      goto LAB_009d6db4;
    }
  }
  plVar11 = *(long **)(param_1 + 0x78);
  plVar12 = *(long **)(param_1 + 0x80);
  local_48 = param_2;
  if (plVar11 == plVar12) {
LAB_009d6da8:
    lVar6 = 0;
  }
  else {
    do {
      uVar7 = FUN_009d6ffc(&local_48,plVar11);
      if ((uVar7 & 1) != 0) goto LAB_009d6d9c;
      plVar11 = plVar11 + 1;
    } while (plVar12 != plVar11);
    plVar11 = plVar12;
LAB_009d6d9c:
    if (plVar11 == *(long **)(param_1 + 0x80)) goto LAB_009d6da8;
    lVar6 = 0;
    if (*plVar11 != 0) {
      lVar6 = *plVar11 + -0x48;
    }
  }
  bVar5 = lVar6 == 0;
LAB_009d6db4:
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
  plVar11 = (long *)(param_1 + 0x50);
  do {
    lVar10 = *plVar11;
    lVar2 = *(long *)(param_1 + 0x58);
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar4) {
      *plVar11 = lVar10;
      *(long *)(param_1 + 0x58) = lVar2;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  do {
    while ((lVar10 != 0 && (lVar6 != lVar10))) {
      nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x44));
      do {
        lVar10 = *plVar11;
        lVar2 = *(long *)(param_1 + 0x58);
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar4) {
          *plVar11 = lVar10;
          *(long *)(param_1 + 0x58) = lVar2;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    while( true ) {
      if (*plVar11 != lVar10 || *(long *)(param_1 + 0x58) != lVar2) break;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar4) {
        *plVar11 = lVar10;
        *(long *)(param_1 + 0x54) = lVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 == '\0') {
        plVar12 = (long *)(param_1 + 0x70);
        lVar10 = *plVar12;
        lVar6 = nn::os::GetCurrentThread();
        if (lVar6 != lVar10) {
          lVar6 = nn::os::GetCurrentThread();
          goto LAB_009d6e70;
        }
        bVar4 = false;
        goto LAB_009d6ec4;
      }
    }
    ClearExclusiveLocal();
    lVar10 = *plVar11;
    lVar2 = *(long *)(param_1 + 0x58);
  } while( true );
  while( true ) {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
    if (bVar4) {
      *plVar12 = lVar6;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') break;
LAB_009d6e70:
    if (*plVar12 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 100));
        while (*plVar12 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar4) {
            *plVar12 = lVar6;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_009d6ec0;
        }
        ClearExclusiveLocal();
      } while( true );
    }
  }
LAB_009d6ec0:
  bVar4 = true;
LAB_009d6ec4:
  plVar12 = *(long **)(param_1 + 0xe8);
  plVar1 = *(long **)(param_1 + 0xf0);
  local_48 = param_2;
  if (plVar12 != plVar1) {
    do {
      uVar7 = FUN_009d6ffc(&local_48,plVar12);
      if ((uVar7 & 1) != 0) goto LAB_009d6ef4;
      plVar12 = plVar12 + 1;
    } while (plVar1 != plVar12);
    plVar12 = plVar1;
LAB_009d6ef4:
    if (plVar12 != *(long **)(param_1 + 0xf0)) {
      lVar6 = 0;
      if (*plVar12 != 0) {
        lVar6 = *plVar12 + -0x48;
      }
      goto joined_r0x009d6f04;
    }
  }
  lVar6 = 0;
joined_r0x009d6f04:
  if (bVar4) {
    *(undefined8 *)(param_1 + 0x70) = 0;
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 100));
  }
  do {
    lVar10 = *plVar11;
    lVar2 = *(long *)(param_1 + 0x58);
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar4) {
      *plVar11 = lVar10;
      *(long *)(param_1 + 0x58) = lVar2;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  while( true ) {
    lVar8 = *plVar11;
    lVar9 = *(long *)(param_1 + 0x58);
    if (lVar8 != lVar10 || lVar9 != lVar2) break;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar4) {
      *plVar11 = lVar10;
      *(long *)(param_1 + 0x54) = lVar2 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') goto LAB_009d6f9c;
  }
  ClearExclusiveLocal();
  do {
    do {
      lVar10 = *plVar11;
      if (lVar10 != lVar8 || *(long *)(param_1 + 0x58) != lVar9) {
        bVar4 = false;
        ClearExclusiveLocal();
        goto LAB_009d6f68;
      }
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar4) {
        *plVar11 = lVar8;
        *(long *)(param_1 + 0x54) = lVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    bVar4 = true;
LAB_009d6f68:
    lVar8 = lVar10;
    lVar9 = *(long *)(param_1 + 0x58);
  } while (!bVar4);
LAB_009d6f9c:
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x44));
  return lVar6;
}


