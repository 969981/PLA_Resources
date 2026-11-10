/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00fd7a80; name: FUN_00fd7a80
 */


undefined8 FUN_00fd7a80(undefined8 param_1)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  ulong uVar4;
  char *pcVar5;
  undefined8 local_30;
  undefined8 *local_28;
  
  if (((DAT_043b78c0 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_043b78c0), iVar3 != 0)) {
    DAT_043b78b8 = 0x10;
    __cxa_guard_release(&DAT_043b78c0);
  }
  if (((DAT_043b78d0 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_043b78d0), iVar3 != 0)) {
    DAT_043b78c8 = 0x17;
    __cxa_guard_release(&DAT_043b78d0);
  }
  uVar4 = FUN_00fd7d00(param_1,DAT_043b78b8,&local_28,&local_30);
  if ((uVar4 & 1) == 0) {
    local_30 = 0;
    local_28 = (undefined8 *)0x0;
    uVar4 = FUN_00fd7d00(param_1,DAT_043b78c8,&local_28,&local_30);
    puVar2 = local_28;
    if ((uVar4 & 1) == 0) {
      FUN_00fd7db0();
      puVar1 = DAT_043b78e8;
      if ((DAT_043b78d8 & 1) == 0) {
        puVar1 = &DAT_043b78d9;
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
  *local_28 = local_30;
  return local_30;
}


