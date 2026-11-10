/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 018c9920; name: FUN_018c9920
 */


void FUN_018c9920(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 local_e8;
  char *pcStack_e0;
  undefined8 local_d8;
  long *local_d0;
  long local_c8;
  char *pcStack_c0;
  undefined8 local_b8;
  long *local_b0;
  long *local_a8;
  long local_a0;
  char *pcStack_98;
  undefined8 local_90;
  long *local_88;
  long *local_80;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [24];
  long *local_58;
  
  puVar1 = PTR_DAT_0437a780;
  if (*(undefined1 **)(param_1 + 0x70) == &DAT_cbf29ce484222645) {
    return;
  }
  if (((*PTR_DAT_0437a780 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_0437a780), iVar4 != 0))
  {
    FUN_00100250(PTR_LAB_0437a8a0,PTR_DAT_0437a788,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a780);
  }
  puVar3 = PTR_DAT_0437a790;
  puVar2 = PTR_DAT_0437a788;
  uVar5 = *(undefined8 *)PTR_DAT_0437a788;
  *(undefined8 *)PTR_DAT_0437a790 = uVar5;
  lVar6 = FUN_01e65c40(uVar5,(undefined8 *)(param_1 + 0x70));
  if (*(undefined1 **)(lVar6 + 0xf8) == &DAT_cbf29ce484222645) {
    return;
  }
  if (((*puVar1 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_0437a780), iVar4 != 0)) {
    FUN_00100250(PTR_LAB_0437a8a0,PTR_DAT_0437a788,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a780);
  }
  uVar5 = *(undefined8 *)puVar2;
  *(undefined8 *)puVar3 = uVar5;
  lVar7 = FUN_01e65c40(uVar5,param_2);
  puVar1 = PTR_DAT_04379e40;
  lVar7 = *(long *)(lVar7 + 0xf8);
  pcStack_98 = "FIELD";
  local_90 = 5;
  local_a0 = lVar7;
  if (lVar7 < 0xa28a3fadc383db8) {
    if (lVar7 == -0x1f7c16258b94961b) {
      local_90 = 4;
      pcStack_98 = "TOWN";
    }
    else if (lVar7 == -0x678cfc2bd6a1e4d3) {
      local_90 = 7;
      pcStack_98 = "DUNGEON";
    }
    else {
      local_a0 = -0x5d58438a2c777eb9;
      if (lVar7 == -0xe22df227dde96c5) {
        local_90 = 0xc;
        pcStack_98 = "LOCATION_LOW";
        local_a0 = lVar7;
      }
    }
  }
  else if (lVar7 == 0xa28a3fadc383db8) {
    local_90 = 8;
    pcStack_98 = "FACILITY";
  }
  else if (lVar7 == 0x1eb4779ff0a632e3) {
    local_90 = 7;
    pcStack_98 = "VILLAGE";
  }
  else {
    local_a0 = -0x5d58438a2c777eb9;
    if (lVar7 == 0x77a8d944f53332d7) {
      local_90 = 0xd;
      pcStack_98 = "LOCATION_HIGH";
      local_a0 = lVar7;
    }
  }
  local_88 = (long *)0x0;
  if (((*PTR_DAT_04379e40 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04379e40), iVar4 != 0))
  {
    FUN_00100250(PTR_LAB_0437af18,PTR_DAT_04379e48,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379e40);
  }
  puVar3 = PTR_DAT_04379e50;
  puVar2 = PTR_DAT_04379e48;
  uVar5 = *(undefined8 *)PTR_DAT_04379e48;
  *(undefined8 *)PTR_DAT_04379e50 = uVar5;
  FUN_029278b4(auStack_78,uVar5,&local_a0);
  if (local_88 != (long *)0x0) {
    (**(code **)(*local_88 + 0x20))();
  }
  lVar8 = *(long *)(lVar6 + 0xf8);
  if (lVar8 == lVar7) goto LAB_018c9cbc;
  local_b8 = 5;
  pcStack_c0 = "FIELD";
  local_c8 = lVar8;
  if (lVar8 < 0xa28a3fadc383db8) {
    if (lVar8 == -0x1f7c16258b94961b) {
      local_b8 = 4;
      pcStack_c0 = "TOWN";
    }
    else if (lVar8 == -0x678cfc2bd6a1e4d3) {
      local_b8 = 7;
      pcStack_c0 = "DUNGEON";
    }
    else {
      local_c8 = -0x5d58438a2c777eb9;
      if (lVar8 == -0xe22df227dde96c5) {
        local_b8 = 0xc;
        pcStack_c0 = "LOCATION_LOW";
        local_c8 = lVar8;
      }
    }
  }
  else if (lVar8 == 0xa28a3fadc383db8) {
    local_b8 = 8;
    pcStack_c0 = "FACILITY";
  }
  else if (lVar8 == 0x1eb4779ff0a632e3) {
    local_b8 = 7;
    pcStack_c0 = "VILLAGE";
  }
  else {
    local_c8 = -0x5d58438a2c777eb9;
    if (lVar8 == 0x77a8d944f53332d7) {
      local_b8 = 0xd;
      pcStack_c0 = "LOCATION_HIGH";
      local_c8 = lVar8;
    }
  }
  local_b0 = (long *)0x0;
  if (((*puVar1 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04379e40), iVar4 != 0)) {
    FUN_00100250(PTR_LAB_0437af18,PTR_DAT_04379e48,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379e40);
  }
  uVar5 = *(undefined8 *)puVar2;
  *(undefined8 *)puVar3 = uVar5;
  FUN_029278b4(&local_a0,uVar5,&local_c8);
  if (local_b0 != (long *)0x0) {
    (**(code **)(*local_b0 + 0x20))();
  }
  lVar6 = *(long *)(lVar6 + 0xf8);
  if (lVar6 < -0xe22df227dde96c5) {
    if (lVar6 == -0x1f7c16258b94961b) {
      if (lVar7 != 0xa28a3fadc383db8) goto LAB_018c9c84;
    }
    else if (lVar6 == -0x5d58438a2c777eb9) {
      if (lVar7 == -0x678cfc2bd6a1e4d3) {
        local_e8 = 0x987303d4295e1b2d;
        pcStack_e0 = "DUNGEON";
        local_d8 = 7;
        local_d0 = (long *)0x0;
        if (((*puVar1 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04379e40), iVar4 != 0)) {
          FUN_00100250(PTR_LAB_0437af18,PTR_DAT_04379e48,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379e40);
        }
        uVar5 = *(undefined8 *)puVar2;
        *(undefined8 *)puVar3 = uVar5;
        FUN_029278b4(&local_c8,uVar5,&local_e8);
        if ((local_c8 == 0) || (*(char *)(local_c8 + 0x24) == '\0')) {
          local_e8 = 0xdb14ed8a78d3fc05;
          pcStack_e0 = "_PLAY_WAIT_";
          local_d8 = 0xb;
          local_d0 = (long *)0x0;
          if (((*puVar1 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04379e40), iVar4 != 0)) {
            FUN_00100250(PTR_LAB_0437af18,PTR_DAT_04379e48,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379e40);
          }
          uVar5 = *(undefined8 *)puVar2;
          *(undefined8 *)puVar3 = uVar5;
          FUN_02928520(uVar5,&pcStack_c0,&local_e8);
          if (local_d0 != (long *)0x0) {
            (**(code **)(*local_d0 + 0x20))();
          }
        }
        FUN_018ca13c(&local_c8);
        if (local_a8 != (long *)0x0) {
          (**(code **)(*local_a8 + 0x20))();
        }
      }
      else {
        if ((lVar7 != -0xe22df227dde96c5) && (lVar7 != 0x77a8d944f53332d7)) goto LAB_018c9c84;
        if (((*puVar1 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04379e40), iVar4 != 0)) {
          FUN_00100250(PTR_LAB_0437af18,PTR_DAT_04379e48,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379e40);
        }
        uVar5 = *(undefined8 *)puVar2;
        *(undefined8 *)puVar3 = uVar5;
        FUN_02928980(uVar5,auStack_70,0,0);
      }
    }
    else if (lVar6 == -0x678cfc2bd6a1e4d3) {
      FUN_018ca1d8(&local_a0);
    }
  }
  else if (lVar6 < 0x1eb4779ff0a632e3) {
    if (lVar6 == 0xa28a3fadc383db8) {
LAB_018c9c84:
      if (((*puVar1 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04379e40), iVar4 != 0)) {
        FUN_00100250(PTR_LAB_0437af18,PTR_DAT_04379e48,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379e40);
      }
      uVar5 = *(undefined8 *)puVar2;
      *(undefined8 *)puVar3 = uVar5;
      FUN_02928c7c(uVar5,&pcStack_98,0,0);
    }
    else if (lVar6 == -0xe22df227dde96c5) {
LAB_018c9e14:
      if (lVar7 != -0x5d58438a2c777eb9) goto LAB_018c9c84;
    }
  }
  else {
    if (lVar6 == 0x1eb4779ff0a632e3) goto LAB_018c9c84;
    if (lVar6 == 0x77a8d944f53332d7) goto LAB_018c9e14;
  }
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 0x20))();
  }
LAB_018c9cbc:
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  return;
}


