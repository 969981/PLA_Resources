/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a6d6b8; name: FUN_02a6d6b8
 */


void FUN_02a6d6b8(long param_1)

{
  int *piVar1;
  MutexType *pMVar2;
  int iVar3;
  undefined8 *puVar4;
  int iVar5;
  char cVar6;
  bool bVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  code *pcVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  undefined8 *puVar16;
  int iVar17;
  long local_48;
  
  if (*(long *)(param_1 + 0x5e8) == 0) {
    pMVar2 = (MutexType *)(param_1 + 0x560);
    nn::os::LockMutex(pMVar2);
    if (((*(byte *)(param_1 + 0x300) & 1) != 0) ||
       ((*(char *)(param_1 + 0x5e0) != '\0' &&
        (*(char *)(*(long *)(param_1 + 0x5d8) + 0x20c) != '\0')))) {
      nn::os::UnlockMutex(pMVar2);
      return;
    }
    lVar9 = FUN_02a6d310(param_1,param_1 + 0x5c8);
    *(long *)(param_1 + 0x5e8) = lVar9;
    if (lVar9 == 0) {
      piVar1 = (int *)(param_1 + 0x5e4);
      do {
        if (*piVar1 != 0) {
          ClearExclusiveLocal();
          goto LAB_02a6d9bc;
        }
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar7) {
          *piVar1 = 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      nn::os::SignalEvent((EventType *)(*(long *)(param_1 + 0x5c0) + 0x68));
      uVar10 = nn::os::TryWaitEvent((EventType *)(*(long *)(param_1 + 0x5c0) + 0x68));
      if ((uVar10 & 1) != 0) {
        do {
          nn::os::WaitConditionVariable((ConditionVariableType *)(param_1 + 0x5b8),pMVar2);
          uVar10 = nn::os::TryWaitEvent((EventType *)(*(long *)(param_1 + 0x5c0) + 0x68));
        } while ((uVar10 & 1) != 0);
      }
LAB_02a6d9bc:
      *(undefined4 *)(param_1 + 0x5e4) = 0;
      uVar11 = FUN_02a6d310(param_1,param_1 + 0x5c8);
      *(undefined8 *)(param_1 + 0x5e8) = uVar11;
    }
    nn::os::UnlockMutex(pMVar2);
  }
  if (*(int *)(param_1 + 0x304) == 1) {
    local_48 = param_1;
    (**(code **)(param_1 + 0x310))(param_1 + 0x330,&local_48);
    pcVar12 = *(code **)(param_1 + 0x318);
    if (pcVar12 != (code *)0x0) {
      *(undefined8 *)(param_1 + 800) = 0;
      *(undefined8 *)(param_1 + 0x328) = 0;
      *(undefined8 *)(param_1 + 0x310) = 0;
      *(undefined8 *)(param_1 + 0x318) = 0;
      (*pcVar12)(param_1 + 0x330);
    }
    *(undefined4 *)(param_1 + 0x304) = 2;
  }
  if (*(long *)(param_1 + 0x5e8) != 0) {
    lVar9 = param_1 + 0x5c8;
    lVar15 = *(long *)(*(long *)(param_1 + 0x5e8) + 0x58);
    if (lVar15 != 0) goto LAB_02a6d754;
LAB_02a6d7cc:
    do {
      plVar14 = (long *)0x0;
LAB_02a6d7d0:
      lVar15 = *(long *)(param_1 + 0x5e8);
      *(undefined8 *)(param_1 + 0x5e8) = 0;
      puVar4 = *(undefined8 **)(lVar15 + 0xb0);
      for (puVar16 = *(undefined8 **)(lVar15 + 0xa8); puVar16 != puVar4; puVar16 = puVar16 + 1) {
        (**(code **)(*(long *)*puVar16 + 0x68))((long *)*puVar16,lVar9);
      }
      *(undefined4 *)(lVar15 + 0x1f0) = 0;
      *(undefined4 *)(lVar15 + 0x37c) = *(undefined4 *)(param_1 + 0x5d0);
      FUN_02a68a08(lVar15 + 0x2b8,lVar9);
      if (plVar14 != (long *)0x0) {
        lVar15 = plVar14[0xb];
        piVar1 = (int *)(lVar15 + 0xc);
        do {
          iVar17 = *piVar1;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar7) {
            *piVar1 = iVar17 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar17 + -1 == 0) {
          *(undefined8 *)(lVar15 + 0x18) = 0;
          (**(code **)(*plVar14 + 0x20))(plVar14);
        }
      }
      if (*(long *)(param_1 + 0x5e8) == 0) goto LAB_02a6d854;
      lVar15 = *(long *)(*(long *)(param_1 + 0x5e8) + 0x58);
    } while (lVar15 == 0);
LAB_02a6d754:
    if (*(int *)(lVar15 + 0xc) == 0) goto LAB_02a6d7cc;
    piVar1 = (int *)(lVar15 + 0xc);
    iVar17 = *(int *)(lVar15 + 0xc);
    do {
      plVar13 = *(long **)(lVar15 + 0x10);
      plVar8 = (long *)FUN_00d8faf4();
      plVar14 = (long *)0x0;
      if (plVar13 == (long *)0x0) break;
      while (plVar13 != plVar8) {
        plVar13 = (long *)*plVar13;
        if (plVar13 == (long *)0x0) {
          plVar14 = (long *)0x0;
          goto LAB_02a6d7d0;
        }
      }
      iVar5 = *piVar1;
      if (iVar5 == iVar17) {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar7) {
          *piVar1 = iVar17 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
        if (cVar6 == '\0') {
          if (*(long *)(lVar15 + 0x18) == 0) goto LAB_02a6d7cc;
          plVar14 = (long *)(*(long *)(lVar15 + 0x18) + -0x50);
          FUN_02a684dc(plVar14,lVar9);
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      plVar14 = (long *)0x0;
      iVar17 = iVar5;
    } while (iVar5 != 0);
    goto LAB_02a6d7d0;
  }
LAB_02a6d854:
  nn::os::LockMutex((MutexType *)(param_1 + 0x560));
  lVar9 = FUN_02a6d310(param_1,param_1 + 0x5c8);
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x560));
  *(long *)(param_1 + 0x5e8) = lVar9;
  if (lVar9 == 0) {
    lVar9 = *(long *)(param_1 + 0x5d8);
    iVar5 = *(int *)(param_1 + 0x5d4);
    iVar17 = 0;
    if (iVar5 + 1 < *(int *)(lVar9 + 0x200)) {
      iVar17 = iVar5 + 1;
    }
    do {
      lVar15 = *(long *)(lVar9 + (long)iVar17 * 8 + 0x18);
      pMVar2 = (MutexType *)(lVar15 + 0x560);
      nn::os::LockMutex(pMVar2);
      lVar15 = FUN_02a6d310(lVar15,param_1 + 0x5c8);
      nn::os::UnlockMutex(pMVar2);
      if (lVar15 != 0) break;
      iVar3 = 0;
      if (iVar17 + 1 < *(int *)(lVar9 + 0x200)) {
        iVar3 = iVar17 + 1;
      }
      iVar17 = iVar3;
    } while (iVar3 != iVar5);
    *(long *)(param_1 + 0x5e8) = lVar15;
  }
  return;
}


