/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e94560; name: FUN_02e94560
 */


int FUN_02e94560(undefined8 param_1,undefined8 param_2,uint param_3)

{
  MutexType *pMVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  long *plVar7;
  
  lVar4 = DAT_0440a120;
  pMVar1 = (MutexType *)(DAT_0440a120 + 0xa8);
  nn::os::LockMutex(pMVar1);
  uVar2 = *(uint *)(lVar4 + 0xd0);
  if (uVar2 != 0) {
    uVar3 = 0;
    if (uVar2 != 0) {
      uVar3 = param_3 / uVar2;
    }
    for (plVar7 = *(long **)(*(long *)(lVar4 + 200) + (ulong)(param_3 - uVar3 * uVar2) * 8);
        plVar7 != (long *)0x0; plVar7 = (long *)plVar7[1]) {
      if (*(uint *)(plVar7 + 2) == param_3) {
        *(int *)((long)plVar7 + 0x14) = *(int *)((long)plVar7 + 0x14) + 1;
        nn::os::UnlockMutex(pMVar1);
        iVar6 = (int)plVar7[4];
        if (iVar6 == 0) {
          iVar5 = FUN_02e94794(param_1,param_2,plVar7);
          if (iVar5 != 1) goto LAB_02e945fc;
          (**(code **)(*plVar7 + 0x10))(plVar7);
          iVar6 = (int)plVar7[4];
        }
        iVar5 = 1;
        *(int *)(plVar7 + 4) = iVar6 + 1;
LAB_02e945fc:
        (**(code **)(*plVar7 + 0x18))(plVar7);
        return iVar5;
      }
    }
  }
  nn::os::UnlockMutex(pMVar1);
  return 0xf;
}


