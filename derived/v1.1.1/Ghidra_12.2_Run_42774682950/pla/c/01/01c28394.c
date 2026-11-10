/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01c28394; name: FUN_01c28394
 */


void FUN_01c28394(long param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  bool bVar4;
  char cVar5;
  bool bVar6;
  bool bVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  
  plVar1 = (long *)(param_1 + 0x18);
  lVar10 = *plVar1;
  lVar8 = nn::os::GetCurrentThread();
  if (lVar8 == lVar10) {
    uVar9 = FUN_01c28674(param_2,param_1 + 0x78);
    if ((uVar9 & 1) != 0) {
      return;
    }
    uVar9 = FUN_01c28674(param_2,param_1 + 0xb0);
    if ((uVar9 & 1) != 0) {
      return;
    }
    bVar6 = false;
  }
  else {
    lVar8 = nn::os::GetCurrentThread();
    do {
      if (*plVar1 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xc));
          while (*plVar1 == 0) {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar6) {
              *plVar1 = lVar8;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 == '\0') goto LAB_01c2840c;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar8;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
LAB_01c2840c:
    lVar8 = nn::os::GetCurrentThread();
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
              *plVar1 = lVar8;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 == '\0') goto LAB_01c28454;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar8;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
LAB_01c28454:
    uVar9 = FUN_01c287e4(param_1 + 0x78);
    if ((uVar9 & 1) != 0) {
      *(undefined8 *)(param_1 + 0x30) = 0;
      nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x24));
      goto LAB_01c2858c;
    }
    uVar9 = FUN_01c287e4(param_1 + 0xb0);
    *(undefined8 *)(param_1 + 0x30) = 0;
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x24));
    if ((uVar9 & 1) != 0) goto LAB_01c2858c;
    bVar6 = true;
  }
  plVar1 = (long *)(param_1 + 0x50);
  do {
    lVar8 = *plVar1;
    cVar5 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar8;
      *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_1 + 0x58);
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  lVar10 = nn::os::GetCurrentThread();
  if (lVar10 == lVar8) {
    FUN_01c28674(param_2,param_1 + 0xe8);
  }
  else {
    lVar8 = nn::os::GetCurrentThread();
    do {
      if (*plVar1 != 0 || *(long *)(param_1 + 0x58) != 0) {
        bVar4 = false;
        ClearExclusiveLocal();
        goto LAB_01c284c8;
      }
      cVar5 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar8;
        *(undefined8 *)(param_1 + 0x58) = 0;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    bVar4 = true;
LAB_01c284c8:
    lVar8 = nn::os::GetCurrentThread();
    plVar2 = (long *)(param_1 + 0x70);
    do {
      if (*plVar2 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 100));
          while (*plVar2 == 0) {
            cVar5 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar7) {
              *plVar2 = lVar8;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 == '\0') goto LAB_01c28510;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar7) {
        *plVar2 = lVar8;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
LAB_01c28510:
    if (bVar4) {
      uVar9 = FUN_01c287e4(param_1 + 0xe8);
      if ((uVar9 & 1) != 0) {
        FUN_01c289e0(*(undefined8 *)(param_1 + 0xe8),*(undefined8 *)(param_1 + 0xf0));
      }
      *(undefined8 *)(param_1 + 0x70) = 0;
      nn::os::SignalLightEvent((LightEventType *)(param_1 + 100));
      do {
        lVar8 = *plVar1;
        lVar10 = *(long *)(param_1 + 0x58);
        cVar5 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar8;
          *(long *)(param_1 + 0x58) = lVar10;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      do {
        if (*plVar1 != lVar8 || *(long *)(param_1 + 0x58) != lVar10) {
          ClearExclusiveLocal();
          lVar8 = *plVar1;
          lVar10 = *(long *)(param_1 + 0x58);
          goto LAB_01c28638;
        }
        cVar5 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = 0;
          *(long *)(param_1 + 0x54) = lVar10;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      goto LAB_01c28580;
    }
    FUN_01c28674(param_2);
    *(undefined8 *)(param_1 + 0x70) = 0;
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 100));
  }
  goto joined_r0x01c28628;
LAB_01c28638:
  do {
    lVar3 = *plVar1;
    if (lVar3 == lVar8 && *(long *)(param_1 + 0x58) == lVar10) {
      cVar5 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = 0;
        *(long *)(param_1 + 0x54) = lVar10;
        cVar5 = ExclusiveMonitorsStatus();
      }
      if (cVar5 != '\0') goto LAB_01c28638;
      bVar4 = true;
    }
    else {
      bVar4 = false;
      ClearExclusiveLocal();
    }
    lVar8 = lVar3;
    lVar10 = *(long *)(param_1 + 0x58);
  } while (!bVar4);
LAB_01c28580:
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x44));
joined_r0x01c28628:
  if (!bVar6) {
    return;
  }
LAB_01c2858c:
  *(undefined8 *)(param_1 + 0x18) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0xc));
  return;
}


