/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02911dcc; name: FUN_02911dcc
 */


undefined8
FUN_02911dcc(long param_1,long param_2,uint param_3,undefined8 param_4,undefined8 param_5)

{
  MutexType *pMVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  
  pMVar1 = (MutexType *)(*(long *)(param_1 + 0x198) + 0x70);
  nn::os::LockMutex(pMVar1);
  lVar3 = FUN_029179a0(*(undefined8 *)(param_1 + 0x198),param_2,param_3 & 1,param_4,param_5);
  iVar2 = *(int *)(lVar3 + 0xc);
  nn::os::UnlockMutex(pMVar1);
  if (iVar2 < 2) {
    if ((param_3 & 1) == 0) {
      plVar4 = *(long **)(*(long *)(param_1 + 0x158) + 0x60);
      uVar5 = (**(code **)(*plVar4 + 0xe0))(plVar4,*(undefined8 *)(param_2 + 8),lVar3 + 8);
      iVar2 = (int)uVar5;
    }
    else {
      plVar4 = *(long **)(*(long *)(param_1 + 0x158) + 0x60);
      uVar5 = (**(code **)(*plVar4 + 0xe8))
                        (plVar4,*(undefined8 *)(param_2 + 8),&LAB_0290f210,param_1);
      iVar2 = (int)uVar5;
    }
    if (iVar2 != 1) {
      lVar3 = *(long *)(param_1 + 0x198);
      pMVar1 = (MutexType *)(lVar3 + 0x70);
      nn::os::LockMutex(pMVar1);
      FUN_02918d0c(lVar3 + 8,param_2);
      nn::os::UnlockMutex(pMVar1);
      uVar5 = 0;
    }
  }
  else {
    uVar5 = 1;
  }
  return uVar5;
}


