/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00783964; name: FUN_00783964
 */


void FUN_00783964(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  Result *pRVar5;
  long lVar6;
  long *plVar7;
  int local_30 [2];
  int local_28 [2];
  
  pRVar5 = (Result *)local_30;
  if (((DAT_043a3038 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_043a3038), iVar4 != 0)) {
    local_30[0] = nn::os::SdkAllocateTlsSlot((TlsSlot *)&DAT_043a3030,(_func_void_ulong *)0x0);
    if (local_30[0] != 0) goto LAB_00783ac0;
    FUN_00100250(PTR__SdkThreadLocalStorage_04376cb0,&DAT_043a3030,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043a3038);
  }
  nn::os::GetTlsValue(DAT_043a3030);
  if (((DAT_043a3038 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_043a3038), iVar4 != 0)) {
    local_28[0] = nn::os::SdkAllocateTlsSlot((TlsSlot *)&DAT_043a3030,(_func_void_ulong *)0x0);
    if (local_28[0] != 0) {
      pRVar5 = (Result *)local_28;
LAB_00783ac0:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0,pRVar5,"");
    }
    FUN_00100250(PTR__SdkThreadLocalStorage_04376cb0,&DAT_043a3030,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043a3038);
  }
  nn::os::SetTlsValue(DAT_043a3030,0);
  plVar7 = *(long **)(param_1 + 0x10);
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 1;
    do {
      lVar6 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      std::__shared_weak_count::__release_weak();
      return;
    }
  }
  return;
}


