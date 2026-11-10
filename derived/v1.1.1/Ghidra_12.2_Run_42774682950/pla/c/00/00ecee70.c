/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00ecee70; name: FUN_00ecee70
 */


void FUN_00ecee70(undefined8 param_1)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  ulong uVar4;
  char *pcVar5;
  undefined8 local_28;
  undefined8 *local_18;
  
  if (((DAT_043b2358 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_043b2358), iVar3 != 0)) {
    DAT_043b2350 = 9;
    __cxa_guard_release(&DAT_043b2358);
  }
  if (((DAT_043b2368 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_043b2368), iVar3 != 0)) {
    DAT_043b2360 = 0x10;
    __cxa_guard_release(&DAT_043b2368);
  }
  uVar4 = FUN_00ecf1a0(param_1,DAT_043b2350,&local_18,&local_28);
  if ((uVar4 & 1) == 0) {
    local_18 = (undefined8 *)0x0;
    local_28 = 0;
    uVar4 = FUN_00ecf1a0(param_1,DAT_043b2360,&local_18,&local_28);
    puVar2 = local_18;
    if ((uVar4 & 1) == 0) {
      if (((DAT_043b22f0 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_043b22f0), iVar3 != 0)) {
        FUN_00ece1f0();
        FUN_00100250(PTR__string_04379718,&DAT_043b22d8,&PTR_LOOP_0411a000);
        __cxa_guard_release(&DAT_043b22f0);
      }
      puVar1 = DAT_043b22e8;
      if ((DAT_043b22d8 & 1) == 0) {
        puVar1 = &DAT_043b22d9;
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


