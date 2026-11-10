/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02edda28; name: FUN_02edda28
 */


bool FUN_02edda28(long *param_1,uint param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  long lVar4;
  undefined1 auStack_34 [4];
  
  nn::os::LockMutex((MutexType *)(param_1 + 3));
  uVar1 = *(uint *)(param_1 + 1);
  if (uVar1 != 0) {
    uVar2 = 0;
    if (uVar1 != 0) {
      uVar2 = param_2 / uVar1;
    }
    for (lVar4 = *(long *)(*param_1 + (ulong)(param_2 - uVar2 * uVar1) * 8); lVar4 != 0;
        lVar4 = *(long *)(lVar4 + 0x68)) {
      if (*(uint *)(lVar4 + 0x4c) == param_2) {
        lVar4 = FUN_02eddc48(lVar4,param_3,auStack_34);
        bVar3 = lVar4 != 0;
        goto LAB_02edda90;
      }
    }
  }
  bVar3 = false;
LAB_02edda90:
  nn::os::UnlockMutex((MutexType *)(param_1 + 3));
  return bVar3;
}


