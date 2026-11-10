/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01ae02bc; name: FUN_01ae02bc
 */


void FUN_01ae02bc(undefined8 param_1,float param_2,undefined8 param_3,ulong param_4)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  code *pcVar5;
  int iVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  float fVar10;
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
  
  puVar4 = PTR_DAT_04379c38;
  puVar3 = PTR_DAT_04379c30;
  puVar2 = PTR_DAT_04379c28;
  fVar10 = (float)param_1;
  if ((param_4 & 1) != 0) {
    if (((*PTR_DAT_04379c28 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_04379c28), iVar6 != 0)) {
      FUN_00100250(PTR_LAB_04379c60,PTR_DAT_04379c30,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379c28);
    }
    uVar8 = *(undefined8 *)puVar3;
    *(undefined8 *)puVar4 = uVar8;
    if (fVar10 == 100.0) {
      local_60 = 0x5b385fbb453bc040;
      pcStack_58 = "SET_STATE_NUSHI_COUNT_FIRST_MATCH";
      local_50 = 0x21;
    }
    else {
      local_60 = 0xd6654194b3cf45ee;
      pcStack_58 = "SET_STATE_NUSHI_COUNT_REMATCH";
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
      local_c0 = 0;
      uStack_b8 = 0;
      local_d0 = 0;
      uStack_c8 = 0;
      local_e0 = 0;
      local_d8 = (code *)0x0;
      FUN_02913338(uVar8,&local_60,&local_e0,0,0,0);
      pcVar5 = local_d8;
      if (local_d8 == (code *)0x0) {
        local_d8 = (code *)0x0;
      }
      else {
        local_d0 = 0;
        uStack_c8 = 0;
        local_e0 = 0;
        local_d8 = (code *)0x0;
        (*pcVar5)(&local_c0);
      }
      if (local_48 != (long *)0x0) {
        (**(code **)(*local_48 + 0x20))();
      }
      if ((fVar10 < 50.0) || (100.0 <= fVar10)) goto joined_r0x01ae0494;
      if (((*puVar2 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04379c28), iVar6 != 0)) {
        FUN_00100250(PTR_LAB_04379c60,PTR_DAT_04379c30,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379c28);
      }
      uVar8 = *(undefined8 *)puVar3;
      local_50 = 0x19;
      local_60 = 0xed7a9112a20079b4;
      pcStack_58 = "SET_STATE_VS_NUSHI_AP_MAX";
      *(undefined8 *)puVar4 = uVar8;
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
    FUN_02913338(uVar8,&local_60,&local_e0,0,0,0);
    pcVar5 = local_d8;
    if (local_d8 == (code *)0x0) {
      local_d8 = (code *)0x0;
    }
    else {
      local_d0 = 0;
      uStack_c8 = 0;
      local_e0 = 0;
      local_d8 = (code *)0x0;
      (*pcVar5)(&local_c0);
    }
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 0x20))();
    }
  }
joined_r0x01ae0494:
  if (param_2 != fVar10) {
    if ((0.0 < fVar10) || (param_2 <= 0.0)) {
      if ((10.0 < fVar10) || (param_2 <= 10.0)) {
        if ((20.0 < fVar10) || (param_2 <= 20.0)) {
          if ((30.0 < fVar10) || (param_2 <= 30.0)) {
            if ((40.0 < fVar10) || (param_2 <= 40.0)) {
              if ((50.0 < fVar10) || (param_2 <= 50.0)) goto LAB_01ae038c;
              if (((*puVar2 & 1) == 0) &&
                 (iVar6 = __cxa_guard_acquire(PTR_DAT_04379c28), iVar6 != 0)) {
                FUN_00100250(PTR_LAB_04379c60,PTR_DAT_04379c30,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379c28);
              }
              uVar8 = *(undefined8 *)puVar3;
              local_60 = 0xf0be09111c1ed02f;
              local_50 = 0x18;
              pcStack_58 = "SET_STATE_VS_NUSHI_AP_50";
            }
            else {
              if (((*puVar2 & 1) == 0) &&
                 (iVar6 = __cxa_guard_acquire(PTR_DAT_04379c28), iVar6 != 0)) {
                FUN_00100250(PTR_LAB_04379c60,PTR_DAT_04379c30,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379c28);
              }
              uVar8 = *(undefined8 *)puVar3;
              local_60 = 0xf0ba83111c1bb6a6;
              local_50 = 0x18;
              pcStack_58 = "SET_STATE_VS_NUSHI_AP_40";
            }
          }
          else {
            if (((*puVar2 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04379c28), iVar6 != 0))
            {
              FUN_00100250(PTR_LAB_04379c60,PTR_DAT_04379c30,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379c28);
            }
            uVar8 = *(undefined8 *)puVar3;
            local_60 = 0xf0a985111c0d46d9;
            local_50 = 0x18;
            pcStack_58 = "SET_STATE_VS_NUSHI_AP_30";
          }
        }
        else {
          if (((*puVar2 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04379c28), iVar6 != 0)) {
            FUN_00100250(PTR_LAB_04379c60,PTR_DAT_04379c30,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379c28);
          }
          uVar8 = *(undefined8 *)puVar3;
          local_60 = 0xf0a67f111c0b06d0;
          local_50 = 0x18;
          pcStack_58 = "SET_STATE_VS_NUSHI_AP_20";
        }
      }
      else {
        if (((*puVar2 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04379c28), iVar6 != 0)) {
          FUN_00100250(PTR_LAB_04379c60,PTR_DAT_04379c30,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379c28);
        }
        uVar8 = *(undefined8 *)puVar3;
        local_60 = 0xf0b091111c1379eb;
        local_50 = 0x18;
        pcStack_58 = "SET_STATE_VS_NUSHI_AP_10";
      }
    }
    else {
      if (((*puVar2 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04379c28), iVar6 != 0)) {
        FUN_00100250(PTR_LAB_04379c60,PTR_DAT_04379c30,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379c28);
      }
      uVar8 = *(undefined8 *)puVar3;
      local_60 = 0xac50d17ba0235926;
      local_50 = 0x17;
      pcStack_58 = "SET_STATE_VS_NUSHI_AP_0";
    }
    local_48 = (long *)0x0;
    *(undefined8 *)puVar4 = uVar8;
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
    FUN_02913338(uVar8,&local_60,&local_e0,0,0,0);
    pcVar5 = local_d8;
    if (local_d8 == (code *)0x0) {
      local_d8 = (code *)0x0;
    }
    else {
      local_d0 = 0;
      uStack_c8 = 0;
      local_e0 = 0;
      local_d8 = (code *)0x0;
      (*pcVar5)(&local_c0);
    }
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 0x20))();
    }
  }
LAB_01ae038c:
  if (fVar10 == 100.0) {
    if (((*puVar2 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04379c28), iVar6 != 0)) {
      FUN_00100250(PTR_LAB_04379c60,PTR_DAT_04379c30,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379c28);
    }
    uVar8 = *(undefined8 *)puVar3;
    local_50 = 0x19;
    local_48 = (long *)0x0;
    *(undefined8 *)puVar4 = uVar8;
    local_60 = 0xed7a9112a20079b4;
    pcStack_58 = "SET_STATE_VS_NUSHI_AP_MAX";
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
    FUN_02913338(uVar8,&local_60,&local_e0,0,0,0);
    pcVar5 = local_d8;
    if (local_d8 == (code *)0x0) {
      local_d8 = (code *)0x0;
    }
    else {
      local_d0 = 0;
      uStack_c8 = 0;
      local_e0 = 0;
      local_d8 = (code *)0x0;
      (*pcVar5)(&local_c0);
    }
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 0x20))();
      bVar1 = *puVar2;
      goto joined_r0x01ae052c;
    }
  }
  bVar1 = *puVar2;
joined_r0x01ae052c:
  if (((bVar1 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04379c28), iVar6 != 0)) {
    FUN_00100250(PTR_LAB_04379c60,PTR_DAT_04379c30,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379c28);
  }
  lVar9 = *(long *)puVar3;
  *(long *)puVar4 = lVar9;
  plVar7 = *(long **)(*(long *)(lVar9 + 0x158) + 0x60);
  (**(code **)(*plVar7 + 0x88))(param_1,plVar7,"NUSHI_AP",0xffffffffffffffff,0,4,0);
  return;
}


