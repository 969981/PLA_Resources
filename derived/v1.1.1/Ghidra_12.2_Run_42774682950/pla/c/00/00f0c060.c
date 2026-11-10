/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00f0c060; name: FUN_00f0c060
 */


void FUN_00f0c060(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  int iVar3;
  ulong uVar4;
  char *pcVar5;
  undefined8 local_28;
  undefined8 *local_18;
  
  if (((DAT_043b42c8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_043b42c8), iVar3 != 0)) {
    DAT_043b42c0 = 9;
    __cxa_guard_release(&DAT_043b42c8);
  }
  if (((DAT_043b42d8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_043b42d8), iVar3 != 0)) {
    DAT_043b42d0 = 0x10;
    __cxa_guard_release(&DAT_043b42d8);
  }
  uVar4 = FUN_00f0c394(param_1,DAT_043b42c0,&local_18,&local_28);
  if ((uVar4 & 1) == 0) {
    local_18 = (undefined8 *)0x0;
    local_28 = 0;
    uVar4 = FUN_00f0c394(param_1,DAT_043b42d0,&local_18,&local_28);
    puVar2 = local_18;
    if ((uVar4 & 1) == 0) {
      if (((DAT_043b28c0 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_043b28c0), iVar3 != 0)) {
        FUN_00ee0a60();
        FUN_00100250(PTR__string_04379718,&DAT_043b28a8,&PTR_LOOP_0411a000);
        __cxa_guard_release(&DAT_043b28c0);
      }
      puVar1 = DAT_043b28b8;
      if ((DAT_043b28a8 & 1) == 0) {
        puVar1 = &DAT_043b28a9;
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


