/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00f1e7c0; name: FUN_00f1e7c0
 */


void FUN_00f1e7c0(undefined8 param_1)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  ulong uVar4;
  char *pcVar5;
  undefined8 local_28;
  undefined8 *local_18;
  
  if (((DAT_043b45c0 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_043b45c0), iVar3 != 0)) {
    DAT_043b45b8 = 9;
    __cxa_guard_release(&DAT_043b45c0);
  }
  if (((DAT_043b45d0 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_043b45d0), iVar3 != 0)) {
    DAT_043b45c8 = 0x10;
    __cxa_guard_release(&DAT_043b45d0);
  }
  uVar4 = FUN_00f1eaf0(param_1,DAT_043b45b8,&local_18,&local_28);
  if ((uVar4 & 1) == 0) {
    local_18 = (undefined8 *)0x0;
    local_28 = 0;
    uVar4 = FUN_00f1eaf0(param_1,DAT_043b45c8,&local_18,&local_28);
    puVar2 = local_18;
    if ((uVar4 & 1) == 0) {
      if (((DAT_043b4558 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_043b4558), iVar3 != 0)) {
        FUN_00f1bf40();
        FUN_00100250(PTR__string_04379718,&DAT_043b4540,&PTR_LOOP_0411a000);
        __cxa_guard_release(&DAT_043b4558);
      }
      puVar1 = DAT_043b4550;
      if ((DAT_043b4540 & 1) == 0) {
        puVar1 = &DAT_043b4541;
      }
      if (puVar2 == (undefined8 *)0x0) {
        pcVar5 = "aligned allocation of userdata block (pointer section) for \'%s\' failed";
      }
      else {
        pcVar5 = "aligned allocation of userdata block (data section) for \'%s\' failed";
      }
      FUN_00154110(param_1,pcVar5,puVar1);
      return;
    }
  }
  *local_18 = local_28;
  return;
}


