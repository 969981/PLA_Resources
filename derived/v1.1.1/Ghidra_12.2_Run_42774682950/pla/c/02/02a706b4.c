/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a706b4; name: FUN_02a706b4
 */


void FUN_02a706b4(long param_1,long param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  long local_48;
  
  if (param_2 != 0) {
    lVar4 = param_1;
    if (*(long *)(param_1 + 0x1d0) != 0) {
      lVar4 = *(long *)(param_1 + 0x1d0);
    }
    plVar7 = *(long **)(lVar4 + 0x160);
    plVar1 = *(long **)(lVar4 + 0x168);
    if ((plVar7 != plVar1) && (*plVar7 != param_2)) {
      do {
        plVar7 = plVar7 + 1;
        if (plVar1 == plVar7) goto LAB_02a70740;
      } while (*plVar7 != param_2);
    }
    if (plVar1 == plVar7) {
LAB_02a70740:
      local_48 = param_2;
      FUN_02a713d4(lVar4 + 0x160,&local_48);
      FUN_02a71ab0(*(undefined8 *)(lVar4 + 0x160),*(undefined8 *)(lVar4 + 0x168));
      uVar6 = *(ulong *)(lVar4 + 0x1e0);
      uVar5 = (uint)uVar6;
    }
    else {
      uVar6 = *(ulong *)(lVar4 + 0x1e0);
      uVar5 = (uint)uVar6;
    }
    if ((uVar5 >> 1 & 1) == 0) {
      lVar8 = *(long *)(lVar4 + 0x210);
      *(ulong *)(lVar4 + 0x1e0) = uVar6 | 2;
      local_48 = lVar4;
      lVar4 = nn::os::GetCurrentThread();
      plVar7 = (long *)(lVar8 + 0x60);
      do {
        if (*plVar7 != 0) {
          ClearExclusiveLocal();
          do {
            nn::os::WaitLightEvent((LightEventType *)(lVar8 + 0x54));
            while (*plVar7 == 0) {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
              if (bVar3) {
                *plVar7 = lVar4;
                cVar2 = ExclusiveMonitorsStatus();
              }
              if (cVar2 == '\0') goto LAB_02a707b4;
            }
            ClearExclusiveLocal();
          } while( true );
        }
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar3) {
          *plVar7 = lVar4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
LAB_02a707b4:
      FUN_02a6b514(lVar8 + 0xd0,&local_48);
      *(undefined8 *)(lVar8 + 0x60) = 0;
      nn::os::SignalLightEvent((LightEventType *)(lVar8 + 0x54));
    }
  }
  if (param_3 != 0) {
    if (*(long *)(param_1 + 0x1d8) != 0) {
      param_1 = *(long *)(param_1 + 0x1d8);
    }
    plVar7 = *(long **)(param_1 + 0x198);
    plVar1 = *(long **)(param_1 + 0x1a0);
    if ((plVar7 != plVar1) && (*plVar7 != param_3)) {
      do {
        plVar7 = plVar7 + 1;
        if (plVar1 == plVar7) goto LAB_02a70838;
      } while (*plVar7 != param_3);
    }
    if (plVar1 == plVar7) {
LAB_02a70838:
      local_48 = param_3;
      FUN_02a713d4(param_1 + 0x198,&local_48);
      FUN_02a72590(*(undefined8 *)(param_1 + 0x198),*(undefined8 *)(param_1 + 0x1a0));
      uVar6 = *(ulong *)(param_1 + 0x1e0);
      uVar5 = (uint)uVar6;
    }
    else {
      uVar6 = *(ulong *)(param_1 + 0x1e0);
      uVar5 = (uint)uVar6;
    }
    if ((uVar5 >> 1 & 1) == 0) {
      lVar8 = *(long *)(param_1 + 0x210);
      *(ulong *)(param_1 + 0x1e0) = uVar6 | 2;
      local_48 = param_1;
      lVar4 = nn::os::GetCurrentThread();
      plVar7 = (long *)(lVar8 + 0x60);
      do {
        if (*plVar7 != 0) {
          ClearExclusiveLocal();
          do {
            nn::os::WaitLightEvent((LightEventType *)(lVar8 + 0x54));
            while (*plVar7 == 0) {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
              if (bVar3) {
                *plVar7 = lVar4;
                cVar2 = ExclusiveMonitorsStatus();
              }
              if (cVar2 == '\0') goto LAB_02a708ac;
            }
            ClearExclusiveLocal();
          } while( true );
        }
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar3) {
          *plVar7 = lVar4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
LAB_02a708ac:
      FUN_02a6b514(lVar8 + 0xd0,&local_48);
      *(undefined8 *)(lVar8 + 0x60) = 0;
      nn::os::SignalLightEvent((LightEventType *)(lVar8 + 0x54));
    }
  }
  return;
}


