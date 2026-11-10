/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03329ca8; name: FUN_03329ca8
 */


void FUN_03329ca8(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  SemaphoreType *pSVar5;
  long lVar6;
  
  pSVar5 = (SemaphoreType *)param_1[9];
  *param_1 = (long)&PTR_LAB_04350858;
  if (pSVar5 != (SemaphoreType *)0x0) {
    *(undefined4 *)(pSVar5 + 0x38) = 0;
    if ((-1 < (int)*(uint *)(pSVar5 + 0x3c)) && (*(long *)(pSVar5 + 0x30) != 0)) {
      FUN_032cf244(PTR_PTR_0434a080,*(long *)(pSVar5 + 0x30),4,*(uint *)(pSVar5 + 0x3c) & 0x3fffffff
                  );
    }
    *(undefined8 *)(pSVar5 + 0x30) = 0;
    *(undefined4 *)(pSVar5 + 0x3c) = 0x80000000;
    nn::os::FinalizeSemaphore(pSVar5);
    lVar6 = tpidr_el0;
    lVar4 = *(long *)(lVar6 + 0x38d490);
    if (lVar4 == 0) {
      lVar4 = FUN_0333d16c(0,1);
      *(long *)(lVar6 + 0x38d490) = lVar4;
    }
    plVar3 = *(long **)(*(long *)(lVar4 + 8) + 0x58);
    (**(code **)(*plVar3 + 0x18))(plVar3,pSVar5,0x48);
  }
  if ((int)param_1[5] != 0) {
    lVar4 = param_1[4];
    lVar6 = (long)(int)param_1[5] << 7;
    do {
      lVar1 = lVar4 + lVar6;
      nn::os::FinalizeSemaphore((SemaphoreType *)(lVar1 + -0x30));
      nn::os::FinalizeMutex((MutexType *)(lVar1 + -0x58));
      if (*(long **)(lVar1 + -0x70) != (long *)0x0) {
        (**(code **)(**(long **)(lVar1 + -0x70) + 8))();
      }
      lVar6 = lVar6 + -0x80;
    } while (lVar6 != 0);
  }
  *(undefined4 *)(param_1 + 5) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x2c)) && (param_1[4] != 0)) {
    FUN_032cf244(&DAT_0444b540,param_1[4],0x80,*(uint *)((long)param_1 + 0x2c) & 0x3fffffff);
  }
  param_1[4] = 0;
  puVar2 = PTR_DAT_043723c0;
  *(undefined4 *)((long)param_1 + 0x2c) = 0x80000000;
  *param_1 = (long)(puVar2 + 0x10);
  return;
}


