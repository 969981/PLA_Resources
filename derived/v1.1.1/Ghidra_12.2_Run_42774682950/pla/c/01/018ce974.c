/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 018ce974; name: FUN_018ce974
 */


void FUN_018ce974(long param_1,ulong param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  code *pcVar4;
  int iVar5;
  undefined8 uVar6;
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
  uVar6 = *(undefined8 *)PTR_DAT_04379c30;
  *(undefined8 *)PTR_DAT_04379c38 = uVar6;
  if ((param_2 & 1) == 0) {
    local_60 = 0x893f6c2bcb926f26;
    pcStack_58 = "SET_STATE_BGM_OYA_AREA_IN";
    local_50 = 0x19;
    local_48 = (long *)0x0;
    local_70 = 0;
    uStack_68 = 0;
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
    local_60 = 0xf789d20355f19446;
    pcStack_58 = "CAUTION";
    local_50 = 7;
    local_48 = (long *)0x0;
    FUN_02928390(&local_e0,&local_60);
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 0x20))();
    }
    puVar1 = PTR_DAT_04379e40;
    local_60 = 0x6bb320fce54b1b9b;
    pcStack_58 = "PLAY_BGM_HA_FI_CMN_CAUTION";
    local_50 = 0x1a;
    local_48 = (long *)0x0;
    if (((*PTR_DAT_04379e40 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04379e40), iVar5 != 0)) {
      FUN_00100250(PTR_LAB_0437af18,PTR_DAT_04379e48,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379e40);
    }
    puVar3 = PTR_DAT_04379e50;
    puVar2 = PTR_DAT_04379e48;
    uVar6 = *(undefined8 *)PTR_DAT_04379e48;
    *(undefined8 *)PTR_DAT_04379e50 = uVar6;
    FUN_02928520(uVar6,&local_d8,&local_60);
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 0x20))();
    }
    if (((*puVar1 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04379e40), iVar5 != 0)) {
      FUN_00100250(PTR_LAB_0437af18,PTR_DAT_04379e48,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379e40);
    }
    uVar6 = *(undefined8 *)puVar2;
    *(undefined8 *)puVar3 = uVar6;
    FUN_02928980(uVar6,&local_d8,0,0);
    *(undefined4 *)(param_1 + 0x90) = 1;
  }
  else {
    local_60 = 0xd6c20af21a990504;
    pcStack_58 = "SET_STATE_VS_BOSS_MID_AREA_IN";
    local_50 = 0x1d;
    local_48 = (long *)0x0;
    local_70 = 0;
    uStack_68 = 0;
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
    local_60 = 0xb66b8b30cdbeba02;
    pcStack_58 = "BATTLE_MID";
    local_50 = 10;
    local_48 = (long *)0x0;
    FUN_02928390(&local_e0,&local_60);
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 0x20))();
    }
    puVar1 = PTR_DAT_04379e40;
    local_60 = 0x9e7919898bcd3d85;
    pcStack_58 = "PLAY_BGM_VS_BOSS_MID";
    local_50 = 0x14;
    local_48 = (long *)0x0;
    if (((*PTR_DAT_04379e40 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04379e40), iVar5 != 0)) {
      FUN_00100250(PTR_LAB_0437af18,PTR_DAT_04379e48,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379e40);
    }
    puVar3 = PTR_DAT_04379e50;
    puVar2 = PTR_DAT_04379e48;
    uVar6 = *(undefined8 *)PTR_DAT_04379e48;
    *(undefined8 *)PTR_DAT_04379e50 = uVar6;
    FUN_02928520(uVar6,&local_d8,&local_60);
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 0x20))();
    }
    if (((*puVar1 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04379e40), iVar5 != 0)) {
      FUN_00100250(PTR_LAB_0437af18,PTR_DAT_04379e48,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379e40);
    }
    uVar6 = *(undefined8 *)puVar2;
    *(undefined8 *)puVar3 = uVar6;
    FUN_02928980(uVar6,&local_d8,0,0);
    *(undefined4 *)(param_1 + 0x94) = 1;
  }
  if (local_c0 != (long *)0x0) {
    (**(code **)(*local_c0 + 0x20))();
  }
  return;
}


