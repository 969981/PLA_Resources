/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00953a58; name: FUN_00953a58
 */


void FUN_00953a58(long param_1)

{
  code *pcVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 local_c0;
  code *local_b8;
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
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  long *local_28;
  
  if (*(int *)(*(long *)(param_1 + 0xa0) + 0x54) == 1) {
    if (*(char *)(*(long *)(param_1 + 0xa0) + 0x215) != '\0') {
      return;
    }
    uVar3 = FUN_008c26d4(*(undefined8 *)(param_1 + 0x98),0x1e1);
    if ((uVar3 & 1) == 0) {
      uVar3 = FUN_008c26d4(*(undefined8 *)(param_1 + 0x98),0x1e2);
      if ((uVar3 & 1) == 0) {
        uVar3 = FUN_008c26d4(*(undefined8 *)(param_1 + 0x98),0x1e0);
        if ((uVar3 & 1) == 0) {
          return;
        }
        if (((*PTR_DAT_04379c28 & 1) == 0) &&
           (iVar2 = __cxa_guard_acquire(PTR_DAT_04379c28), iVar2 != 0)) {
          FUN_00100250(PTR_LAB_04379c60,PTR_DAT_04379c30,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379c28);
        }
        local_30 = 0x1b;
        local_40 = 0x648ddc2d38219439;
        pcStack_38 = "SET_STATE_BOSS01_AREA05_END";
      }
      else {
        if (((*PTR_DAT_04379c28 & 1) == 0) &&
           (iVar2 = __cxa_guard_acquire(PTR_DAT_04379c28), iVar2 != 0)) {
          FUN_00100250(PTR_LAB_04379c60,PTR_DAT_04379c30,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379c28);
        }
        local_30 = 0x1b;
        local_40 = 0xd43206124ea3d344;
        pcStack_38 = "SET_STATE_BOSS01_AREA02_END";
      }
    }
    else {
      if (((*PTR_DAT_04379c28 & 1) == 0) &&
         (iVar2 = __cxa_guard_acquire(PTR_DAT_04379c28), iVar2 != 0)) {
        FUN_00100250(PTR_LAB_04379c60,PTR_DAT_04379c30,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379c28);
      }
      local_30 = 0x1b;
      local_40 = 0x8aaf93e1b071cfc5;
      pcStack_38 = "SET_STATE_BOSS01_AREA01_END";
    }
  }
  else {
    if (((*PTR_DAT_04379c28 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379c28), iVar2 != 0)) {
      FUN_00100250(PTR_LAB_04379c60,PTR_DAT_04379c30,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379c28);
    }
    local_30 = 0x14;
    local_40 = 0x8b8264a6042a9172;
    pcStack_38 = "SET_STATE_BOSS01_OFF";
  }
  local_28 = (long *)0x0;
  uVar4 = *(undefined8 *)PTR_DAT_04379c30;
  local_50 = 0;
  uStack_48 = 0;
  local_60 = 0;
  uStack_58 = 0;
  *(undefined8 *)PTR_DAT_04379c38 = uVar4;
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
  local_b8 = (code *)0x0;
  FUN_02913338(uVar4,&local_40,&local_c0,0,0,0);
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
  return;
}


