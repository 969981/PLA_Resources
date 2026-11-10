/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0303f32c; name: FUN_0303f32c
 */


void FUN_0303f32c(long *param_1)

{
  uint uVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  MutexType *pMVar6;
  
  *param_1 = (long)&PTR_LAB_042b23d8;
  FUN_0303f4d4();
  pMVar6 = (MutexType *)param_1[9];
  if (pMVar6 != (MutexType *)0x0) {
    nn::os::FinalizeMutex(pMVar6);
    lVar5 = tpidr_el0;
    lVar4 = *(long *)(lVar5 + 0x38d490);
    if (lVar4 == 0) {
      lVar4 = FUN_0333d16c(0,1);
      *(long *)(lVar5 + 0x38d490) = lVar4;
    }
    plVar3 = *(long **)(*(long *)(lVar4 + 8) + 0x58);
    (**(code **)(*plVar3 + 0x18))(plVar3,pMVar6,0x20);
  }
  puVar2 = PTR_PTR_0434a080;
  *(undefined4 *)(param_1 + 8) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x44)) && (param_1[7] != 0)) {
    (**(code **)(*(long *)puVar2 + 0x18))
              (puVar2,param_1[7],((ulong)*(uint *)((long)param_1 + 0x44) & 0x3fffffff) << 3);
  }
  param_1[7] = 0;
  *(undefined4 *)((long)param_1 + 0x44) = 0x80000000;
  *(undefined4 *)(param_1 + 6) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x34)) && (param_1[5] != 0)) {
    (**(code **)(*(long *)puVar2 + 0x18))
              (puVar2,param_1[5],((ulong)*(uint *)((long)param_1 + 0x34) & 0x3fffffff) << 3);
  }
  param_1[5] = 0;
  *(undefined4 *)((long)param_1 + 0x34) = 0x80000000;
  if (0 < (int)*(uint *)((long)param_1 + 0x24)) {
    lVar4 = 0;
    lVar5 = (ulong)*(uint *)((long)param_1 + 0x24) + 1;
    do {
      if (*(long *)(param_1[3] + lVar4) != -1) {
        *(undefined8 *)(param_1[3] + lVar4) = 0xffffffffffffffff;
      }
      lVar5 = lVar5 + -1;
      lVar4 = lVar4 + 0x10;
    } while (lVar5 != 0);
  }
  uVar1 = *(uint *)(param_1 + 4);
  *(uint *)(param_1 + 4) = uVar1 & 0x80000000;
  if ((-1 < (int)uVar1) && (param_1[3] != 0)) {
    (**(code **)(*(long *)puVar2 + 0x18))
              (puVar2,param_1[3],(long)(*(int *)((long)param_1 + 0x24) * 0x10 + 0x10));
  }
  puVar2 = PTR_DAT_043723c0;
  param_1[3] = 0;
  param_1[4] = -0x100000000;
  *param_1 = (long)(puVar2 + 0x10);
  return;
}


