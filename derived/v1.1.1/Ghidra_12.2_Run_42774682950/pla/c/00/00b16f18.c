/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00b16f18; name: FUN_00b16f18
 */


/* WARNING: Removing unreachable block (ram,0x00b1718c) */

void FUN_00b16f18(long param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  long lVar6;
  LightEventType *pLVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 *local_50;
  undefined8 local_48;
  
  local_50 = &local_48;
  plVar1 = (long *)(param_1 + 0x18);
  lVar10 = *plVar1;
  local_48 = param_2;
  lVar6 = nn::os::GetCurrentThread();
  if (lVar6 == lVar10) {
    bVar4 = false;
  }
  else {
    lVar6 = nn::os::GetCurrentThread();
    do {
      if (*plVar1 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xc));
          while (*plVar1 == 0) {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *plVar1 = lVar6;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') goto LAB_00b16f9c;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
LAB_00b16f9c:
    bVar4 = true;
  }
  lVar6 = nn::os::GetCurrentThread();
  plVar1 = (long *)(param_1 + 0x30);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x24));
        while (*plVar1 == 0) {
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = lVar6;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_00b16fe8;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar3 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar6;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_00b16fe8:
  lVar6 = FUN_00b171f4(&local_50,param_1 + 0xb0);
  if (lVar6 == 0) {
    lVar6 = FUN_00b171f4(&local_50,param_1 + 0x78);
    *(undefined8 *)(param_1 + 0x30) = 0;
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x24));
    if (bVar4) {
      *(undefined8 *)(param_1 + 0x18) = 0;
      nn::os::SignalLightEvent((LightEventType *)(param_1 + 0xc));
    }
    if (lVar6 == 0) {
      lVar6 = nn::os::GetCurrentThread();
      plVar1 = (long *)(param_1 + 0x50);
      do {
        lVar10 = *plVar1;
        lVar8 = *(long *)(param_1 + 0x58);
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar10;
          *(long *)(param_1 + 0x58) = lVar8;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      pLVar7 = (LightEventType *)(param_1 + 0x44);
      do {
        while ((lVar10 != 0 && (lVar6 != lVar10))) {
          nn::os::WaitLightEvent(pLVar7);
          do {
            lVar10 = *plVar1;
            lVar8 = *(long *)(param_1 + 0x58);
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *plVar1 = lVar10;
              *(long *)(param_1 + 0x58) = lVar8;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        while( true ) {
          if (*plVar1 != lVar10 || *(long *)(param_1 + 0x58) != lVar8) break;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar10;
            *(long *)(param_1 + 0x54) = lVar8 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            plVar2 = (long *)(param_1 + 0x70);
            lVar10 = *plVar2;
            lVar6 = nn::os::GetCurrentThread();
            if (lVar6 == lVar10) {
              FUN_00b171f4(&local_50,param_1 + 0xe8);
              goto LAB_00b17148;
            }
            lVar6 = nn::os::GetCurrentThread();
            goto LAB_00b170e0;
          }
        }
        ClearExclusiveLocal();
        lVar10 = *plVar1;
        lVar8 = *(long *)(param_1 + 0x58);
      } while( true );
    }
  }
  else {
    *(undefined8 *)(param_1 + 0x30) = 0;
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x24));
    if (bVar4) {
      pLVar7 = (LightEventType *)(param_1 + 0xc);
      *(undefined8 *)(param_1 + 0x18) = 0;
LAB_00b17018:
      nn::os::SignalLightEvent(pLVar7);
    }
  }
  return;
  while( true ) {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar4) {
      *plVar2 = lVar6;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') break;
LAB_00b170e0:
    if (*plVar2 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 100));
        while (*plVar2 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *plVar2 = lVar6;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_00b1712c;
        }
        ClearExclusiveLocal();
      } while( true );
    }
  }
LAB_00b1712c:
  FUN_00b171f4(&local_50,param_1 + 0xe8);
  *(undefined8 *)(param_1 + 0x70) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 100));
LAB_00b17148:
  do {
    lVar6 = *plVar1;
    lVar10 = *(long *)(param_1 + 0x58);
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar6;
      *(long *)(param_1 + 0x58) = lVar10;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_00b17158:
  lVar8 = *plVar1;
  lVar9 = *(long *)(param_1 + 0x58);
  if (lVar8 == lVar6 && lVar9 == lVar10) goto code_r0x00b1716c;
  ClearExclusiveLocal();
  do {
    do {
      lVar6 = *plVar1;
      if (lVar6 != lVar8 || *(long *)(param_1 + 0x58) != lVar9) {
        bVar4 = false;
        ClearExclusiveLocal();
        goto LAB_00b17198;
      }
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar8;
        *(long *)(param_1 + 0x54) = lVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    bVar4 = true;
LAB_00b17198:
    lVar8 = lVar6;
    lVar9 = *(long *)(param_1 + 0x58);
  } while (!bVar4);
  goto LAB_00b17018;
code_r0x00b1716c:
  cVar3 = '\x01';
  bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
  if (bVar4) {
    *plVar1 = lVar6;
    *(long *)(param_1 + 0x54) = lVar10 + -1;
    cVar3 = ExclusiveMonitorsStatus();
  }
  if (cVar3 == '\0') goto LAB_00b17018;
  goto LAB_00b17158;
}


