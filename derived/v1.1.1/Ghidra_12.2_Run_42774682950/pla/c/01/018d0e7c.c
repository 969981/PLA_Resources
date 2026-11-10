/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 018d0e7c; name: FUN_018d0e7c
 */


void FUN_018d0e7c(long param_1,undefined4 param_2)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 local_c0;
  code *local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  long *local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  long *local_28;
  
  switch(param_2) {
  case 0:
  case 1:
    if (((*PTR_DAT_04379c28 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379c28), iVar2 != 0)) {
      FUN_00100250(PTR_LAB_04379c60,PTR_DAT_04379c30,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379c28);
    }
    local_30 = 0x18;
    local_28 = (long *)0x0;
    local_40 = 0x9c43d97352fc7db3;
    pcStack_38 = "SET_STATE_CAUTION_FINISH";
    uVar3 = *(undefined8 *)PTR_DAT_04379c30;
    local_50 = 0;
    uStack_48 = 0;
    *(undefined8 *)PTR_DAT_04379c38 = uVar3;
    local_60 = 0;
    uStack_58 = 0;
    local_70 = 0;
    uStack_68 = 0;
    local_80 = 0;
    uStack_78 = 0;
    local_90 = 0;
    uStack_88 = 0;
    local_a0 = (long *)0x0;
    uStack_98 = 0;
    local_b0 = 0;
    uStack_a8 = 0;
    local_c0 = 0;
    local_b8 = (code *)0x0;
    FUN_02913338(uVar3,&local_40,&local_c0,0,0,0);
    pcVar1 = local_b8;
    if (local_b8 == (code *)0x0) {
      local_b8 = (code *)0x0;
    }
    else {
      local_b0 = 0;
      uStack_a8 = 0;
      local_c0 = 0;
      local_b8 = (code *)0x0;
      (*pcVar1)(&local_a0);
    }
    if (local_28 != (long *)0x0) {
      (**(code **)(*local_28 + 0x20))();
    }
    local_40 = 0xf789d20355f19446;
    pcStack_38 = "CAUTION";
    local_30 = 7;
    local_28 = (long *)0x0;
    FUN_02928390(&local_c0,&local_40);
    if (local_28 != (long *)0x0) {
      (**(code **)(*local_28 + 0x20))();
    }
    if (((*PTR_DAT_04379e40 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379e40), iVar2 != 0)) {
      FUN_00100250(PTR_LAB_0437af18,PTR_DAT_04379e48,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379e40);
    }
    uVar3 = *(undefined8 *)PTR_DAT_04379e48;
    *(undefined8 *)PTR_DAT_04379e50 = uVar3;
    FUN_02928c7c(uVar3,&local_b8,0,0);
    plVar4 = local_a0;
    if (local_a0 == (long *)0x0) goto switchD_018d0eb0_default;
    goto LAB_018d0f4c;
  case 2:
    if (((*PTR_DAT_04379c28 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379c28), iVar2 != 0)) {
      FUN_00100250(PTR_LAB_04379c60,PTR_DAT_04379c30,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379c28);
    }
    local_30 = 0x1f;
    local_40 = 0xeee0b676d97898ff;
    pcStack_38 = "SET_STATE_BGM_CAUTION_OFF_EVENT";
    break;
  case 3:
  case 4:
    if (((*PTR_DAT_04379c28 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379c28), iVar2 != 0)) {
      FUN_00100250(PTR_LAB_04379c60,PTR_DAT_04379c30,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379c28);
    }
    local_30 = 0x1a;
    local_40 = 0x57dfb2fc5dfe003b;
    pcStack_38 = "SET_STATE_CAUTION_MAP_JUMP";
    break;
  case 5:
    if (((*PTR_DAT_04379c28 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379c28), iVar2 != 0)) {
      FUN_00100250(PTR_LAB_04379c60,PTR_DAT_04379c30,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379c28);
    }
    local_30 = 0x1e;
    local_40 = 0x3eea9793e2fc7f9;
    pcStack_38 = "SET_STATE_CAUTION_WILD_CAPTURE";
    break;
  case 6:
    if (((*PTR_DAT_04379c28 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379c28), iVar2 != 0)) {
      FUN_00100250(PTR_LAB_04379c60,PTR_DAT_04379c30,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379c28);
    }
    local_30 = 0x1d;
    local_40 = 0x25dd887f2193de7e;
    pcStack_38 = "SET_STATE_CAUTION_OYA_CAPTURE";
    break;
  default:
    goto switchD_018d0eb0_default;
  }
  local_28 = (long *)0x0;
  uVar3 = *(undefined8 *)PTR_DAT_04379c30;
  local_50 = 0;
  uStack_48 = 0;
  local_60 = 0;
  uStack_58 = 0;
  *(undefined8 *)PTR_DAT_04379c38 = uVar3;
  local_70 = 0;
  uStack_68 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_a0 = (long *)0x0;
  uStack_98 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_c0 = 0;
  local_b8 = (code *)0x0;
  FUN_02913338(uVar3,&local_40,&local_c0,0,0,0);
  pcVar1 = local_b8;
  if (local_b8 == (code *)0x0) {
    local_b8 = (code *)0x0;
  }
  else {
    local_b0 = 0;
    uStack_a8 = 0;
    local_c0 = 0;
    local_b8 = (code *)0x0;
    (*pcVar1)(&local_a0);
  }
  plVar4 = local_28;
  if (local_28 != (long *)0x0) {
LAB_018d0f4c:
    (**(code **)(*plVar4 + 0x20))();
  }
switchD_018d0eb0_default:
  *(undefined2 *)(param_1 + 0x69) = 0;
  *(undefined8 *)(param_1 + 0x6d) = 0;
  *(undefined8 *)(param_1 + 0x75) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  return;
}


