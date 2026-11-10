/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02eaebb4; name: FUN_02eaebb4
 */


void FUN_02eaebb4(MutexType *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  
  nn::os::LockMutex(param_1);
  uVar1 = *(uint *)(param_1 + 0x28);
  if (uVar1 != 0) {
    uVar2 = 0;
    if (uVar1 != 0) {
      uVar2 = param_2 / uVar1;
    }
    plVar5 = (long *)(*(long *)(param_1 + 0x20) + (ulong)(param_2 - uVar2 * uVar1) * 8);
    lVar3 = *plVar5;
    if (lVar3 != 0) {
      if (*(uint *)(lVar3 + 0x10) != param_2) {
        do {
          lVar4 = lVar3;
          lVar3 = *(long *)(lVar4 + 8);
          if (lVar3 == 0) goto LAB_02eaec0c;
        } while (*(uint *)(lVar3 + 0x10) != param_2);
        plVar5 = (long *)(lVar4 + 8);
      }
      *plVar5 = *(long *)(lVar3 + 8);
      *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -1;
    }
  }
LAB_02eaec0c:
  nn::os::UnlockMutex(param_1);
  return;
}


