/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02fff350; name: FUN_02fff350
 */


void FUN_02fff350(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  MutexType *pMVar3;
  long lVar4;
  MutexType *pMVar5;
  
  *param_1 = *param_2;
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x38d490);
  if (lVar4 == 0) {
    lVar4 = FUN_0333d16c(0,1);
    *(long *)(lVar1 + 0x38d490) = lVar4;
  }
  plVar2 = *(long **)(*(long *)(lVar4 + 8) + 0x58);
  pMVar3 = (MutexType *)(**(code **)(*plVar2 + 0x10))(plVar2,0x20,0);
  nn::os::InitializeMutex(pMVar3,true,0);
  pMVar5 = (MutexType *)param_1[0x20];
  param_1[0x20] = pMVar3;
  if (pMVar5 != (MutexType *)0x0) {
    nn::os::FinalizeMutex(pMVar5);
    lVar4 = *(long *)(lVar1 + 0x38d490);
    if (lVar4 == 0) {
      lVar4 = FUN_0333d16c(0,1);
      *(long *)(lVar1 + 0x38d490) = lVar4;
    }
    plVar2 = *(long **)(*(long *)(lVar4 + 8) + 0x58);
    (**(code **)(*plVar2 + 0x18))(plVar2,pMVar5,0x20);
  }
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)((long)param_2 + 0x14);
  FUN_02fffe30(param_1,param_2[1],*(undefined4 *)(param_2 + 2));
  return;
}


