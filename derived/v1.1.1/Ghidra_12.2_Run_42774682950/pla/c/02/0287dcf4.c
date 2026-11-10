/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0287dcf4; name: FUN_0287dcf4
 */


void FUN_0287dcf4(void)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 uVar5;
  long *plVar6;
  byte *pbVar7;
  byte *pbVar8;
  undefined8 uVar9;
  undefined1 *puVar10;
  undefined1 *local_188;
  undefined *puStack_180;
  undefined8 local_178;
  long *local_170;
  undefined1 *local_168;
  byte *pbStack_160;
  size_t local_158;
  long *local_150;
  undefined1 *local_148;
  byte *pbStack_140;
  size_t local_138;
  long *local_130;
  undefined1 *local_128;
  byte *pbStack_120;
  size_t local_118;
  long *local_110;
  undefined1 *local_108;
  byte *pbStack_100;
  size_t local_f8;
  long *local_f0;
  undefined1 *local_e8;
  byte *pbStack_e0;
  size_t local_d8;
  long *local_d0;
  undefined1 *local_c8;
  byte *pbStack_c0;
  size_t local_b8;
  long *local_b0;
  undefined **local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined1 local_64;
  undefined8 local_60;
  undefined8 uStack_58;
  
  uVar9 = *(undefined8 *)(*(long *)PTR_DAT_0437b160 + 0x88);
  uVar5 = FUN_02881188(uVar9);
  local_64 = 0;
  local_a8 = &PTR_LAB_042714d0;
  uStack_a0 = 0;
  local_70 = 0x10000;
  local_88 = 0x8000000200;
  uStack_80 = 0x8000000080;
  local_68 = 0x400;
  local_78 = 0x80;
  local_98 = 0;
  uStack_90 = 0;
  local_60 = 0x10000000006;
  uStack_58 = 0x3000000;
  FUN_02c94d28(uVar5,&local_a8,uVar9);
  plVar6 = (long *)FUN_02b44670();
  local_e8 = &DAT_462237f7b07aa897;
  pbStack_e0 = &DAT_039a34c1;
  local_d8 = 4;
  local_d0 = (long *)0x0;
  pbStack_c0 = (byte *)(**(code **)(*plVar6 + 0x38))(plVar6,&local_e8,0);
  puVar2 = (undefined8 *)PTR_DAT_0437a0d8;
  puVar3 = PTR_DAT_0437a0d0;
  if (pbStack_c0 == (byte *)0x0) {
    if (((*PTR_DAT_0437a0d0 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar4 != 0)) {
      FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437a0d0);
    }
    local_c8 = (undefined1 *)*puVar2;
    pbStack_c0 = *(byte **)((long)puVar2 + 8);
    local_b8 = *(size_t *)((long)puVar2 + 0x10);
    local_b0 = *(long **)((long)puVar2 + 0x18);
    if (local_b0 != (long *)0x0) {
      (**(code **)(*local_b0 + 0x18))();
    }
  }
  else {
    puVar10 = &DAT_cbf29ce484222645;
    local_b8 = strlen((char *)pbStack_c0);
    bVar1 = *pbStack_c0;
    pbVar7 = pbStack_c0;
    while (bVar1 != 0) {
      pbVar7 = pbVar7 + 1;
      puVar10 = (undefined1 *)(((ulong)puVar10 ^ (ulong)bVar1) * 0x100000001b3);
      bVar1 = *pbVar7;
    }
    local_b0 = (long *)0x0;
    puVar2 = (undefined8 *)PTR_DAT_0437a0d8;
    local_c8 = puVar10;
  }
  if (local_d0 != (long *)0x0) {
    (**(code **)(*local_d0 + 0x20))();
  }
  plVar6 = (long *)FUN_02b44670();
  local_108 = &DAT_462237f7b07aa897;
  pbStack_100 = &DAT_039a34c1;
  local_f8 = 4;
  local_f0 = (long *)0x0;
  pbVar7 = (byte *)(**(code **)(*plVar6 + 0x38))(plVar6,&local_108,1);
  if (pbVar7 == (byte *)0x0) {
    if (((*puVar3 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar4 != 0)) {
      FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437a0d0);
    }
    local_e8 = (undefined1 *)*puVar2;
    pbStack_e0 = (byte *)puVar2[1];
    local_d8 = puVar2[2];
    local_d0 = (long *)puVar2[3];
    if (local_d0 != (long *)0x0) {
      (**(code **)(*local_d0 + 0x18))();
    }
  }
  else {
    puVar10 = &DAT_cbf29ce484222645;
    local_d8 = strlen((char *)pbVar7);
    bVar1 = *pbVar7;
    pbVar8 = pbVar7;
    while (bVar1 != 0) {
      pbVar8 = pbVar8 + 1;
      puVar10 = (undefined1 *)(((ulong)puVar10 ^ (ulong)bVar1) * 0x100000001b3);
      bVar1 = *pbVar8;
    }
    local_d0 = (long *)0x0;
    pbStack_e0 = pbVar7;
    local_e8 = puVar10;
    puVar2 = (undefined8 *)PTR_DAT_0437a0d8;
  }
  if (local_f0 != (long *)0x0) {
    (**(code **)(*local_f0 + 0x20))();
  }
  plVar6 = (long *)FUN_02b44670();
  local_128 = &DAT_462237f7b07aa897;
  pbStack_120 = &DAT_039a34c1;
  local_118 = 4;
  local_110 = (long *)0x0;
  pbVar7 = (byte *)(**(code **)(*plVar6 + 0x38))(plVar6,&local_128,2);
  if (pbVar7 == (byte *)0x0) {
    if (((*puVar3 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar4 != 0)) {
      FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437a0d0);
    }
    local_108 = (undefined1 *)*puVar2;
    pbStack_100 = (byte *)puVar2[1];
    local_f8 = puVar2[2];
    local_f0 = (long *)puVar2[3];
    if (local_f0 != (long *)0x0) {
      (**(code **)(*local_f0 + 0x18))();
    }
  }
  else {
    puVar10 = &DAT_cbf29ce484222645;
    local_f8 = strlen((char *)pbVar7);
    bVar1 = *pbVar7;
    pbVar8 = pbVar7;
    while (bVar1 != 0) {
      pbVar8 = pbVar8 + 1;
      puVar10 = (undefined1 *)(((ulong)puVar10 ^ (ulong)bVar1) * 0x100000001b3);
      bVar1 = *pbVar8;
    }
    local_f0 = (long *)0x0;
    pbStack_100 = pbVar7;
    local_108 = puVar10;
    puVar2 = (undefined8 *)PTR_DAT_0437a0d8;
  }
  if (local_110 != (long *)0x0) {
    (**(code **)(*local_110 + 0x20))();
  }
  plVar6 = (long *)FUN_02b44670();
  local_148 = &DAT_462237f7b07aa897;
  pbStack_140 = &DAT_039a34c1;
  local_138 = 4;
  local_130 = (long *)0x0;
  pbVar7 = (byte *)(**(code **)(*plVar6 + 0x38))(plVar6,&local_148,3);
  if (pbVar7 == (byte *)0x0) {
    if (((*puVar3 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar4 != 0)) {
      FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437a0d0);
    }
    local_128 = (undefined1 *)*puVar2;
    pbStack_120 = (byte *)puVar2[1];
    local_118 = puVar2[2];
    local_110 = (long *)puVar2[3];
    if (local_110 != (long *)0x0) {
      (**(code **)(*local_110 + 0x18))();
    }
  }
  else {
    puVar10 = &DAT_cbf29ce484222645;
    local_118 = strlen((char *)pbVar7);
    bVar1 = *pbVar7;
    pbVar8 = pbVar7;
    while (bVar1 != 0) {
      pbVar8 = pbVar8 + 1;
      puVar10 = (undefined1 *)(((ulong)puVar10 ^ (ulong)bVar1) * 0x100000001b3);
      bVar1 = *pbVar8;
    }
    local_110 = (long *)0x0;
    pbStack_120 = pbVar7;
    local_128 = puVar10;
    puVar2 = (undefined8 *)PTR_DAT_0437a0d8;
  }
  if (local_130 != (long *)0x0) {
    (**(code **)(*local_130 + 0x20))();
  }
  plVar6 = (long *)FUN_02b44670();
  local_168 = &DAT_462237f7b07aa897;
  pbStack_160 = &DAT_039a34c1;
  local_158 = 4;
  local_150 = (long *)0x0;
  pbVar7 = (byte *)(**(code **)(*plVar6 + 0x38))(plVar6,&local_168,4);
  if (pbVar7 == (byte *)0x0) {
    if (((*puVar3 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar4 != 0)) {
      FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437a0d0);
    }
    local_148 = (undefined1 *)*puVar2;
    pbStack_140 = (byte *)puVar2[1];
    local_138 = puVar2[2];
    local_130 = (long *)puVar2[3];
    if (local_130 != (long *)0x0) {
      (**(code **)(*local_130 + 0x18))();
    }
  }
  else {
    puVar10 = &DAT_cbf29ce484222645;
    local_138 = strlen((char *)pbVar7);
    bVar1 = *pbVar7;
    pbVar8 = pbVar7;
    while (bVar1 != 0) {
      pbVar8 = pbVar8 + 1;
      puVar10 = (undefined1 *)(((ulong)puVar10 ^ (ulong)bVar1) * 0x100000001b3);
      bVar1 = *pbVar8;
    }
    local_130 = (long *)0x0;
    pbStack_140 = pbVar7;
    local_148 = puVar10;
    puVar2 = (undefined8 *)PTR_DAT_0437a0d8;
  }
  if (local_150 != (long *)0x0) {
    (**(code **)(*local_150 + 0x20))();
  }
  plVar6 = (long *)FUN_02b44670();
  local_188 = &DAT_462237f7b07aa897;
  puStack_180 = &DAT_039a34c1;
  local_178 = 4;
  local_170 = (long *)0x0;
  pbVar7 = (byte *)(**(code **)(*plVar6 + 0x38))(plVar6,&local_188,5);
  if (pbVar7 == (byte *)0x0) {
    if (((*puVar3 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar4 != 0)) {
      FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437a0d0);
    }
    local_168 = (undefined1 *)*puVar2;
    pbStack_160 = (byte *)puVar2[1];
    local_158 = puVar2[2];
    local_150 = (long *)puVar2[3];
    if (local_150 != (long *)0x0) {
      (**(code **)(*local_150 + 0x18))();
    }
  }
  else {
    puVar10 = &DAT_cbf29ce484222645;
    local_158 = strlen((char *)pbVar7);
    bVar1 = *pbVar7;
    pbVar8 = pbVar7;
    while (bVar1 != 0) {
      pbVar8 = pbVar8 + 1;
      puVar10 = (undefined1 *)(((ulong)puVar10 ^ (ulong)bVar1) * 0x100000001b3);
      bVar1 = *pbVar8;
    }
    local_150 = (long *)0x0;
    pbStack_160 = pbVar7;
    local_168 = puVar10;
  }
  if (local_170 != (long *)0x0) {
    (**(code **)(*local_170 + 0x20))();
  }
  FUN_02c95f80(uVar5,&local_c8,1);
  FUN_02c95f80(uVar5,&local_e8,2);
  FUN_02c95f80(uVar5,&local_108,4);
  FUN_02c95f80(uVar5,&local_128,8);
  FUN_02c95f80(uVar5,&local_148,0x10);
  FUN_02c95f80(uVar5,&local_168,0x20);
  FUN_00dc3e98();
  FUN_028503f8();
  if (local_150 != (long *)0x0) {
    (**(code **)(*local_150 + 0x20))();
  }
  if (local_130 != (long *)0x0) {
    (**(code **)(*local_130 + 0x20))();
  }
  if (local_110 != (long *)0x0) {
    (**(code **)(*local_110 + 0x20))();
  }
  if (local_f0 != (long *)0x0) {
    (**(code **)(*local_f0 + 0x20))();
  }
  if (local_d0 != (long *)0x0) {
    (**(code **)(*local_d0 + 0x20))();
  }
  if (local_b0 != (long *)0x0) {
    (**(code **)(*local_b0 + 0x20))();
  }
  return;
}


