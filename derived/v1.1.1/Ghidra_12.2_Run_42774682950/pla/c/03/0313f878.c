/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0313f878; name: FUN_0313f878
 */


void FUN_0313f878(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  char *__s;
  uint uVar3;
  undefined4 uVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  size_t sVar11;
  uint uVar12;
  undefined8 uVar13;
  int iVar14;
  long lVar15;
  undefined8 *puVar16;
  long *plVar17;
  ulong uVar18;
  uint local_68;
  int local_64;
  ulong local_60;
  undefined *puStack_58;
  int *local_50;
  uint *puStack_48;
  
  *param_1 = &PTR_LAB_042dadc0;
  param_1[1] = 0xffffffff;
  param_1[2] = 1;
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 0x18);
  param_1[4] = 0;
  puVar7 = PTR_PTR_0434a080;
  __s = (char *)(*(ulong *)(param_2 + 0x20) & 0xfffffffffffffffe);
  if (__s != (char *)0x0) {
    sVar11 = strlen(__s);
    uVar3 = (int)sVar11 + 1;
    puVar16 = (undefined8 *)
              (**(code **)(*(long *)puVar7 + 0x10))
                        (puVar7,(long)((sVar11 << 0x20) + 0x1100000000) >> 0x20,0);
    *puVar16 = puVar7;
    *(uint *)(puVar16 + 1) = uVar3;
    memcpy(puVar16 + 2,__s,(ulong)uVar3);
    param_1[4] = (ulong)(puVar16 + 2) | 1;
  }
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 0x28);
  param_1[6] = 0;
  param_1[7] = 0x8000000000000000;
  uVar3 = *(uint *)(param_2 + 0x38);
  plVar17 = *(long **)(param_2 + 0x30);
  if ((int)uVar3 < 1) {
    param_1[6] = 0;
    param_1[7] = 0x8000000000000000;
  }
  else {
    uVar18 = (ulong)(int)uVar3;
    local_64 = 8;
    local_68 = uVar3;
    if ((uVar18 & 0x1ffffffff0000000) != 0) {
      local_60 = 2;
      puStack_58 = &DAT_0411b3a0;
      local_50 = &local_64;
      puStack_48 = &local_68;
      FUN_03320b50(0xc69ddef,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Memory/Allocator/hkMemoryAllocator.cpp"
                   ,0x30,"Memory allocation request overflow {}*{}",&local_60);
    }
    local_60 = -(uVar18 >> 0x1c & 1) & 0xffffffff00000000 | (uVar18 & 0x1fffffff) << 3;
    plVar8 = (long *)(**(code **)(*(long *)puVar7 + 0x10))(puVar7,local_60,&local_60);
    param_1[6] = plVar8;
    iVar14 = 0;
    if (local_64 != 0) {
      iVar14 = (int)local_60 / local_64;
    }
    uVar12 = 0;
    *(uint *)(param_1 + 7) = uVar3;
    *(int *)((long)param_1 + 0x3c) = iVar14;
    do {
      lVar15 = *plVar17;
      *plVar8 = lVar15;
      if ((lVar15 != 0) && (*(long *)(lVar15 + 8) != 0)) {
        plVar2 = (long *)(lVar15 + 0x10);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar6) {
            *plVar2 = *plVar2 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      uVar12 = uVar12 + 1;
      plVar8 = plVar8 + 1;
      plVar17 = plVar17 + 1;
    } while (uVar12 != uVar3);
  }
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 0x40);
  *param_1 = &PTR_LAB_042dae30;
  uVar4 = *(undefined4 *)(param_2 + 0x4c);
  *(undefined8 *)((long)param_1 + 0x44) = *(undefined8 *)(param_2 + 0x44);
  *(undefined4 *)((long)param_1 + 0x4c) = uVar4;
  param_1[10] = 0;
  param_1[0xb] = 0x8000000000000000;
  uVar3 = *(uint *)(param_2 + 0x58);
  puVar16 = *(undefined8 **)(param_2 + 0x50);
  if ((int)uVar3 < 1) {
    param_1[10] = 0;
    param_1[0xb] = 0x8000000000000000;
  }
  else {
    uVar18 = (ulong)(int)uVar3;
    local_64 = 8;
    local_68 = uVar3;
    if ((uVar18 & 0x1ffffffff0000000) != 0) {
      local_60 = 2;
      puStack_58 = &DAT_0411b3a0;
      local_50 = &local_64;
      puStack_48 = &local_68;
      FUN_03320b50(0xc69ddef,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Memory/Allocator/hkMemoryAllocator.cpp"
                   ,0x30,"Memory allocation request overflow {}*{}",&local_60);
    }
    local_60 = -(uVar18 >> 0x1c & 1) & 0xffffffff00000000 | (uVar18 & 0x1fffffff) << 3;
    puVar9 = (undefined8 *)(**(code **)(*(long *)puVar7 + 0x10))(puVar7,local_60,&local_60);
    param_1[10] = puVar9;
    iVar14 = 0;
    if (local_64 != 0) {
      iVar14 = (int)local_60 / local_64;
    }
    *(uint *)(param_1 + 0xb) = uVar3;
    *(int *)((long)param_1 + 0x5c) = iVar14;
    uVar12 = uVar3 & 3;
    if (2 < uVar3 - 1) {
      iVar14 = uVar12 - uVar3;
      puVar10 = puVar9;
      do {
        *puVar10 = *puVar16;
        puVar10[1] = puVar16[1];
        puVar10[2] = puVar16[2];
        puVar1 = puVar16 + 3;
        puVar9 = puVar10 + 4;
        puVar16 = puVar16 + 4;
        iVar14 = iVar14 + 4;
        puVar10[3] = *puVar1;
        puVar10 = puVar9;
      } while (iVar14 != 0);
    }
    for (; uVar12 != 0; uVar12 = uVar12 - 1) {
      *puVar9 = *puVar16;
      puVar9 = puVar9 + 1;
      puVar16 = puVar16 + 1;
    }
  }
  uVar13 = *(undefined8 *)(param_2 + 0x98);
  param_1[0x11] = *(undefined8 *)(param_2 + 0x88);
  param_1[0x13] = uVar13;
  uVar13 = *(undefined8 *)(param_2 + 0x78);
  param_1[0xd] = *(undefined8 *)(param_2 + 0x68);
  param_1[0xf] = uVar13;
  uVar13 = *(undefined8 *)(param_2 + 0x60);
  param_1[0xe] = *(undefined8 *)(param_2 + 0x70);
  param_1[0xc] = uVar13;
  uVar13 = *(undefined8 *)(param_2 + 0x80);
  param_1[0x12] = *(undefined8 *)(param_2 + 0x90);
  param_1[0x10] = uVar13;
  return;
}


