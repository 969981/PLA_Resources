/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a6ff4c; name: FUN_02a6ff4c
 */


void FUN_02a6ff4c(long param_1,long *param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  long local_38;
  
  plVar5 = *(long **)(param_1 + 0x1d0);
  *(undefined8 *)(param_1 + 0x1d0) = 0;
  if (plVar5 != (long *)0x0) {
    lVar7 = plVar5[0xb];
    piVar1 = (int *)(lVar7 + 0xc);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      *(undefined8 *)(lVar7 + 0x18) = 0;
      (**(code **)(*plVar5 + 0x20))();
    }
  }
  lVar7 = *param_2;
  *param_2 = 0;
  *(long *)(param_1 + 0x1d0) = lVar7;
  *(ulong *)(lVar7 + 0x1e0) = *(ulong *)(lVar7 + 0x1e0) & 0xfffffffffffffffb;
  local_38 = *(long *)(param_1 + 0x1d0);
  plVar9 = *(long **)(param_1 + 0xe8);
  plVar5 = *(long **)(param_1 + 0xf0);
  if ((plVar9 != plVar5) && (*plVar9 != local_38)) {
    do {
      plVar9 = plVar9 + 1;
      if (plVar5 == plVar9) goto LAB_02a7000c;
    } while (*plVar9 != local_38);
  }
  if (plVar5 == plVar9) {
LAB_02a7000c:
    FUN_02a713d4((long *)(param_1 + 0xe8),&local_38);
    FUN_02a71ab0(*(undefined8 *)(param_1 + 0xe8),*(undefined8 *)(param_1 + 0xf0));
    uVar8 = *(ulong *)(param_1 + 0x1e0);
    uVar6 = (uint)uVar8;
  }
  else {
    uVar8 = *(ulong *)(param_1 + 0x1e0);
    uVar6 = (uint)uVar8;
  }
  if ((uVar6 >> 1 & 1) == 0) {
    lVar10 = *(long *)(param_1 + 0x210);
    *(ulong *)(param_1 + 0x1e0) = uVar8 | 2;
    local_38 = param_1;
    lVar7 = nn::os::GetCurrentThread();
    plVar5 = (long *)(lVar10 + 0x60);
    do {
      if (*plVar5 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(lVar10 + 0x54));
          while (*plVar5 == 0) {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
            if (bVar4) {
              *plVar5 = lVar7;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') goto LAB_02a7007c;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar4) {
        *plVar5 = lVar7;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
LAB_02a7007c:
    FUN_02a6b514(lVar10 + 0xd0,&local_38);
    *(undefined8 *)(lVar10 + 0x60) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar10 + 0x54));
  }
  return;
}


