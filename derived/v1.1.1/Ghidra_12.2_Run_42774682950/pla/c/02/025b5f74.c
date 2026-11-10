/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 025b5f74; name: FUN_025b5f74
 */


void FUN_025b5f74(long param_1)

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
  switch(*(undefined4 *)(param_1 + 4)) {
  case 0:
    if (((*PTR_DAT_04379c28 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04379c28), iVar5 != 0)) {
      FUN_00100250(PTR_LAB_04379c60,PTR_DAT_04379c30,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379c28);
    }
    local_50 = 0x16;
    local_60 = 0x8694853322054fa6;
    pcStack_58 = "SET_STATE_PL_PINCH_OUT";
    goto LAB_025b6024;
  case 1:
    if (((*PTR_DAT_04379c28 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04379c28), iVar5 != 0)) {
      FUN_00100250(PTR_LAB_04379c60,PTR_DAT_04379c30,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379c28);
    }
    local_50 = 0x17;
    local_60 = 0xd1f149cc0f663d1b;
    pcStack_58 = "SET_STATE_PL_PINCH_HARD";
LAB_025b6024:
    uVar6 = *(undefined8 *)PTR_DAT_04379c30;
    *(undefined8 *)PTR_DAT_04379c38 = uVar6;
    break;
  case 2:
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
    local_50 = 0x1b;
    local_48 = (long *)0x0;
    local_80 = 0;
    uStack_78 = 0;
    local_60 = 0x79675ce072a3e467;
    pcStack_58 = "SET_STATE_PL_PINCH_VERYHARD";
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
    local_50 = 0x17;
    local_60 = 0x91fca3eb7b95fc9a;
    pcStack_58 = "PLAY_UI_COMMON_PINCH_PL";
    *(undefined8 *)puVar3 = uVar6;
    break;
  case 3:
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
    local_50 = 0x10;
    local_48 = (long *)0x0;
    local_80 = 0;
    uStack_78 = 0;
    local_60 = 0x299c2e8d9bafc69e;
    pcStack_58 = "PLAY_PL_FX_DEATH";
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
    if (*(char *)(param_1 + 0xc) != '\0') {
      return;
    }
    if (((*puVar1 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04379c28), iVar5 != 0)) {
      FUN_00100250(PTR_LAB_04379c60,PTR_DAT_04379c30,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379c28);
    }
    uVar6 = *(undefined8 *)puVar2;
    local_50 = 0x16;
    local_60 = 0x8694853322054fa6;
    pcStack_58 = "SET_STATE_PL_PINCH_OUT";
    *(undefined8 *)puVar3 = uVar6;
    break;
  default:
    goto switchD_025b5fac_default;
  }
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
switchD_025b5fac_default:
  return;
}


