/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029181c4; name: FUN_029181c4
 */


void FUN_029181c4(long param_1,int param_2,uint param_3)

{
  MutexType *pMVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  
  pMVar1 = (MutexType *)(param_1 + 0x70);
  nn::os::LockMutex(pMVar1);
  nn::os::LockMutex(pMVar1);
  plVar4 = *(long **)(param_1 + 0x38);
  do {
    if (plVar4 == (long *)0x0) {
      nn::os::UnlockMutex(pMVar1);
LAB_02918264:
      nn::os::UnlockMutex(pMVar1);
      return;
    }
    if (*(int *)(plVar4 + 4) == param_2) {
      nn::os::UnlockMutex(pMVar1);
      if (*(int *)((long)plVar4 + 0x24) < 1) {
        FUN_029177d0(plVar4 + 3,param_3 & 1);
        lVar3 = plVar4[3];
        puVar2 = PTR_DAT_04379c88;
        if (lVar3 != 0) {
          puVar2 = (undefined *)(lVar3 + 0x58);
        }
        FUN_02918d0c(param_1 + 8,puVar2);
      }
      goto LAB_02918264;
    }
    plVar4 = (long *)*plVar4;
  } while( true );
}


