/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00b13c20; name: FUN_00b13c20
 */


/* WARNING: Removing unreachable block (ram,0x00b13e08) */

long FUN_00b13c20(long param_1,undefined8 param_2)

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
  long lVar10;
  undefined8 *local_48;
  undefined8 uStack_38;
  
  local_48 = &uStack_38;
  plVar1 = (long *)(param_1 + 0x18);
  lVar10 = *plVar1;
  uStack_38 = param_2;
  lVar7 = nn::os::GetCurrentThread();
  if (lVar7 == lVar10) {
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
            if (cVar5 == '\0') goto LAB_00b13c5c;
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
LAB_00b13c5c:
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
          if (cVar5 == '\0') goto LAB_00b13ca4;
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
LAB_00b13ca4:
  lVar7 = FUN_00b13ee0(&local_48,param_1 + 0xb0);
  if (lVar7 == 0) {
    lVar7 = FUN_00b13ee0(&local_48,param_1 + 0x78);
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
    lVar10 = *plVar1;
    lVar3 = *(long *)(param_1 + 0x58);
    cVar5 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar10;
      *(long *)(param_1 + 0x58) = lVar3;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  do {
    while ((lVar10 != 0 && (lVar7 != lVar10))) {
      nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x44));
      do {
        lVar10 = *plVar1;
        lVar3 = *(long *)(param_1 + 0x58);
        cVar5 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar10;
          *(long *)(param_1 + 0x58) = lVar3;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    while( true ) {
      if (*plVar1 != lVar10 || *(long *)(param_1 + 0x58) != lVar3) break;
      cVar5 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar10;
        *(long *)(param_1 + 0x54) = lVar3 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
      if (cVar5 == '\0') {
        plVar2 = (long *)(param_1 + 0x70);
        lVar10 = *plVar2;
        lVar7 = nn::os::GetCurrentThread();
        if (lVar7 != lVar10) {
          lVar7 = nn::os::GetCurrentThread();
          goto LAB_00b13e8c;
        }
        lVar7 = FUN_00b13ee0(&local_48,param_1 + 0xe8);
        goto LAB_00b13dc4;
      }
    }
    ClearExclusiveLocal();
    lVar10 = *plVar1;
    lVar3 = *(long *)(param_1 + 0x58);
  } while( true );
  while( true ) {
    cVar5 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar4) {
      *plVar2 = lVar7;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 == '\0') break;
LAB_00b13e8c:
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
          if (cVar5 == '\0') goto LAB_00b13ebc;
        }
      } while( true );
    }
  }
LAB_00b13ebc:
  lVar7 = FUN_00b13ee0(&local_48,param_1 + 0xe8);
  *(undefined8 *)(param_1 + 0x70) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 100));
LAB_00b13dc4:
  do {
    lVar10 = *plVar1;
    lVar3 = *(long *)(param_1 + 0x58);
    cVar5 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar10;
      *(long *)(param_1 + 0x58) = lVar3;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  while( true ) {
    lVar8 = *plVar1;
    lVar9 = *(long *)(param_1 + 0x58);
    if (lVar8 != lVar10 || lVar9 != lVar3) break;
    cVar5 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar10;
      *(long *)(param_1 + 0x54) = lVar3 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 == '\0') goto LAB_00b13e48;
  }
  ClearExclusiveLocal();
  do {
    do {
      lVar10 = *plVar1;
      if (lVar10 != lVar8 || *(long *)(param_1 + 0x58) != lVar9) {
        bVar4 = false;
        ClearExclusiveLocal();
        goto LAB_00b13e14;
      }
      cVar5 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar8;
        *(long *)(param_1 + 0x54) = lVar9 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    bVar4 = true;
LAB_00b13e14:
    lVar8 = lVar10;
    lVar9 = *(long *)(param_1 + 0x58);
  } while (!bVar4);
LAB_00b13e48:
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x44));
  return lVar7;
}


