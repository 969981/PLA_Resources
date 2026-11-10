/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a700c0; name: FUN_02a700c0
 */


void FUN_02a700c0(long param_1,long *param_2)

{
  int *piVar1;
  int iVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long local_38;
  
  plVar6 = *(long **)(param_1 + 0x1d8);
  *(undefined8 *)(param_1 + 0x1d8) = 0;
  if (plVar6 != (long *)0x0) {
    lVar8 = plVar6[0xb];
    piVar1 = (int *)(lVar8 + 0xc);
    do {
      iVar2 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar2 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar2 + -1 == 0) {
      *(undefined8 *)(lVar8 + 0x18) = 0;
      (**(code **)(*plVar6 + 0x20))();
    }
  }
  lVar8 = *param_2;
  *param_2 = 0;
  *(long *)(param_1 + 0x1d8) = lVar8;
  *(ulong *)(lVar8 + 0x1e0) = *(ulong *)(lVar8 + 0x1e0) & 0xfffffffffffffffb;
  local_38 = *(long *)(param_1 + 0x1d8);
  plVar6 = *(long **)(param_1 + 0x120);
  plVar3 = *(long **)(param_1 + 0x128);
  if ((plVar6 != plVar3) && (*plVar6 != local_38)) {
    do {
      plVar6 = plVar6 + 1;
      if (plVar3 == plVar6) goto LAB_02a70178;
    } while (*plVar6 != local_38);
  }
  if (plVar3 == plVar6) {
LAB_02a70178:
    FUN_02a713d4(param_1 + 0x120,&local_38);
    FUN_02a72590(*(undefined8 *)(param_1 + 0x120),*(undefined8 *)(param_1 + 0x128));
    uVar9 = *(ulong *)(param_1 + 0x1e0);
    uVar7 = (uint)uVar9;
  }
  else {
    uVar9 = *(ulong *)(param_1 + 0x1e0);
    uVar7 = (uint)uVar9;
  }
  if ((uVar7 >> 1 & 1) == 0) {
    lVar10 = *(long *)(param_1 + 0x210);
    *(ulong *)(param_1 + 0x1e0) = uVar9 | 2;
    local_38 = param_1;
    lVar8 = nn::os::GetCurrentThread();
    plVar6 = (long *)(lVar10 + 0x60);
    do {
      if (*plVar6 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(lVar10 + 0x54));
          while (*plVar6 == 0) {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar5) {
              *plVar6 = lVar8;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') goto LAB_02a701ec;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar5) {
        *plVar6 = lVar8;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
LAB_02a701ec:
    FUN_02a6b514(lVar10 + 0xd0,&local_38);
    *(undefined8 *)(lVar10 + 0x60) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar10 + 0x54));
  }
  return;
}


