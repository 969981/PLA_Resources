/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a6c704; name: FUN_02a6c704
 */


void FUN_02a6c704(MultiWaitType *param_1)

{
  long *plVar1;
  ulong uVar2;
  MultiWaitHolderType *pMVar3;
  int iVar4;
  MultiWaitHolderType *pMVar5;
  
  pMVar3 = *(MultiWaitHolderType **)(param_1 + 0x30);
  pMVar5 = *(MultiWaitHolderType **)(param_1 + 0x38);
  if (pMVar3 != pMVar5) {
    do {
      iVar4 = 0;
      plVar1 = *(long **)(pMVar3 + 0x40);
      while( true ) {
        if ((plVar1 != (long *)0x0) && (uVar2 = (**(code **)(*plVar1 + 0x40))(), (uVar2 & 1) == 0))
        {
          if ((pMVar3[0x48] == (MultiWaitHolderType)0x0) && (*(long *)(pMVar3 + 0x40) != 0)) {
            nn::os::LinkMultiWaitHolder(param_1,pMVar3);
            pMVar3[0x48] = (MultiWaitHolderType)0x1;
          }
          iVar4 = iVar4 + 1;
        }
        if (pMVar5 == pMVar3 + 0x50) break;
        plVar1 = *(long **)(pMVar3 + 0x90);
        pMVar3 = pMVar3 + 0x50;
      }
      if (iVar4 == 0) {
        pMVar5 = *(MultiWaitHolderType **)(param_1 + 0x38);
        for (pMVar3 = *(MultiWaitHolderType **)(param_1 + 0x30); pMVar3 != pMVar5;
            pMVar3 = pMVar3 + 0x50) {
          if ((pMVar3[0x48] != (MultiWaitHolderType)0x0) && (*(long *)(pMVar3 + 0x40) != 0)) {
            nn::os::UnlinkMultiWaitHolder(pMVar3);
            pMVar3[0x48] = (MultiWaitHolderType)0x0;
          }
        }
        return;
      }
      do {
        pMVar3 = (MultiWaitHolderType *)nn::os::WaitAny(param_1);
        pMVar3 = (MultiWaitHolderType *)nn::os::GetMultiWaitHolderUserData(pMVar3);
        if ((pMVar3[0x48] != (MultiWaitHolderType)0x0) && (*(long *)(pMVar3 + 0x40) != 0)) {
          nn::os::UnlinkMultiWaitHolder(pMVar3);
          pMVar3[0x48] = (MultiWaitHolderType)0x0;
        }
        iVar4 = iVar4 + -1;
      } while (0 < iVar4);
      pMVar3 = *(MultiWaitHolderType **)(param_1 + 0x30);
      pMVar5 = *(MultiWaitHolderType **)(param_1 + 0x38);
    } while (pMVar3 != pMVar5);
  }
  return;
}


