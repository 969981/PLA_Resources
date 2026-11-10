/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e2a5d8; name: FUN_02e2a5d8
 */


void FUN_02e2a5d8(long param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x28));
  plVar2 = (long *)(param_1 + 0x20);
  lVar1 = *plVar2;
  lVar3 = 0;
  do {
    lVar4 = lVar3;
    lVar3 = lVar1;
    if (lVar3 == 0) goto LAB_02e2a650;
    lVar1 = *(long *)(lVar3 + 8);
  } while (lVar3 != param_2);
  if (*plVar2 != param_2) {
    plVar2 = (long *)(lVar4 + 8);
  }
  *plVar2 = *(long *)(lVar3 + 8);
  if (*(long *)(param_1 + 0x18) == param_2) {
    *(long *)(param_1 + 0x18) = lVar4;
  }
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
LAB_02e2a650:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x28));
  return;
}


