/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ea3a44; name: FUN_02ea3a44
 */


void FUN_02ea3a44(long param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  MutexType *pMVar6;
  long lVar7;
  
  plVar4 = (long *)*param_2;
  *param_2 = 0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x18))();
  }
  *(undefined2 *)(param_2 + 1) = 0;
  lVar7 = DAT_0440a120;
  lVar5 = *(long *)(param_1 + 200);
  if (lVar5 == 0) {
    return;
  }
  uVar1 = *(uint *)(lVar5 + 4);
  if (uVar1 == 0) {
    return;
  }
  if (*(char *)(lVar5 + 9) == '\0') {
    pMVar6 = (MutexType *)(DAT_0440a120 + 0x268);
    nn::os::LockMutex(pMVar6);
    uVar2 = *(uint *)(lVar7 + 0x290);
    if (uVar2 != 0) {
      uVar3 = 0;
      if (uVar2 != 0) {
        uVar3 = uVar1 / uVar2;
      }
      for (lVar7 = *(long *)(*(long *)(lVar7 + 0x288) + (ulong)(uVar1 - uVar3 * uVar2) * 8);
          lVar7 != 0; lVar7 = *(long *)(lVar7 + 8)) {
        if (*(uint *)(lVar7 + 0x10) == uVar1) goto LAB_02ea3b0c;
      }
      goto LAB_02ea3b18;
    }
  }
  else {
    pMVar6 = (MutexType *)(DAT_0440a120 + 0x230);
    nn::os::LockMutex(pMVar6);
    uVar2 = *(uint *)(lVar7 + 600);
    if (uVar2 != 0) {
      uVar3 = 0;
      if (uVar2 != 0) {
        uVar3 = uVar1 / uVar2;
      }
      for (lVar7 = *(long *)(*(long *)(lVar7 + 0x250) + (ulong)(uVar1 - uVar3 * uVar2) * 8);
          lVar7 != 0; lVar7 = *(long *)(lVar7 + 8)) {
        if (*(uint *)(lVar7 + 0x10) == uVar1) goto LAB_02ea3b0c;
      }
      goto LAB_02ea3b18;
    }
  }
  lVar7 = 0;
LAB_02ea3b18:
  nn::os::UnlockMutex(pMVar6);
  plVar4 = (long *)*param_2;
  *param_2 = lVar7;
  if (plVar4 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x02ea3b68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0x18))();
  return;
LAB_02ea3b0c:
  *(int *)(lVar7 + 0x14) = *(int *)(lVar7 + 0x14) + 1;
  goto LAB_02ea3b18;
}


