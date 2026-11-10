/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0070c18c; name: FUN_0070c18c
 */


void FUN_0070c18c(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined4 local_24;
  
  lVar5 = *param_1;
  if (lVar5 != 0) {
    local_24 = (undefined4)param_1[2];
    nn::os::LockMutex((MutexType *)(lVar5 + 0x40));
                    /* try { // try from 0070c1c0 to 0070c1c7 has its CatchHandler @ 0070c228 */
    FUN_0070c858(lVar5 + 0x20,&local_24);
    nn::os::UnlockMutex((MutexType *)(lVar5 + 0x40));
  }
  plVar4 = (long *)param_1[1];
  if (plVar4 != (long *)0x0) {
    plVar1 = plVar4 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      std::__shared_weak_count::__release_weak();
      return;
    }
  }
  return;
}


