/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01e454d0; name: FUN_01e454d0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_01e454d0(undefined8 param_1,undefined8 *param_2,ulong param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined1 auStack_1c0 [48];
  ulong local_190;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined4 local_160;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 local_148;
  undefined1 local_144;
  undefined2 local_140;
  undefined4 local_13c;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined4 local_128;
  undefined4 local_120;
  undefined1 local_11c;
  undefined2 local_118;
  undefined4 local_114;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  ulong local_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined1 local_84;
  undefined2 local_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 local_60;
  undefined1 local_5c;
  undefined2 local_58;
  undefined4 local_54;
  undefined8 local_50;
  undefined8 uStack_48;
  
  if ((param_3 & 1) == 0) {
    uVar7 = FUN_01e45af0(param_2);
    if ((uVar7 & 1) == 0) {
      return 3;
    }
    return 0;
  }
  uVar7 = FUN_01e45ee0(param_2,PTR_DAT_04382320,0);
  if ((uVar7 & 1) != 0) {
    uStack_f8 = _UNK_03888db8;
    local_100 = _DAT_03888db0;
    uVar7 = FUN_01e45ee0(param_2,&local_100,0);
    if (((uVar7 & 1) != 0) && (uVar7 = FUN_01e45ee0(param_2,PTR_DAT_0437a0f8,0), (uVar7 & 1) != 0))
    {
      uStack_f8 = _UNK_03888d28;
      local_100 = _DAT_03888d20;
      uVar7 = FUN_01e45ee0(param_2,&local_100,0);
      if ((uVar7 & 1) != 0) goto LAB_01e45560;
    }
  }
  uVar7 = FUN_01e45ee0(param_2,PTR_DAT_04382320,1);
  if ((uVar7 & 1) != 0) {
    uStack_f8 = _UNK_03888db8;
    local_100 = _DAT_03888db0;
    uVar7 = FUN_01e45ee0(param_2,&local_100,1);
    if (((uVar7 & 1) != 0) && (uVar7 = FUN_01e45ee0(param_2,PTR_DAT_0437a0f8,1), (uVar7 & 1) != 0))
    {
      uStack_f8 = _UNK_03888d28;
      local_100 = _DAT_03888d20;
      uVar7 = FUN_01e45ee0(param_2,&local_100,1);
      if ((uVar7 & 1) != 0) goto LAB_01e45560;
    }
  }
  uVar7 = FUN_01e45ee0(param_2,PTR_DAT_04382320,2);
  if ((uVar7 & 1) != 0) {
    uStack_f8 = _UNK_03888db8;
    local_100 = _DAT_03888db0;
    uVar7 = FUN_01e45ee0(param_2,&local_100,2);
    if (((uVar7 & 1) != 0) && (uVar7 = FUN_01e45ee0(param_2,PTR_DAT_0437a0f8,2), (uVar7 & 1) != 0))
    {
      uStack_f8 = _UNK_03888d28;
      local_100 = _DAT_03888d20;
      uVar7 = FUN_01e45ee0(param_2,&local_100,2);
      if ((uVar7 & 1) != 0) goto LAB_01e45560;
    }
  }
  uVar7 = FUN_01e45ee0(param_2,PTR_DAT_04382320,3);
  if ((uVar7 & 1) != 0) {
    uStack_f8 = _UNK_03888db8;
    local_100 = _DAT_03888db0;
    uVar7 = FUN_01e45ee0(param_2,&local_100,3);
    if (((uVar7 & 1) != 0) && (uVar7 = FUN_01e45ee0(param_2,PTR_DAT_0437a0f8,3), (uVar7 & 1) != 0))
    {
      uStack_f8 = _UNK_03888d28;
      local_100 = _DAT_03888d20;
      uVar7 = FUN_01e45ee0(param_2,&local_100,3);
      if ((uVar7 & 1) != 0) goto LAB_01e45560;
    }
  }
  uVar7 = FUN_01e45ee0(param_2,PTR_DAT_04382320,0xffffffff);
  if ((uVar7 & 1) != 0) {
    uStack_f8 = _UNK_03888db8;
    local_100 = _DAT_03888db0;
    uVar7 = FUN_01e45ee0(param_2,&local_100,0xffffffff);
    if (((uVar7 & 1) != 0) &&
       (uVar7 = FUN_01e45ee0(param_2,PTR_DAT_0437a0f8,0xffffffff), (uVar7 & 1) != 0)) {
      uStack_f8 = _UNK_03888d28;
      local_100 = _DAT_03888d20;
      uVar7 = FUN_01e45ee0(param_2,&local_100,0xffffffff);
      if ((uVar7 & 1) != 0) goto LAB_01e45560;
    }
  }
  uVar7 = FUN_01e45ee0(param_2,PTR_DAT_04382320,0xfffffffe);
  if ((uVar7 & 1) != 0) {
    uStack_f8 = _UNK_03888db8;
    local_100 = _DAT_03888db0;
    uVar7 = FUN_01e45ee0(param_2,&local_100,0xfffffffe);
    if (((uVar7 & 1) != 0) &&
       (uVar7 = FUN_01e45ee0(param_2,PTR_DAT_0437a0f8,0xfffffffe), (uVar7 & 1) != 0)) {
      uStack_f8 = _UNK_03888d28;
      local_100 = _DAT_03888d20;
      uVar7 = FUN_01e45ee0(param_2,&local_100,0xfffffffe);
      if ((uVar7 & 1) != 0) goto LAB_01e45560;
    }
  }
  uVar7 = FUN_01e45ee0(param_2,PTR_DAT_04382320,0xfffffffd);
  if ((uVar7 & 1) == 0) {
    return 2;
  }
  uStack_f8 = _UNK_03888db8;
  local_100 = _DAT_03888db0;
  uVar7 = FUN_01e45ee0(param_2,&local_100,0xfffffffd);
  if ((uVar7 & 1) == 0) {
    return 2;
  }
  uVar7 = FUN_01e45ee0(param_2,PTR_DAT_0437a0f8,0xfffffffd);
  if ((uVar7 & 1) == 0) {
    return 2;
  }
  uStack_f8 = _UNK_03888d28;
  local_100 = _DAT_03888d20;
  uVar7 = FUN_01e45ee0(param_2,&local_100,0xfffffffd);
  if ((uVar7 & 1) == 0) {
    return 2;
  }
LAB_01e45560:
  puVar1 = PTR_DAT_0437a648;
  local_7c = 0;
  local_a0 = 0x7f7fffee;
  local_160 = 0x7f7fffee;
  local_d0 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_98 = 0xffffffffffffffff;
  local_88 = 0xffffffff;
  local_90 = 0xffffff;
  local_84 = 0xf;
  local_80 = 0xffff;
  local_60 = 0xffffffff;
  local_68 = 0xffffff;
  local_5c = 0xf;
  local_58 = 0xffff;
  local_54 = 0;
  local_190 = 0;
  local_158 = 0xffffffffffffffff;
  local_148 = 0xffffffff;
  local_150 = 0xffffff;
  local_144 = 0xf;
  local_140 = 0xffff;
  local_13c = 0;
  local_120 = 0xffffffff;
  local_128 = 0xffffff;
  local_11c = 0xf;
  local_118 = 0xffff;
  local_114 = 0;
  local_78 = 0;
  uStack_70 = 0xffffffffffffffff;
  local_50 = 0;
  uStack_48 = 0;
  local_180 = 0;
  uStack_178 = 0;
  local_170 = 0;
  uStack_168 = 0;
  local_138 = 0;
  uStack_130 = 0xffffffffffffffff;
  local_110 = 0;
  uStack_108 = 0;
  fVar12 = (float)*param_2;
  fVar13 = (float)((ulong)*param_2 >> 0x20);
  uStack_1d0 = CONCAT44(fVar13 + (float)((ulong)_DAT_03889de0 >> 0x20),fVar12 + (float)_DAT_03889de0
                       );
  fVar14 = (float)param_2[1];
  fVar15 = (float)((ulong)param_2[1] >> 0x20);
  uStack_1c8 = CONCAT44(fVar15 + (float)((ulong)_UNK_03889de8 >> 0x20),fVar14 + (float)_UNK_03889de8
                       );
  local_1e0 = CONCAT44(fVar13 + (float)((ulong)_DAT_03889690 >> 0x20),fVar12 + (float)_DAT_03889690)
  ;
  uStack_1d8 = CONCAT44(fVar15 + (float)((ulong)_UNK_03889698 >> 0x20),fVar14 + (float)_UNK_03889698
                       );
  if (((*PTR_DAT_0437a648 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_0437a648), iVar6 != 0))
  {
    FUN_00100250(PTR_LAB_0437b598,PTR_DAT_0437a650,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a648);
  }
  puVar3 = PTR_DAT_0437a658;
  puVar2 = PTR_DAT_0437a650;
  lVar9 = *(long *)PTR_DAT_0437a650;
  *(long *)PTR_DAT_0437a658 = lVar9;
  uVar4 = FUN_02bf3d70(*(undefined8 *)(lVar9 + 0x230),&uStack_1d0,&local_1e0,0x2000,&local_100,1);
  if (((*puVar1 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_0437a648), iVar6 != 0)) {
    FUN_00100250(PTR_LAB_0437b598,PTR_DAT_0437a650,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a648);
  }
  lVar9 = *(long *)puVar2;
  *(long *)puVar3 = lVar9;
  uVar5 = FUN_02bf3d70(*(undefined8 *)(lVar9 + 0x230),&uStack_1d0,&local_1e0,0x24000,auStack_1c0,1);
  uVar7 = local_190;
  if ((local_190 & 1) != 0) {
    lVar9 = tpidr_el0;
    lVar10 = *(long *)(lVar9 + 0x38d490);
    if (lVar10 == 0) {
      lVar10 = FUN_0333d16c(0,1);
      *(long *)(lVar9 + 0x38d490) = lVar10;
    }
    plVar8 = *(long **)(*(long *)(lVar10 + 8) + 0x58);
    puVar11 = (undefined8 *)(uVar7 - 0x11);
    *puVar11 = 0;
    (**(code **)(*plVar8 + 0x18))(plVar8,puVar11,(long)*(int *)(uVar7 - 9) + 0x10);
  }
  uVar7 = local_d0;
  if ((local_d0 & 1) != 0) {
    lVar9 = tpidr_el0;
    lVar10 = *(long *)(lVar9 + 0x38d490);
    if (lVar10 == 0) {
      lVar10 = FUN_0333d16c(0,1);
      *(long *)(lVar9 + 0x38d490) = lVar10;
    }
    plVar8 = *(long **)(*(long *)(lVar10 + 8) + 0x58);
    puVar11 = (undefined8 *)(uVar7 - 0x11);
    *puVar11 = 0;
    (**(code **)(*plVar8 + 0x18))(plVar8,puVar11,(long)*(int *)(uVar7 - 9) + 0x10);
  }
  if (((uVar4 | uVar5) & 1) == 0) {
    return 1;
  }
  return 0;
}


