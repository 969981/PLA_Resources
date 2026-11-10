/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0305e8ec; name: FUN_0305e8ec
 */


void FUN_0305e8ec(long param_1,long param_2,long param_3,undefined8 param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  uint uVar17;
  uint uVar18;
  ulong uVar19;
  undefined8 uVar20;
  ulong local_a0;
  ulong local_90;
  int local_88;
  uint local_84;
  ulong local_80;
  undefined *local_78;
  uint *local_70;
  int *local_68;
  
  lVar11 = *(long *)(param_3 + 8);
  *(undefined8 *)(param_1 + 0x2a40) = *(undefined8 *)(lVar11 + 0x4b0);
  *(undefined8 *)(param_1 + 0x2a90) = **(undefined8 **)(param_3 + 0x4e0);
  *(long *)(param_1 + 0x2a98) = param_2;
  *(long *)(param_1 + 0x2a28) = lVar11 + 0x530;
  if (*(char *)(*(long *)(lVar11 + 0x500) + 0xaa0) == '\0') {
    lVar5 = 0;
  }
  else {
    lVar5 = *(long *)(lVar11 + 0x500) + 0xab0;
  }
  *(long *)(param_1 + 0x2a20) = lVar5;
  *(undefined8 *)(param_1 + 0x2a30) = *(undefined8 *)(lVar11 + 0x38);
  *(undefined8 *)(param_1 + 0x2a38) = *(undefined8 *)(lVar11 + 0x150);
  uVar17 = *(uint *)(param_1 + 0x2ab4);
  uVar14 = *(undefined8 *)(param_3 + 0x10);
  *(undefined8 *)(param_1 + 0x2a78) = *(undefined8 *)(param_3 + 0x18);
  *(undefined8 *)(param_1 + 0x2a70) = uVar14;
  uVar14 = *(undefined8 *)(param_3 + 0x20);
  *(undefined8 *)(param_1 + 0x2a88) = *(undefined8 *)(param_3 + 0x28);
  *(undefined8 *)(param_1 + 0x2a80) = uVar14;
  uVar14 = *(undefined8 *)(lVar11 + 0x4e0);
  *(undefined8 *)(param_1 + 0x2a58) = *(undefined8 *)(lVar11 + 0x4e8);
  *(undefined8 *)(param_1 + 0x2a50) = uVar14;
  uVar20 = *(undefined8 *)(lVar11 + 0x4f8);
  uVar14 = *(undefined8 *)(lVar11 + 0x4f0);
  *(undefined8 *)(param_1 + 0x2aa0) = param_4;
  uVar18 = uVar17 & 0x3fffffff;
  *(undefined8 *)(param_1 + 0x2a68) = uVar20;
  *(undefined8 *)(param_1 + 0x2a60) = uVar14;
  uVar1 = *(uint *)(param_2 + 8);
  if ((int)uVar18 < (int)uVar1) {
    lVar11 = *(long *)(param_1 + 0x2aa8);
    uVar2 = *(uint *)(param_1 + 0x2ab0);
    uVar19 = (ulong)uVar2;
    if (0x3fffffff < (int)uVar1) {
      FUN_032bd0a8(uVar1);
      uVar17 = *(uint *)(param_1 + 0x2ab4);
      uVar18 = uVar17 & 0x3fffffff;
    }
    puVar4 = PTR_PTR_0434a080;
    uVar8 = (uVar17 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar8) {
      uVar8 = 0x3fffffff;
    }
    local_84 = uVar1;
    if ((int)uVar1 <= (int)uVar8) {
      local_84 = uVar8;
    }
    local_90 = (ulong)local_84 * 0x610;
    if (((int)local_84 < (int)uVar18) || (0x3fffffff < (int)local_84)) {
      local_80 = 1;
      local_70 = &local_84;
      local_78 = &DAT_0411b3b8;
      FUN_03320b50(0x65816502,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                   ,0x5a,"Invalid requestedCapacity {}",&local_80);
      uVar17 = *(uint *)(param_1 + 0x2ab4);
      uVar18 = uVar17 & 0x3fffffff;
    }
    lVar5 = (**(code **)(*(long *)puVar4 + 0x10))(puVar4,local_90,&local_90);
    if (0 < (int)uVar2) {
      local_a0 = 0;
      do {
        puVar12 = (undefined8 *)(lVar5 + local_a0 * 0x610);
        puVar12[2] = puVar12 + 6;
        *puVar12 = 0;
        *(undefined4 *)(puVar12 + 3) = 0;
        *(undefined4 *)((long)puVar12 + 0x1c) = 0x80000018;
        uVar6 = FUN_0331fc10(PTR_DAT_04388850,"Not implemented");
        if ((uVar6 & 1) != 0) {
          CallSupervisor(0x26);
        }
        lVar13 = lVar5 + local_a0 * 0x610;
        *(undefined8 *)(lVar13 + 0x100) = 0;
        *(long *)(lVar13 + 0x110) = lVar13 + 0x130;
        *(undefined4 *)(lVar13 + 0x118) = 0;
        *(undefined4 *)(lVar13 + 0x11c) = 0x80000018;
        uVar6 = FUN_0331fc10(PTR_DAT_04388850,"Not implemented");
        if ((uVar6 & 1) != 0) {
          CallSupervisor(0x26);
        }
        lVar13 = lVar5 + local_a0 * 0x610;
        *(undefined8 *)(lVar13 + 0x200) = 0;
        *(long *)(lVar13 + 0x210) = lVar13 + 0x230;
        *(undefined4 *)(lVar13 + 0x218) = 0;
        *(undefined4 *)(lVar13 + 0x21c) = 0x80000018;
        uVar6 = FUN_0331fc10(PTR_DAT_04388850,"Not implemented");
        if ((uVar6 & 1) != 0) {
          CallSupervisor(0x26);
        }
        lVar13 = lVar5 + local_a0 * 0x610;
        *(undefined8 *)(lVar13 + 0x300) = 0;
        *(long *)(lVar13 + 0x310) = lVar13 + 0x330;
        *(undefined4 *)(lVar13 + 0x318) = 0;
        *(undefined4 *)(lVar13 + 0x31c) = 0x80000018;
        uVar6 = FUN_0331fc10(PTR_DAT_04388850,"Not implemented");
        if ((uVar6 & 1) != 0) {
          CallSupervisor(0x26);
        }
        lVar13 = lVar5 + local_a0 * 0x610;
        lVar15 = lVar11 + local_a0 * 0x610;
        uVar14 = *(undefined8 *)(lVar15 + 0x400);
        *(undefined8 *)(lVar13 + 0x406) = *(undefined8 *)(lVar15 + 0x406);
        *(undefined8 *)(lVar13 + 0x400) = uVar14;
        *(undefined8 *)(lVar13 + 0x410) = 0;
        *(undefined8 *)(lVar13 + 0x418) = 0x8000000000000000;
        iVar10 = *(int *)(lVar15 + 0x418);
        puVar12 = *(undefined8 **)(lVar15 + 0x410);
        local_88 = iVar10;
        if (iVar10 < 1) {
          *(long *)(lVar13 + 0x410) = 0;
          *(int *)(lVar13 + 0x418) = 0;
          *(int *)(lVar13 + 0x41c) = -0x80000000;
        }
        else {
          uVar6 = (ulong)iVar10;
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
            iVar3 = (int)local_80 / (int)local_84;
          }
          *(long *)(lVar13 + 0x410) = (long)puVar7;
          *(int *)(lVar13 + 0x418) = iVar10;
          *(int *)(lVar13 + 0x41c) = iVar3;
          *puVar7 = *puVar12;
          iVar10 = iVar10 + -1;
          if (iVar10 != 0) {
            do {
              puVar12 = puVar12 + 1;
              puVar7 = puVar7 + 1;
              iVar10 = iVar10 + -1;
              *puVar7 = *puVar12;
            } while (iVar10 != 0);
          }
        }
        lVar13 = lVar5 + local_a0 * 0x610;
        lVar15 = lVar11 + local_a0 * 0x610;
        memcpy((void *)(lVar13 + 0x420),(void *)(lVar15 + 0x420),0xd0);
        uVar14 = *(undefined8 *)(lVar15 + 0x4f0);
        *(undefined8 *)(lVar13 + 0x500) = 0;
        *(undefined8 *)(lVar13 + 0x4f0) = uVar14;
        *(long *)(lVar13 + 0x510) = lVar13 + 0x530;
        *(undefined4 *)(lVar13 + 0x518) = 0;
        *(undefined4 *)(lVar13 + 0x51c) = 0x80000018;
        uVar6 = FUN_0331fc10(&DAT_042b29a0,"Not implemented");
        if ((uVar6 & 1) != 0) {
          CallSupervisor(0x26);
        }
        lVar13 = local_a0 * 0x610;
        local_a0 = local_a0 + 1;
        *(undefined1 *)(lVar5 + lVar13 + 0x600) = *(undefined1 *)(lVar11 + lVar13 + 0x600);
      } while (local_a0 != uVar19);
      lVar13 = lVar11;
      do {
        FUN_03060368(lVar13);
        uVar19 = uVar19 - 1;
        lVar13 = lVar13 + 0x610;
      } while (uVar19 != 0);
    }
    if (-1 < (int)uVar17) {
      (**(code **)(*(long *)puVar4 + 0x18))(puVar4,lVar11,(ulong)uVar18 * 0x610);
    }
    if (local_90 < 0x183fffff9f0) {
      uVar9 = (undefined4)(local_90 / 0x610);
    }
    else {
      uVar9 = 0x3fffffff;
    }
    *(undefined4 *)(param_1 + 0x2ab4) = uVar9;
    *(long *)(param_1 + 0x2aa8) = lVar5;
  }
  iVar10 = *(int *)(param_1 + 0x2ab0);
  lVar5 = (long)iVar10;
  lVar11 = (long)(int)uVar1;
  if (iVar10 < (int)uVar1) {
    lVar13 = *(long *)(param_1 + 0x2aa8);
    puVar12 = (undefined8 *)(lVar13 + lVar5 * 0x610);
    *(uint *)(param_1 + 0x2ab0) = uVar1;
    do {
      *puVar12 = 0;
      puVar12[2] = puVar12 + 6;
      *(undefined4 *)(puVar12 + 3) = 0;
      *(undefined4 *)((long)puVar12 + 0x1c) = 0x80000018;
      puVar12[0x20] = 0;
      puVar12[0x22] = puVar12 + 0x26;
      *(undefined4 *)(puVar12 + 0x23) = 0;
      *(undefined4 *)((long)puVar12 + 0x11c) = 0x80000018;
      puVar12[0x40] = 0;
      puVar12[0x42] = puVar12 + 0x46;
      *(undefined4 *)(puVar12 + 0x43) = 0;
      *(undefined4 *)((long)puVar12 + 0x21c) = 0x80000018;
      puVar12[0x60] = 0;
      puVar12[0x62] = puVar12 + 0x66;
      *(undefined4 *)(puVar12 + 99) = 0;
      *(undefined4 *)((long)puVar12 + 0x31c) = 0x80000018;
      puVar12[0x80] = 0;
      puVar12[0x82] = puVar12 + 0x86;
      *(undefined4 *)(puVar12 + 0x83) = 0;
      *(undefined4 *)((long)puVar12 + 0x41c) = 0x80000018;
      puVar12[0xa0] = 0;
      puVar12[0xa2] = puVar12 + 0xa6;
      *(undefined4 *)(puVar12 + 0xa3) = 0;
      *(undefined4 *)((long)puVar12 + 0x51c) = 0x80000018;
      *(undefined1 *)(puVar12 + 0xc0) = 0;
      puVar12 = puVar12 + 0xc2;
    } while (puVar12 != (undefined8 *)(lVar13 + lVar11 * 0x610));
  }
  else if ((int)uVar1 < iVar10) {
    lVar15 = *(long *)(param_1 + 0x2aa8);
    lVar16 = lVar15 + lVar11 * 0x610;
    lVar13 = lVar15 + lVar5 * 0x610;
    *(uint *)(param_1 + 0x2ab0) = uVar1;
    FUN_03060368(lVar13 + -0x610);
    if ((((lVar13 + -0x610 != lVar16) && (FUN_03060368(lVar13 + -0xc20), lVar13 + -0xc20 != lVar16))
        && (FUN_03060368(lVar13 + -0x1230), lVar13 + -0x1230 != lVar16)) &&
       (FUN_03060368(lVar13 + -0x1840), lVar13 + -0x1840 != lVar16)) {
      lVar11 = lVar5 * -0x610 + lVar11 * 0x610 + 0x1840;
      lVar5 = lVar5 * 0x610 + lVar15 + -0x1e50;
      do {
        FUN_03060368(lVar5);
        lVar11 = lVar11 + 0x610;
        lVar5 = lVar5 + -0x610;
      } while (lVar11 != 0);
    }
  }
  FUN_0332bcc0(param_1 + 0x130,*(undefined4 *)(param_2 + 8),0,1);
  return;
}


