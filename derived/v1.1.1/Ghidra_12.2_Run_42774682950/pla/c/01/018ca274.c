/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 018ca274; name: FUN_018ca274
 */


void FUN_018ca274(long param_1,undefined8 *param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  code *pcVar8;
  int iVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  byte *pbVar14;
  undefined1 *puVar15;
  undefined1 *local_140;
  code *local_138;
  undefined8 local_130;
  long *local_128;
  long *local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_b8;
  char *pcStack_b0;
  undefined8 local_a8;
  long *local_a0;
  undefined8 local_98;
  char *pcStack_90;
  undefined8 local_88;
  long *local_80;
  long *local_78;
  undefined1 *local_70 [2];
  
  puVar2 = PTR_DAT_0437a780;
  if (((*PTR_DAT_0437a780 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_0437a780), iVar9 != 0))
  {
    FUN_00100250(PTR_LAB_0437a8a0,PTR_DAT_0437a788,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a780);
  }
  puVar4 = PTR_DAT_0437a790;
  puVar3 = PTR_DAT_0437a788;
  uVar10 = *(undefined8 *)PTR_DAT_0437a788;
  *(undefined8 *)PTR_DAT_0437a790 = uVar10;
  lVar11 = FUN_01e65c40(uVar10,param_2);
  local_70[0] = *(undefined1 **)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = *param_2;
  puVar5 = PTR_DAT_04379e40;
  if (*(long *)(lVar11 + 8) == 0) {
    puVar13 = (undefined8 *)PTR_PTR_04379d00;
  }
  else {
    puVar13 = (undefined8 *)(*(long *)(lVar11 + 8) + 0x60);
  }
  pbVar14 = (byte *)*puVar13;
  bVar1 = *pbVar14;
  if (bVar1 == 0) {
    puVar15 = &DAT_cbf29ce484222645;
  }
  else {
    puVar15 = &DAT_cbf29ce484222645;
    do {
      pbVar14 = pbVar14 + 1;
      puVar15 = (undefined1 *)(((ulong)puVar15 ^ (ulong)bVar1) * 0x100000001b3);
      bVar1 = *pbVar14;
    } while (bVar1 != 0);
  }
  *(undefined1 **)(param_1 + 0x78) = puVar15;
  puVar7 = PTR_DAT_04379e50;
  puVar6 = PTR_DAT_04379e48;
  if (local_70[0] != &DAT_cbf29ce484222645) {
    if (((*puVar2 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_0437a780), iVar9 != 0)) {
      FUN_00100250(PTR_LAB_0437a8a0,PTR_DAT_0437a788,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437a780);
    }
    uVar10 = *(undefined8 *)puVar3;
    *(undefined8 *)puVar4 = uVar10;
    lVar12 = FUN_01e65c40(uVar10,local_70);
    if (*(long *)(lVar12 + 0xf8) == -0x678cfc2bd6a1e4d3) {
      local_98 = 0x987303d4295e1b2d;
      pcStack_90 = "DUNGEON";
      local_88 = 7;
      local_80 = (long *)0x0;
      if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379e40), iVar9 != 0)) {
        FUN_00100250(PTR_LAB_0437af18,PTR_DAT_04379e48,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379e40);
      }
      uVar10 = *(undefined8 *)puVar6;
      *(undefined8 *)puVar7 = uVar10;
      FUN_029278b4(&local_140,uVar10,&local_98);
      if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379e40), iVar9 != 0)) {
        FUN_00100250(PTR_LAB_0437af18,PTR_DAT_04379e48,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379e40);
      }
      uVar10 = *(undefined8 *)puVar6;
      *(undefined8 *)puVar7 = uVar10;
      FUN_02928c7c(uVar10,&local_138,0,0);
      if (local_120 != (long *)0x0) {
        (**(code **)(*local_120 + 0x20))();
      }
      if (local_80 != (long *)0x0) {
        (**(code **)(*local_80 + 0x20))();
      }
    }
  }
  puVar15 = *(undefined1 **)(lVar11 + 0xf8);
  if (puVar15 != &DAT_cbf29ce484222645) {
    local_130 = 5;
    local_138 = (code *)0x38f5877;
    local_140 = puVar15;
    if ((long)puVar15 < 0xa28a3fadc383db8) {
      if (puVar15 == (undefined1 *)0xe083e9da746b69e5) {
        local_130 = 4;
        local_138 = (code *)&DAT_038a63ec;
      }
      else if (puVar15 == (undefined1 *)0x987303d4295e1b2d) {
        local_130 = 7;
        local_138 = (code *)0x39a5006;
      }
      else {
        local_140 = (undefined1 *)0xa2a7bc75d3888147;
        if (puVar15 == (undefined1 *)0xf1dd20dd8221693b) {
          local_130 = 0xc;
          local_138 = (code *)0x399be05;
          local_140 = puVar15;
        }
      }
    }
    else if (puVar15 == (undefined1 *)0xa28a3fadc383db8) {
      local_130 = 8;
      local_138 = (code *)0x390a3c3;
    }
    else if (puVar15 == (undefined1 *)0x1eb4779ff0a632e3) {
      local_130 = 7;
      local_138 = (code *)0x3958362;
    }
    else {
      local_140 = (undefined1 *)0xa2a7bc75d3888147;
      if (puVar15 == (undefined1 *)0x77a8d944f53332d7) {
        local_130 = 0xd;
        local_138 = (code *)0x397f38d;
        local_140 = puVar15;
      }
    }
    local_128 = (long *)0x0;
    if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379e40), iVar9 != 0)) {
      FUN_00100250(PTR_LAB_0437af18,PTR_DAT_04379e48,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379e40);
    }
    uVar10 = *(undefined8 *)puVar6;
    *(undefined8 *)puVar7 = uVar10;
    FUN_029278b4(&local_98,uVar10,&local_140);
    if (local_128 != (long *)0x0) {
      (**(code **)(*local_128 + 0x20))();
    }
    puVar2 = PTR_DAT_04379c28;
    if (((*PTR_DAT_04379c28 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_04379c28), iVar9 != 0)) {
      FUN_00100250(PTR_LAB_04379c60,PTR_DAT_04379c30,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379c28);
    }
    puVar4 = PTR_DAT_04379c38;
    puVar3 = PTR_DAT_04379c30;
    local_d0 = 0;
    uStack_c8 = 0;
    uVar10 = *(undefined8 *)PTR_DAT_04379c30;
    local_a8 = 0x10;
    local_a0 = (long *)0x0;
    local_e0 = 0;
    uStack_d8 = 0;
    local_b8 = 0x7361b966a9023f5f;
    pcStack_b0 = "SET_STATE_INGAME";
    *(undefined8 *)PTR_DAT_04379c38 = uVar10;
    local_f0 = 0;
    uStack_e8 = 0;
    local_100 = 0;
    uStack_f8 = 0;
    local_110 = 0;
    uStack_108 = 0;
    local_120 = (long *)0x0;
    uStack_118 = 0;
    local_130 = 0;
    local_128 = (long *)0x0;
    local_140 = (undefined1 *)0x0;
    local_138 = (code *)0x0;
    FUN_02913338(uVar10,&local_b8,&local_140,0,0,0);
    pcVar8 = local_138;
    if (local_138 == (code *)0x0) {
      local_138 = (code *)0x0;
    }
    else {
      local_130 = 0;
      local_128 = (long *)0x0;
      local_140 = (undefined1 *)0x0;
      local_138 = (code *)0x0;
      (*pcVar8)(&local_120);
    }
    if (local_a0 != (long *)0x0) {
      (**(code **)(*local_a0 + 0x20))();
    }
    if (*(undefined1 **)(lVar11 + 0x100) != &DAT_cbf29ce484222645) {
      if (((*puVar2 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379c28), iVar9 != 0)) {
        FUN_00100250(PTR_LAB_04379c60,PTR_DAT_04379c30,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379c28);
      }
      uVar10 = *(undefined8 *)puVar3;
      *(undefined8 *)puVar4 = uVar10;
      local_d0 = 0;
      uStack_c8 = 0;
      local_e0 = 0;
      uStack_d8 = 0;
      local_f0 = 0;
      uStack_e8 = 0;
      local_100 = 0;
      uStack_f8 = 0;
      local_110 = 0;
      uStack_108 = 0;
      local_120 = (long *)0x0;
      uStack_118 = 0;
      local_130 = 0;
      local_128 = (long *)0x0;
      local_140 = (undefined1 *)0x0;
      local_138 = (code *)0x0;
      FUN_02913338(uVar10,lVar11 + 0x100,&local_140,0,0,0);
      pcVar8 = local_138;
      if (local_138 != (code *)0x0) {
        local_130 = 0;
        local_128 = (long *)0x0;
        local_140 = (undefined1 *)0x0;
        local_138 = (code *)0x0;
        (*pcVar8)(&local_120);
      }
    }
    if ((((((0x17 < *(uint *)(lVar11 + 0x120)) &&
           (puVar13 = (undefined8 *)FUN_018caa24(lVar11 + 0x120),
           (undefined1 *)*puVar13 != &DAT_cbf29ce484222645)) ||
          ((0x17 < *(uint *)(lVar11 + 0x170) &&
           (puVar13 = (undefined8 *)FUN_018caa24(lVar11 + 0x170),
           (undefined1 *)*puVar13 != &DAT_cbf29ce484222645)))) ||
         ((0x17 < *(uint *)(lVar11 + 0x1c0) &&
          (puVar13 = (undefined8 *)FUN_018caa24(lVar11 + 0x1c0),
          (undefined1 *)*puVar13 != &DAT_cbf29ce484222645)))) ||
        ((0x17 < *(uint *)(lVar11 + 0x210) &&
         (puVar13 = (undefined8 *)FUN_018caa24(lVar11 + 0x210),
         (undefined1 *)*puVar13 != &DAT_cbf29ce484222645)))) ||
       ((0x17 < *(uint *)(lVar11 + 0x260) &&
        (puVar13 = (undefined8 *)FUN_018caa24(lVar11 + 0x260),
        (undefined1 *)*puVar13 != &DAT_cbf29ce484222645)))) {
      if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379e40), iVar9 != 0)) {
        FUN_00100250(PTR_LAB_0437af18,PTR_DAT_04379e48,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379e40);
      }
      uVar10 = *(undefined8 *)puVar6;
      *(undefined8 *)puVar7 = uVar10;
      FUN_02928520(uVar10,&pcStack_90,puVar13);
      if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379e40), iVar9 != 0)) {
        FUN_00100250(PTR_LAB_0437af18,PTR_DAT_04379e48,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379e40);
      }
      uVar10 = *(undefined8 *)puVar6;
      *(undefined8 *)puVar7 = uVar10;
      FUN_02928980(uVar10,&pcStack_90,0,0);
    }
    if (local_78 != (long *)0x0) {
      (**(code **)(*local_78 + 0x20))();
    }
  }
  return;
}


