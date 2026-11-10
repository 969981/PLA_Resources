/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03165a00; name: FUN_03165a00
 */


long FUN_03165a00(long *param_1)

{
  MutexType *pMVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  int *piVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  int *piVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  
  plVar8 = param_1 + 1;
  lVar10 = tpidr_el0;
  piVar11 = (int *)*plVar8;
  if ((int *)*plVar8 == (int *)0x0) {
    lVar9 = *(long *)(lVar10 + 0x38d490);
    if (lVar9 == 0) {
      lVar9 = FUN_0333d16c(0,1);
      *(long *)(lVar10 + 0x38d490) = lVar9;
    }
    plVar6 = *(long **)(*(long *)(lVar9 + 8) + 0x58);
    piVar7 = (int *)(**(code **)(*plVar6 + 0x10))(plVar6,0x38,0);
    *piVar7 = 0;
    nn::os::InitializeMutex((MutexType *)(piVar7 + 2),true,0);
    piVar7[10] = 0;
    piVar7[0xb] = 0;
    piVar7[0xc] = 0;
    piVar7[0xd] = 0;
    do {
      piVar11 = (int *)*plVar8;
      if (piVar11 != (int *)0x0) {
        ClearExclusiveLocal();
        if (piVar7 != (int *)0x0) {
          nn::os::FinalizeMutex((MutexType *)(piVar7 + 2));
          lVar9 = *(long *)(lVar10 + 0x38d490);
          if (lVar9 == 0) {
            lVar9 = FUN_0333d16c(0,1);
            *(long *)(lVar10 + 0x38d490) = lVar9;
          }
          plVar8 = *(long **)(*(long *)(lVar9 + 8) + 0x58);
          (**(code **)(*plVar8 + 0x18))(plVar8,piVar7,0x38);
        }
        goto LAB_03165a90;
      }
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar5) {
        *plVar8 = (long)piVar7;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    piVar11 = piVar7;
  }
LAB_03165a90:
  FUN_0332ba70(piVar11);
  if ((char)param_1[2] == '\0') {
    if (*(long *)(*param_1 + 0x10) != 1) {
      lVar12 = (long)DAT_0444b53c;
      lVar9 = *(long *)(lVar10 + 0x38d490);
      if (lVar9 == 0) {
        lVar9 = FUN_0333d16c(0,1);
        *(long *)(lVar10 + 0x38d490) = lVar9;
      }
      if (*(long *)(lVar9 + lVar12 * 8 + 0x18) == 0) {
        lVar12 = *param_1;
      }
      else {
        FUN_0332a954();
        lVar9 = *(long *)(lVar10 + 0x38d490);
        lVar12 = *param_1;
      }
      if (lVar9 == 0) {
        lVar9 = FUN_0333d16c(0,1);
        *(long *)(lVar10 + 0x38d490) = lVar9;
      }
      plVar8 = *(long **)(*(long *)(lVar9 + 8) + 0x58);
      lVar9 = (**(code **)(*plVar8 + 0x10))(plVar8,0x78,0);
      FUN_03165d78(lVar9,lVar12);
      lVar13 = (long)DAT_0444b53c;
      lVar12 = *(long *)(lVar10 + 0x38d490);
      if (lVar12 == 0) {
        lVar12 = FUN_0333d16c(0,1);
        *(long *)(lVar10 + 0x38d490) = lVar12;
      }
      if (*(long *)(lVar12 + lVar13 * 8 + 0x18) != 0) {
        FUN_0332a954();
      }
      DataMemoryBarrier(2,3);
      plVar8 = (long *)*param_1;
      *param_1 = lVar9;
      if ((plVar8 != (long *)0x0) && (plVar8[1] != 0)) {
        plVar6 = plVar8 + 2;
        do {
          lVar10 = *plVar6;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar5) {
            *plVar6 = lVar10 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar10 + -1 == 0) {
          (**(code **)(*plVar8 + 0x18))();
        }
      }
    }
    *(undefined1 *)(param_1 + 2) = 1;
  }
  pMVar1 = (MutexType *)(piVar11 + 2);
  iVar2 = *piVar11;
  do {
    while( true ) {
      while (iVar2 + -1 != 0) {
        nn::os::LockMutex(pMVar1);
        iVar3 = *piVar11;
        if (iVar3 == iVar2) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar11,0x10);
          if (bVar5) {
            *piVar11 = iVar2 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') {
            puVar14 = *(undefined8 **)(piVar11 + 10);
            lVar10 = puVar14[1];
            if (lVar10 == 0) {
              piVar11[0xc] = 0;
              piVar11[0xd] = 0;
            }
            *(long *)(piVar11 + 10) = lVar10;
            nn::os::UnlockMutex(pMVar1);
            (**(code **)*puVar14)(puVar14);
            goto LAB_03165cf8;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        nn::os::UnlockMutex(pMVar1);
        iVar2 = iVar3;
      }
      iVar2 = *piVar11;
      if (iVar2 == 1) break;
      ClearExclusiveLocal();
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(piVar11,0x10);
    if (bVar5) {
      *piVar11 = 0;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_03165cf8:
  return *param_1;
}


