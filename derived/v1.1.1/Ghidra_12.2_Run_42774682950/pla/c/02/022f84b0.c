/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 022f84b0; name: FUN_022f84b0
 */


undefined8 FUN_022f84b0(undefined8 param_1)

{
  undefined8 *puVar1;
  int iVar2;
  ulong uVar3;
  char *pcVar4;
  undefined *puVar5;
  undefined8 local_38;
  undefined8 *local_28;
  
  if (((DAT_043e1580 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_043e1580), iVar2 != 0)) {
    DAT_043e1578 = 0x580;
    __cxa_guard_release(&DAT_043e1580);
  }
  if (((DAT_043e1590 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_043e1590), iVar2 != 0)) {
    DAT_043e1588 = 0x587;
    __cxa_guard_release(&DAT_043e1590);
  }
  uVar3 = FUN_022f87e0(param_1,DAT_043e1578,&local_28,&local_38);
  if ((uVar3 & 1) == 0) {
    local_28 = (undefined8 *)0x0;
    local_38 = 0;
    uVar3 = FUN_022f87e0(param_1,DAT_043e1588,&local_28,&local_38);
    puVar1 = local_28;
    if ((uVar3 & 1) == 0) {
      if (((*PTR_DAT_04383158 & 1) == 0) &&
         (iVar2 = __cxa_guard_acquire(PTR_DAT_04383158), puVar5 = PTR_DAT_04383160, iVar2 != 0)) {
        FUN_01f4c7a0(PTR_DAT_04383160);
        FUN_00100250(PTR__string_04379718,puVar5,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04383158);
      }
      puVar5 = *(undefined **)(PTR_DAT_04383160 + 0x10);
      if ((*PTR_DAT_04383160 & 1) == 0) {
        puVar5 = PTR_DAT_04383160 + 1;
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


