/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e6c708; name: FUN_02e6c708
 */


uint FUN_02e6c708(long param_1,uint param_2)

{
  MutexType *pMVar1;
  ulong uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  
  if ((param_2 == 0) || (*(int *)(param_1 + 0xa8) == 0)) {
    uVar8 = 0;
  }
  else {
    pMVar1 = (MutexType *)(*(long *)(param_1 + 0x50) + 0x1e8);
    nn::os::LockMutex(pMVar1);
    lVar9 = *(long *)(param_1 + 0xb0);
    if (lVar9 == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = 0;
      do {
        uVar8 = (*(int *)(*(long *)(lVar9 + 8) + 0x18) + uVar8) - *(int *)(lVar9 + 0x10);
        FUN_02e6c820((int *)(param_1 + 0xa8),lVar9);
        lVar7 = **(long **)(lVar9 + 8);
        uVar4 = *(uint *)(*(long **)(lVar9 + 8) + 3);
        uVar5 = *(uint *)(param_1 + 0x90);
        uVar2 = lVar7 + (ulong)*(uint *)(lVar9 + 0x10);
        iVar3 = uVar4 - *(uint *)(lVar9 + 0x10);
        if (uVar2 < uVar5 && (ulong)uVar5 < lVar7 + (ulong)uVar4) {
          iVar3 = uVar5 - (int)uVar2;
        }
        *(int *)(param_1 + 0x98) = *(int *)(param_1 + 0x98) - iVar3;
        lVar6 = *(long *)(param_1 + 0x50);
        lVar7 = *(long *)(lVar9 + 8);
        *(undefined8 *)(lVar9 + 8) = 0;
        if (lVar7 != 0) {
          FUN_02e6d800(lVar6 + 0x2a8);
        }
        (*DAT_0442d150)(7,lVar9);
      } while ((uVar8 < param_2) && (lVar9 = *(long *)(param_1 + 0xb0), lVar9 != 0));
    }
    nn::os::UnlockMutex(pMVar1);
  }
  return uVar8;
}


