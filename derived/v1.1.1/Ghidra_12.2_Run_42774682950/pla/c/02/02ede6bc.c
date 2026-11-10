/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ede6bc; name: FUN_02ede6bc
 */


void FUN_02ede6bc(long param_1,int param_2,long param_3,long *param_4)

{
  int *piVar1;
  uint uVar2;
  long *plVar3;
  int *piVar4;
  long lVar5;
  int *piVar6;
  int *piVar7;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x20));
  piVar4 = *(int **)(param_1 + 0x10);
  uVar2 = *(uint *)(param_1 + 0x18);
  if ((uVar2 == 0) || (*piVar4 == param_2)) {
    piVar6 = piVar4;
  }
  else {
    lVar5 = (ulong)uVar2 * 0x18;
    piVar7 = piVar4;
    do {
      lVar5 = lVar5 + -0x18;
      if (lVar5 == 0) goto LAB_02ede794;
      piVar6 = piVar7 + 6;
      piVar1 = piVar7 + 6;
      piVar7 = piVar6;
    } while (*piVar1 != param_2);
  }
  plVar3 = (long *)(piVar6 + 2);
  if (piVar6 == piVar4 + (ulong)uVar2 * 6) {
LAB_02ede794:
    plVar3 = (long *)FUN_02ede7d4((undefined8 *)(param_1 + 0x10),param_2);
    if (plVar3 == (long *)0x0) goto LAB_02ede7b0;
    plVar3[1] = *param_4;
  }
  else if (*plVar3 == param_3) {
    *(long *)(piVar6 + 4) = *param_4;
  }
  else if (*(int *)((long)param_4 + 4) != 2) {
    if ((int)*param_4 < piVar6[4]) {
      piVar6[4] = (int)*param_4;
    }
    if (piVar6[5] != 1) {
      piVar6[5] = *(int *)((long)param_4 + 4);
    }
  }
  *plVar3 = param_3;
LAB_02ede7b0:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x20));
  return;
}


