/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00617840; name: FUN_00617840
 */


void FUN_00617840(long param_1)

{
  ThreadType *pTVar1;
  ThreadType *pTVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0xa8));
  if ((*(long *)(param_1 + 8) != 0) && (*(long *)(param_1 + 0x88) != *(long *)(param_1 + 0x90))) {
    FUN_00784828(*(undefined8 *)(param_1 + 0x58));
    pTVar2 = *(ThreadType **)(param_1 + 0x70);
    for (pTVar1 = *(ThreadType **)(param_1 + 0x68); pTVar1 != pTVar2; pTVar1 = pTVar1 + 0x1c0) {
      nn::os::WaitThread(pTVar1);
      nn::os::DestroyThread(pTVar1);
    }
    puVar5 = *(undefined8 **)(param_1 + 0x88);
    puVar3 = *(undefined8 **)(param_1 + 0x90);
    if (puVar5 != puVar3) {
      do {
        puVar4 = puVar5 + 1;
        (**(code **)(**(long **)(param_1 + 0x50) + 0x18))
                  (*(long **)(param_1 + 0x50),*puVar5,*(undefined8 *)(param_1 + 0x10),0x1000);
        puVar5 = puVar4;
      } while (puVar3 != puVar4);
      puVar5 = *(undefined8 **)(param_1 + 0x88);
    }
    *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_1 + 0x68);
    *(undefined8 **)(param_1 + 0x90) = puVar5;
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0xa8));
  return;
}


