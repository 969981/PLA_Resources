/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e6a918; name: FUN_02e6a918
 */


void FUN_02e6a918(long param_1,long param_2,uint param_3)

{
  MutexType *pMVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  
  if ((((param_3 & 1) != 0) && (*(char *)(param_1 + 0x68) == '\0')) &&
     (*(int *)(param_1 + 0xa8) != 4)) {
    *(undefined1 *)(param_1 + 0x67) = 0;
    *(undefined1 *)(param_1 + 0xac) = 1;
    uVar4 = *(int *)(*(long *)(param_2 + 8) + 0x18) - *(int *)(param_2 + 0x10);
    uVar2 = *(uint *)(*(long *)(param_1 + 0x50) + 0x618);
    if (uVar2 < uVar4) {
      *(undefined1 *)(param_1 + 0xac) = 0;
      uVar4 = uVar2;
    }
    if ((*(char *)(param_1 + 0x66) == '\0') &&
       ((**(long **)(param_1 + 0x20) - **(long **)(param_2 + 8)) - (ulong)*(uint *)(param_2 + 0x10)
        <= (ulong)uVar4)) {
      *(undefined1 *)(param_1 + 0x67) = 1;
      *(undefined1 *)(param_1 + 0xac) = 1;
      *(int *)(param_1 + 0x90) =
           *(int *)(param_1 + 0x90) +
           ((int)**(long **)(param_1 + 0x20) -
           (**(int **)(param_2 + 8) + (*(int **)(param_2 + 8))[6]));
    }
  }
  pMVar1 = (MutexType *)(*(long *)(param_1 + 0x50) + 0x1e8);
  nn::os::LockMutex(pMVar1);
  lVar3 = *(long *)(param_2 + 8);
  *(undefined8 *)(param_2 + 8) = 0;
  if ((lVar3 != 0) && (lVar3 != param_1 + 0x78)) {
    (*DAT_0442d150)(7);
  }
  (*DAT_0442d150)(7,param_2);
  nn::os::UnlockMutex(pMVar1);
  return;
}


