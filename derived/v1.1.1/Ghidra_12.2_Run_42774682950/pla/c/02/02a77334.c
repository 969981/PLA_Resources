/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a77334; name: FUN_02a77334
 */


void FUN_02a77334(long param_1,long param_2)

{
  MutexType *pMVar1;
  long *plVar2;
  size_t sVar3;
  ulong uVar4;
  long *plVar5;
  long *__dest;
  long *plVar6;
  long local_48;
  
  pMVar1 = (MutexType *)(param_1 + 0x160);
  local_48 = param_2;
  uVar4 = nn::os::IsMutexLockedByCurrentThread(pMVar1);
  if ((uVar4 & 1) != 0) {
    FUN_02a7701c(param_1 + 0x128,&local_48);
    return;
  }
  nn::os::LockMutex(pMVar1);
  plVar6 = *(long **)(param_1 + 0xf0);
  plVar5 = *(long **)(param_1 + 0xf8);
  if ((plVar6 != plVar5) && (*plVar6 != param_2)) {
    do {
      if (plVar5 + -1 == plVar6) goto LAB_02a773f8;
      plVar2 = plVar6 + 1;
      plVar6 = plVar6 + 1;
    } while (*plVar2 != param_2);
  }
  if (plVar5 != plVar6) {
    sVar3 = (long)plVar5 - (long)(plVar6 + 1);
    if (sVar3 != 0) {
      memmove(plVar6,plVar6 + 1,sVar3);
    }
    plVar5 = plVar6 + ((long)sVar3 >> 3);
    *(long **)(param_1 + 0xf8) = plVar5;
  }
LAB_02a773f8:
  plVar6 = *(long **)(param_1 + 0x128);
  plVar2 = *(long **)(param_1 + 0x130);
  if (plVar6 != plVar2) {
    do {
      __dest = *(long **)(param_1 + 0xf0);
      if ((__dest != plVar5) && (*__dest != *plVar6)) {
        do {
          __dest = __dest + 1;
          if (plVar5 == __dest) goto LAB_02a77410;
        } while (*__dest != *plVar6);
      }
      if (plVar5 != __dest) {
        sVar3 = (long)plVar5 - (long)(__dest + 1);
        if (sVar3 != 0) {
          memmove(__dest,__dest + 1,sVar3);
        }
        plVar5 = __dest + ((long)sVar3 >> 3);
        *(long **)(param_1 + 0xf8) = plVar5;
      }
LAB_02a77410:
      plVar6 = plVar6 + 1;
    } while (plVar6 != plVar2);
    plVar6 = *(long **)(param_1 + 0x128);
  }
  *(long **)(param_1 + 0x130) = plVar6;
  nn::os::UnlockMutex(pMVar1);
  return;
}


