/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0290d0dc; name: FUN_0290d0dc
 */


void FUN_0290d0dc(long *param_1,long param_2,uint param_3)

{
  long *plVar1;
  long *plVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  
  nn::os::LockMutex((MutexType *)(param_2 + 0x1f0));
  if ((ulong)param_3 < (ulong)(*(long *)(param_2 + 0x218) - *(long *)(param_2 + 0x210) >> 4)) {
    plVar7 = *(long **)(*(long *)(param_2 + 0x210) + (ulong)param_3 * 0x10);
    plVar2 = (long *)PTR_DAT_04379c88;
    if (plVar7 != (long *)0x0) {
      plVar2 = plVar7 + 0xb;
    }
    plVar1 = (long *)PTR_PTR_04379d00;
    if (plVar7 != (long *)0x0) {
      plVar1 = plVar7 + 0xc;
    }
    lVar5 = *plVar1;
    if (plVar7 == (long *)0x0) {
      lVar6 = 0;
    }
    else {
      lVar6 = plVar7[0xd];
    }
    *param_1 = *plVar2;
    param_1[1] = lVar5;
    param_1[2] = lVar6;
    param_1[3] = 0;
    if (plVar7 == (long *)0x0) {
      param_1[3] = 0;
    }
    else {
      (**(code **)(*plVar7 + 0x18))(plVar7);
      param_1[3] = (long)plVar7;
    }
  }
  else {
    if (((*PTR_DAT_0437a0d0 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar4 != 0)) {
      FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437a0d0);
    }
    puVar3 = PTR_DAT_0437a0d8;
    lVar5 = *(long *)(PTR_DAT_0437a0d8 + 8);
    *param_1 = *(long *)PTR_DAT_0437a0d8;
    param_1[1] = lVar5;
    plVar2 = *(long **)(puVar3 + 0x18);
    param_1[2] = *(long *)(puVar3 + 0x10);
    param_1[3] = (long)plVar2;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x18))();
    }
  }
  nn::os::UnlockMutex((MutexType *)(param_2 + 0x1f0));
  return;
}


