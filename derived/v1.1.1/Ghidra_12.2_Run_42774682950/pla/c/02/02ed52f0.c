/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ed52f0; name: FUN_02ed52f0
 */


int FUN_02ed52f0(uint param_1)

{
  uint uVar1;
  uint uVar2;
  MutexType *pMVar3;
  int iVar4;
  long *plVar5;
  
  pMVar3 = DAT_0440a120;
  nn::os::LockMutex(DAT_0440a120);
  uVar1 = *(uint *)(pMVar3 + 0x28);
  if (uVar1 != 0) {
    uVar2 = 0;
    if (uVar1 != 0) {
      uVar2 = param_1 / uVar1;
    }
    for (plVar5 = *(long **)(*(long *)(pMVar3 + 0x20) + (ulong)(param_1 - uVar2 * uVar1) * 8);
        plVar5 != (long *)0x0; plVar5 = (long *)plVar5[1]) {
      if (*(uint *)(plVar5 + 2) == param_1) {
        *(int *)((long)plVar5 + 0x14) = *(int *)((long)plVar5 + 0x14) + 1;
        nn::os::UnlockMutex(pMVar3);
        iVar4 = (**(code **)(*plVar5 + 0x140))(plVar5);
        if (iVar4 == 1) {
          return 1;
        }
        (**(code **)(*plVar5 + 0x18))(plVar5);
        return iVar4;
      }
    }
  }
  nn::os::UnlockMutex(pMVar3);
  return 2;
}


