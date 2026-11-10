/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00952f4c; name: FUN_00952f4c
 */


void FUN_00952f4c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  code *pcVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 local_e0;
  code *local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  long *local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  char *pcStack_58;
  undefined8 local_50;
  long *local_48;
  
  if (((*PTR_DAT_04379c28 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04379c28), iVar5 != 0))
  {
    FUN_00100250(PTR_LAB_04379c60,PTR_DAT_04379c30,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379c28);
  }
  local_50 = 0x18;
  local_48 = (long *)0x0;
  local_60 = 0x24c79179d489b665;
  pcStack_58 = "SET_STATE_VS_TRAINER_PRE";
  uVar6 = *(undefined8 *)PTR_DAT_04379c30;
  local_70 = 0;
  uStack_68 = 0;
  *(undefined8 *)PTR_DAT_04379c38 = uVar6;
  local_80 = 0;
  uStack_78 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_c0 = (long *)0x0;
  uStack_b8 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  local_e0 = 0;
  local_d8 = (code *)0x0;
  FUN_02913338(uVar6,&local_60,&local_e0,0,0,0);
  pcVar4 = local_d8;
  if (local_d8 == (code *)0x0) {
    local_d8 = (code *)0x0;
  }
  else {
    local_d0 = 0;
    uStack_c8 = 0;
    local_e0 = 0;
    local_d8 = (code *)0x0;
    (*pcVar4)(&local_c0);
  }
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  puVar1 = PTR_DAT_04379e40;
  lVar7 = *(long *)(*(long *)(param_1 + 0x98) + 0x388);
  if ((lVar7 != 0) && (**(char **)(lVar7 + 0x60) != '\0')) {
    local_60 = 0xaf752130ca486cba;
    pcStack_58 = "BATTLE_LOW";
    local_50 = 10;
    local_48 = (long *)0x0;
    if (((*PTR_DAT_04379e40 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04379e40), iVar5 != 0)) {
      FUN_00100250(&LAB_00956f5c,PTR_DAT_04379e48,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379e40);
    }
    puVar3 = PTR_DAT_04379e50;
    puVar2 = PTR_DAT_04379e48;
    uVar6 = *(undefined8 *)PTR_DAT_04379e48;
    *(undefined8 *)PTR_DAT_04379e50 = uVar6;
    FUN_029278b4(&local_e0,uVar6,&local_60);
    FUN_02a47560(&local_60,*(long *)(param_1 + 0x98) + 0x388);
    if (((*puVar1 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04379e40), iVar5 != 0)) {
      FUN_00100250(&LAB_00956f5c,PTR_DAT_04379e48,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379e40);
    }
    uVar6 = *(undefined8 *)puVar2;
    *(undefined8 *)puVar3 = uVar6;
    FUN_02928520(uVar6,&local_d8,&local_60);
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 0x20))();
    }
    if (((*puVar1 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04379e40), iVar5 != 0)) {
      FUN_00100250(&LAB_00956f5c,PTR_DAT_04379e48,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379e40);
    }
    uVar6 = *(undefined8 *)puVar2;
    *(undefined8 *)puVar3 = uVar6;
    FUN_02928980(uVar6,&local_d8,0,0);
    if (local_c0 != (long *)0x0) {
      (**(code **)(*local_c0 + 0x20))();
    }
  }
  return;
}


