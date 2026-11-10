/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00783834; name: FUN_00783834
 */


void FUN_00783834(undefined8 *param_1)

{
  int iVar1;
  Result *pRVar2;
  int local_30 [2];
  int local_28 [2];
  
  pRVar2 = (Result *)local_30;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  if (((DAT_043a3038 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_043a3038), iVar1 != 0)) {
    local_30[0] = nn::os::SdkAllocateTlsSlot((TlsSlot *)&DAT_043a3030,(_func_void_ulong *)0x0);
    if (local_30[0] != 0) goto LAB_00783950;
    FUN_00100250(PTR__SdkThreadLocalStorage_04376cb0,&DAT_043a3030,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043a3038);
  }
  nn::os::GetTlsValue(DAT_043a3030);
  if (((DAT_043a3038 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_043a3038), iVar1 != 0)) {
    local_28[0] = nn::os::SdkAllocateTlsSlot((TlsSlot *)&DAT_043a3030,(_func_void_ulong *)0x0);
    if (local_28[0] != 0) {
      pRVar2 = (Result *)local_28;
LAB_00783950:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0,pRVar2,"");
    }
    FUN_00100250(PTR__SdkThreadLocalStorage_04376cb0,&DAT_043a3030,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043a3038);
  }
  nn::os::SetTlsValue(DAT_043a3030,param_1);
  return;
}


