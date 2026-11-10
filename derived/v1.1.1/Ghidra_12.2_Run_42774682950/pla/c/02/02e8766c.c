/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e8766c; name: FUN_02e8766c
 */


long FUN_02e8766c(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  MutexType *pMVar4;
  MutexType *pMVar5;
  long lVar6;
  
  pMVar4 = DAT_0440a120;
  uVar1 = *(uint *)(param_1 + 0x30);
  if ((*(byte *)(param_1 + 0x36) >> 6 & 1) == 0) {
    nn::os::LockMutex(DAT_0440a120);
    uVar2 = *(uint *)(pMVar4 + 0x28);
    if (uVar2 == 0) {
      lVar6 = 0;
    }
    else {
      uVar3 = 0;
      if (uVar2 != 0) {
        uVar3 = uVar1 / uVar2;
      }
      for (lVar6 = *(long *)(*(long *)(pMVar4 + 0x20) + (ulong)(uVar1 - uVar3 * uVar2) * 8);
          lVar6 != 0; lVar6 = *(long *)(lVar6 + 8)) {
        if (*(uint *)(lVar6 + 0x10) == uVar1) {
          *(int *)(lVar6 + 0x14) = *(int *)(lVar6 + 0x14) + 1;
          break;
        }
      }
    }
    pMVar5 = pMVar4;
  }
  else {
    pMVar5 = DAT_0440a120 + 0x38;
    nn::os::LockMutex(pMVar5);
    uVar2 = *(uint *)(pMVar4 + 0x60);
    if (uVar2 == 0) {
      lVar6 = 0;
    }
    else {
      uVar3 = 0;
      if (uVar2 != 0) {
        uVar3 = uVar1 / uVar2;
      }
      for (lVar6 = *(long *)(*(long *)(pMVar4 + 0x58) + (ulong)(uVar1 - uVar3 * uVar2) * 8);
          lVar6 != 0; lVar6 = *(long *)(lVar6 + 8)) {
        if (*(uint *)(lVar6 + 0x10) == uVar1) {
          *(int *)(lVar6 + 0x14) = *(int *)(lVar6 + 0x14) + 1;
          break;
        }
      }
    }
  }
  nn::os::UnlockMutex(pMVar5);
  return lVar6;
}


