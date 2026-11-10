/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e6bbb8; name: FUN_02e6bbb8
 */


undefined8 FUN_02e6bbb8(long *param_1,uint param_2)

{
  MutexType *pMVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  long lVar7;
  
  uVar2 = *(uint *)((long)param_1 + 0x9c);
  nn::os::LockMutex((MutexType *)(param_1 + 5));
  uVar5 = *(uint *)(param_1 + 0x14);
  uVar3 = 0;
  if (uVar5 != 0) {
    uVar3 = *(uint *)(param_1[10] + 0x618) / uVar5;
  }
  *(uint *)((long)param_1 + 0x9c) = uVar5;
  uVar3 = uVar3 * uVar5;
  *(uint *)((long)param_1 + 0x94) = uVar3;
  if (uVar5 < param_2) {
    uVar4 = 0;
    if (uVar5 != 0) {
      uVar4 = ((param_2 + uVar5) - 1) / uVar5;
    }
    uVar5 = uVar4 * uVar5;
    *(uint *)((long)param_1 + 0x9c) = uVar5;
    if (uVar3 < uVar5) {
      *(undefined1 *)((long)param_1 + 0xc3) = 1;
      (**(code **)(*param_1 + 0xc0))(param_1);
      FUN_02e6ba60(param_1);
      if (param_1[1] != 0) {
        lVar7 = param_1[10];
        pMVar1 = (MutexType *)(lVar7 + 0x220);
        nn::os::LockMutex(pMVar1);
        param_1[1] = 0;
        nn::os::BroadcastConditionVariable((ConditionVariableType *)(lVar7 + 0x240));
        nn::os::UnlockMutex(pMVar1);
      }
      uVar6 = 2;
      goto LAB_02e6bc10;
    }
  }
  if (uVar2 < uVar5) {
    (**(code **)(*param_1 + 0x108))(param_1,param_2);
    FUN_02e6ba60(param_1);
  }
  uVar6 = 1;
LAB_02e6bc10:
  nn::os::UnlockMutex((MutexType *)(param_1 + 5));
  return uVar6;
}


