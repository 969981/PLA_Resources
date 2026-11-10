/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e96f44; name: FUN_02e96f44
 */


long FUN_02e96f44(MutexType *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  
  nn::os::LockMutex(param_1);
  uVar1 = *(uint *)(param_1 + 0x28);
  if (uVar1 == 0) {
    lVar3 = 0;
  }
  else {
    uVar2 = 0;
    if (uVar1 != 0) {
      uVar2 = param_2 / uVar1;
    }
    for (lVar3 = *(long *)(*(long *)(param_1 + 0x20) + (ulong)(param_2 - uVar2 * uVar1) * 8);
        lVar3 != 0; lVar3 = *(long *)(lVar3 + 8)) {
      if (*(uint *)(lVar3 + 0x10) == param_2) {
        *(int *)(lVar3 + 0x14) = *(int *)(lVar3 + 0x14) + 1;
        break;
      }
    }
  }
  nn::os::UnlockMutex(param_1);
  return lVar3;
}


