/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a6fce8; name: FUN_02a6fce8
 */


void FUN_02a6fce8(long param_1)

{
  int *piVar1;
  MutexType *pMVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  code *pcVar10;
  long lVar11;
  long local_38;
  
  if ((*(byte *)(param_1 + 0x250) & 1) != 0) {
    lVar7 = nn::os::GetCurrentThread();
    plVar8 = (long *)(param_1 + 0x2a8);
    do {
      if (*plVar8 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x29c));
          while (*plVar8 == 0) {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar5) {
              *plVar8 = lVar7;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') goto LAB_02a6fd54;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar5) {
        *plVar8 = lVar7;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
LAB_02a6fd54:
    lVar11 = *(long *)(param_1 + 0x218);
    lVar7 = *(long *)(param_1 + 0x220);
    while (lVar6 = lVar7, lVar6 != lVar11) {
      pcVar10 = *(code **)(lVar6 + -0x78);
      lVar7 = lVar6 + -0x80;
      if (pcVar10 != (code *)0x0) {
        *(undefined8 *)(lVar6 + -0x70) = 0;
        *(undefined8 *)(lVar6 + -0x68) = 0;
        *(undefined8 *)(lVar6 + -0x80) = 0;
        *(undefined8 *)(lVar6 + -0x78) = 0;
        (*pcVar10)(lVar6 + -0x60);
      }
    }
    *(long *)(param_1 + 0x220) = lVar11;
    *(undefined1 *)(param_1 + 0x250) = 0;
    *(undefined8 *)(param_1 + 0x2a8) = 0;
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x29c));
  }
  if ((*(byte *)(param_1 + 0x2f0) & 1) != 0) {
    lVar7 = nn::os::GetCurrentThread();
    plVar8 = (long *)(param_1 + 0x348);
    do {
      if (*plVar8 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x33c));
          while (*plVar8 == 0) {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar5) {
              *plVar8 = lVar7;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') goto LAB_02a6fe04;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar5) {
        *plVar8 = lVar7;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
LAB_02a6fe04:
    lVar11 = *(long *)(param_1 + 0x2b8);
    lVar7 = *(long *)(param_1 + 0x2c0);
    while (lVar6 = lVar7, lVar6 != lVar11) {
      pcVar10 = *(code **)(lVar6 + -0x78);
      lVar7 = lVar6 + -0x80;
      if (pcVar10 != (code *)0x0) {
        *(undefined8 *)(lVar6 + -0x70) = 0;
        *(undefined8 *)(lVar6 + -0x68) = 0;
        *(undefined8 *)(lVar6 + -0x80) = 0;
        *(undefined8 *)(lVar6 + -0x78) = 0;
        (*pcVar10)(lVar6 + -0x60);
      }
    }
    *(long *)(param_1 + 0x2c0) = lVar11;
    *(undefined1 *)(param_1 + 0x2f0) = 0;
    *(undefined8 *)(param_1 + 0x348) = 0;
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x33c));
  }
  plVar8 = *(long **)(param_1 + 0x1d0);
  *(undefined8 *)(param_1 + 0x1d0) = 0;
  *(ulong *)(param_1 + 0x1e0) = *(ulong *)(param_1 + 0x1e0) & 0xffffffffffffffee;
  if (plVar8 != (long *)0x0) {
    lVar7 = plVar8[0xb];
    piVar1 = (int *)(lVar7 + 0xc);
    do {
      iVar3 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 + -1 == 0) {
      *(undefined8 *)(lVar7 + 0x18) = 0;
      (**(code **)(*plVar8 + 0x20))();
    }
  }
  plVar8 = *(long **)(param_1 + 0x1d8);
  *(undefined8 *)(param_1 + 0x1d8) = 0;
  if (plVar8 != (long *)0x0) {
    lVar7 = plVar8[0xb];
    piVar1 = (int *)(lVar7 + 0xc);
    do {
      iVar3 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 + -1 == 0) {
      *(undefined8 *)(lVar7 + 0x18) = 0;
      (**(code **)(*plVar8 + 0x20))();
    }
  }
  lVar7 = *(long *)(param_1 + 0x210);
  pMVar2 = (MutexType *)(lVar7 + 0x30);
  local_38 = param_1;
  uVar9 = nn::os::IsMutexLockedByCurrentThread(pMVar2);
  if ((uVar9 & 1) == 0) {
    nn::os::LockMutex(pMVar2);
    FUN_02a6b514(lVar7 + 0x108,&local_38);
    nn::os::UnlockMutex(pMVar2);
  }
  else {
    FUN_02a6b514(lVar7 + 0x140,&local_38);
  }
                    /* WARNING: Could not recover jumptable at 0x02a6ff20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0xa0))();
  return;
}


