/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006de0c0; name: FUN_006de0c0
 */


void FUN_006de0c0(undefined8 param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  byte local_70;
  undefined7 uStack_6f;
  undefined8 local_60;
  long *plStack_58;
  byte local_50;
  undefined7 uStack_4f;
  undefined8 local_40;
  long *plStack_38;
  
  nn::os::LockMutex((MutexType *)(param_2 + 200));
  FUN_006ddfb8(&local_70,param_2,param_3);
  if ((local_50 & 1) != 0) {
    (**(code **)(*plStack_38 + 0x18))
              (plStack_38,local_40,CONCAT71(uStack_4f,local_50) & 0xfffffffffffffffe,1);
  }
  if ((local_70 & 1) == 0) {
    plVar5 = *(long **)(param_2 + 0xc0);
    *(undefined8 *)(param_2 + 0xb8) = 0;
    *(undefined8 *)(param_2 + 0xc0) = 0;
  }
  else {
    (**(code **)(*plStack_58 + 0x18))
              (plStack_58,local_60,CONCAT71(uStack_6f,local_70) & 0xfffffffffffffffe,1);
    plVar5 = *(long **)(param_2 + 0xc0);
    *(undefined8 *)(param_2 + 0xb8) = 0;
    *(undefined8 *)(param_2 + 0xc0) = 0;
  }
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
                    /* try { // try from 006de198 to 006de19f has its CatchHandler @ 006de1bc */
  FUN_002985e8(param_1,param_2 + 0x78);
  nn::os::UnlockMutex((MutexType *)(param_2 + 200));
  return;
}


