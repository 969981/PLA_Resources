/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00867b40; name: FUN_00867b40
 */


void FUN_00867b40(long param_1,int *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  long lVar5;
  long *plVar6;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x18));
  *(undefined1 *)(param_1 + 0x4a) = 0;
  plVar6 = *(long **)(param_1 + 8);
  if (*param_2 == 0) {
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x30))(plVar6,1);
    }
  }
  else if (plVar6 != (long *)0x0) {
    uVar4 = FUN_007f00c8(param_2);
    (**(code **)(*plVar6 + 0x38))(plVar6,uVar4);
    plVar6 = *(long **)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    if (plVar6 != (long *)0x0) {
      plVar1 = plVar6 + 1;
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
        (**(code **)(*plVar6 + 0x10))(plVar6);
        std::__shared_weak_count::__release_weak();
      }
    }
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x18));
  return;
}


