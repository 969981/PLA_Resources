/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010794c0; name: FUN_010794c0
 */


void FUN_010794c0(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  int iVar3;
  ulong uVar4;
  char *pcVar5;
  undefined8 local_28;
  undefined8 *local_18;
  
  if (((DAT_043b9e70 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_043b9e70), iVar3 != 0)) {
    DAT_043b9e68 = 9;
    __cxa_guard_release(&DAT_043b9e70);
  }
  if (((DAT_043b9e80 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_043b9e80), iVar3 != 0)) {
    DAT_043b9e78 = 0x10;
    __cxa_guard_release(&DAT_043b9e80);
  }
  uVar4 = FUN_010797f0(param_1,DAT_043b9e68,&local_18,&local_28);
  if ((uVar4 & 1) == 0) {
    local_18 = (undefined8 *)0x0;
    local_28 = 0;
    uVar4 = FUN_010797f0(param_1,DAT_043b9e78,&local_18,&local_28);
    puVar2 = local_18;
    if ((uVar4 & 1) == 0) {
      if (((DAT_043b9e08 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_043b9e08), iVar3 != 0)) {
        FUN_010785c0();
        FUN_00100250(PTR__string_04379718,&DAT_043b9df0,&PTR_LOOP_0411a000);
        __cxa_guard_release(&DAT_043b9e08);
      }
      puVar1 = DAT_043b9e00;
      if ((DAT_043b9df0 & 1) == 0) {
        puVar1 = &DAT_043b9df1;
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


