/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a4d1f8; name: FUN_02a4d1f8
 */


/* WARNING: Removing unreachable block (ram,0x02a4d4d0) */

void FUN_02a4d1f8(long param_1,byte param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  bool bVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  *(byte *)(param_1 + 0x1ee) = param_2 & 1;
  plVar1 = (long *)(param_1 + 0x88);
  lVar11 = *plVar1;
  lVar7 = nn::os::GetCurrentThread();
  if (lVar7 == lVar11) {
    bVar5 = false;
  }
  else {
    lVar7 = nn::os::GetCurrentThread();
    do {
      if (*plVar1 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x7c));
          while (*plVar1 == 0) {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar5) {
              *plVar1 = lVar7;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') goto LAB_02a4d284;
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
LAB_02a4d284:
    bVar5 = true;
  }
  lVar7 = nn::os::GetCurrentThread();
  plVar1 = (long *)(param_1 + 0xa0);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x94));
        while (*plVar1 == 0) {
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *plVar1 = lVar7;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_02a4d2d0;
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
LAB_02a4d2d0:
  lVar7 = nn::os::GetCurrentThread();
  plVar1 = (long *)(param_1 + 0xc0);
  do {
    lVar11 = *plVar1;
    lVar9 = *(long *)(param_1 + 200);
    cVar4 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar11;
      *(long *)(param_1 + 200) = lVar9;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  do {
    while ((lVar11 != 0 && (lVar7 != lVar11))) {
      nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xb4));
      do {
        lVar11 = *plVar1;
        lVar9 = *(long *)(param_1 + 200);
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = lVar11;
          *(long *)(param_1 + 200) = lVar9;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    while( true ) {
      if (*plVar1 != lVar11 || *(long *)(param_1 + 200) != lVar9) break;
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar11;
        *(long *)(param_1 + 0xc4) = lVar9 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 == '\0') {
        plVar2 = (long *)(param_1 + 0xe0);
        lVar11 = *plVar2;
        lVar7 = nn::os::GetCurrentThread();
        if (lVar7 == lVar11) {
          bVar6 = false;
          goto LAB_02a4d3b0;
        }
        lVar7 = nn::os::GetCurrentThread();
        goto LAB_02a4d368;
      }
    }
    ClearExclusiveLocal();
    lVar11 = *plVar1;
    lVar9 = *(long *)(param_1 + 200);
  } while( true );
  while( true ) {
    cVar4 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar6) {
      *plVar2 = lVar7;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') break;
LAB_02a4d368:
    if (*plVar2 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xd4));
        while (*plVar2 == 0) {
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar6) {
            *plVar2 = lVar7;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_02a4d3ac;
        }
        ClearExclusiveLocal();
      } while( true );
    }
  }
LAB_02a4d3ac:
  bVar6 = true;
LAB_02a4d3b0:
  plVar3 = *(long **)(param_1 + 0xf0);
  for (plVar2 = *(long **)(param_1 + 0xe8); plVar2 != plVar3; plVar2 = plVar2 + 1) {
    lVar7 = *plVar2;
    if ((lVar7 != 0) && (uVar8 = FUN_00ad7820(lVar7 + 8), (uVar8 & 1) != 0)) {
      FUN_02a4d1f8(lVar7 + -0x48,param_2 & 1);
    }
  }
  plVar3 = *(long **)(param_1 + 0x128);
  for (plVar2 = *(long **)(param_1 + 0x120); plVar2 != plVar3; plVar2 = plVar2 + 1) {
    lVar7 = *plVar2;
    if ((lVar7 != 0) && (uVar8 = FUN_00ad7820(lVar7 + 8), (uVar8 & 1) != 0)) {
      FUN_02a4d1f8(lVar7 + -0x48,param_2 & 1);
    }
  }
  plVar3 = *(long **)(param_1 + 0x160);
  for (plVar2 = *(long **)(param_1 + 0x158); plVar2 != plVar3; plVar2 = plVar2 + 1) {
    lVar7 = *plVar2;
    if ((lVar7 != 0) && (uVar8 = FUN_00ad7820(lVar7 + 8), (uVar8 & 1) != 0)) {
      FUN_02a4d1f8(lVar7 + -0x48,param_2 & 1);
    }
  }
  if (bVar6) {
    *(undefined8 *)(param_1 + 0xe0) = 0;
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 0xd4));
  }
  do {
    lVar7 = *plVar1;
    lVar11 = *(long *)(param_1 + 200);
    cVar4 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar7;
      *(long *)(param_1 + 200) = lVar11;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  while( true ) {
    lVar9 = *plVar1;
    lVar10 = *(long *)(param_1 + 200);
    if (lVar9 != lVar7 || lVar10 != lVar11) break;
    cVar4 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar7;
      *(long *)(param_1 + 0xc4) = lVar11 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_02a4d510;
  }
  ClearExclusiveLocal();
  do {
    do {
      lVar7 = *plVar1;
      if (lVar7 != lVar9 || *(long *)(param_1 + 200) != lVar10) {
        bVar6 = false;
        ClearExclusiveLocal();
        goto LAB_02a4d4dc;
      }
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar9;
        *(long *)(param_1 + 0xc4) = lVar10 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    bVar6 = true;
LAB_02a4d4dc:
    lVar9 = lVar7;
    lVar10 = *(long *)(param_1 + 200);
  } while (!bVar6);
LAB_02a4d510:
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0xb4));
  *(undefined8 *)(param_1 + 0xa0) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x94));
  if (bVar5) {
    *(undefined8 *)(param_1 + 0x88) = 0;
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x7c));
    return;
  }
  return;
}


