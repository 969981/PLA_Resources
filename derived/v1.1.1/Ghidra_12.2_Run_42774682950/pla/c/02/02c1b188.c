/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c1b188; name: FUN_02c1b188
 */


void FUN_02c1b188(long param_1)

{
  MutexType *pMVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  long lVar7;
  long *local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  if (*(long *)(param_1 + 0xb8) != 0) {
    *(undefined4 *)(param_1 + 0xb0) = 0;
    *(undefined8 *)(param_1 + 0xa0) = 0;
    *(undefined8 *)(param_1 + 0xa8) = 0;
    *(undefined8 *)(param_1 + 0x90) = 0;
    *(undefined8 *)(param_1 + 0x98) = 0;
    local_30 = 0;
    uStack_28 = 0;
    FUN_02c1b248(param_1,&local_30,0);
    if (*(long *)(*(long *)(param_1 + 0xb8) + 0x140) == 0) {
      local_38 = (long *)0x0;
    }
    else {
      FUN_02c188ac(&local_38);
    }
    plVar6 = local_38;
    pMVar1 = (MutexType *)(local_38 + 0xd);
    nn::os::LockMutex(pMVar1);
    *(undefined4 *)(plVar6 + 0x18) = 1;
    nn::os::UnlockMutex(pMVar1);
    if (local_38 != (long *)0x0) {
      lVar7 = local_38[0xb];
      piVar2 = (int *)(lVar7 + 0xc);
      do {
        iVar3 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = iVar3 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar3 + -1 == 0) {
        *(undefined8 *)(lVar7 + 0x18) = 0;
        (**(code **)(*local_38 + 0x20))();
      }
    }
  }
  return;
}


