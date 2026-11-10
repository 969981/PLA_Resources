/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02539e10; name: FUN_02539e10
 */


undefined8 FUN_02539e10(undefined8 param_1)

{
  undefined8 *puVar1;
  int iVar2;
  ulong uVar3;
  char *pcVar4;
  undefined *puVar5;
  undefined8 local_38;
  undefined8 *local_28;
  
  if (((DAT_043e9088 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_043e9088), iVar2 != 0)) {
    DAT_043e9080 = 0x540;
    __cxa_guard_release(&DAT_043e9088);
  }
  if (((DAT_043e9098 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_043e9098), iVar2 != 0)) {
    DAT_043e9090 = 0x53f;
    __cxa_guard_release(&DAT_043e9098);
  }
  uVar3 = FUN_0253a140(param_1,DAT_043e9080,&local_28,&local_38);
  if ((uVar3 & 1) == 0) {
    local_28 = (undefined8 *)0x0;
    local_38 = 0;
    uVar3 = FUN_0253a140(param_1,DAT_043e9090,&local_28,&local_38);
    puVar1 = local_28;
    if ((uVar3 & 1) == 0) {
      if (((*PTR_DAT_0437cf08 & 1) == 0) &&
         (iVar2 = __cxa_guard_acquire(PTR_DAT_0437cf08), puVar5 = PTR_DAT_0437cf10, iVar2 != 0)) {
        FUN_00ef4260(PTR_DAT_0437cf10);
        FUN_00100250(PTR__string_04379718,puVar5,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_0437cf08);
      }
      puVar5 = *(undefined **)(PTR_DAT_0437cf10 + 0x10);
      if ((*PTR_DAT_0437cf10 & 1) == 0) {
        puVar5 = PTR_DAT_0437cf10 + 1;
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


