/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0113bae8; name: FUN_0113bae8
 */


void FUN_0113bae8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 local_48;
  ulong local_40;
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
  local_40 = param_1 + 0x70;
  local_48 = 0x70;
  FUN_0113cce8(uVar5,&local_40,&local_48);
  if (((*puVar1 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04379558), iVar4 != 0)) {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  uVar5 = *(undefined8 *)puVar2;
  local_40 = local_40 & 0xffffffff00000000;
  *(undefined8 *)puVar3 = uVar5;
  uVar5 = FUN_01147f0c(uVar5,&local_40);
  FUN_0113ce10(uVar5,param_1 + 0xe0);
  if (((*puVar1 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04379558), iVar4 != 0)) {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  uVar5 = *(undefined8 *)puVar2;
  local_40 = local_40 & 0xffffffff00000000;
  *(undefined8 *)puVar3 = uVar5;
  uVar5 = FUN_01147f0c(uVar5,&local_40);
  FUN_010ddf30(uVar5,&DAT_03a79030,param_1 + 0xe8);
  if (((*puVar1 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04379558), iVar4 != 0)) {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  uVar5 = *(undefined8 *)puVar2;
  local_40 = local_40 & 0xffffffff00000000;
  *(undefined8 *)puVar3 = uVar5;
  uVar5 = FUN_01147f0c(uVar5,&local_40);
  FUN_01116e2c(uVar5,&DAT_03a79034,param_1 + 0xec);
  if (((*puVar1 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04379558), iVar4 != 0)) {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  uVar5 = *(undefined8 *)puVar2;
  local_34 = 0;
  *(undefined8 *)puVar3 = uVar5;
  uVar5 = FUN_01147f0c(uVar5,&local_34);
  local_40 = param_1 + 0xf0;
  local_48 = 0x10;
  FUN_0113cf20(uVar5,&DAT_03a79038,&local_40,&local_48);
  if (((*puVar1 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04379558), iVar4 != 0)) {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  uVar5 = *(undefined8 *)puVar2;
  local_34 = 0;
  *(undefined8 *)puVar3 = uVar5;
  uVar5 = FUN_01147f0c(uVar5,&local_34);
  local_40 = param_1 + 0x100;
  local_48 = 0x10;
  FUN_0113cf20(uVar5,&DAT_03a7903c,&local_40,&local_48);
  if (((*puVar1 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04379558), iVar4 != 0)) {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  uVar5 = *(undefined8 *)puVar2;
  local_34 = 0;
  *(undefined8 *)puVar3 = uVar5;
  uVar5 = FUN_01147f0c(uVar5,&local_34);
  local_40 = param_1 + 0x110;
  local_48 = 0x10;
  FUN_0113cf20(uVar5,&DAT_03a79040,&local_40,&local_48);
  if (((*puVar1 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04379558), iVar4 != 0)) {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  uVar5 = *(undefined8 *)puVar2;
  local_34 = 0;
  *(undefined8 *)puVar3 = uVar5;
  uVar5 = FUN_01147f0c(uVar5,&local_34);
  local_40 = param_1 + 0x120;
  local_48 = 0x10;
  FUN_0113cf20(uVar5,&DAT_03a79044,&local_40,&local_48);
  if (((*puVar1 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04379558), iVar4 != 0)) {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  uVar5 = *(undefined8 *)puVar2;
  local_34 = 0;
  *(undefined8 *)puVar3 = uVar5;
  uVar5 = FUN_01147f0c(uVar5,&local_34);
  local_40 = param_1 + 0x130;
  local_48 = 0x10;
  FUN_0113cf20(uVar5,&DAT_03a79048,&local_40,&local_48);
  if (((*puVar1 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04379558), iVar4 != 0)) {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  uVar5 = *(undefined8 *)puVar2;
  local_34 = 0;
  *(undefined8 *)puVar3 = uVar5;
  uVar5 = FUN_01147f0c(uVar5,&local_34);
  local_40 = param_1 + 0x140;
  local_48 = 0x10;
  FUN_0113cf20(uVar5,&DAT_03a7904c,&local_40,&local_48);
  if (((*puVar1 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04379558), iVar4 != 0)) {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  uVar5 = *(undefined8 *)puVar2;
  local_34 = 0;
  *(undefined8 *)puVar3 = uVar5;
  uVar5 = FUN_01147f0c(uVar5,&local_34);
  local_40 = param_1 + 0x150;
  local_48 = 0x10;
  FUN_0113cf20(uVar5,&DAT_03a79050,&local_40,&local_48);
  if (((*puVar1 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04379558), iVar4 != 0)) {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  uVar5 = *(undefined8 *)puVar2;
  local_40 = local_40 & 0xffffffff00000000;
  *(undefined8 *)puVar3 = uVar5;
  uVar5 = FUN_01147f0c(uVar5,&local_40);
  FUN_01116e2c(uVar5,&DAT_03a79054,param_1 + 0x160);
  if (((*puVar1 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04379558), iVar4 != 0)) {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  uVar5 = *(undefined8 *)puVar2;
  local_40 = local_40 & 0xffffffff00000000;
  *(undefined8 *)puVar3 = uVar5;
  uVar5 = FUN_01147f0c(uVar5,&local_40);
  FUN_01116e2c(uVar5,&DAT_03a79058,param_1 + 0x164);
  if (((*puVar1 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04379558), iVar4 != 0)) {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  uVar5 = *(undefined8 *)puVar2;
  local_40 = local_40 & 0xffffffff00000000;
  *(undefined8 *)puVar3 = uVar5;
  uVar5 = FUN_01147f0c(uVar5,&local_40);
  FUN_010f0ee8(uVar5,&DAT_03a7905c,param_1 + 0x168);
  if (((*puVar1 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04379558), iVar4 != 0)) {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  uVar5 = *(undefined8 *)puVar2;
  local_34 = 0;
  *(undefined8 *)puVar3 = uVar5;
  uVar5 = FUN_01147f0c(uVar5,&local_34);
  local_40 = param_1 + 0x170;
  local_48 = 0x20;
  FUN_0113d048(uVar5,&local_40,&local_48);
  if (((*puVar1 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04379558), iVar4 != 0)) {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  uVar5 = *(undefined8 *)puVar2;
  local_34 = 0;
  *(undefined8 *)puVar3 = uVar5;
  uVar5 = FUN_01147f0c(uVar5,&local_34);
  local_40 = param_1 + 400;
  local_48 = 8;
  FUN_0113d170(uVar5,&local_40,&local_48);
  if (((*puVar1 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04379558), iVar4 != 0)) {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  uVar5 = *(undefined8 *)puVar2;
  local_34 = 0;
  *(undefined8 *)puVar3 = uVar5;
  uVar5 = FUN_01147f0c(uVar5,&local_34);
  local_40 = param_1 + 0x1a0;
  local_48 = 0x20;
  FUN_0113d298(uVar5,&local_40,&local_48);
  return;
}


