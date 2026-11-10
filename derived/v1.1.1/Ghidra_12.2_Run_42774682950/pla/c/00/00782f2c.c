/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00782f2c; name: FUN_00782f2c
 */


void FUN_00782f2c(long *param_1)

{
  int iVar1;
  MultiWaitHolderType *pMVar2;
  long *plVar3;
  int iVar4;
  long lVar5;
  
  plVar3 = (long *)param_1[0xc];
  if (plVar3 != (long *)0x0) {
    if (plVar3 != param_1) {
LAB_00782fc8:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    lVar5 = param_1[0xd];
    if (lVar5 != 0) {
      iVar1 = (**(code **)(*param_1 + 0x10))(plVar3);
      if (0 < iVar1) {
        iVar4 = 0;
        do {
          pMVar2 = (MultiWaitHolderType *)(**(code **)(*param_1 + 0x18))(plVar3,iVar4);
          if (*(long *)(pMVar2 + 0x48) != 0) {
            if (*(long *)(pMVar2 + 0x48) != lVar5) goto LAB_00782fc8;
            *(undefined8 *)(pMVar2 + 0x48) = 0;
            nn::os::SetMultiWaitHolderUserData(pMVar2,0);
            nn::os::UnlinkMultiWaitHolder(pMVar2);
          }
          iVar4 = iVar4 + 1;
        } while (iVar1 != iVar4);
      }
      if ((long *)(lVar5 + 0x30) != param_1 + 1) {
        plVar3 = (long *)param_1[2];
        lVar5 = *plVar3;
        *(long **)(param_1[1] + 8) = plVar3;
        *plVar3 = param_1[1];
        *(long **)(lVar5 + 8) = param_1 + 1;
        param_1[1] = lVar5;
      }
      param_1[0xd] = 0;
    }
    nn::os::FinalizeMultiWaitHolder((MultiWaitHolderType *)(param_1 + 4));
    param_1[0xc] = 0;
  }
  return;
}


