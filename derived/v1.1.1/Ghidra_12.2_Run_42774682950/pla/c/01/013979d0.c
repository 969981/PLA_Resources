/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013979d0; name: FUN_013979d0
 */


undefined8 FUN_013979d0(long param_1)

{
  byte bVar1;
  long *plVar2;
  int iVar3;
  ulong uVar4;
  uint uVar5;
  undefined8 uVar6;
  char local_38 [8];
  undefined8 local_30;
  long *local_28;
  
  if (((*PTR_DAT_04379558 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_04379558), iVar3 != 0))
  {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  *(undefined8 *)PTR_DAT_04379568 = *(undefined8 *)PTR_DAT_04379560;
  FUN_0114924c(&local_28);
  if (local_28 == (long *)0x0) {
    uVar6 = 0;
  }
  else {
    FUN_0275d180(local_38);
    if (local_38[0] == '\0') {
      uVar6 = 0;
      plVar2 = local_28;
    }
    else {
      bVar1 = *(byte *)(param_1 + 0xe);
      if ((bVar1 & 1) != 0) {
        FUN_0112191c(local_28,param_1);
        bVar1 = *(byte *)(param_1 + 0xe);
      }
      uVar5 = (uint)bVar1;
      if (((bVar1 & 1) == 0) && (*(char *)(param_1 + 0x10) != '\0')) {
        FUN_01121b70(local_28,param_1);
        FUN_01121984(local_28,param_1,local_30);
        uVar5 = (uint)*(byte *)(param_1 + 0xe);
      }
      if ((uVar5 >> 2 & 1) != 0) {
        FUN_01121984(local_28,param_1,local_30);
      }
      if (local_38[0] != '\0') {
        local_38[0] = '\0';
      }
      uVar6 = 1;
      plVar2 = local_28;
    }
    if ((plVar2 != (long *)0x0) && (uVar4 = FUN_02a43a5c(plVar2[0xb]), (uVar4 & 1) != 0)) {
      (**(code **)(*plVar2 + 0x20))(plVar2);
    }
  }
  return uVar6;
}


