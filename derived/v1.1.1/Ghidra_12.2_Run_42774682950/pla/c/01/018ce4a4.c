/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 018ce4a4; name: FUN_018ce4a4
 */


void FUN_018ce4a4(long param_1,undefined4 param_2)

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
  undefined8 local_c0;
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
  
  puVar1 = PTR_DAT_04379c28;
  switch(param_2) {
  case 0:
  case 1:
    if (((*PTR_DAT_04379c28 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04379c28), iVar5 != 0)) {
      FUN_00100250(PTR_LAB_04379c60,PTR_DAT_04379c30,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379c28);
    }
    local_50 = 0x1a;
    local_48 = (long *)0x0;
    local_60 = 0xb82efc6ae044fe27;
    pcStack_58 = "SET_STATE_BGM_OYA_AREA_OUT";
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
    local_c0 = 0;
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
    *(undefined4 *)(param_1 + 0x90) = 0;
    break;
  case 2:
  case 3:
    if (((*PTR_DAT_04379c28 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04379c28), iVar5 != 0)) {
      FUN_00100250(PTR_LAB_04379c60,PTR_DAT_04379c30,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379c28);
    }
    local_50 = 0x1e;
    local_48 = (long *)0x0;
    local_60 = 0x4eca096312e4c831;
    pcStack_58 = "SET_STATE_VS_BOSS_MID_AREA_OUT";
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
    local_c0 = 0;
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
    *(undefined4 *)(param_1 + 0x94) = 0;
    break;
  case 4:
  case 5:
    if (((*PTR_DAT_04379c28 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04379c28), iVar5 != 0)) {
      FUN_00100250(PTR_LAB_04379c60,PTR_DAT_04379c30,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379c28);
    }
    puVar3 = PTR_DAT_04379c38;
    puVar2 = PTR_DAT_04379c30;
    local_70 = 0;
    uStack_68 = 0;
    uVar6 = *(undefined8 *)PTR_DAT_04379c30;
    local_50 = 0x1a;
    local_48 = (long *)0x0;
    local_80 = 0;
    uStack_78 = 0;
    local_60 = 0xb82efc6ae044fe27;
    pcStack_58 = "SET_STATE_BGM_OYA_AREA_OUT";
    *(undefined8 *)PTR_DAT_04379c38 = uVar6;
    local_90 = 0;
    uStack_88 = 0;
    local_a0 = 0;
    uStack_98 = 0;
    local_b0 = 0;
    uStack_a8 = 0;
    local_c0 = 0;
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
    if (((*puVar1 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04379c28), iVar5 != 0)) {
      FUN_00100250(PTR_LAB_04379c60,PTR_DAT_04379c30,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379c28);
    }
    uVar6 = *(undefined8 *)puVar2;
    local_50 = 0x1e;
    local_60 = 0x4eca096312e4c831;
    pcStack_58 = "SET_STATE_VS_BOSS_MID_AREA_OUT";
    *(undefined8 *)puVar3 = uVar6;
    goto LAB_018ce530;
  case 6:
    if (((*PTR_DAT_04379c28 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04379c28), iVar5 != 0)) {
      FUN_00100250(PTR_LAB_04379c60,PTR_DAT_04379c30,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379c28);
    }
    local_50 = 0x1f;
    local_60 = 0xeee0b676d97898ff;
    pcStack_58 = "SET_STATE_BGM_CAUTION_OFF_EVENT";
    uVar6 = *(undefined8 *)PTR_DAT_04379c30;
    *(undefined8 *)PTR_DAT_04379c38 = uVar6;
LAB_018ce530:
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
    local_c0 = 0;
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
    *(undefined8 *)(param_1 + 0x90) = 0;
  }
  return;
}


