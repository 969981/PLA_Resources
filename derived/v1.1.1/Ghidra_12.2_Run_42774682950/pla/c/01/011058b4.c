/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011058b4; name: FUN_011058b4
 */


void FUN_011058b4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 local_48;
  long local_40;
  undefined4 local_38;
  undefined4 local_34;
  
  puVar1 = PTR_DAT_04379558;
  if (((*PTR_DAT_04379558 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04379558), iVar4 != 0))
  {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  puVar3 = PTR_DAT_04379568;
  puVar2 = PTR_DAT_04379560;
  local_34 = 0;
  uVar5 = *(undefined8 *)PTR_DAT_04379560;
  *(undefined8 *)PTR_DAT_04379568 = uVar5;
  uVar5 = FUN_01147f0c(uVar5,&local_34);
  local_38 = 0xc9a81578;
  local_40 = param_1 + 0xd0;
  local_48 = 0x10;
  FUN_011060bc(uVar5,&local_38,&local_40,&local_48);
  if (((*puVar1 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04379558), iVar4 != 0)) {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  uVar5 = *(undefined8 *)puVar2;
  local_34 = 0;
  *(undefined8 *)puVar3 = uVar5;
  uVar5 = FUN_01147f0c(uVar5,&local_34);
  local_38 = 0x4bd70b32;
  local_40 = param_1 + 0xe0;
  local_48 = 0x41a0;
  FUN_011061e4(uVar5,&local_38,&local_40,&local_48);
  if (((*puVar1 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04379558), iVar4 != 0)) {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  uVar5 = *(undefined8 *)puVar2;
  local_34 = 0;
  *(undefined8 *)puVar3 = uVar5;
  uVar5 = FUN_01147f0c(uVar5,&local_34);
  local_38 = 0xc74a3fe7;
  local_40 = param_1 + 0x4280;
  local_48 = 0x10;
  FUN_011060bc(uVar5,&local_38,&local_40,&local_48);
  if (((*puVar1 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04379558), iVar4 != 0)) {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  uVar5 = *(undefined8 *)puVar2;
  local_34 = 0;
  *(undefined8 *)puVar3 = uVar5;
  uVar5 = FUN_01147f0c(uVar5,&local_34);
  local_38 = 0xc2f1c1b9;
  local_40 = param_1 + 0x4290;
  local_48 = 0x2580;
  FUN_0110630c(uVar5,&local_38,&local_40,&local_48);
  if (((*puVar1 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04379558), iVar4 != 0)) {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  uVar5 = *(undefined8 *)puVar2;
  local_34 = 0;
  *(undefined8 *)puVar3 = uVar5;
  uVar5 = FUN_01147f0c(uVar5,&local_34);
  local_38 = 0x885e5f53;
  local_40 = param_1 + 0x6810;
  local_48 = 0x10;
  FUN_011060bc(uVar5,&local_38,&local_40,&local_48);
  if (((*puVar1 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04379558), iVar4 != 0)) {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  uVar5 = *(undefined8 *)puVar2;
  local_34 = 0;
  *(undefined8 *)puVar3 = uVar5;
  uVar5 = FUN_01147f0c(uVar5,&local_34);
  local_38 = 0x8a0e9425;
  local_40 = param_1 + 0x6820;
  local_48 = 0x4b0;
  FUN_01106434(uVar5,&local_38,&local_40,&local_48);
  return;
}


