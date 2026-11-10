/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e946e4; name: FUN_02e946e4
 */


undefined8 FUN_02e946e4(undefined8 param_1,uint param_2)

{
  MutexType *pMVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  
  lVar4 = DAT_0440a120;
  pMVar1 = (MutexType *)(DAT_0440a120 + 0xa8);
  nn::os::LockMutex(pMVar1);
  uVar2 = *(uint *)(lVar4 + 0xd0);
  if (uVar2 != 0) {
    uVar3 = 0;
    if (uVar2 != 0) {
      uVar3 = param_2 / uVar2;
    }
    for (plVar5 = *(long **)(*(long *)(lVar4 + 200) + (ulong)(param_2 - uVar3 * uVar2) * 8);
        plVar5 != (long *)0x0; plVar5 = (long *)plVar5[1]) {
      if (*(uint *)(plVar5 + 2) == param_2) {
        *(int *)((long)plVar5 + 0x14) = *(int *)((long)plVar5 + 0x14) + 1;
        nn::os::UnlockMutex(pMVar1);
        FUN_02e95004(param_1,plVar5);
        (**(code **)(*plVar5 + 0x18))(plVar5);
        return 1;
      }
    }
  }
  nn::os::UnlockMutex(pMVar1);
  return 0xf;
}


