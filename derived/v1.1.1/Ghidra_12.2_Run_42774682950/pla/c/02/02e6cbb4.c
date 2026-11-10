/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e6cbb4; name: FUN_02e6cbb4
 */


void FUN_02e6cbb4(long param_1,undefined8 *param_2,uint param_3)

{
  MutexType *pMVar1;
  ulong uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  
  if ((((param_3 & 1) != 0) && (*(char *)(param_1 + 0x68) == '\0')) &&
     (*(char *)(param_1 + 0xc3) == '\0')) {
    *(byte *)((long)param_2 + 0x14) = *(byte *)((long)param_2 + 0x14) & 0xf8 | 3;
    *param_2 = 0;
    plVar6 = (long *)(param_1 + 0xb8);
    if (*plVar6 != 0) {
      plVar6 = *(long **)(param_1 + 0xb0);
    }
    *plVar6 = (long)param_2;
    *(undefined8 **)(param_1 + 0xb0) = param_2;
    *(int *)(param_1 + 0xa8) = *(int *)(param_1 + 0xa8) + 1;
    return;
  }
  pMVar1 = (MutexType *)(*(long *)(param_1 + 0x50) + 0x1e8);
  nn::os::LockMutex(pMVar1);
  lVar8 = *(long *)param_2[1];
  uVar4 = *(uint *)((long *)param_2[1] + 3);
  uVar5 = *(uint *)(param_1 + 0x90);
  uVar2 = lVar8 + (ulong)*(uint *)(param_2 + 2);
  iVar3 = uVar4 - *(uint *)(param_2 + 2);
  if (uVar2 < uVar5 && (ulong)uVar5 < lVar8 + (ulong)uVar4) {
    iVar3 = uVar5 - (int)uVar2;
  }
  *(int *)(param_1 + 0x98) = *(int *)(param_1 + 0x98) - iVar3;
  lVar7 = *(long *)(param_1 + 0x50);
  lVar8 = param_2[1];
  param_2[1] = 0;
  if (lVar8 != 0) {
    FUN_02e6d800(lVar7 + 0x2a8);
  }
  (*DAT_0442d150)(7,param_2);
  nn::os::UnlockMutex(pMVar1);
  return;
}


