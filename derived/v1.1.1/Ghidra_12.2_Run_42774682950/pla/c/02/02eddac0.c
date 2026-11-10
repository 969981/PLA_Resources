/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02eddac0; name: FUN_02eddac0
 */


void FUN_02eddac0(long *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  
  if (param_2 == 0) {
    return;
  }
  nn::os::LockMutex((MutexType *)(param_1 + 3));
  uVar1 = *(uint *)(param_1 + 1);
  if (uVar1 != 0) {
    uVar2 = 0;
    if (uVar1 != 0) {
      uVar2 = param_2 / uVar1;
    }
    for (lVar3 = *(long *)(*param_1 + (ulong)(param_2 - uVar2 * uVar1) * 8); lVar3 != 0;
        lVar3 = *(long *)(lVar3 + 0x68)) {
      if (*(uint *)(lVar3 + 0x4c) == param_2) {
        *(int *)(lVar3 + 0x24) = *(int *)(lVar3 + 0x24) + 1;
        break;
      }
    }
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 3));
  return;
}


