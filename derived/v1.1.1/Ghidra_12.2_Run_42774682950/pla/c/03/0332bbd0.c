/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0332bbd0; name: FUN_0332bbd0
 */


void FUN_0332bbd0(int *param_1)

{
  MutexType *pMVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  undefined8 *puVar7;
  
  iVar3 = *param_1;
  pMVar1 = (MutexType *)(param_1 + 2);
  do {
    while( true ) {
      while (iVar3 + -1 != 0) {
        nn::os::LockMutex(pMVar1);
        iVar2 = *param_1;
        if (iVar2 == iVar3) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(param_1,0x10);
          if (bVar5) {
            *param_1 = iVar3 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') {
            puVar7 = *(undefined8 **)(param_1 + 10);
            lVar6 = puVar7[1];
            if (lVar6 == 0) {
              param_1[0xc] = 0;
              param_1[0xd] = 0;
            }
            *(long *)(param_1 + 10) = lVar6;
            nn::os::UnlockMutex(pMVar1);
                    /* WARNING: Could not recover jumptable at 0x0332bc94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)*puVar7)(puVar7);
            return;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        nn::os::UnlockMutex(pMVar1);
        iVar3 = iVar2;
      }
      iVar3 = *param_1;
      if (iVar3 == 1) break;
      ClearExclusiveLocal();
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar5) {
      *param_1 = 0;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  return;
}


