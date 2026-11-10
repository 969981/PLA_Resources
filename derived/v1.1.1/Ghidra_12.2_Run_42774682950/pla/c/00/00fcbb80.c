/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00fcbb80; name: FUN_00fcbb80
 */


undefined8 FUN_00fcbb80(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  ulong uVar4;
  char *pcVar5;
  undefined8 local_30;
  undefined8 *local_28;
  
  if (((DAT_043b7428 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_043b7428), iVar3 != 0)) {
    DAT_043b7420 = 0x10;
    __cxa_guard_release(&DAT_043b7428);
  }
  if (((DAT_043b7438 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_043b7438), iVar3 != 0)) {
    DAT_043b7430 = 0x17;
    __cxa_guard_release(&DAT_043b7438);
  }
  uVar4 = FUN_00fcbe00(param_1,DAT_043b7420,&local_28,&local_30);
  if ((uVar4 & 1) == 0) {
    local_30 = 0;
    local_28 = (undefined8 *)0x0;
    uVar4 = FUN_00fcbe00(param_1,DAT_043b7430,&local_28,&local_30);
    puVar2 = local_28;
    if ((uVar4 & 1) == 0) {
      FUN_00fcbeb0();
      uVar1 = DAT_043b7450;
      if (((byte)DAT_043b7440 & 1) == 0) {
        uVar1 = 0x43b7441;
      }
      if (puVar2 == (undefined8 *)0x0) {
        pcVar5 = "aligned allocation of userdata block (pointer section) for \'%s\' failed";
      }
      else {
        pcVar5 = "aligned allocation of userdata block (data section) for \'%s\' failed";
      }
      FUN_00154110(param_1,pcVar5,uVar1);
      return 0;
    }
  }
  *local_28 = local_30;
  return local_30;
}


