/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00783790; name: FUN_00783790
 */


void FUN_00783790(void)

{
  int iVar1;
  int local_18 [2];
  
  if (((DAT_043a3038 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_043a3038), iVar1 != 0)) {
    local_18[0] = nn::os::SdkAllocateTlsSlot((TlsSlot *)&DAT_043a3030,(_func_void_ulong *)0x0);
    if (local_18[0] != 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0,(Result *)local_18,"");
    }
    FUN_00100250(PTR__SdkThreadLocalStorage_04376cb0,&DAT_043a3030,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043a3038);
  }
  nn::os::GetTlsValue(DAT_043a3030);
  return;
}


