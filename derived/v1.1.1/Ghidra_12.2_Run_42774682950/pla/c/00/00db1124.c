/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00db1124; name: FUN_00db1124
 */


void FUN_00db1124(undefined8 param_1,byte *param_2)

{
  MutexType *pMVar1;
  int *piVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  undefined1 *local_38;
  
  if (((*PTR_DAT_0437b630 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_0437b630), iVar6 != 0))
  {
    FUN_00100250(&LAB_00db6348,PTR_DAT_0437b638,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437b630);
  }
  DAT_043ad1d0 = *(long *)PTR_DAT_0437b638;
  if (DAT_043ad1d0 == 0) {
    return;
  }
  pMVar1 = (MutexType *)(DAT_043ad1d0 + 0xe0);
  nn::os::LockMutex(pMVar1);
  if (((*PTR_DAT_04379558 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04379558), iVar6 != 0))
  {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  lVar8 = *(long *)PTR_DAT_04379560;
  *(long *)PTR_DAT_04379568 = lVar8;
  if ((lVar8 != 0) && (plVar9 = *(long **)(lVar8 + 0x338), plVar9 != (long *)0x0)) {
    lVar8 = plVar9[0xb];
    if (*(undefined8 **)(lVar8 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar8 + 0x10) == 0) {
      uVar7 = (**(code **)**(undefined8 **)(lVar8 + 0x18))();
      *(undefined8 *)(lVar8 + 0x10) = uVar7;
    }
    piVar2 = (int *)(lVar8 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = *piVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    local_38 = &DAT_cbf29ce484222645;
    bVar3 = *param_2;
    while (bVar3 != 0) {
      param_2 = param_2 + 1;
      local_38 = (undefined1 *)(((ulong)local_38 ^ (ulong)bVar3) * 0x100000001b3);
      bVar3 = *param_2;
    }
    FUN_01128e78(param_1,plVar9,&local_38);
    lVar8 = plVar9[0xb];
    piVar2 = (int *)(lVar8 + 0xc);
    do {
      iVar6 = *piVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = iVar6 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 + -1 == 0) {
      *(undefined8 *)(lVar8 + 0x18) = 0;
      (**(code **)(*plVar9 + 0x20))(plVar9);
    }
  }
  nn::os::UnlockMutex(pMVar1);
  return;
}


