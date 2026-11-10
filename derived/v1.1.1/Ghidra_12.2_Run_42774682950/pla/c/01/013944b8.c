/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013944b8; name: FUN_013944b8
 */


void FUN_013944b8(long param_1)

{
  int iVar1;
  ulong uVar2;
  long local_48;
  long *plStack_40;
  long **local_38;
  long *local_30;
  long local_28;
  
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 8);
  if (((*PTR_DAT_0437b4d0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_0437b4d0), iVar1 != 0))
  {
    FUN_00100250(PTR_LAB_0437e718,PTR_DAT_0437b4d8,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437b4d0);
  }
  local_28 = *(long *)PTR_DAT_0437b4d8;
  *(long *)PTR_DAT_0437b4e0 = local_28;
  if (local_28 != 0) {
    if (((*PTR_DAT_04379558 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04379558), iVar1 != 0)) {
      FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379558);
    }
    *(undefined8 *)PTR_DAT_04379568 = *(undefined8 *)PTR_DAT_04379560;
    FUN_01148cdc(&local_30);
    if (local_30 != (long *)0x0) {
      plStack_40 = &local_28;
      local_48 = param_1;
      local_38 = &local_30;
      FUN_0139462c(&local_48,0);
      FUN_0139462c(&local_48,1);
      if ((local_30 != (long *)0x0) && (uVar2 = FUN_02a43a5c(local_30[0xb]), (uVar2 & 1) != 0)) {
        (**(code **)(*local_30 + 0x20))(local_30);
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",0);
}


