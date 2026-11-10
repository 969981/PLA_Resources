/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0332a748; name: FUN_0332a748
 */


void FUN_0332a748(long *param_1,int param_2)

{
  MutexType *pMVar1;
  long *plVar2;
  SemaphoreType *pSVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  SemaphoreType *pSVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  int *piVar12;
  
  lVar11 = param_1[4];
  lVar7 = tpidr_el0;
  lVar9 = *(long *)(lVar7 + 0x38d490);
  if (lVar9 == 0) {
    lVar9 = FUN_0333d16c(0,1);
    *(long *)(lVar7 + 0x38d490) = lVar9;
  }
  lVar9 = *(long *)(lVar9 + 0x10);
  if ((lVar9 != 0) && (0 < *(int *)((long)param_1 + 0x54))) {
    FUN_032d6050(lVar9);
  }
  lVar11 = lVar11 + (long)param_2 * 0x80;
  *(long *)(lVar11 + 0x78) = lVar9;
  lVar10 = (long)DAT_0444b538;
  lVar9 = *(long *)(lVar7 + 0x38d490);
  if (lVar9 == 0) {
    lVar9 = FUN_0333d16c(0,1);
    *(long *)(lVar7 + 0x38d490) = lVar9;
  }
  *(long *)(lVar9 + lVar10 * 8 + 0x18) = (long)param_2;
  lVar10 = (long)DAT_0444b53c;
  lVar9 = *(long *)(lVar7 + 0x38d490);
  if (lVar9 == 0) {
    lVar9 = FUN_0333d16c(0,1);
    *(long *)(lVar7 + 0x38d490) = lVar9;
  }
  *(long **)(lVar9 + lVar10 * 8 + 0x18) = param_1;
  FUN_0332a954(param_1);
  (**(code **)(*param_1 + 0x28))(param_1,param_2);
  pMVar1 = (MutexType *)(lVar11 + 0x28);
  nn::os::LockMutex(pMVar1);
  piVar12 = (int *)(lVar11 + 0x20);
  if (*piVar12 == 0) {
    *piVar12 = 5;
    nn::os::UnlockMutex(pMVar1);
    return;
  }
  if (*piVar12 != 1) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  *piVar12 = 5;
  nn::os::UnlockMutex(pMVar1);
  plVar2 = param_1 + 10;
  do {
    iVar6 = (int)*plVar2 + -1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar5) {
      *(int *)plVar2 = iVar6;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar6 == 0) {
    pSVar8 = (SemaphoreType *)param_1[9];
    pSVar3 = pSVar8 + 0x40;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pSVar3,0x10);
      if (bVar5) {
        *(int *)pSVar3 = *(int *)pSVar3 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    nn::os::ReleaseSemaphore(pSVar8,1);
  }
  pSVar8 = (SemaphoreType *)param_1[9];
  pSVar3 = pSVar8 + 0x2c;
  do {
    iVar6 = *(int *)pSVar3;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(pSVar3,0x10);
    if (bVar5) {
      *(int *)pSVar3 = iVar6 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  *(int *)(*(long *)(pSVar8 + 0x30) + (long)iVar6 * 4) = param_2;
  nn::os::ReleaseSemaphore(pSVar8,1);
  return;
}


