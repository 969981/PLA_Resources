/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0332ba70; name: FUN_0332ba70
 */


void FUN_0332ba70(int *param_1)

{
  MutexType *pMVar1;
  long *plVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  undefined *local_60;
  undefined8 local_58;
  undefined ***pppuStack_50;
  undefined **local_48;
  undefined8 local_40;
  long lStack_38;
  undefined4 local_30;
  
  pMVar1 = (MutexType *)(param_1 + 2);
  iVar3 = *param_1;
  do {
    while (iVar3 == 0) {
      iVar3 = *param_1;
      if (iVar3 == 0) {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar6) {
          *param_1 = 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 == '\0') {
          return;
        }
      }
      else {
        ClearExclusiveLocal();
      }
    }
    nn::os::LockMutex(pMVar1);
    iVar4 = *param_1;
    if (iVar4 == iVar3) {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar6) {
        *param_1 = iVar3 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
      if (cVar5 == '\0') {
        lVar7 = FUN_0332af70();
        if (lVar7 == 0) {
          FUN_0332b928(&local_48,0,1000,0);
          local_60 = &DAT_043509b8;
          local_58 = 0;
          plVar2 = (long *)(param_1 + 10);
          if (*(long *)(param_1 + 0xc) != 0) {
            plVar2 = (long *)(*(long *)(param_1 + 0xc) + 8);
          }
          *plVar2 = (long)&local_60;
          *(undefined ***)(param_1 + 0xc) = &local_60;
          pppuStack_50 = &local_48;
          nn::os::UnlockMutex(pMVar1);
          nn::os::AcquireSemaphore((SemaphoreType *)&local_48);
          nn::os::FinalizeSemaphore((SemaphoreType *)&local_48);
          return;
        }
        local_30 = FUN_0332ae88();
        local_48 = &PTR_LAB_043509a0;
        local_40 = 0;
        plVar2 = (long *)(param_1 + 10);
        if (*(long *)(param_1 + 0xc) != 0) {
          plVar2 = (long *)(*(long *)(param_1 + 0xc) + 8);
        }
        *plVar2 = (long)&local_48;
        *(undefined ****)(param_1 + 0xc) = &local_48;
        lStack_38 = lVar7;
        nn::os::UnlockMutex(pMVar1);
        FUN_0332afe8(lVar7);
        return;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    nn::os::UnlockMutex(pMVar1);
    iVar3 = iVar4;
  } while( true );
}


