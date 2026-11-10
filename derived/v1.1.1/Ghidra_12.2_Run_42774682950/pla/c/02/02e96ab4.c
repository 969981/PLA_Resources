/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e96ab4; name: FUN_02e96ab4
 */


int FUN_02e96ab4(long param_1,uint *param_2)

{
  MutexType *pMVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  long *plVar6;
  void *__dest;
  undefined4 uVar7;
  uint uVar8;
  long *plVar9;
  
  uVar8 = param_2[2];
  if ((uVar8 == 0) || ((param_2[3] & 0x7e) == 4)) {
    return 1;
  }
  pMVar1 = (MutexType *)(param_1 + 0x68);
  nn::os::LockMutex(pMVar1);
  uVar2 = *param_2;
  uVar3 = *(uint *)(param_1 + 0x98);
  if (uVar3 != 0) {
    uVar4 = 0;
    if (uVar3 != 0) {
      uVar4 = uVar2 / uVar3;
    }
    for (plVar9 = *(long **)(*(long *)(param_1 + 0x90) + (ulong)(uVar2 - uVar4 * uVar3) * 8);
        plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
      if (*(uint *)(plVar9 + 1) == uVar2) {
        plVar6 = plVar9 + 2;
        *(int *)(plVar9 + 6) = *(int *)(plVar9 + 6) + 1;
        if (*plVar6 == 0) goto LAB_02e96b64;
        iVar5 = 1;
        goto LAB_02e96be4;
      }
    }
  }
  plVar6 = (long *)FUN_02e96390(param_1 + 0x88,uVar2);
  if (plVar6 == (long *)0x0) {
    iVar5 = 2;
    goto LAB_02e96be4;
  }
  *(uint *)((long)plVar6 + 0x24) = uVar2;
LAB_02e96b64:
  uVar7 = 0x80000003;
  if (*(short *)((long)param_2 + 0x1a) != 3) {
    uVar7 = 3;
  }
  if ((int)plVar6[3] == 0) {
    __dest = (void *)(*DAT_0442d140)(uVar7,uVar8,0x10);
    if (__dest == (void *)0x0) goto LAB_02e96c54;
    nn::os::UnlockMutex(pMVar1);
    iVar5 = FUN_02e903c0(param_1,param_2,__dest);
    nn::os::LockMutex(pMVar1);
    if (iVar5 == 1) goto LAB_02e96bbc;
    (*DAT_0442d158)(uVar7,__dest);
  }
  else {
    uVar8 = *(uint *)(plVar6[2] + 8);
    __dest = (void *)(*DAT_0442d140)(uVar7,(ulong)uVar8,0x10);
    if (__dest != (void *)0x0) {
      memcpy(__dest,*(void **)plVar6[2],(ulong)uVar8);
LAB_02e96bbc:
      *plVar6 = (long)__dest;
      iVar5 = 1;
      *(uint *)(plVar6 + 1) = uVar8;
      *(undefined4 *)((long)plVar6 + 0xc) = uVar7;
      goto LAB_02e96be4;
    }
LAB_02e96c54:
    iVar5 = 0x34;
  }
  FUN_02e95054(param_1,plVar6);
LAB_02e96be4:
  nn::os::UnlockMutex(pMVar1);
  return iVar5;
}


