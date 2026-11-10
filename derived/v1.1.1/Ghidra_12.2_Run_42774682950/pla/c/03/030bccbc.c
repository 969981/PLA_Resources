/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030bccbc; name: FUN_030bccbc
 */


void FUN_030bccbc(long param_1,undefined8 *param_2,long param_3,undefined8 param_4,
                 undefined8 *param_5)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  uint uVar9;
  undefined4 uVar10;
  int iVar11;
  long lVar12;
  undefined8 *puVar13;
  int iVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  int iVar17;
  long lVar18;
  int iVar19;
  int iVar20;
  undefined8 uVar21;
  uint uVar22;
  uint uVar23;
  long lVar24;
  ulong uVar25;
  long lVar26;
  ulong local_b0;
  ulong local_98;
  int local_8c;
  ulong local_88;
  undefined *local_80;
  uint *local_78;
  int *local_70;
  uint local_64;
  
  lVar12 = *(long *)(*(long *)(param_3 + 8) + 0x4a8);
  *(undefined8 *)(param_1 + 0xd8) = param_4;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined1 *)(param_1 + 0xe0) = 0;
  *(bool *)(param_1 + 0xe1) = *(int *)(lVar12 + 0x1c) == 2;
  lVar12 = *(long *)(param_3 + 8);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(lVar12 + 0x4b0);
  *(undefined8 *)(param_1 + 0xa0) = **(undefined8 **)(param_3 + 0x4e0);
  *(undefined8 **)(param_1 + 0xa8) = param_2;
  *(long *)(param_1 + 0x38) = lVar12 + 0x530;
  if (*(char *)(*(long *)(lVar12 + 0x500) + 0xaa0) == '\0') {
    lVar6 = 0;
  }
  else {
    lVar6 = *(long *)(lVar12 + 0x500) + 0xab0;
  }
  *(long *)(param_1 + 0x30) = lVar6;
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(lVar12 + 0x38);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(lVar12 + 0x150);
  uVar22 = *(uint *)(param_1 + 0xd4);
  uVar21 = *(undefined8 *)(param_3 + 0x18);
  uVar23 = uVar22 & 0x3fffffff;
  *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_3 + 0x10);
  *(undefined8 *)(param_1 + 0x88) = uVar21;
  uVar21 = *(undefined8 *)(param_3 + 0x28);
  *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_3 + 0x20);
  *(undefined8 *)(param_1 + 0x98) = uVar21;
  uVar21 = *(undefined8 *)(lVar12 + 0x4e0);
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(lVar12 + 0x4e8);
  *(undefined8 *)(param_1 + 0x60) = uVar21;
  uVar21 = *(undefined8 *)(lVar12 + 0x4f0);
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(lVar12 + 0x4f8);
  *(undefined8 *)(param_1 + 0x70) = uVar21;
  uVar3 = *(uint *)(param_2 + 1);
  if ((int)uVar23 < (int)uVar3) {
    lVar12 = *(long *)(param_1 + 200);
    uVar4 = *(uint *)(param_1 + 0xd0);
    uVar25 = (ulong)uVar4;
    if (0x3fffffff < (int)uVar3) {
      FUN_032bd0a8(uVar3);
      uVar22 = *(uint *)(param_1 + 0xd4);
      uVar23 = uVar22 & 0x3fffffff;
    }
    puVar5 = PTR_PTR_0434a080;
    uVar9 = (uVar22 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar9) {
      uVar9 = 0x3fffffff;
    }
    local_64 = uVar3;
    if ((int)uVar3 <= (int)uVar9) {
      local_64 = uVar9;
    }
    local_98 = (ulong)local_64 * 0x710;
    if (((int)local_64 < (int)uVar23) || (0x3fffffff < (int)local_64)) {
      local_88 = 1;
      local_80 = &DAT_0411b3b8;
      local_78 = &local_64;
      FUN_03320b50(0x65816502,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                   ,0x5a,"Invalid requestedCapacity {}",&local_88);
      uVar22 = *(uint *)(param_1 + 0xd4);
      uVar23 = uVar22 & 0x3fffffff;
    }
    lVar6 = (**(code **)(*(long *)puVar5 + 0x10))(puVar5,local_98,&local_98);
    if (0 < (int)uVar4) {
      local_b0 = 0;
      do {
        puVar15 = (undefined8 *)(lVar6 + local_b0 * 0x710);
        puVar15[2] = puVar15 + 6;
        *puVar15 = 0;
        *(undefined4 *)(puVar15 + 3) = 0;
        *(undefined4 *)((long)puVar15 + 0x1c) = 0x80000018;
        uVar8 = FUN_0331fc10(PTR_DAT_04388850,"Not implemented");
        if ((uVar8 & 1) != 0) {
          CallSupervisor(0x26);
        }
        lVar18 = lVar6 + local_b0 * 0x710;
        *(undefined8 *)(lVar18 + 0x100) = 0;
        *(long *)(lVar18 + 0x110) = lVar18 + 0x130;
        *(undefined4 *)(lVar18 + 0x118) = 0;
        *(undefined4 *)(lVar18 + 0x11c) = 0x80000018;
        uVar8 = FUN_0331fc10(PTR_DAT_04388850,"Not implemented");
        if ((uVar8 & 1) != 0) {
          CallSupervisor(0x26);
        }
        lVar18 = lVar6 + local_b0 * 0x710;
        *(undefined8 *)(lVar18 + 0x200) = 0;
        *(long *)(lVar18 + 0x210) = lVar18 + 0x230;
        *(undefined4 *)(lVar18 + 0x218) = 0;
        *(undefined4 *)(lVar18 + 0x21c) = 0x80000018;
        uVar8 = FUN_0331fc10(PTR_DAT_04388850,"Not implemented");
        if ((uVar8 & 1) != 0) {
          CallSupervisor(0x26);
        }
        lVar18 = lVar6 + local_b0 * 0x710;
        *(undefined8 *)(lVar18 + 0x300) = 0;
        *(long *)(lVar18 + 0x310) = lVar18 + 0x330;
        *(undefined4 *)(lVar18 + 0x318) = 0;
        *(undefined4 *)(lVar18 + 0x31c) = 0x80000018;
        uVar8 = FUN_0331fc10(PTR_DAT_04388850,"Not implemented");
        if ((uVar8 & 1) != 0) {
          CallSupervisor(0x26);
        }
        lVar18 = lVar6 + local_b0 * 0x710;
        *(undefined8 *)(lVar18 + 0x400) = 0;
        *(long *)(lVar18 + 0x410) = lVar18 + 0x430;
        *(undefined4 *)(lVar18 + 0x418) = 0;
        *(undefined4 *)(lVar18 + 0x41c) = 0x80000018;
        uVar8 = FUN_0331fc10(&DAT_042b46e0,"Not implemented");
        if ((uVar8 & 1) != 0) {
          CallSupervisor(0x26);
        }
        lVar18 = lVar6 + local_b0 * 0x710;
        lVar24 = lVar12 + local_b0 * 0x710;
        uVar21 = *(undefined8 *)(lVar24 + 0x500);
        *(undefined8 *)(lVar18 + 0x506) = *(undefined8 *)(lVar24 + 0x506);
        *(undefined8 *)(lVar18 + 0x500) = uVar21;
        *(undefined8 *)(lVar18 + 0x510) = 0;
        *(undefined8 *)(lVar18 + 0x518) = 0x8000000000000000;
        iVar17 = *(int *)(lVar24 + 0x518);
        puVar15 = *(undefined8 **)(lVar24 + 0x510);
        local_8c = iVar17;
        if (iVar17 < 1) {
          *(long *)(lVar18 + 0x510) = 0;
          *(int *)(lVar18 + 0x518) = 0;
          *(int *)(lVar18 + 0x51c) = -0x80000000;
        }
        else {
          uVar8 = (ulong)iVar17;
          local_64 = 8;
          if ((uVar8 & 0x1ffffffff0000000) != 0) {
            local_80 = &DAT_0411b3a0;
            local_88 = 2;
            local_70 = &local_8c;
            local_78 = &local_64;
            FUN_03320b50(0xc69ddef,
                         "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Memory/Allocator/hkMemoryAllocator.cpp"
                         ,0x30,"Memory allocation request overflow {}*{}",&local_88);
          }
          local_88 = -(uVar8 >> 0x1c & 1) & 0xffffffff00000000 | (uVar8 & 0x1fffffff) << 3;
          puVar7 = (undefined8 *)(**(code **)(*(long *)puVar5 + 0x10))(puVar5,local_88,&local_88);
          iVar11 = 0;
          if (local_64 != 0) {
            iVar11 = (int)local_88 / (int)local_64;
          }
          *(long *)(lVar18 + 0x510) = (long)puVar7;
          *(int *)(lVar18 + 0x518) = iVar17;
          *(int *)(lVar18 + 0x51c) = iVar11;
          *puVar7 = *puVar15;
          iVar17 = iVar17 + -1;
          if (iVar17 != 0) {
            do {
              puVar15 = puVar15 + 1;
              puVar7 = puVar7 + 1;
              iVar17 = iVar17 + -1;
              *puVar7 = *puVar15;
            } while (iVar17 != 0);
          }
        }
        lVar18 = lVar6 + local_b0 * 0x710;
        lVar24 = lVar12 + local_b0 * 0x710;
        memcpy((void *)(lVar18 + 0x520),(void *)(lVar24 + 0x520),0xd0);
        *(undefined8 *)(lVar18 + 0x5f0) = *(undefined8 *)(lVar24 + 0x5f0);
        uVar21 = *(undefined8 *)(lVar24 + 0x600);
        *(undefined8 *)(lVar18 + 0x606) = *(undefined8 *)(lVar24 + 0x606);
        *(undefined8 *)(lVar18 + 0x600) = uVar21;
        *(undefined8 *)(lVar18 + 0x610) = 0;
        *(undefined8 *)(lVar18 + 0x618) = 0x8000000000000000;
        iVar17 = *(int *)(lVar24 + 0x618);
        puVar15 = *(undefined8 **)(lVar24 + 0x610);
        local_8c = iVar17;
        if (iVar17 < 1) {
          *(long *)(lVar18 + 0x610) = 0;
          *(int *)(lVar18 + 0x618) = 0;
          *(int *)(lVar18 + 0x61c) = -0x80000000;
        }
        else {
          uVar8 = (ulong)iVar17;
          local_64 = 8;
          if ((uVar8 & 0x1ffffffff0000000) != 0) {
            local_80 = &DAT_0411b3a0;
            local_88 = 2;
            local_70 = &local_8c;
            local_78 = &local_64;
            FUN_03320b50(0xc69ddef,
                         "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Memory/Allocator/hkMemoryAllocator.cpp"
                         ,0x30,"Memory allocation request overflow {}*{}",&local_88);
          }
          local_88 = -(uVar8 >> 0x1c & 1) & 0xffffffff00000000 | (uVar8 & 0x1fffffff) << 3;
          puVar7 = (undefined8 *)(**(code **)(*(long *)puVar5 + 0x10))(puVar5,local_88,&local_88);
          iVar11 = 0;
          if (local_64 != 0) {
            iVar11 = (int)local_88 / (int)local_64;
          }
          *(long *)(lVar18 + 0x610) = (long)puVar7;
          *(int *)(lVar18 + 0x618) = iVar17;
          *(int *)(lVar18 + 0x61c) = iVar11;
          *puVar7 = *puVar15;
          iVar17 = iVar17 + -1;
          if (iVar17 != 0) {
            do {
              puVar15 = puVar15 + 1;
              puVar7 = puVar7 + 1;
              iVar17 = iVar17 + -1;
              *puVar7 = *puVar15;
            } while (iVar17 != 0);
          }
        }
        lVar18 = lVar6 + local_b0 * 0x710;
        lVar24 = lVar12 + local_b0 * 0x710;
        memcpy((void *)(lVar18 + 0x620),(void *)(lVar24 + 0x620),0xd0);
        local_b0 = local_b0 + 1;
        *(undefined8 *)(lVar18 + 0x6f0) = *(undefined8 *)(lVar24 + 0x6f0);
        *(undefined1 *)(lVar18 + 0x700) = *(undefined1 *)(lVar24 + 0x700);
      } while (local_b0 != uVar25);
      lVar18 = lVar12;
      do {
        FUN_030bfd8c(lVar18);
        uVar25 = uVar25 - 1;
        lVar18 = lVar18 + 0x710;
      } while (uVar25 != 0);
    }
    if (-1 < (int)uVar22) {
      (**(code **)(*(long *)puVar5 + 0x18))(puVar5,lVar12,(ulong)uVar23 * 0x710);
    }
    if (local_98 < 0x1c3fffff8f0) {
      uVar10 = (undefined4)(local_98 / 0x710);
    }
    else {
      uVar10 = 0x3fffffff;
    }
    *(undefined4 *)(param_1 + 0xd4) = uVar10;
    *(long *)(param_1 + 200) = lVar6;
  }
  iVar17 = *(int *)(param_1 + 0xd0);
  lVar6 = (long)iVar17;
  lVar12 = (long)(int)uVar3;
  if (iVar17 < (int)uVar3) {
    lVar18 = *(long *)(param_1 + 200);
    puVar15 = (undefined8 *)(lVar18 + lVar6 * 0x710);
    *(uint *)(param_1 + 0xd0) = uVar3;
    do {
      *puVar15 = 0;
      puVar15[2] = puVar15 + 6;
      *(undefined4 *)(puVar15 + 3) = 0;
      *(undefined4 *)((long)puVar15 + 0x1c) = 0x80000018;
      puVar15[0x20] = 0;
      puVar15[0x22] = puVar15 + 0x26;
      *(undefined4 *)(puVar15 + 0x23) = 0;
      *(undefined4 *)((long)puVar15 + 0x11c) = 0x80000018;
      puVar15[0x40] = 0;
      puVar15[0x42] = puVar15 + 0x46;
      *(undefined4 *)(puVar15 + 0x43) = 0;
      *(undefined4 *)((long)puVar15 + 0x21c) = 0x80000018;
      puVar15[0x60] = 0;
      puVar15[0x62] = puVar15 + 0x66;
      *(undefined4 *)(puVar15 + 99) = 0;
      *(undefined4 *)((long)puVar15 + 0x31c) = 0x80000018;
      puVar15[0x80] = 0;
      puVar15[0x82] = puVar15 + 0x86;
      *(undefined4 *)(puVar15 + 0x83) = 0;
      *(undefined4 *)((long)puVar15 + 0x41c) = 0x80000018;
      puVar15[0xa0] = 0;
      puVar15[0xa2] = puVar15 + 0xa6;
      *(undefined4 *)(puVar15 + 0xa3) = 0;
      *(undefined4 *)((long)puVar15 + 0x51c) = 0x80000018;
      puVar15[0xc0] = 0;
      puVar15[0xc2] = puVar15 + 0xc6;
      *(undefined4 *)(puVar15 + 0xc3) = 0;
      *(undefined4 *)((long)puVar15 + 0x61c) = 0x80000018;
      *(undefined1 *)(puVar15 + 0xe0) = 0;
      puVar15 = puVar15 + 0xe2;
    } while (puVar15 != (undefined8 *)(lVar18 + lVar12 * 0x710));
  }
  else if ((int)uVar3 < iVar17) {
    lVar24 = *(long *)(param_1 + 200);
    lVar26 = lVar24 + lVar12 * 0x710;
    lVar18 = lVar24 + lVar6 * 0x710;
    *(uint *)(param_1 + 0xd0) = uVar3;
    FUN_030bfd8c(lVar18 + -0x710);
    if ((((lVar18 + -0x710 != lVar26) && (FUN_030bfd8c(lVar18 + -0xe20), lVar18 + -0xe20 != lVar26))
        && (FUN_030bfd8c(lVar18 + -0x1530), lVar18 + -0x1530 != lVar26)) &&
       (FUN_030bfd8c(lVar18 + -0x1c40), lVar18 + -0x1c40 != lVar26)) {
      lVar12 = lVar12 * 0x710 + lVar6 * -0x710 + 0x1c40;
      lVar6 = lVar6 * 0x710 + lVar24 + -0x2350;
      do {
        FUN_030bfd8c(lVar6);
        lVar12 = lVar12 + 0x710;
        lVar6 = lVar6 + -0x710;
      } while (lVar12 != 0);
    }
  }
  lVar12 = *(long *)(*(long *)(*(long *)*param_2 + 8) + 0x4b0);
  uVar3 = *(uint *)(lVar12 + 0x20);
  *(undefined8 *)(param_1 + 0xe8) = *param_5;
  uVar22 = *(uint *)(param_1 + 0xbc);
  uVar23 = uVar22 & 0x3fffffff;
  *(undefined8 *)(param_1 + 0xf8) = *param_5;
  *(undefined8 *)(param_1 + 0xf0) = param_5[0xa4];
  if ((int)uVar23 < (int)uVar3) {
    puVar15 = *(undefined8 **)(param_1 + 0xb0);
    uVar4 = *(uint *)(param_1 + 0xb8);
    uVar25 = (ulong)uVar4;
    if (0x3fffffff < (int)uVar3) {
      FUN_032bd0a8(uVar3);
      uVar22 = *(uint *)(param_1 + 0xbc);
      uVar23 = uVar22 & 0x3fffffff;
    }
    puVar5 = PTR_PTR_0434a080;
    uVar9 = (uVar22 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar9) {
      uVar9 = 0x3fffffff;
    }
    local_64 = uVar3;
    if ((int)uVar3 <= (int)uVar9) {
      local_64 = uVar9;
    }
    local_98 = (ulong)local_64 << 3;
    if ((int)local_64 < (int)uVar23 || 0x3fffffff < (int)local_64) {
      local_88 = 1;
      local_80 = &DAT_0411b3b8;
      local_78 = &local_64;
      FUN_03320b50(0x65816502,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                   ,0x5a,"Invalid requestedCapacity {}",&local_88);
      uVar22 = *(uint *)(param_1 + 0xbc);
      uVar23 = uVar22 & 0x3fffffff;
    }
    puVar7 = (undefined8 *)(**(code **)(*(long *)puVar5 + 0x10))(puVar5,local_98,&local_98);
    if (0 < (int)uVar4) {
      puVar13 = puVar7;
      puVar16 = puVar15;
      do {
        uVar25 = uVar25 - 1;
        *puVar13 = *puVar16;
        puVar13 = puVar13 + 1;
        puVar16 = puVar16 + 1;
      } while (uVar25 != 0);
    }
    if (-1 < (int)uVar22) {
      (**(code **)(*(long *)puVar5 + 0x18))(puVar5,puVar15,(ulong)uVar23 << 3);
    }
    if (local_98 < 0x1fffffff8) {
      uVar10 = (undefined4)(local_98 >> 3);
    }
    else {
      uVar10 = 0x3fffffff;
    }
    *(undefined4 *)(param_1 + 0xbc) = uVar10;
    *(undefined8 **)(param_1 + 0xb0) = puVar7;
  }
  iVar17 = *(int *)(lVar12 + 0x1c);
  if (0 < iVar17) {
    iVar11 = 0;
    iVar14 = 0x10000;
    do {
      if (iVar11 < iVar17) {
        iVar19 = 0;
        iVar20 = iVar14;
        do {
          uVar23 = iVar11 + ((iVar20 >> 0x10) * (iVar20 + -0x10000 >> 0x10) >> 1);
          uVar25 = -(ulong)(uVar23 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar23 << 4;
          iVar1 = *(int *)(param_5[0xa4] + uVar25 + 0xc) +
                  *(int *)(*(long *)(param_1 + 0xe8) + uVar25 + 0xc);
          if (0 < iVar1) {
            iVar17 = *(int *)(param_1 + 0xb8);
            *(int *)(param_1 + 0xb8) = iVar17 + 1;
            piVar2 = (int *)(*(long *)(param_1 + 0xb0) + (long)iVar17 * 8);
            *(short *)(piVar2 + 1) = (short)uVar23;
            iVar17 = iVar11;
            if (iVar19 != 0) {
              iVar17 = -1;
            }
            *(char *)((long)piVar2 + 6) = (char)iVar17;
            *piVar2 = iVar1 * 10;
            iVar17 = *(int *)(lVar12 + 0x1c);
          }
          iVar19 = iVar19 + 1;
          iVar20 = iVar20 + 0x10000;
        } while (iVar11 + iVar19 < iVar17);
      }
      iVar11 = iVar11 + 1;
      iVar14 = iVar14 + 0x10000;
    } while (iVar11 < iVar17);
  }
  iVar17 = *(int *)(param_1 + 0xb8) + -1;
  if (iVar17 != 0 && 0 < *(int *)(param_1 + 0xb8)) {
    FUN_030bfc80(*(undefined8 *)(param_1 + 0xb0),0,iVar17);
  }
  return;
}


