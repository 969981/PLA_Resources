/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e9840c; name: FUN_02e9840c
 */


void FUN_02e9840c(long *param_1,long param_2)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  
  nn::os::LockMutex((MutexType *)(param_1 + 2));
  plVar4 = (long *)*param_1;
  uVar2 = *(uint *)(param_1 + 1);
  if ((uVar2 == 0) || (*plVar4 == param_2)) {
    plVar6 = plVar4;
  }
  else {
    lVar5 = (ulong)uVar2 * 0x10;
    plVar7 = plVar4;
    do {
      lVar5 = lVar5 + -0x10;
      if (lVar5 == 0) goto LAB_02e98468;
      plVar6 = plVar7 + 2;
      plVar1 = plVar7 + 2;
      plVar7 = plVar6;
    } while (*plVar1 != param_2);
  }
  if (plVar6 != plVar4 + (ulong)uVar2 * 2) {
    *(int *)((long)plVar6 + 0xc) = (int)plVar6[1];
  }
LAB_02e98468:
  nn::os::UnlockMutex((MutexType *)(param_1 + 2));
  lVar5 = DAT_0440ad30;
  lVar3 = nn::os::GetCurrentThread();
  if (lVar5 == lVar3) {
    return;
  }
  nn::os::WaitEvent((EventType *)(param_1 + 6));
  return;
}


