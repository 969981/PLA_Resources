/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011487a4; name: FUN_011487a4
 */


undefined4 FUN_011487a4(long param_1,int param_2)

{
  MutexType *pMVar1;
  byte bVar2;
  undefined4 uVar3;
  ulong uVar4;
  int *piVar5;
  
  uVar4 = FUN_01148048();
  if ((uVar4 & 1) == 0) {
    return 0;
  }
  FUN_01148228(param_1,param_2);
  pMVar1 = (MutexType *)(param_1 + 0x140);
  do {
    nn::os::LockMutex(pMVar1);
    piVar5 = *(int **)(param_1 + 0x120);
    if (((piVar5 == (int *)0x0) || (*piVar5 != param_2)) || (*(long *)(piVar5 + 2) == 0)) {
      nn::os::UnlockMutex(pMVar1);
    }
    else {
      bVar2 = *(byte *)(*(long *)(piVar5 + 2) + 0x302);
      nn::os::UnlockMutex(pMVar1);
      if ((bVar2 & 1) != 0) {
        uVar3 = FUN_0114828c(param_1,param_2);
        FUN_011482f0(param_1,param_2);
        return uVar3;
      }
    }
    nn::os::SleepThread(10000000);
  } while( true );
}


