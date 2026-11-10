/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00783064; name: FUN_00783064
 */


void FUN_00783064(long param_1,long *param_2)

{
  long *plVar1;
  int iVar2;
  MultiWaitHolderType *pMVar3;
  long lVar4;
  int iVar5;
  
  iVar2 = (**(code **)(*param_2 + 0x10))(param_2);
  if (0 < iVar2) {
    iVar5 = 0;
    do {
      pMVar3 = (MultiWaitHolderType *)(**(code **)(*param_2 + 0x18))(param_2,iVar5);
      if (*(long *)(pMVar3 + 0x48) != 0) {
        if (*(long *)(pMVar3 + 0x48) != param_1) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl("","","",0);
        }
        *(undefined8 *)(pMVar3 + 0x48) = 0;
        nn::os::SetMultiWaitHolderUserData(pMVar3,0);
        nn::os::UnlinkMultiWaitHolder(pMVar3);
      }
      iVar5 = iVar5 + 1;
    } while (iVar2 != iVar5);
  }
  if ((long *)(param_1 + 0x30) != param_2 + 1) {
    plVar1 = (long *)param_2[2];
    lVar4 = *plVar1;
    *(long **)(param_2[1] + 8) = plVar1;
    *plVar1 = param_2[1];
    *(long **)(lVar4 + 8) = param_2 + 1;
    param_2[1] = lVar4;
  }
  return;
}


