/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03140884; name: FUN_03140884
 */


void FUN_03140884(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  uint uVar8;
  char cVar9;
  bool bVar10;
  undefined *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined4 *puVar14;
  long *plVar15;
  undefined4 *puVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  uint uVar19;
  long lVar20;
  ulong uVar21;
  int iVar22;
  undefined8 uVar23;
  undefined1 *puVar24;
  undefined8 *puVar25;
  undefined4 *puVar26;
  long *plVar27;
  ulong local_60;
  undefined *puStack_58;
  int *local_50;
  uint *puStack_48;
  uint local_38;
  int local_34;
  
  uVar5 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar5;
  lVar20 = param_2[2];
  param_1[2] = lVar20;
  if ((lVar20 != 0) && (*(long *)(lVar20 + 8) != 0)) {
    plVar27 = (long *)(lVar20 + 0x10);
    do {
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar27,0x10);
      if (bVar10) {
        *plVar27 = *plVar27 + 1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
  }
  uVar5 = param_2[4];
  param_1[3] = param_2[3];
  param_1[4] = uVar5;
  uVar5 = param_2[5];
  uVar23 = param_2[6];
  uVar6 = param_2[8];
  param_1[7] = param_2[7];
  param_1[8] = uVar6;
  param_1[5] = uVar5;
  param_1[6] = uVar23;
  uVar5 = param_2[9];
  uVar23 = param_2[10];
  uVar6 = param_2[0xc];
  param_1[0xb] = param_2[0xb];
  param_1[0xc] = uVar6;
  param_1[9] = uVar5;
  param_1[10] = uVar23;
  uVar23 = param_2[0xf];
  uVar5 = param_2[0xe];
  uVar7 = *(undefined4 *)(param_2 + 0x10);
  param_1[0xd] = param_2[0xd];
  *(undefined4 *)(param_1 + 0x10) = uVar7;
  param_1[0xe] = uVar5;
  param_1[0xf] = uVar23;
  param_1[0x11] = 0;
  param_1[0x12] = 0x8000000000000000;
  puVar11 = PTR_PTR_0434a080;
  uVar8 = *(uint *)(param_2 + 0x12);
  puVar25 = (undefined8 *)param_2[0x11];
  if ((int)uVar8 < 1) {
    param_1[0x11] = 0;
    param_1[0x12] = 0x8000000000000000;
  }
  else {
    uVar21 = (ulong)(int)uVar8;
    local_34 = 0x10;
    local_38 = uVar8;
    if ((uVar21 & 0xffffffff8000000) != 0) {
      local_60 = 2;
      puStack_58 = &DAT_0411b3a0;
      local_50 = &local_34;
      puStack_48 = &local_38;
      FUN_03320b50(0xc69ddef,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Memory/Allocator/hkMemoryAllocator.cpp"
                   ,0x30,"Memory allocation request overflow {}*{}",&local_60);
    }
    local_60 = -(uVar21 >> 0x1b & 1) & 0xffffffff00000000 | (uVar21 & 0xfffffff) << 4;
    puVar12 = (undefined8 *)(**(code **)(*(long *)puVar11 + 0x10))(puVar11,local_60,&local_60);
    param_1[0x11] = puVar12;
    iVar22 = 0;
    if (local_34 != 0) {
      iVar22 = (int)local_60 / local_34;
    }
    *(uint *)(param_1 + 0x12) = uVar8;
    *(int *)((long)param_1 + 0x94) = iVar22;
    if (uVar8 != 1) {
      iVar22 = (uVar8 & 1) - uVar8;
      puVar13 = puVar12;
      do {
        puVar13[1] = puVar25[1];
        *puVar13 = *puVar25;
        puVar13[3] = puVar25[3];
        puVar3 = puVar25 + 2;
        puVar12 = puVar13 + 4;
        puVar25 = puVar25 + 4;
        iVar22 = iVar22 + 2;
        puVar13[2] = *puVar3;
        puVar13 = puVar12;
      } while (iVar22 != 0);
    }
    if ((uVar8 & 1) != 0) {
      puVar12[1] = puVar25[1];
      *puVar12 = *puVar25;
    }
  }
  param_1[0x13] = 0;
  param_1[0x14] = 0x8000000000000000;
  uVar8 = *(uint *)(param_2 + 0x14);
  puVar25 = (undefined8 *)param_2[0x13];
  if ((int)uVar8 < 1) {
    param_1[0x13] = 0;
    param_1[0x14] = 0x8000000000000000;
  }
  else {
    uVar21 = (ulong)(int)uVar8;
    local_34 = 0x10;
    local_38 = uVar8;
    if ((uVar21 & 0xffffffff8000000) != 0) {
      local_60 = 2;
      puStack_58 = &DAT_0411b3a0;
      local_50 = &local_34;
      puStack_48 = &local_38;
      FUN_03320b50(0xc69ddef,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Memory/Allocator/hkMemoryAllocator.cpp"
                   ,0x30,"Memory allocation request overflow {}*{}",&local_60);
    }
    local_60 = -(uVar21 >> 0x1b & 1) & 0xffffffff00000000 | (uVar21 & 0xfffffff) << 4;
    puVar12 = (undefined8 *)(**(code **)(*(long *)puVar11 + 0x10))(puVar11,local_60,&local_60);
    param_1[0x13] = puVar12;
    iVar22 = 0;
    if (local_34 != 0) {
      iVar22 = (int)local_60 / local_34;
    }
    *(uint *)(param_1 + 0x14) = uVar8;
    *(int *)((long)param_1 + 0xa4) = iVar22;
    if (uVar8 != 1) {
      iVar22 = (uVar8 & 1) - uVar8;
      puVar13 = puVar12;
      do {
        puVar13[1] = puVar25[1];
        *puVar13 = *puVar25;
        puVar13[3] = puVar25[3];
        puVar3 = puVar25 + 2;
        puVar12 = puVar13 + 4;
        puVar25 = puVar25 + 4;
        iVar22 = iVar22 + 2;
        puVar13[2] = *puVar3;
        puVar13 = puVar12;
      } while (iVar22 != 0);
    }
    if ((uVar8 & 1) != 0) {
      puVar12[1] = puVar25[1];
      *puVar12 = *puVar25;
    }
  }
  param_1[0x15] = 0;
  param_1[0x16] = 0x8000000000000000;
  uVar8 = *(uint *)(param_2 + 0x16);
  puVar25 = (undefined8 *)param_2[0x15];
  if ((int)uVar8 < 1) {
    param_1[0x15] = 0;
    param_1[0x16] = 0x8000000000000000;
  }
  else {
    uVar21 = (ulong)(int)uVar8;
    local_34 = 0x10;
    local_38 = uVar8;
    if ((uVar21 & 0xffffffff8000000) != 0) {
      local_60 = 2;
      puStack_58 = &DAT_0411b3a0;
      local_50 = &local_34;
      puStack_48 = &local_38;
      FUN_03320b50(0xc69ddef,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Memory/Allocator/hkMemoryAllocator.cpp"
                   ,0x30,"Memory allocation request overflow {}*{}",&local_60);
    }
    local_60 = -(uVar21 >> 0x1b & 1) & 0xffffffff00000000 | (uVar21 & 0xfffffff) << 4;
    puVar12 = (undefined8 *)(**(code **)(*(long *)puVar11 + 0x10))(puVar11,local_60,&local_60);
    param_1[0x15] = puVar12;
    iVar22 = 0;
    if (local_34 != 0) {
      iVar22 = (int)local_60 / local_34;
    }
    *(uint *)(param_1 + 0x16) = uVar8;
    *(int *)((long)param_1 + 0xb4) = iVar22;
    if (uVar8 != 1) {
      iVar22 = (uVar8 & 1) - uVar8;
      puVar13 = puVar12;
      do {
        puVar13[1] = puVar25[1];
        *puVar13 = *puVar25;
        puVar13[3] = puVar25[3];
        puVar3 = puVar25 + 2;
        puVar12 = puVar13 + 4;
        puVar25 = puVar25 + 4;
        iVar22 = iVar22 + 2;
        puVar13[2] = *puVar3;
        puVar13 = puVar12;
      } while (iVar22 != 0);
    }
    if ((uVar8 & 1) != 0) {
      puVar12[1] = puVar25[1];
      *puVar12 = *puVar25;
    }
  }
  param_1[0x17] = 0;
  param_1[0x18] = 0x8000000000000000;
  uVar8 = *(uint *)(param_2 + 0x18);
  puVar25 = (undefined8 *)param_2[0x17];
  if ((int)uVar8 < 1) {
    param_1[0x17] = 0;
    param_1[0x18] = 0x8000000000000000;
  }
  else {
    uVar21 = (ulong)(int)uVar8;
    local_34 = 0x10;
    local_38 = uVar8;
    if ((uVar21 & 0xffffffff8000000) != 0) {
      local_60 = 2;
      puStack_58 = &DAT_0411b3a0;
      local_50 = &local_34;
      puStack_48 = &local_38;
      FUN_03320b50(0xc69ddef,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Memory/Allocator/hkMemoryAllocator.cpp"
                   ,0x30,"Memory allocation request overflow {}*{}",&local_60);
    }
    local_60 = -(uVar21 >> 0x1b & 1) & 0xffffffff00000000 | (uVar21 & 0xfffffff) << 4;
    puVar12 = (undefined8 *)(**(code **)(*(long *)puVar11 + 0x10))(puVar11,local_60,&local_60);
    param_1[0x17] = puVar12;
    iVar22 = 0;
    if (local_34 != 0) {
      iVar22 = (int)local_60 / local_34;
    }
    *(uint *)(param_1 + 0x18) = uVar8;
    *(int *)((long)param_1 + 0xc4) = iVar22;
    if (uVar8 != 1) {
      iVar22 = (uVar8 & 1) - uVar8;
      puVar13 = puVar12;
      do {
        puVar13[1] = puVar25[1];
        *puVar13 = *puVar25;
        puVar13[3] = puVar25[3];
        puVar3 = puVar25 + 2;
        puVar12 = puVar13 + 4;
        puVar25 = puVar25 + 4;
        iVar22 = iVar22 + 2;
        puVar13[2] = *puVar3;
        puVar13 = puVar12;
      } while (iVar22 != 0);
    }
    if ((uVar8 & 1) != 0) {
      puVar12[1] = puVar25[1];
      *puVar12 = *puVar25;
    }
  }
  param_1[0x19] = 0;
  param_1[0x1a] = 0x8000000000000000;
  uVar8 = *(uint *)(param_2 + 0x1a);
  puVar26 = (undefined4 *)param_2[0x19];
  if ((int)uVar8 < 1) {
    param_1[0x19] = 0;
    param_1[0x1a] = 0x8000000000000000;
  }
  else {
    uVar21 = (ulong)(int)uVar8;
    local_34 = 4;
    local_38 = uVar8;
    if ((uVar21 & 0x3fffffffe0000000) != 0) {
      local_60 = 2;
      puStack_58 = &DAT_0411b3a0;
      local_50 = &local_34;
      puStack_48 = &local_38;
      FUN_03320b50(0xc69ddef,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Memory/Allocator/hkMemoryAllocator.cpp"
                   ,0x30,"Memory allocation request overflow {}*{}",&local_60);
    }
    local_60 = -(uVar21 >> 0x1d & 1) & 0xffffffff00000000 | (uVar21 & 0x3fffffff) << 2;
    puVar14 = (undefined4 *)(**(code **)(*(long *)puVar11 + 0x10))(puVar11,local_60,&local_60);
    param_1[0x19] = puVar14;
    iVar22 = 0;
    if (local_34 != 0) {
      iVar22 = (int)local_60 / local_34;
    }
    *(uint *)(param_1 + 0x1a) = uVar8;
    *(int *)((long)param_1 + 0xd4) = iVar22;
    uVar19 = uVar8 & 3;
    if (2 < uVar8 - 1) {
      iVar22 = uVar19 - uVar8;
      puVar16 = puVar14;
      do {
        *puVar16 = *puVar26;
        puVar16[1] = puVar26[1];
        puVar16[2] = puVar26[2];
        puVar2 = puVar26 + 3;
        puVar14 = puVar16 + 4;
        puVar26 = puVar26 + 4;
        iVar22 = iVar22 + 4;
        puVar16[3] = *puVar2;
        puVar16 = puVar14;
      } while (iVar22 != 0);
    }
    for (; uVar19 != 0; uVar19 = uVar19 - 1) {
      *puVar14 = *puVar26;
      puVar14 = puVar14 + 1;
      puVar26 = puVar26 + 1;
    }
  }
  param_1[0x1b] = 0;
  param_1[0x1c] = 0x8000000000000000;
  uVar8 = *(uint *)(param_2 + 0x1c);
  puVar26 = (undefined4 *)param_2[0x1b];
  if ((int)uVar8 < 1) {
    param_1[0x1b] = 0;
    param_1[0x1c] = 0x8000000000000000;
  }
  else {
    uVar21 = (ulong)(int)uVar8;
    local_34 = 4;
    local_38 = uVar8;
    if ((uVar21 & 0x3fffffffe0000000) != 0) {
      local_60 = 2;
      puStack_58 = &DAT_0411b3a0;
      local_50 = &local_34;
      puStack_48 = &local_38;
      FUN_03320b50(0xc69ddef,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Memory/Allocator/hkMemoryAllocator.cpp"
                   ,0x30,"Memory allocation request overflow {}*{}",&local_60);
    }
    local_60 = -(uVar21 >> 0x1d & 1) & 0xffffffff00000000 | (uVar21 & 0x3fffffff) << 2;
    puVar14 = (undefined4 *)(**(code **)(*(long *)puVar11 + 0x10))(puVar11,local_60,&local_60);
    param_1[0x1b] = puVar14;
    iVar22 = 0;
    if (local_34 != 0) {
      iVar22 = (int)local_60 / local_34;
    }
    *(uint *)(param_1 + 0x1c) = uVar8;
    *(int *)((long)param_1 + 0xe4) = iVar22;
    uVar19 = uVar8 & 3;
    if (2 < uVar8 - 1) {
      iVar22 = uVar19 - uVar8;
      puVar16 = puVar14;
      do {
        *puVar16 = *puVar26;
        puVar16[1] = puVar26[1];
        puVar16[2] = puVar26[2];
        puVar2 = puVar26 + 3;
        puVar14 = puVar16 + 4;
        puVar26 = puVar26 + 4;
        iVar22 = iVar22 + 4;
        puVar16[3] = *puVar2;
        puVar16 = puVar14;
      } while (iVar22 != 0);
    }
    for (; uVar19 != 0; uVar19 = uVar19 - 1) {
      *puVar14 = *puVar26;
      puVar14 = puVar14 + 1;
      puVar26 = puVar26 + 1;
    }
  }
  param_1[0x1d] = 0;
  param_1[0x1e] = 0x8000000000000000;
  uVar8 = *(uint *)(param_2 + 0x1e);
  plVar27 = (long *)param_2[0x1d];
  if ((int)uVar8 < 1) {
    param_1[0x1d] = 0;
    param_1[0x1e] = 0x8000000000000000;
  }
  else {
    uVar21 = (ulong)(int)uVar8;
    local_34 = 8;
    local_38 = uVar8;
    if ((uVar21 & 0x1ffffffff0000000) != 0) {
      local_60 = 2;
      puStack_58 = &DAT_0411b3a0;
      local_50 = &local_34;
      puStack_48 = &local_38;
      FUN_03320b50(0xc69ddef,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Memory/Allocator/hkMemoryAllocator.cpp"
                   ,0x30,"Memory allocation request overflow {}*{}",&local_60);
    }
    local_60 = -(uVar21 >> 0x1c & 1) & 0xffffffff00000000 | (uVar21 & 0x1fffffff) << 3;
    plVar15 = (long *)(**(code **)(*(long *)puVar11 + 0x10))(puVar11,local_60,&local_60);
    uVar19 = 0;
    param_1[0x1d] = plVar15;
    iVar22 = 0;
    if (local_34 != 0) {
      iVar22 = (int)local_60 / local_34;
    }
    *(uint *)(param_1 + 0x1e) = uVar8;
    *(int *)((long)param_1 + 0xf4) = iVar22;
    do {
      lVar20 = *plVar27;
      *plVar15 = lVar20;
      if ((lVar20 != 0) && (*(long *)(lVar20 + 8) != 0)) {
        plVar4 = (long *)(lVar20 + 0x10);
        do {
          cVar9 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar10) {
            *plVar4 = *plVar4 + 1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
      }
      uVar19 = uVar19 + 1;
      plVar15 = plVar15 + 1;
      plVar27 = plVar27 + 1;
    } while (uVar19 != uVar8);
  }
  param_1[0x1f] = 0;
  param_1[0x20] = 0x8000000000000000;
  uVar8 = *(uint *)(param_2 + 0x20);
  puVar26 = (undefined4 *)param_2[0x1f];
  local_38 = uVar8;
  if ((int)uVar8 < 1) {
    param_1[0x1f] = 0;
    param_1[0x20] = 0x8000000000000000;
  }
  else {
    uVar21 = (ulong)(int)uVar8;
    local_34 = 4;
    if ((uVar21 & 0x3fffffffe0000000) != 0) {
      local_60 = 2;
      puStack_58 = &DAT_0411b3a0;
      local_50 = &local_34;
      puStack_48 = &local_38;
      FUN_03320b50(0xc69ddef,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Memory/Allocator/hkMemoryAllocator.cpp"
                   ,0x30,"Memory allocation request overflow {}*{}",&local_60);
    }
    local_60 = -(uVar21 >> 0x1d & 1) & 0xffffffff00000000 | (uVar21 & 0x3fffffff) << 2;
    puVar14 = (undefined4 *)(**(code **)(*(long *)puVar11 + 0x10))(puVar11,local_60,&local_60);
    *(uint *)(param_1 + 0x20) = uVar8;
    param_1[0x1f] = puVar14;
    iVar22 = 0;
    if (local_34 != 0) {
      iVar22 = (int)local_60 / local_34;
    }
    *(int *)((long)param_1 + 0x104) = iVar22;
    uVar19 = uVar8 & 3;
    if (2 < uVar8 - 1) {
      iVar22 = uVar19 - uVar8;
      puVar16 = puVar14;
      do {
        *puVar16 = *puVar26;
        puVar16[1] = puVar26[1];
        puVar16[2] = puVar26[2];
        puVar2 = puVar26 + 3;
        puVar14 = puVar16 + 4;
        puVar26 = puVar26 + 4;
        iVar22 = iVar22 + 4;
        puVar16[3] = *puVar2;
        puVar16 = puVar14;
      } while (iVar22 != 0);
    }
    for (; uVar19 != 0; uVar19 = uVar19 - 1) {
      *puVar14 = *puVar26;
      puVar14 = puVar14 + 1;
      puVar26 = puVar26 + 1;
    }
  }
  param_1[0x21] = 0;
  param_1[0x22] = 0x8000000000000000;
  uVar8 = *(uint *)(param_2 + 0x22);
  if ((int)uVar8 < 1) {
    param_1[0x21] = 0;
    param_1[0x22] = 0x8000000000000000;
  }
  else {
    local_60 = (ulong)(int)uVar8;
    puVar24 = (undefined1 *)param_2[0x21];
    puVar17 = (undefined1 *)(**(code **)(*(long *)puVar11 + 0x10))(puVar11,local_60,&local_60);
    param_1[0x21] = puVar17;
    *(int *)((long)param_1 + 0x114) = (int)local_60;
    uVar19 = uVar8 & 3;
    *(uint *)(param_1 + 0x22) = uVar8;
    if (2 < uVar8 - 1) {
      iVar22 = uVar19 - uVar8;
      puVar18 = puVar17;
      do {
        *puVar18 = *puVar24;
        puVar18[1] = puVar24[1];
        puVar18[2] = puVar24[2];
        puVar1 = puVar24 + 3;
        puVar17 = puVar18 + 4;
        puVar24 = puVar24 + 4;
        iVar22 = iVar22 + 4;
        puVar18[3] = *puVar1;
        puVar18 = puVar17;
      } while (iVar22 != 0);
    }
    for (; uVar19 != 0; uVar19 = uVar19 - 1) {
      *puVar17 = *puVar24;
      puVar17 = puVar17 + 1;
      puVar24 = puVar24 + 1;
    }
  }
  return;
}


