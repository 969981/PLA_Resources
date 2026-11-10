/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00783298; name: FUN_00783298
 */


void FUN_00783298(MultiWaitType *param_1,long *param_2)

{
  int iVar1;
  MultiWaitHolderType *pMVar2;
  long lVar3;
  int iVar4;
  
  iVar1 = (**(code **)(*param_2 + 0x10))(param_2);
  if (0 < iVar1) {
    iVar4 = 0;
    do {
      pMVar2 = (MultiWaitHolderType *)(**(code **)(*param_2 + 0x18))(param_2,iVar4);
      if (*(long *)(pMVar2 + 0x48) != 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      nn::os::LinkMultiWaitHolder(param_1,pMVar2);
      nn::os::SetMultiWaitHolderUserData(pMVar2,(ulong)pMVar2);
      iVar4 = iVar4 + 1;
      *(MultiWaitType **)(pMVar2 + 0x48) = param_1;
    } while (iVar1 != iVar4);
  }
  param_2 = param_2 + 1;
  lVar3 = *param_2;
  param_1 = param_1 + 0x30;
  *param_2 = *(long *)param_1;
  *(MultiWaitType **)(lVar3 + 8) = param_1;
  *(long **)(*(long *)param_1 + 8) = param_2;
  *(long *)param_1 = lVar3;
  return;
}


