/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 024d51f0; name: FUN_024d51f0
 */


undefined8 FUN_024d51f0(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  int iVar3;
  ulong uVar4;
  char *pcVar5;
  undefined8 local_28;
  undefined8 *local_18;
  
  if (((DAT_043e7db8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_043e7db8), iVar3 != 0)) {
    DAT_043e7db0 = 0x1a0;
    __cxa_guard_release(&DAT_043e7db8);
  }
  if (((DAT_043e7dc8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_043e7dc8), iVar3 != 0)) {
    DAT_043e7dc0 = 0x19f;
    __cxa_guard_release(&DAT_043e7dc8);
  }
  uVar4 = FUN_024d5524(param_1,DAT_043e7db0,&local_18,&local_28);
  if ((uVar4 & 1) == 0) {
    local_18 = (undefined8 *)0x0;
    local_28 = 0;
    uVar4 = FUN_024d5524(param_1,DAT_043e7dc0,&local_18,&local_28);
    puVar2 = local_18;
    if ((uVar4 & 1) == 0) {
      if (((DAT_043e7cb8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_043e7cb8), iVar3 != 0)) {
        FUN_024d34a0();
        FUN_00100250(PTR__string_04379718,&DAT_043e7ca0,&PTR_LOOP_0411a000);
        __cxa_guard_release(&DAT_043e7cb8);
      }
      puVar1 = DAT_043e7cb0;
      if ((DAT_043e7ca0 & 1) == 0) {
        puVar1 = &DAT_043e7ca1;
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


