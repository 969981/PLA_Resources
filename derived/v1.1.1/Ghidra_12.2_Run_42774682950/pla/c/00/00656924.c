/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00656924; name: FUN_00656924
 */


void FUN_00656924(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  *param_1 = (long)(PTR_DAT_043758e0 + 0x10);
  if ((char)param_1[0x17] != '\0') {
    plVar5 = (long *)param_1[0x16];
    if (plVar5 != (long *)0x0) {
      plVar1 = plVar5 + 1;
      do {
        lVar4 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar4 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar4 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        std::__shared_weak_count::__release_weak();
      }
    }
    if ((char)param_1[0x10] != '\0') {
      FUN_02767254(param_1 + 0x11,param_1[0x12]);
    }
    if ((*(byte *)(param_1 + 0xc) & 1) != 0) {
      (**(code **)(*(long *)param_1[0xf] + 0x18))
                ((long *)param_1[0xf],param_1[0xe],param_1[0xc] & 0xfffffffffffffffe,1);
    }
  }
  nn::os::FinalizeMutex((MutexType *)(param_1 + 7));
  *param_1 = (long)(PTR_DAT_043758d8 + 0x10);
  nn::os::FinalizeEvent((EventType *)(param_1 + 2));
  return;
}


