/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00784db0; name: FUN_00784db0
 */


void FUN_00784db0(undefined8 *param_1,long *param_2)

{
  MutexType *pMVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  undefined4 local_38 [2];
  
  pMVar1 = (MutexType *)(param_1 + 0x14);
  nn::os::LockMutex(pMVar1);
  plVar4 = param_1 + 3;
  if ((long *)param_1[4] == plVar4) {
    lVar3 = *param_2;
    plVar4 = param_1 + 1;
    *param_2 = *plVar4;
    *(long **)(lVar3 + 8) = plVar4;
    *(long **)(*plVar4 + 8) = param_2;
    *plVar4 = lVar3;
    nn::os::LockMutex(pMVar1);
    if (((undefined8 *)param_1[4] == param_1 + 3 && *(char *)(param_1 + 0x22) == '\0') &&
       ((undefined8 *)param_1[2] == param_1 + 1)) {
      nn::os::ClearEvent((EventType *)(param_1 + 5));
    }
    else {
      nn::os::SignalEvent((EventType *)(param_1 + 5));
    }
    nn::os::UnlockMutex(pMVar1);
  }
  else {
    plVar2 = (long *)*plVar4;
    if (*(int *)(plVar2 + 2) != 1) {
      plVar2 = (long *)(**(code **)(*(long *)*param_1 + 0x10))((long *)*param_1,0x28,8);
      if (plVar2 == (long *)0x0) {
        local_38[0] = 0x220;
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0,(Result *)local_38,"");
      }
      *(undefined4 *)(plVar2 + 2) = 1;
      *plVar2 = (long)plVar2;
      plVar2[1] = (long)plVar2;
      plVar2[3] = (long)(plVar2 + 3);
      plVar2[4] = (long)(plVar2 + 3);
      *plVar2 = *plVar4;
      plVar2[1] = (long)plVar4;
      *(long **)(*plVar4 + 8) = plVar2;
      *plVar4 = (long)plVar2;
    }
    lVar3 = *param_2;
    plVar2 = plVar2 + 3;
    *param_2 = *plVar2;
    *(long **)(lVar3 + 8) = plVar2;
    *(long **)(*plVar2 + 8) = param_2;
    *plVar2 = lVar3;
  }
  nn::os::UnlockMutex(pMVar1);
  return;
}


