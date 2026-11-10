/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0332b180; name: FUN_0332b180
 */


void FUN_0332b180(long param_1,int param_2)

{
  MutexType *pMVar1;
  ulong uVar2;
  ulong uVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  int *piVar8;
  long lVar9;
  int iVar10;
  long lVar11;
  MutexType *pMVar12;
  
  lVar11 = *(long *)(param_1 + 0x20);
  lVar9 = (long)DAT_0444b53c;
  lVar7 = tpidr_el0;
  lVar6 = *(long *)(lVar7 + 0x38d490);
  if (lVar6 == 0) {
    lVar6 = FUN_0333d16c(0,1);
    *(long *)(lVar7 + 0x38d490) = lVar6;
    iVar10 = DAT_0444b538;
    lVar9 = *(long *)(lVar6 + lVar9 * 8 + 0x18);
    if (lVar6 == 0) {
      lVar6 = FUN_0333d16c(0,1);
      *(long *)(lVar7 + 0x38d490) = lVar6;
    }
  }
  else {
    lVar9 = *(long *)(lVar6 + lVar9 * 8 + 0x18);
    iVar10 = DAT_0444b538;
  }
  lVar7 = *(long *)(lVar6 + (long)iVar10 * 8 + 0x18);
  uVar2 = lVar11 + (long)param_2 * 0x80;
  if (lVar9 == 0 || (int)lVar7 == -1) {
    pMVar12 = (MutexType *)(uVar2 + 0x28);
    nn::os::LockMutex(pMVar12);
    piVar8 = (int *)(uVar2 + 0x24);
    if (*piVar8 == 0) {
      *piVar8 = 1;
      piVar8 = (int *)(uVar2 + 0x20);
      if (*piVar8 == 3) {
        *piVar8 = 0;
        if (*(char *)(uVar2 + 0x1d) == '\x02') goto LAB_0332b230;
      }
      else {
        if (*piVar8 != 4) {
          do {
                    /* WARNING: Do nothing block with infinite loop */
          } while( true );
        }
        *piVar8 = 1;
        piVar8 = (int *)(param_1 + 0x50);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar8,0x10);
          if (bVar5) {
            *piVar8 = *piVar8 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      nn::os::ReleaseSemaphore((SemaphoreType *)(uVar2 + 0x50),1);
    }
    else {
      *piVar8 = *piVar8 + 1;
    }
    goto LAB_0332b230;
  }
  uVar3 = *(long *)(param_1 + 0x20) + ((lVar7 << 0x20) >> 0x19);
  pMVar1 = (MutexType *)(uVar3 + 0x28);
  pMVar12 = (MutexType *)(uVar2 + 0x28);
  if (uVar2 <= uVar3) {
    pMVar12 = pMVar1;
    pMVar1 = (MutexType *)(uVar2 + 0x28);
  }
  nn::os::LockMutex(pMVar1);
  nn::os::LockMutex(pMVar12);
  piVar8 = (int *)(uVar2 + 0x24);
  if (*piVar8 == 0) {
    *piVar8 = 1;
    piVar8 = (int *)(uVar2 + 0x20);
    if (*piVar8 == 3) {
      *piVar8 = 0;
      if (*(char *)(uVar2 + 0x1d) == '\x02') goto LAB_0332b2f0;
    }
    else {
      if (*piVar8 != 4) {
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      *piVar8 = 1;
      piVar8 = (int *)(param_1 + 0x50);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar5) {
          *piVar8 = *piVar8 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    nn::os::ReleaseSemaphore((SemaphoreType *)(uVar2 + 0x50),1);
  }
  else {
    *piVar8 = *piVar8 + 1;
  }
LAB_0332b2f0:
  nn::os::UnlockMutex(pMVar1);
LAB_0332b230:
  nn::os::UnlockMutex(pMVar12);
  return;
}


