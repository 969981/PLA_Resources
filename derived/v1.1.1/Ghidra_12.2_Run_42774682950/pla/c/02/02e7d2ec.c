/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e7d2ec; name: FUN_02e7d2ec
 */


long FUN_02e7d2ec(MutexType *param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  MutexType *pMVar3;
  long lVar4;
  
  if (param_3 == 0) {
    nn::os::LockMutex(param_1);
    uVar1 = *(uint *)(param_1 + 0x28);
    if (uVar1 == 0) {
      lVar4 = 0;
    }
    else {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = param_2 / uVar1;
      }
      for (lVar4 = *(long *)(*(long *)(param_1 + 0x20) + (ulong)(param_2 - uVar2 * uVar1) * 8);
          lVar4 != 0; lVar4 = *(long *)(lVar4 + 8)) {
        if (*(uint *)(lVar4 + 0x10) == param_2) {
          *(int *)(lVar4 + 0x14) = *(int *)(lVar4 + 0x14) + 1;
          break;
        }
      }
    }
    pMVar3 = param_1;
  }
  else {
    pMVar3 = param_1 + 0x38;
    nn::os::LockMutex(pMVar3);
    uVar1 = *(uint *)(param_1 + 0x60);
    if (uVar1 == 0) {
      lVar4 = 0;
    }
    else {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = param_2 / uVar1;
      }
      for (lVar4 = *(long *)(*(long *)(param_1 + 0x58) + (ulong)(param_2 - uVar2 * uVar1) * 8);
          lVar4 != 0; lVar4 = *(long *)(lVar4 + 8)) {
        if (*(uint *)(lVar4 + 0x10) == param_2) {
          *(int *)(lVar4 + 0x14) = *(int *)(lVar4 + 0x14) + 1;
          break;
        }
      }
    }
  }
  nn::os::UnlockMutex(pMVar3);
  return lVar4;
}


