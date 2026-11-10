/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e9823c; name: FUN_02e9823c
 */


void FUN_02e9823c(ulong *param_1,code *param_2,undefined4 param_3,undefined8 param_4,
                 undefined4 param_5,long param_6)

{
  long *plVar1;
  MutexType *pMVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long *plVar6;
  long *plVar7;
  uint uVar8;
  long lVar9;
  long *plVar10;
  
  if (param_2 == (code *)0x0) {
    return;
  }
  pMVar2 = (MutexType *)(param_1 + 2);
  nn::os::LockMutex(pMVar2);
  plVar6 = (long *)*param_1;
  uVar8 = (uint)param_1[1];
  plVar7 = plVar6;
  if ((uVar8 != 0) && (*plVar6 != param_6)) {
    lVar9 = (ulong)uVar8 * 0x10;
    plVar10 = plVar6;
    do {
      lVar9 = lVar9 + -0x10;
      if (lVar9 == 0) goto LAB_02e983ac;
      plVar7 = plVar10 + 2;
      plVar1 = plVar10 + 2;
      plVar10 = plVar7;
    } while (*plVar1 != param_6);
  }
  plVar10 = plVar6 + (ulong)uVar8 * 2;
  if (plVar7 == plVar10) {
LAB_02e983ac:
    nn::os::UnlockMutex(pMVar2);
    return;
  }
  iVar3 = (int)plVar7[1];
  iVar4 = *(int *)((long)plVar7 + 0xc);
  iVar5 = iVar3 + -1;
  if (iVar3 == 0 || iVar5 == 0) {
    if ((uVar8 != 0) && (*plVar6 != param_6)) {
      lVar9 = (ulong)uVar8 * 0x10;
      plVar7 = plVar6;
      do {
        lVar9 = lVar9 + -0x10;
        if (lVar9 == 0) goto LAB_02e982e8;
        plVar6 = plVar7 + 2;
        plVar1 = plVar7 + 2;
        plVar7 = plVar6;
      } while (*plVar1 != param_6);
    }
    if (plVar10 != plVar6) {
      if (plVar6 < plVar10 + -2) {
        do {
          plVar7 = plVar6 + 2;
          *plVar6 = *plVar7;
          plVar6[1] = plVar6[3];
          plVar6 = plVar7;
        } while (plVar7 < plVar10 + -2);
        uVar8 = (uint)param_1[1];
      }
      *(uint *)(param_1 + 1) = uVar8 - 1;
    }
  }
  else {
    *(int *)(plVar7 + 1) = iVar5;
    if (iVar4 != 0) {
      *(int *)((long)plVar7 + 0xc) = iVar4 + -1;
    }
  }
LAB_02e982e8:
  nn::os::ClearEvent((EventType *)(param_1 + 6));
  nn::os::UnlockMutex(pMVar2);
  if (iVar4 == 0) {
    (*param_2)(param_3,param_4,param_5,param_6);
  }
  nn::os::SignalEvent((EventType *)(param_1 + 6));
  return;
}


