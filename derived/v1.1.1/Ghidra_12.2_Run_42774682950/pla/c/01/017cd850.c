/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 017cd850; name: FUN_017cd850
 */


undefined8 FUN_017cd850(undefined8 param_1)

{
  undefined8 *puVar1;
  int iVar2;
  ulong uVar3;
  char *pcVar4;
  undefined *puVar5;
  undefined8 local_38;
  undefined8 *local_28;
  
  if (((DAT_043d0f90 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_043d0f90), iVar2 != 0)) {
    DAT_043d0f88 = 0x80;
    __cxa_guard_release(&DAT_043d0f90);
  }
  if (((DAT_043d0fa0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_043d0fa0), iVar2 != 0)) {
    DAT_043d0f98 = 0x7f;
    __cxa_guard_release(&DAT_043d0fa0);
  }
  uVar3 = FUN_017cdb80(param_1,DAT_043d0f88,&local_28,&local_38);
  if ((uVar3 & 1) == 0) {
    local_28 = (undefined8 *)0x0;
    local_38 = 0;
    uVar3 = FUN_017cdb80(param_1,DAT_043d0f98,&local_28,&local_38);
    puVar1 = local_28;
    if ((uVar3 & 1) == 0) {
      if (((*PTR_DAT_043814d8 & 1) == 0) &&
         (iVar2 = __cxa_guard_acquire(PTR_DAT_043814d8), puVar5 = PTR_DAT_043814e0, iVar2 != 0)) {
        FUN_017c16b0(PTR_DAT_043814e0);
        FUN_00100250(PTR__string_04379718,puVar5,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_043814d8);
      }
      puVar5 = *(undefined **)(PTR_DAT_043814e0 + 0x10);
      if ((*PTR_DAT_043814e0 & 1) == 0) {
        puVar5 = PTR_DAT_043814e0 + 1;
      }
      if (puVar1 == (undefined8 *)0x0) {
        pcVar4 = "aligned allocation of userdata block (pointer section) for \'%s\' failed";
      }
      else {
        pcVar4 = "aligned allocation of userdata block (data section) for \'%s\' failed";
      }
      FUN_00154110(param_1,pcVar4,puVar5);
      return 0;
    }
  }
  *local_28 = local_38;
  return local_38;
}


