/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01ff9bb0; name: FUN_01ff9bb0
 */


undefined8 FUN_01ff9bb0(undefined8 param_1)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  ulong uVar4;
  char *pcVar5;
  undefined8 local_28;
  undefined8 *local_18;
  
  if (((DAT_043d6150 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_043d6150), iVar3 != 0)) {
    DAT_043d6148 = 0x30;
    __cxa_guard_release(&DAT_043d6150);
  }
  if (((DAT_043d6160 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_043d6160), iVar3 != 0)) {
    DAT_043d6158 = 0x2f;
    __cxa_guard_release(&DAT_043d6160);
  }
  uVar4 = FUN_01ff9ee4(param_1,DAT_043d6148,&local_18,&local_28);
  if ((uVar4 & 1) == 0) {
    local_18 = (undefined8 *)0x0;
    local_28 = 0;
    uVar4 = FUN_01ff9ee4(param_1,DAT_043d6158,&local_18,&local_28);
    puVar2 = local_18;
    if ((uVar4 & 1) == 0) {
      if (((DAT_043d60d0 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_043d60d0), iVar3 != 0)) {
        FUN_01ff9010();
        FUN_00100250(PTR__string_04379718,&DAT_043d60b8,&PTR_LOOP_0411a000);
        __cxa_guard_release(&DAT_043d60d0);
      }
      puVar1 = DAT_043d60c8;
      if ((DAT_043d60b8 & 1) == 0) {
        puVar1 = &DAT_043d60b9;
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


