/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 020449e0; name: FUN_020449e0
 */


undefined8 FUN_020449e0(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  int iVar3;
  ulong uVar4;
  char *pcVar5;
  undefined8 local_28;
  undefined8 *local_18;
  
  if (((DAT_043d7790 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_043d7790), iVar3 != 0)) {
    DAT_043d7788 = 0x80;
    __cxa_guard_release(&DAT_043d7790);
  }
  if (((DAT_043d77a0 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_043d77a0), iVar3 != 0)) {
    DAT_043d7798 = 0x7f;
    __cxa_guard_release(&DAT_043d77a0);
  }
  uVar4 = FUN_02044d18(param_1,DAT_043d7788,&local_18,&local_28);
  if ((uVar4 & 1) == 0) {
    local_18 = (undefined8 *)0x0;
    local_28 = 0;
    uVar4 = FUN_02044d18(param_1,DAT_043d7798,&local_18,&local_28);
    puVar2 = local_18;
    if ((uVar4 & 1) == 0) {
      if (((DAT_043d72e0 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_043d72e0), iVar3 != 0)) {
        FUN_0203ba20();
        FUN_00100250(PTR__string_04379718,&DAT_043d72c8,&PTR_LOOP_0411a000);
        __cxa_guard_release(&DAT_043d72e0);
      }
      puVar1 = DAT_043d72d8;
      if ((DAT_043d72c8 & 1) == 0) {
        puVar1 = &DAT_043d72c9;
      }
      if (puVar2 == (undefined8 *)0x0) {
        pcVar5 = "aligned allocation of userdata block (pointer section) for \'%s\' failed";
      }
      else {
        pcVar5 = "aligned allocation of userdata block (data section) for \'%s\' failed";
      }
      FUN_00154110(param_1,pcVar5,puVar1);
      return 0;
    }
  }
  *local_18 = local_28;
  return local_28;
}


