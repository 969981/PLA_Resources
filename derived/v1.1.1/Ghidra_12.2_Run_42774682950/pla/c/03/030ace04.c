/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030ace04; name: FUN_030ace04
 */


long FUN_030ace04(long *param_1,uint param_2,long param_3,uint param_4,uint *param_5)

{
  long lVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  uint uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  uint uVar14;
  ulong local_90;
  int local_88;
  int local_84;
  ulong local_80;
  undefined *local_78;
  int *local_70;
  int *local_68;
  
  uVar12 = (ulong)param_4;
  uVar11 = (ulong)param_2;
  if (0x3fffffff < (int)param_2) {
    FUN_032bd0a8(uVar11);
  }
  uVar14 = *param_5;
  uVar8 = (uVar14 & 0x3fffffff) * 2;
  if (uVar8 < 0x3fffffff) {
    if ((int)uVar8 < (int)param_2) goto LAB_030ace60;
  }
  else {
    uVar8 = 0x3fffffff;
    if (0x3fffffff < (int)param_2) goto LAB_030ace60;
  }
  uVar11 = (ulong)uVar8;
LAB_030ace60:
  local_90 = uVar11 * 0x500;
  uVar8 = uVar14 & 0x3fffffff;
  local_84 = (int)uVar11;
  if ((local_84 < (int)uVar8) || (0x3fffffff < local_84)) {
    local_80 = 1;
    local_70 = &local_84;
    local_78 = &DAT_0411b3b8;
    FUN_03320b50(0x65816502,
                 "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                 ,0x5a,"Invalid requestedCapacity {}",&local_80);
    uVar14 = *param_5;
    uVar8 = uVar14 & 0x3fffffff;
  }
  lVar5 = (**(code **)(*param_1 + 0x10))(param_1,local_90,&local_90);
  puVar4 = PTR_PTR_0434a080;
  if (0 < (int)param_4) {
    uVar11 = 0;
    do {
      puVar9 = (undefined8 *)(lVar5 + uVar11 * 0x500);
      puVar9[2] = puVar9 + 6;
      *puVar9 = 0;
      puVar9[3] = 0x8000001800000000;
      uVar6 = FUN_0331fc10(&DAT_042b4520,"Not implemented");
      if ((uVar6 & 1) != 0) {
        CallSupervisor(0x26);
      }
      lVar13 = param_3 + uVar11 * 0x500;
      lVar1 = lVar5 + uVar11 * 0x500;
      uVar10 = *(undefined8 *)(lVar13 + 0x100);
      *(undefined8 *)(lVar1 + 0x106) = *(undefined8 *)(lVar13 + 0x106);
      *(undefined8 *)(lVar1 + 0x100) = uVar10;
      *(undefined8 *)(lVar1 + 0x110) = 0;
      *(undefined8 *)(lVar1 + 0x118) = 0x8000000000000000;
      iVar2 = *(int *)(lVar13 + 0x118);
      puVar9 = *(undefined8 **)(lVar13 + 0x110);
      local_88 = iVar2;
      if (iVar2 < 1) {
        *(long *)(lVar1 + 0x110) = 0;
        *(int *)(lVar1 + 0x118) = 0;
        *(int *)(lVar1 + 0x11c) = -0x80000000;
      }
      else {
        uVar6 = (ulong)iVar2;
        local_84 = 8;
        if ((uVar6 & 0x1ffffffff0000000) != 0) {
          local_78 = &DAT_0411b3a0;
          local_80 = 2;
          local_68 = &local_88;
          local_70 = &local_84;
          FUN_03320b50(0xc69ddef,
                       "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Memory/Allocator/hkMemoryAllocator.cpp"
                       ,0x30,"Memory allocation request overflow {}*{}",&local_80);
        }
        local_80 = -(uVar6 >> 0x1c & 1) & 0xffffffff00000000 | (uVar6 & 0x1fffffff) << 3;
        puVar7 = (undefined8 *)(**(code **)(*(long *)puVar4 + 0x10))(puVar4,local_80,&local_80);
        iVar3 = 0;
        if (local_84 != 0) {
          iVar3 = (int)local_80 / local_84;
        }
        *(long *)(lVar1 + 0x110) = (long)puVar7;
        *(int *)(lVar1 + 0x118) = iVar2;
        *(int *)(lVar1 + 0x11c) = iVar3;
        *puVar7 = *puVar9;
        while (iVar2 = iVar2 + -1, iVar2 != 0) {
          puVar9 = puVar9 + 1;
          puVar7 = puVar7 + 1;
          *puVar7 = *puVar9;
        }
      }
      memcpy((void *)(lVar1 + 0x120),(void *)(lVar13 + 0x120),0xd0);
      *(undefined8 *)(lVar1 + 0x1f0) = *(undefined8 *)(lVar13 + 0x1f0);
      uVar10 = *(undefined8 *)(lVar13 + 0x200);
      *(undefined8 *)(lVar1 + 0x206) = *(undefined8 *)(lVar13 + 0x206);
      *(undefined8 *)(lVar1 + 0x200) = uVar10;
      *(undefined8 *)(lVar1 + 0x210) = 0;
      *(undefined8 *)(lVar1 + 0x218) = 0x8000000000000000;
      iVar2 = *(int *)(lVar13 + 0x218);
      puVar9 = *(undefined8 **)(lVar13 + 0x210);
      local_88 = iVar2;
      if (iVar2 < 1) {
        *(long *)(lVar1 + 0x210) = 0;
        *(int *)(lVar1 + 0x218) = 0;
        *(int *)(lVar1 + 0x21c) = -0x80000000;
      }
      else {
        uVar6 = (ulong)iVar2;
        local_84 = 8;
        if ((uVar6 & 0x1ffffffff0000000) != 0) {
          local_78 = &DAT_0411b3a0;
          local_80 = 2;
          local_68 = &local_88;
          local_70 = &local_84;
          FUN_03320b50(0xc69ddef,
                       "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Memory/Allocator/hkMemoryAllocator.cpp"
                       ,0x30,"Memory allocation request overflow {}*{}",&local_80);
        }
        local_80 = -(uVar6 >> 0x1c & 1) & 0xffffffff00000000 | (uVar6 & 0x1fffffff) << 3;
        puVar7 = (undefined8 *)(**(code **)(*(long *)puVar4 + 0x10))(puVar4,local_80,&local_80);
        iVar3 = 0;
        if (local_84 != 0) {
          iVar3 = (int)local_80 / local_84;
        }
        *(long *)(lVar1 + 0x210) = (long)puVar7;
        *(int *)(lVar1 + 0x218) = iVar2;
        *(int *)(lVar1 + 0x21c) = iVar3;
        *puVar7 = *puVar9;
        while (iVar2 = iVar2 + -1, iVar2 != 0) {
          puVar9 = puVar9 + 1;
          puVar7 = puVar7 + 1;
          *puVar7 = *puVar9;
        }
      }
      memcpy((void *)(lVar1 + 0x220),(void *)(lVar13 + 0x220),0xd0);
      *(undefined8 *)(lVar1 + 0x2f0) = *(undefined8 *)(lVar13 + 0x2f0);
      uVar10 = *(undefined8 *)(lVar13 + 0x300);
      *(undefined8 *)(lVar1 + 0x306) = *(undefined8 *)(lVar13 + 0x306);
      *(undefined8 *)(lVar1 + 0x300) = uVar10;
      *(undefined8 *)(lVar1 + 0x310) = 0;
      *(undefined8 *)(lVar1 + 0x318) = 0x8000000000000000;
      iVar2 = *(int *)(lVar13 + 0x318);
      puVar9 = *(undefined8 **)(lVar13 + 0x310);
      local_88 = iVar2;
      if (iVar2 < 1) {
        *(long *)(lVar1 + 0x310) = 0;
        *(int *)(lVar1 + 0x318) = 0;
        *(int *)(lVar1 + 0x31c) = -0x80000000;
      }
      else {
        uVar6 = (ulong)iVar2;
        local_84 = 8;
        if ((uVar6 & 0x1ffffffff0000000) != 0) {
          local_78 = &DAT_0411b3a0;
          local_80 = 2;
          local_68 = &local_88;
          local_70 = &local_84;
          FUN_03320b50(0xc69ddef,
                       "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Memory/Allocator/hkMemoryAllocator.cpp"
                       ,0x30,"Memory allocation request overflow {}*{}",&local_80);
        }
        local_80 = -(uVar6 >> 0x1c & 1) & 0xffffffff00000000 | (uVar6 & 0x1fffffff) << 3;
        puVar7 = (undefined8 *)(**(code **)(*(long *)puVar4 + 0x10))(puVar4,local_80,&local_80);
        iVar3 = 0;
        if (local_84 != 0) {
          iVar3 = (int)local_80 / local_84;
        }
        *(long *)(lVar1 + 0x310) = (long)puVar7;
        *(int *)(lVar1 + 0x318) = iVar2;
        *(int *)(lVar1 + 0x31c) = iVar3;
        *puVar7 = *puVar9;
        while (iVar2 = iVar2 + -1, iVar2 != 0) {
          puVar9 = puVar9 + 1;
          puVar7 = puVar7 + 1;
          *puVar7 = *puVar9;
        }
      }
      memcpy((void *)(lVar1 + 800),(void *)(lVar13 + 800),0xd0);
      *(undefined8 *)(lVar1 + 0x3f0) = *(undefined8 *)(lVar13 + 0x3f0);
      uVar10 = *(undefined8 *)(lVar13 + 0x400);
      *(undefined8 *)(lVar1 + 0x406) = *(undefined8 *)(lVar13 + 0x406);
      *(undefined8 *)(lVar1 + 0x400) = uVar10;
      *(undefined8 *)(lVar1 + 0x410) = 0;
      *(undefined8 *)(lVar1 + 0x418) = 0x8000000000000000;
      iVar2 = *(int *)(lVar13 + 0x418);
      puVar9 = *(undefined8 **)(lVar13 + 0x410);
      local_88 = iVar2;
      if (iVar2 < 1) {
        *(long *)(lVar1 + 0x410) = 0;
        *(int *)(lVar1 + 0x418) = 0;
        *(int *)(lVar1 + 0x41c) = -0x80000000;
      }
      else {
        uVar6 = (ulong)iVar2;
        local_84 = 8;
        if ((uVar6 & 0x1ffffffff0000000) != 0) {
          local_78 = &DAT_0411b3a0;
          local_80 = 2;
          local_68 = &local_88;
          local_70 = &local_84;
          FUN_03320b50(0xc69ddef,
                       "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Memory/Allocator/hkMemoryAllocator.cpp"
                       ,0x30,"Memory allocation request overflow {}*{}",&local_80);
        }
        local_80 = -(uVar6 >> 0x1c & 1) & 0xffffffff00000000 | (uVar6 & 0x1fffffff) << 3;
        puVar7 = (undefined8 *)(**(code **)(*(long *)puVar4 + 0x10))(puVar4,local_80,&local_80);
        iVar3 = 0;
        if (local_84 != 0) {
          iVar3 = (int)local_80 / local_84;
        }
        *(long *)(lVar1 + 0x410) = (long)puVar7;
        *(int *)(lVar1 + 0x418) = iVar2;
        *(int *)(lVar1 + 0x41c) = iVar3;
        *puVar7 = *puVar9;
        while (iVar2 = iVar2 + -1, iVar2 != 0) {
          puVar9 = puVar9 + 1;
          puVar7 = puVar7 + 1;
          *puVar7 = *puVar9;
        }
      }
      memcpy((void *)(lVar1 + 0x420),(void *)(lVar13 + 0x420),0xd0);
      *(undefined8 *)(lVar1 + 0x4f0) = *(undefined8 *)(lVar13 + 0x4f0);
      uVar11 = uVar11 + 1;
    } while (uVar11 != uVar12);
    lVar13 = param_3;
    do {
      FUN_030ac8e0(lVar13);
      uVar12 = uVar12 - 1;
      lVar13 = lVar13 + 0x500;
    } while (uVar12 != 0);
  }
  if (-1 < (int)uVar14) {
    (**(code **)(*param_1 + 0x18))(param_1,param_3,(ulong)uVar8 * 0x500);
  }
  if (local_90 < 0x13ffffffb00) {
    uVar14 = (uint)(local_90 / 0x500);
  }
  else {
    uVar14 = 0x3fffffff;
  }
  *param_5 = uVar14;
  return lVar5;
}


