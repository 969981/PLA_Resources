/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0317cc14; name: FUN_0317cc14
 */


long FUN_0317cc14(long *param_1)

{
  MutexType *pMVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  int *piVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  int *piVar11;
  undefined8 *puVar12;
  long lVar13;
  long *local_48;
  
  plVar8 = param_1 + 1;
  piVar11 = (int *)*plVar8;
  if ((int *)*plVar8 == (int *)0x0) {
    lVar10 = tpidr_el0;
    lVar9 = *(long *)(lVar10 + 0x38d490);
    if (lVar9 == 0) {
      lVar9 = FUN_0333d16c(0,1);
      *(long *)(lVar10 + 0x38d490) = lVar9;
    }
    plVar7 = *(long **)(*(long *)(lVar9 + 8) + 0x58);
    piVar6 = (int *)(**(code **)(*plVar7 + 0x10))(plVar7,0x38,0);
    *piVar6 = 0;
    nn::os::InitializeMutex((MutexType *)(piVar6 + 2),true,0);
    piVar6[10] = 0;
    piVar6[0xb] = 0;
    piVar6[0xc] = 0;
    piVar6[0xd] = 0;
    do {
      piVar11 = (int *)*plVar8;
      if (piVar11 != (int *)0x0) {
        ClearExclusiveLocal();
        if (piVar6 != (int *)0x0) {
          nn::os::FinalizeMutex((MutexType *)(piVar6 + 2));
          lVar9 = *(long *)(lVar10 + 0x38d490);
          if (lVar9 == 0) {
            lVar9 = FUN_0333d16c(0,1);
            *(long *)(lVar10 + 0x38d490) = lVar9;
          }
          plVar8 = *(long **)(*(long *)(lVar9 + 8) + 0x58);
          (**(code **)(*plVar8 + 0x18))(plVar8,piVar6,0x38);
        }
        goto LAB_0317cc3c;
      }
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar5) {
        *plVar8 = (long)piVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    piVar11 = piVar6;
  }
LAB_0317cc3c:
  FUN_0332ba70(piVar11);
  if ((char)param_1[2] == '\0') {
    if (*(long *)(*param_1 + 0x10) != 1) {
      lVar13 = (long)DAT_0444b53c;
      lVar10 = tpidr_el0;
      lVar9 = *(long *)(lVar10 + 0x38d490);
      if (lVar9 == 0) {
        lVar9 = FUN_0333d16c(0,1);
        *(long *)(lVar10 + 0x38d490) = lVar9;
      }
      if (*(long *)(lVar9 + lVar13 * 8 + 0x18) != 0) {
        FUN_0332a954();
      }
      FUN_0317cf84(&local_48,*param_1);
      lVar13 = (long)DAT_0444b53c;
      lVar9 = *(long *)(lVar10 + 0x38d490);
      if (lVar9 == 0) {
        lVar9 = FUN_0333d16c(0,1);
        *(long *)(lVar10 + 0x38d490) = lVar9;
      }
      if (*(long *)(lVar9 + lVar13 * 8 + 0x18) != 0) {
        FUN_0332a954();
      }
      plVar8 = local_48;
      DataMemoryBarrier(2,3);
      local_48 = (long *)0x0;
      plVar7 = (long *)*param_1;
      *param_1 = (long)plVar8;
      if ((plVar7 != (long *)0x0) && (plVar7[1] != 0)) {
        plVar8 = plVar7 + 2;
        do {
          lVar10 = *plVar8;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar5) {
            *plVar8 = lVar10 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (((lVar10 + -1 == 0) && ((**(code **)(*plVar7 + 0x18))(), local_48 != (long *)0x0)) &&
           (local_48[1] != 0)) {
          plVar8 = local_48 + 2;
          do {
            lVar10 = *plVar8;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar5) {
              *plVar8 = lVar10 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar10 + -1 == 0) {
            (**(code **)(*local_48 + 0x18))();
          }
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
            puVar12 = *(undefined8 **)(piVar11 + 10);
            lVar10 = puVar12[1];
            if (lVar10 == 0) {
              piVar11[0xc] = 0;
              piVar11[0xd] = 0;
            }
            *(long *)(piVar11 + 10) = lVar10;
            nn::os::UnlockMutex(pMVar1);
            (**(code **)*puVar12)(puVar12);
            goto LAB_0317cf00;
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
LAB_0317cf00:
  return *param_1;
}


