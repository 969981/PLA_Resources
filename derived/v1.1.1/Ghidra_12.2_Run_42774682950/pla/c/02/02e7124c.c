/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e7124c; name: FUN_02e7124c
 */


void FUN_02e7124c(long param_1,undefined8 param_2,uint param_3,char *param_4)

{
  MutexType *pMVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 0x50);
  pMVar1 = (MutexType *)(lVar4 + 0x1e8);
  nn::os::LockMutex(pMVar1);
  lVar3 = *(long *)(*(long *)(param_1 + 8) + 0x10);
  if (((lVar3 != 0) && (*(long *)(*(long *)(lVar3 + 0x38) + 0x18) == 0)) &&
     (*(long *)(*(long *)(lVar3 + 0x38) + 0x20) == *(long *)(lVar3 + 0x40))) {
    if (*(int *)(*(long *)(param_1 + 8) + 0x20) != -1) {
      FUN_02e6dde4(lVar4 + 0x2a8);
    }
    cVar2 = *param_4;
    FUN_02e71304(lVar3,param_2,param_3 & 1,param_4);
    if ((cVar2 == '\0') && (*param_4 != '\0')) {
      *param_4 = '\0';
    }
  }
  nn::os::UnlockMutex(pMVar1);
  return;
}


