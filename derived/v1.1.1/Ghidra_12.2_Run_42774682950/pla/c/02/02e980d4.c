/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e980d4; name: FUN_02e980d4
 */


void FUN_02e980d4(ulong *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  uint uVar7;
  long lVar8;
  
  nn::os::LockMutex((MutexType *)(param_1 + 2));
  plVar5 = (long *)*param_1;
  uVar7 = (uint)param_1[1];
  plVar6 = plVar5;
  if ((uVar7 != 0) && (*plVar5 != param_2)) {
    lVar8 = (ulong)uVar7 * 0x10;
    plVar2 = plVar5;
    do {
      lVar8 = lVar8 + -0x10;
      if (lVar8 == 0) goto LAB_02e98164;
      plVar6 = plVar2 + 2;
      plVar1 = plVar2 + 2;
      plVar2 = plVar6;
    } while (*plVar1 != param_2);
  }
  plVar2 = plVar5 + (ulong)uVar7 * 2;
  if (plVar6 != plVar2) {
    iVar3 = (int)plVar6[1] + -1;
    if ((int)plVar6[1] == 0 || iVar3 == 0) {
      if ((uVar7 != 0) && (*plVar5 != param_2)) {
        lVar8 = (ulong)uVar7 * 0x10;
        plVar6 = plVar5;
        do {
          lVar8 = lVar8 + -0x10;
          if (lVar8 == 0) goto LAB_02e98164;
          plVar5 = plVar6 + 2;
          plVar1 = plVar6 + 2;
          plVar6 = plVar5;
        } while (*plVar1 != param_2);
      }
      if (plVar2 != plVar5) {
        if (plVar5 < plVar2 + -2) {
          do {
            plVar6 = plVar5 + 2;
            *plVar5 = *plVar6;
            plVar5[1] = plVar5[3];
            plVar5 = plVar6;
          } while (plVar6 < plVar2 + -2);
          uVar7 = (uint)param_1[1];
        }
        *(uint *)(param_1 + 1) = uVar7 - 1;
      }
    }
    else {
      *(int *)(plVar6 + 1) = iVar3;
    }
  }
LAB_02e98164:
  nn::os::UnlockMutex((MutexType *)(param_1 + 2));
  lVar8 = DAT_0440ad30;
  lVar4 = nn::os::GetCurrentThread();
  if (lVar8 == lVar4) {
    return;
  }
  nn::os::WaitEvent((EventType *)(param_1 + 6));
  return;
}


