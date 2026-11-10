/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0228a5f0; name: FUN_0228a5f0
 */


undefined8 FUN_0228a5f0(undefined8 param_1)

{
  undefined8 *puVar1;
  int iVar2;
  ulong uVar3;
  char *pcVar4;
  undefined *puVar5;
  undefined8 local_38;
  undefined8 *local_28;
  
  if (((DAT_043e0118 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_043e0118), iVar2 != 0)) {
    DAT_043e0110 = 0xb0;
    __cxa_guard_release(&DAT_043e0118);
  }
  if (((DAT_043e0128 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_043e0128), iVar2 != 0)) {
    DAT_043e0120 = 0xb7;
    __cxa_guard_release(&DAT_043e0128);
  }
  uVar3 = FUN_0228a920(param_1,DAT_043e0110,&local_28,&local_38);
  if ((uVar3 & 1) == 0) {
    local_28 = (undefined8 *)0x0;
    local_38 = 0;
    uVar3 = FUN_0228a920(param_1,DAT_043e0120,&local_28,&local_38);
    puVar1 = local_28;
    if ((uVar3 & 1) == 0) {
      if (((*PTR_DAT_0437cc00 & 1) == 0) &&
         (iVar2 = __cxa_guard_acquire(PTR_DAT_0437cc00), puVar5 = PTR_DAT_0437cc08, iVar2 != 0)) {
        FUN_00ee9d20(PTR_DAT_0437cc08);
        FUN_00100250(PTR__string_04379718,puVar5,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_0437cc00);
      }
      puVar5 = *(undefined **)(PTR_DAT_0437cc08 + 0x10);
      if ((*PTR_DAT_0437cc08 & 1) == 0) {
        puVar5 = PTR_DAT_0437cc08 + 1;
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


