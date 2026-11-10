/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00902fb0; name: FUN_00902fb0
 */


undefined8 FUN_00902fb0(undefined8 param_1)

{
  undefined8 *puVar1;
  int iVar2;
  ulong uVar3;
  byte *pbVar4;
  char *pcVar5;
  byte *pbVar6;
  undefined8 local_30;
  undefined8 *local_28;
  
  if (((DAT_043a80f8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_043a80f8), iVar2 != 0)) {
    DAT_043a80f0 = 0x14;
    __cxa_guard_release(&DAT_043a80f8);
  }
  if (((DAT_043a8108 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_043a8108), iVar2 != 0)) {
    DAT_043a8100 = 0x1b;
    __cxa_guard_release(&DAT_043a8108);
  }
  uVar3 = FUN_00903224(param_1,DAT_043a80f0,&local_28,&local_30);
  if ((uVar3 & 1) == 0) {
    local_30 = 0;
    local_28 = (undefined8 *)0x0;
    uVar3 = FUN_00903224(param_1,DAT_043a8100,&local_28,&local_30);
    puVar1 = local_28;
    if ((uVar3 & 1) == 0) {
      pbVar4 = (byte *)FUN_008d9d20();
      pbVar6 = *(byte **)(pbVar4 + 0x10);
      if ((*pbVar4 & 1) == 0) {
        pbVar6 = pbVar4 + 1;
      }
      if (puVar1 == (undefined8 *)0x0) {
        pcVar5 = "aligned allocation of userdata block (pointer section) for \'%s\' failed";
      }
      else {
        pcVar5 = "aligned allocation of userdata block (data section) for \'%s\' failed";
      }
      FUN_00154110(param_1,pcVar5,pbVar6);
      return 0;
    }
  }
  *local_28 = local_30;
  return local_30;
}


