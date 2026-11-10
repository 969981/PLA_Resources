/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ea3b6c; name: FUN_02ea3b6c
 */


void FUN_02ea3b6c(long param_1,int param_2,int *param_3)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  int *piVar7;
  long lVar8;
  int *piVar9;
  int *piVar10;
  long *plVar11;
  MutexType *pMVar12;
  
  *param_3 = -1;
  lVar8 = DAT_0440a120;
  lVar6 = *(long *)(param_1 + 200);
  if (lVar6 == 0) {
    return;
  }
  uVar2 = *(uint *)(lVar6 + 4);
  if (*(char *)(lVar6 + 9) == '\0') {
    pMVar12 = (MutexType *)(DAT_0440a120 + 0x268);
    nn::os::LockMutex(pMVar12);
    uVar3 = *(uint *)(lVar8 + 0x290);
    if (uVar3 != 0) {
      uVar4 = 0;
      if (uVar3 != 0) {
        uVar4 = uVar2 / uVar3;
      }
      for (plVar11 = *(long **)(*(long *)(lVar8 + 0x288) + (ulong)(uVar2 - uVar4 * uVar3) * 8);
          plVar11 != (long *)0x0; plVar11 = (long *)plVar11[1]) {
        if (*(uint *)(plVar11 + 2) == uVar2) goto LAB_02ea3c2c;
      }
      goto LAB_02ea3c38;
    }
  }
  else {
    pMVar12 = (MutexType *)(DAT_0440a120 + 0x230);
    nn::os::LockMutex(pMVar12);
    uVar3 = *(uint *)(lVar8 + 600);
    if (uVar3 != 0) {
      uVar4 = 0;
      if (uVar3 != 0) {
        uVar4 = uVar2 / uVar3;
      }
      for (plVar11 = *(long **)(*(long *)(lVar8 + 0x250) + (ulong)(uVar2 - uVar4 * uVar3) * 8);
          plVar11 != (long *)0x0; plVar11 = (long *)plVar11[1]) {
        if (*(uint *)(plVar11 + 2) == uVar2) goto LAB_02ea3c2c;
      }
      goto LAB_02ea3c38;
    }
  }
  plVar11 = (long *)0x0;
LAB_02ea3c38:
  nn::os::UnlockMutex(pMVar12);
  if (plVar11 == (long *)0x0) {
    return;
  }
  piVar7 = (int *)plVar11[8];
  uVar2 = *(uint *)(plVar11 + 9);
  if ((uVar2 == 0) || (*piVar7 == param_2)) {
    piVar9 = piVar7;
  }
  else {
    lVar8 = (ulong)uVar2 * 8;
    piVar10 = piVar7;
    do {
      lVar8 = lVar8 + -8;
      if (lVar8 == 0) goto LAB_02ea3cd4;
      piVar9 = piVar10 + 2;
      piVar1 = piVar10 + 2;
      piVar10 = piVar9;
    } while (*piVar1 != param_2);
  }
  if (piVar9 == piVar7 + (ulong)uVar2 * 2) {
LAB_02ea3cd4:
    iVar5 = 0;
  }
  else {
    iVar5 = piVar9[1];
  }
  *param_3 = iVar5;
                    /* WARNING: Could not recover jumptable at 0x02ea3c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar11 + 0x18))(plVar11);
  return;
LAB_02ea3c2c:
  *(int *)((long)plVar11 + 0x14) = *(int *)((long)plVar11 + 0x14) + 1;
  goto LAB_02ea3c38;
}


