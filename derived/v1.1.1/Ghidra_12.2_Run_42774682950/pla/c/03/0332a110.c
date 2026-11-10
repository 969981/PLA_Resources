/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0332a110; name: FUN_0332a110
 */


void FUN_0332a110(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  SemaphoreType *pSVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  SemaphoreType *pSVar9;
  MutexType *pMVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  
  if ((*(int *)(param_1 + 0x50) == 0) && (*(int *)(param_1 + 0x28) != 0)) {
    pSVar4 = *(SemaphoreType **)(param_1 + 0x48);
    pSVar9 = pSVar4 + 0x40;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pSVar9,0x10);
      if (bVar3) {
        *(int *)pSVar9 = *(int *)pSVar9 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    nn::os::ReleaseSemaphore(pSVar4,1);
    iVar11 = *(int *)(param_1 + 0x28);
  }
  else {
    iVar11 = *(int *)(param_1 + 0x28);
  }
  if (iVar11 != 0) {
    iVar11 = 0;
    piVar1 = (int *)(param_1 + 0x50);
    do {
      pSVar9 = *(SemaphoreType **)(param_1 + 0x48);
      nn::os::AcquireSemaphore(pSVar9);
      if (*(int *)(pSVar9 + 0x40) != 0) {
        pSVar4 = pSVar9 + 0x40;
        iVar5 = *(int *)(pSVar9 + 0x40);
        do {
          iVar7 = *(int *)pSVar4;
          if (iVar7 == iVar5) {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(pSVar4,0x10);
            if (bVar3) {
              *(int *)pSVar4 = iVar5 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') {
              lVar12 = *(long *)(param_1 + 0x20);
              goto LAB_0332a190;
            }
          }
          else {
            ClearExclusiveLocal();
          }
          iVar5 = iVar7;
        } while (iVar7 != 0);
      }
      piVar8 = (int *)(*(long *)(pSVar9 + 0x30) + (long)*(int *)(pSVar9 + 0x28) * 4);
      do {
        piVar6 = piVar8;
        iVar5 = *piVar6;
        piVar8 = piVar6 + 1;
      } while (iVar5 < 0);
      *piVar6 = -2;
      iVar7 = *(int *)(pSVar9 + 0x28);
      if (iVar7 < *(int *)(pSVar9 + 0x38)) {
        lVar12 = (long)*(int *)(pSVar9 + 0x38) - (long)iVar7;
        piVar8 = (int *)(*(long *)(pSVar9 + 0x30) + (long)iVar7 * 4);
        do {
          iVar7 = iVar7 + 1;
          if (*piVar8 != -2) break;
          lVar12 = lVar12 + -1;
          *(int *)(pSVar9 + 0x28) = iVar7;
          piVar8 = piVar8 + 1;
        } while (lVar12 != 0);
        lVar12 = *(long *)(param_1 + 0x20);
        if (iVar5 != -1) goto LAB_0332a2a4;
LAB_0332a190:
        iVar5 = *(int *)(param_1 + 0x28);
        if (iVar5 != 0) {
          if (*(int *)(lVar12 + 0x20) == 4) {
            nn::os::LockMutex((MutexType *)(lVar12 + 0x28));
            if (*(int *)(lVar12 + 0x20) == 4) {
              if (*(char *)(lVar12 + 0x1d) == '\x01') {
                FUN_032ba220(*(undefined8 *)(lVar12 + 0x10),0);
              }
              iVar11 = iVar11 + 1;
              *(undefined4 *)(lVar12 + 0x20) = 3;
            }
            nn::os::UnlockMutex((MutexType *)(lVar12 + 0x28));
          }
          if (iVar5 != 1) {
            lVar13 = (long)iVar5 * 0x80 + -0x80;
            pMVar10 = (MutexType *)(lVar12 + 0xa8);
            do {
              if (*(int *)(pMVar10 + -8) == 4) {
                nn::os::LockMutex(pMVar10);
                if (*(int *)(pMVar10 + -8) == 4) {
                  if (pMVar10[-0xb] == (MutexType)0x1) {
                    FUN_032ba220(*(undefined8 *)(pMVar10 + -0x18),0);
                  }
                  iVar11 = iVar11 + 1;
                  *(undefined4 *)(pMVar10 + -8) = 3;
                }
                nn::os::UnlockMutex(pMVar10);
              }
              lVar13 = lVar13 + -0x80;
              pMVar10 = pMVar10 + 0x80;
            } while (lVar13 != 0);
          }
        }
      }
      else {
        lVar12 = *(long *)(param_1 + 0x20);
LAB_0332a2a4:
        lVar12 = lVar12 + (long)iVar5 * 0x80;
        pMVar10 = (MutexType *)(lVar12 + 0x28);
        nn::os::LockMutex(pMVar10);
        iVar5 = *(int *)(lVar12 + 0x20);
        if (iVar5 == 2) {
          *(int *)(lVar12 + 0x20) = 0;
          if (*(char *)(lVar12 + 0x1d) == '\0') {
LAB_0332a388:
            nn::os::ReleaseSemaphore((SemaphoreType *)(lVar12 + 0x50),1);
          }
          else if (*(char *)(lVar12 + 0x1d) == '\x01') {
            FUN_032ba220(*(undefined8 *)(lVar12 + 0x10),0);
            goto LAB_0332a388;
          }
          nn::os::UnlockMutex(pMVar10);
          do {
            iVar5 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar5 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          iVar11 = iVar11 + 1;
          if ((iVar5 == 1) && (iVar11 != *(int *)(param_1 + 0x28))) {
            pSVar4 = *(SemaphoreType **)(param_1 + 0x48);
            pSVar9 = pSVar4 + 0x40;
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(pSVar9,0x10);
              if (bVar3) {
                *(int *)pSVar9 = *(int *)pSVar9 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            nn::os::ReleaseSemaphore(pSVar4,1);
          }
        }
        else {
          if (iVar5 != 5) {
            do {
                    /* WARNING: Do nothing block with infinite loop */
            } while( true );
          }
          nn::os::UnlockMutex(pMVar10);
          iVar11 = iVar11 + 1;
        }
      }
    } while (iVar11 != *(int *)(param_1 + 0x28));
  }
  return;
}


