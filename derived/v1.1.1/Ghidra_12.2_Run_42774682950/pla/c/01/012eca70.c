/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 012eca70; name: FUN_012eca70
 */


undefined8 FUN_012eca70(undefined8 param_1)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  ulong uVar4;
  char *pcVar5;
  undefined8 local_28;
  undefined8 *local_18;
  
  if (((DAT_043c1f70 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_043c1f70), iVar3 != 0)) {
    DAT_043c1f68 = 0x28;
    __cxa_guard_release(&DAT_043c1f70);
  }
  if (((DAT_043c1f80 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_043c1f80), iVar3 != 0)) {
    DAT_043c1f78 = 0x2f;
    __cxa_guard_release(&DAT_043c1f80);
  }
  uVar4 = FUN_012ecda8(param_1,DAT_043c1f68,&local_18,&local_28);
  if ((uVar4 & 1) == 0) {
    local_18 = (undefined8 *)0x0;
    local_28 = 0;
    uVar4 = FUN_012ecda8(param_1,DAT_043c1f78,&local_18,&local_28);
    puVar2 = local_18;
    if ((uVar4 & 1) == 0) {
      if (((DAT_043c1ef0 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_043c1ef0), iVar3 != 0)) {
        FUN_012ec220();
        FUN_00100250(PTR__string_04379718,&DAT_043c1ed8,&PTR_LOOP_0411a000);
        __cxa_guard_release(&DAT_043c1ef0);
      }
      puVar1 = DAT_043c1ee8;
      if ((DAT_043c1ed8 & 1) == 0) {
        puVar1 = &DAT_043c1ed9;
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


