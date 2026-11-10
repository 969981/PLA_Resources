/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 024c36a0; name: FUN_024c36a0
 */


undefined8 FUN_024c36a0(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  int iVar3;
  ulong uVar4;
  char *pcVar5;
  undefined8 local_28;
  undefined8 *local_18;
  
  if (((DAT_043e7748 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_043e7748), iVar3 != 0)) {
    DAT_043e7740 = 0x14;
    __cxa_guard_release(&DAT_043e7748);
  }
  if (((DAT_043e7758 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_043e7758), iVar3 != 0)) {
    DAT_043e7750 = 0x1b;
    __cxa_guard_release(&DAT_043e7758);
  }
  uVar4 = FUN_024c39d4(param_1,DAT_043e7740,&local_18,&local_28);
  if ((uVar4 & 1) == 0) {
    local_18 = (undefined8 *)0x0;
    local_28 = 0;
    uVar4 = FUN_024c39d4(param_1,DAT_043e7750,&local_18,&local_28);
    puVar2 = local_18;
    if ((uVar4 & 1) == 0) {
      if (((DAT_043e76c8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_043e76c8), iVar3 != 0)) {
        FUN_024c2a60();
        FUN_00100250(PTR__string_04379718,&DAT_043e76b0,&PTR_LOOP_0411a000);
        __cxa_guard_release(&DAT_043e76c8);
      }
      puVar1 = DAT_043e76c0;
      if ((DAT_043e76b0 & 1) == 0) {
        puVar1 = &DAT_043e76b1;
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


