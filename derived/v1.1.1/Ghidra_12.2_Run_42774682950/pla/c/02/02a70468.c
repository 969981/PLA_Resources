/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a70468; name: FUN_02a70468
 */


void FUN_02a70468(long param_1,long param_2,long param_3)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  uint uVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  long local_48;
  
  if (param_2 != 0) {
    local_48 = param_2;
    if (*(long *)(param_2 + 0x1d8) != 0) {
      local_48 = *(long *)(param_2 + 0x1d8);
    }
    lVar3 = param_1;
    if (*(long *)(param_1 + 0x1d0) != 0) {
      lVar3 = *(long *)(param_1 + 0x1d0);
    }
    plVar7 = *(long **)(lVar3 + 0xe8);
    plVar5 = *(long **)(lVar3 + 0xf0);
    if ((plVar7 != plVar5) && (*plVar7 != local_48)) {
      do {
        plVar7 = plVar7 + 1;
        if (plVar5 == plVar7) goto LAB_02a70508;
      } while (*plVar7 != local_48);
    }
    if (plVar5 == plVar7) {
LAB_02a70508:
      FUN_02a713d4((long *)(lVar3 + 0xe8),&local_48);
      FUN_02a71ab0(*(undefined8 *)(lVar3 + 0xe8),*(undefined8 *)(lVar3 + 0xf0));
      uVar6 = *(ulong *)(lVar3 + 0x1e0);
      uVar4 = (uint)uVar6;
    }
    else {
      uVar6 = *(ulong *)(lVar3 + 0x1e0);
      uVar4 = (uint)uVar6;
    }
    if ((uVar4 >> 1 & 1) == 0) {
      lVar8 = *(long *)(lVar3 + 0x210);
      *(ulong *)(lVar3 + 0x1e0) = uVar6 | 2;
      local_48 = lVar3;
      lVar3 = nn::os::GetCurrentThread();
      plVar5 = (long *)(lVar8 + 0x60);
      do {
        if (*plVar5 != 0) {
          ClearExclusiveLocal();
          do {
            nn::os::WaitLightEvent((LightEventType *)(lVar8 + 0x54));
            while (*plVar5 == 0) {
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
              if (bVar2) {
                *plVar5 = lVar3;
                cVar1 = ExclusiveMonitorsStatus();
              }
              if (cVar1 == '\0') goto LAB_02a70578;
            }
            ClearExclusiveLocal();
          } while( true );
        }
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = lVar3;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
LAB_02a70578:
      FUN_02a6b514(lVar8 + 0xd0,&local_48);
      *(undefined8 *)(lVar8 + 0x60) = 0;
      nn::os::SignalLightEvent((LightEventType *)(lVar8 + 0x54));
    }
  }
  if (param_3 != 0) {
    if (*(long *)(param_1 + 0x1d8) != 0) {
      param_1 = *(long *)(param_1 + 0x1d8);
    }
    local_48 = param_3;
    if (*(long *)(param_3 + 0x1d0) != 0) {
      local_48 = *(long *)(param_3 + 0x1d0);
    }
    plVar5 = *(long **)(param_1 + 0x120);
    plVar7 = *(long **)(param_1 + 0x128);
    if ((plVar5 != plVar7) && (*plVar5 != local_48)) {
      do {
        plVar5 = plVar5 + 1;
        if (plVar7 == plVar5) goto LAB_02a70604;
      } while (*plVar5 != local_48);
    }
    if (plVar7 == plVar5) {
LAB_02a70604:
      FUN_02a713d4(param_1 + 0x120,&local_48);
      FUN_02a72590(*(undefined8 *)(param_1 + 0x120),*(undefined8 *)(param_1 + 0x128));
      uVar6 = *(ulong *)(param_1 + 0x1e0);
      uVar4 = (uint)uVar6;
    }
    else {
      uVar6 = *(ulong *)(param_1 + 0x1e0);
      uVar4 = (uint)uVar6;
    }
    if ((uVar4 >> 1 & 1) == 0) {
      lVar8 = *(long *)(param_1 + 0x210);
      *(ulong *)(param_1 + 0x1e0) = uVar6 | 2;
      local_48 = param_1;
      lVar3 = nn::os::GetCurrentThread();
      plVar5 = (long *)(lVar8 + 0x60);
      do {
        if (*plVar5 != 0) {
          ClearExclusiveLocal();
          do {
            nn::os::WaitLightEvent((LightEventType *)(lVar8 + 0x54));
            while (*plVar5 == 0) {
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
              if (bVar2) {
                *plVar5 = lVar3;
                cVar1 = ExclusiveMonitorsStatus();
              }
              if (cVar1 == '\0') goto LAB_02a70678;
            }
            ClearExclusiveLocal();
          } while( true );
        }
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = lVar3;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
LAB_02a70678:
      FUN_02a6b514(lVar8 + 0xd0,&local_48);
      *(undefined8 *)(lVar8 + 0x60) = 0;
      nn::os::SignalLightEvent((LightEventType *)(lVar8 + 0x54));
    }
  }
  return;
}


