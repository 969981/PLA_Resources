/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0301384c; name: FUN_0301384c
 */


void FUN_0301384c(long param_1)

{
  long lVar1;
  long *plVar2;
  MutexType *pMVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x38d490);
  if (lVar4 == 0) {
    lVar4 = FUN_0333d16c(0,1);
    *(long *)(lVar1 + 0x38d490) = lVar4;
  }
  plVar2 = *(long **)(*(long *)(lVar4 + 8) + 0x58);
  pMVar3 = (MutexType *)(**(code **)(*plVar2 + 0x10))(plVar2,0x20,0);
  nn::os::InitializeMutex(pMVar3,true,0);
  *(MutexType **)(param_1 + 0x40) = pMVar3;
  return;
}


