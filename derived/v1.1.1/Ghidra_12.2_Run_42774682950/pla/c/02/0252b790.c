/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0252b790; name: FUN_0252b790
 */


undefined8 FUN_0252b790(undefined8 param_1)

{
  undefined8 *puVar1;
  int iVar2;
  ulong uVar3;
  char *pcVar4;
  undefined *puVar5;
  undefined8 local_38;
  undefined8 *local_28;
  
  if (((DAT_043e8d00 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_043e8d00), iVar2 != 0)) {
    DAT_043e8cf8 = 0x60;
    __cxa_guard_release(&DAT_043e8d00);
  }
  if (((DAT_043e8d10 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_043e8d10), iVar2 != 0)) {
    DAT_043e8d08 = 0x5f;
    __cxa_guard_release(&DAT_043e8d10);
  }
  uVar3 = FUN_0252bac4(param_1,DAT_043e8cf8,&local_28,&local_38);
  if ((uVar3 & 1) == 0) {
    local_28 = (undefined8 *)0x0;
    local_38 = 0;
    uVar3 = FUN_0252bac4(param_1,DAT_043e8d08,&local_28,&local_38);
    puVar1 = local_28;
    if ((uVar3 & 1) == 0) {
      if (((*PTR_DAT_04383398 & 1) == 0) &&
         (iVar2 = __cxa_guard_acquire(PTR_DAT_04383398), puVar5 = PTR_DAT_043833a0, iVar2 != 0)) {
        FUN_01fc3290(PTR_DAT_043833a0);
        FUN_00100250(PTR__string_04379718,puVar5,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04383398);
      }
      puVar5 = *(undefined **)(PTR_DAT_043833a0 + 0x10);
      if ((*PTR_DAT_043833a0 & 1) == 0) {
        puVar5 = PTR_DAT_043833a0 + 1;
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


