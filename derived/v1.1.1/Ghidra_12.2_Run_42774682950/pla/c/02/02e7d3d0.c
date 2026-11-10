/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e7d3d0; name: FUN_02e7d3d0
 */


long FUN_02e7d3d0(MutexType *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  MutexType *pMVar4;
  long lVar5;
  
  uVar1 = *param_2;
  if ((char)param_2[1] == '\0') {
    nn::os::LockMutex(param_1);
    uVar2 = *(uint *)(param_1 + 0x28);
    if (uVar2 == 0) {
      lVar5 = 0;
    }
    else {
      uVar3 = 0;
      if (uVar2 != 0) {
        uVar3 = uVar1 / uVar2;
      }
      for (lVar5 = *(long *)(*(long *)(param_1 + 0x20) + (ulong)(uVar1 - uVar3 * uVar2) * 8);
          lVar5 != 0; lVar5 = *(long *)(lVar5 + 8)) {
        if (*(uint *)(lVar5 + 0x10) == uVar1) {
          *(int *)(lVar5 + 0x14) = *(int *)(lVar5 + 0x14) + 1;
          break;
        }
      }
    }
    pMVar4 = param_1;
  }
  else {
    pMVar4 = param_1 + 0x38;
    nn::os::LockMutex(pMVar4);
    uVar2 = *(uint *)(param_1 + 0x60);
    if (uVar2 == 0) {
      lVar5 = 0;
    }
    else {
      uVar3 = 0;
      if (uVar2 != 0) {
        uVar3 = uVar1 / uVar2;
      }
      for (lVar5 = *(long *)(*(long *)(param_1 + 0x58) + (ulong)(uVar1 - uVar3 * uVar2) * 8);
          lVar5 != 0; lVar5 = *(long *)(lVar5 + 8)) {
        if (*(uint *)(lVar5 + 0x10) == uVar1) {
          *(int *)(lVar5 + 0x14) = *(int *)(lVar5 + 0x14) + 1;
          break;
        }
      }
    }
  }
  nn::os::UnlockMutex(pMVar4);
  return lVar5;
}


