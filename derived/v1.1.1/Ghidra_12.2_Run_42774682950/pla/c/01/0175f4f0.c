/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0175f4f0; name: FUN_0175f4f0
 */


undefined8 FUN_0175f4f0(undefined8 param_1)

{
  undefined8 *puVar1;
  int iVar2;
  ulong uVar3;
  char *pcVar4;
  undefined *puVar5;
  undefined1 auStack_40 [8];
  undefined8 local_38;
  undefined8 *local_28;
  
  puVar5 = PTR_DAT_04380dd8;
  if (((*PTR_DAT_04380dd0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_04380dd0), iVar2 != 0))
  {
    *(undefined8 *)puVar5 = 0x30;
    __cxa_guard_release(PTR_DAT_04380dd0);
  }
  if (((*PTR_DAT_04380de0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_04380de0), iVar2 != 0))
  {
    *(undefined8 *)PTR_DAT_04380de8 = 0x2f;
    __cxa_guard_release(PTR_DAT_04380de0);
  }
  uVar3 = FUN_0175f838(auStack_40,param_1,*(undefined8 *)puVar5,&local_28,&local_38);
  if ((uVar3 & 1) == 0) {
    local_28 = (undefined8 *)0x0;
    local_38 = 0;
    uVar3 = FUN_0175f838(auStack_40,param_1,*(undefined8 *)PTR_DAT_04380de8,&local_28,&local_38);
    puVar1 = local_28;
    if ((uVar3 & 1) == 0) {
      if (((*PTR_DAT_04380dc0 & 1) == 0) &&
         (iVar2 = __cxa_guard_acquire(PTR_DAT_04380dc0), puVar5 = PTR_DAT_04380dc8, iVar2 != 0)) {
        FUN_0175f8f0(PTR_DAT_04380dc8);
        FUN_00100250(PTR__string_04379718,puVar5,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04380dc0);
      }
      puVar5 = *(undefined **)(PTR_DAT_04380dc8 + 0x10);
      if ((*PTR_DAT_04380dc8 & 1) == 0) {
        puVar5 = PTR_DAT_04380dc8 + 1;
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


