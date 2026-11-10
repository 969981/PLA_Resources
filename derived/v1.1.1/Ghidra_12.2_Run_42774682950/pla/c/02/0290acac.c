/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0290acac; name: FUN_0290acac
 */


void FUN_0290acac(long *param_1)

{
  MutexType *pMVar1;
  code *pcVar2;
  int iVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  long *plVar7;
  bool bVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  undefined1 *local_110;
  code *local_108;
  undefined1 *local_100;
  undefined1 *puStack_f8;
  long *local_f0 [13];
  long local_88;
  long local_80;
  long local_78;
  long *local_70;
  
  pMVar1 = (MutexType *)(param_1 + 0x6c);
  nn::os::LockMutex(pMVar1);
  if (*(char *)((long)param_1 + 0x329) == '\0') {
    nn::os::UnlockMutex(pMVar1);
LAB_0290ad14:
    bVar8 = false;
  }
  else {
    iVar3 = *(int *)((long)param_1 + 0x35c);
    if (iVar3 < 1) {
      nn::os::UnlockMutex(pMVar1);
    }
    else {
      *(int *)((long)param_1 + 0x35c) = iVar3 + -1;
      nn::os::UnlockMutex(pMVar1);
      if (iVar3 != 1) goto LAB_0290ad14;
    }
    (**(code **)(*param_1 + 0x108))(param_1);
    bVar8 = true;
  }
  nn::os::LockMutex((MutexType *)(param_1 + 0x49));
  plVar6 = (long *)param_1[0x4d];
  plVar7 = (long *)param_1[0x4e];
  if (plVar6 != plVar7) {
    if (!bVar8) {
      (**(code **)(*param_1 + 0x108))(param_1);
    }
    do {
      if (((*PTR_DAT_04379c28 & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(PTR_DAT_04379c28), iVar3 != 0)) {
        FUN_00100250(PTR_LAB_04379c60,PTR_DAT_04379c30,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379c28);
      }
      lVar9 = *(long *)PTR_DAT_04379c30;
      *(long *)PTR_DAT_04379c38 = lVar9;
      plVar10 = (long *)*plVar6;
      if (plVar10 == (long *)0x0) {
        local_88 = *(long *)PTR_DAT_04379c88;
LAB_0290af60:
        local_80 = *(long *)PTR_PTR_04379d00;
        if (plVar10 != (long *)0x0) goto LAB_0290ae14;
LAB_0290af70:
        local_78 = 0;
      }
      else {
        local_88 = plVar10[0xb];
        if (plVar10 == (long *)0x0) goto LAB_0290af60;
        local_80 = plVar10[0xc];
        if (plVar10 == (long *)0x0) goto LAB_0290af70;
LAB_0290ae14:
        local_78 = plVar10[0xd];
        (**(code **)(*plVar10 + 0x18))(plVar10);
      }
      lVar11 = param_1[0x86];
      local_110 = &LAB_0290e664;
      local_100 = &LAB_0290e678;
      puStack_f8 = &LAB_0290e684;
      local_108 = FUN_0290e674;
      plVar4 = *(long **)(*(long *)(lVar9 + 0x158) + 0x60);
      local_f0[0] = param_1;
      local_70 = plVar10;
      iVar3 = (**(code **)(*plVar4 + 0xc0))(plVar4,local_80,lVar11,1,&LAB_0290f2d0,lVar9,0,0,0);
      if (iVar3 != 0) {
        FUN_0291629c(*(undefined8 *)(lVar9 + 0x178),&local_88,iVar3,lVar11,&local_110,param_1,0);
      }
      pcVar2 = local_108;
      if (local_108 == (code *)0x0) {
        local_108 = (code *)0x0;
      }
      else {
        local_100 = (undefined1 *)0x0;
        puStack_f8 = (undefined1 *)0x0;
        local_110 = (undefined1 *)0x0;
        local_108 = (code *)0x0;
        (*pcVar2)(local_f0);
      }
      if (local_70 != (long *)0x0) {
        (**(code **)(*local_70 + 0x20))();
      }
      local_88 = CONCAT44(local_88._4_4_,iVar3);
      if (iVar3 != 0) {
        nn::os::LockMutex((MutexType *)(param_1 + 0x3e));
        if (*plVar6 == 0) {
          puVar5 = (undefined8 *)PTR_PTR_04379d00;
        }
        else {
          puVar5 = (undefined8 *)(*plVar6 + 0x60);
        }
        local_110 = (undefined1 *)*puVar5;
        FUN_0290aff0(param_1 + 0x42,&local_110,&local_88);
        nn::os::UnlockMutex((MutexType *)(param_1 + 0x3e));
      }
      plVar6 = plVar6 + 1;
    } while (plVar7 != plVar6);
    plVar6 = (long *)param_1[0x4d];
    if ((long *)param_1[0x4e] != plVar6) {
      plVar10 = (long *)param_1[0x4e] + -1;
      plVar7 = (long *)*plVar10;
      if (plVar7 != (long *)0x0) goto LAB_0290afa8;
      while (plVar6 != plVar10) {
        while( true ) {
          plVar10 = plVar10 + -1;
          plVar7 = (long *)*plVar10;
          if (plVar7 == (long *)0x0) break;
LAB_0290afa8:
          (**(code **)(*plVar7 + 0x20))();
          if (plVar6 == plVar10) goto LAB_0290afc4;
        }
      }
    }
  }
LAB_0290afc4:
  param_1[0x4e] = (long)plVar6;
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x49));
  return;
}


