/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ed53a8; name: FUN_02ed53a8
 */


void FUN_02ed53a8(uint param_1)

{
  uint uVar1;
  uint uVar2;
  MutexType *pMVar3;
  long *plVar4;
  
  pMVar3 = DAT_0440a120;
  nn::os::LockMutex(DAT_0440a120);
  uVar1 = *(uint *)(pMVar3 + 0x28);
  if (uVar1 != 0) {
    uVar2 = 0;
    if (uVar1 != 0) {
      uVar2 = param_1 / uVar1;
    }
    for (plVar4 = *(long **)(*(long *)(pMVar3 + 0x20) + (ulong)(param_1 - uVar2 * uVar1) * 8);
        plVar4 != (long *)0x0; plVar4 = (long *)plVar4[1]) {
      if (*(uint *)(plVar4 + 2) == param_1) {
        *(int *)((long)plVar4 + 0x14) = *(int *)((long)plVar4 + 0x14) + 1;
        nn::os::UnlockMutex(pMVar3);
        (**(code **)(*plVar4 + 0x148))(plVar4);
        (**(code **)(*plVar4 + 0x18))(plVar4);
                    /* WARNING: Could not recover jumptable at 0x02ed545c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar4 + 0x18))(plVar4);
        return;
      }
    }
  }
  nn::os::UnlockMutex(pMVar3);
  return;
}


