/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ff64a8; name: FUN_02ff64a8
 */


void FUN_02ff64a8(undefined8 *param_1,long param_2)

{
  uint uVar1;
  void *pvVar2;
  void *pvVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  long *plVar7;
  void *pvVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 local_68;
  undefined *puStack_60;
  undefined8 local_58;
  
  *param_1 = &PTR_LAB_042b5eb8;
  param_1[1] = 0xffffffff;
  param_1[2] = 1;
  puVar12 = param_1 + 3;
  *puVar12 = 0;
  param_1[4] = 0;
  lVar10 = *(long *)(param_2 + 0x18);
  iVar4 = *(int *)(param_2 + 0x20);
  pvVar2 = (void *)0x0;
  if (lVar10 != 0) {
    pvVar2 = (void *)(lVar10 + param_2 + 0x18);
  }
  if (0 < iVar4 && pvVar2 != (void *)0x0) {
    uVar6 = iVar4 - 1U | (int)(iVar4 - 1U) >> 0x10;
    *(undefined4 *)((long)param_1 + 0x24) = 0;
    uVar6 = uVar6 | (int)uVar6 >> 8;
    uVar6 = uVar6 | (int)uVar6 >> 4;
    uVar6 = uVar6 | (int)uVar6 >> 2;
    uVar6 = (uVar6 | (int)uVar6 >> 1) + 1;
    if ((int)uVar6 < iVar4) {
      local_58 = 0;
      local_68 = 0;
      puStack_60 = PTR_DAT_04372528;
      FUN_03320b50(0x5d9e6698,"../..\\Common/Base/Container/RelArray/hkRelArray.inl",0x1e8,
                   "Capacity reservation overflow",&local_68);
    }
    lVar10 = tpidr_el0;
    lVar9 = *(long *)(lVar10 + 0x38d490);
    if (lVar9 == 0) {
      lVar9 = FUN_0333d16c(0,1);
      *(long *)(lVar10 + 0x38d490) = lVar9;
    }
    plVar7 = *(long **)(*(long *)(lVar9 + 8) + 0x58);
    pvVar8 = (void *)(**(code **)(*plVar7 + 0x10))
                               (plVar7,-(ulong)(uVar6 >> 0x1f) & 0xfffffffc00000000 |
                                       (ulong)uVar6 << 2,0);
    pvVar3 = (void *)0x0;
    if (param_1[3] != 0) {
      pvVar3 = (void *)(param_1[3] + (long)puVar12);
    }
    memcpy(pvVar8,pvVar3,(long)*(int *)(param_1 + 4) << 2);
    if ((int)*(uint *)((long)param_1 + 0x24) < 0) {
      uVar1 = *(uint *)((long)param_1 + 0x24) & 0x7fffffff;
      if ((int)uVar1 <= (int)*(uint *)(param_1 + 4)) {
        uVar1 = *(uint *)(param_1 + 4);
      }
      lVar9 = 0;
      if (param_1[3] != 0) {
        lVar9 = param_1[3] + (long)puVar12;
      }
      lVar11 = *(long *)(lVar10 + 0x38d490);
      if (lVar11 == 0) {
        lVar11 = FUN_0333d16c(0,1);
        *(long *)(lVar10 + 0x38d490) = lVar11;
      }
      plVar7 = *(long **)(*(long *)(lVar11 + 8) + 0x58);
      (**(code **)(*plVar7 + 0x18))(plVar7,lVar9,(ulong)uVar1 << 2);
    }
    if (pvVar8 == (void *)0x0) {
      lVar10 = 0;
    }
    else {
      lVar10 = (long)pvVar8 - (long)puVar12;
    }
    param_1[3] = lVar10;
    *(int *)(param_1 + 4) = iVar4;
    *(uint *)((long)param_1 + 0x24) = uVar6 | 0x80000000;
    memcpy((void *)(lVar10 + (long)puVar12),pvVar2,(long)iVar4 << 2);
  }
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 0x28);
  uVar5 = *(undefined4 *)(param_2 + 0x30);
  puVar12 = param_1 + 7;
  *puVar12 = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 6) = uVar5;
  lVar10 = *(long *)(param_2 + 0x38);
  iVar4 = *(int *)(param_2 + 0x40);
  pvVar2 = (void *)0x0;
  if (lVar10 != 0) {
    pvVar2 = (void *)(lVar10 + param_2 + 0x38);
  }
  if ((0 < iVar4) && (pvVar2 != (void *)0x0)) {
    uVar6 = iVar4 - 1U | (int)(iVar4 - 1U) >> 0x10;
    *(undefined4 *)((long)param_1 + 0x44) = 0;
    uVar6 = uVar6 | (int)uVar6 >> 8;
    uVar6 = uVar6 | (int)uVar6 >> 4;
    uVar6 = uVar6 | (int)uVar6 >> 2;
    uVar6 = (uVar6 | (int)uVar6 >> 1) + 1;
    if ((int)uVar6 < iVar4) {
      local_58 = 0;
      local_68 = 0;
      puStack_60 = PTR_DAT_04372528;
      FUN_03320b50(0x5d9e6698,"../..\\Common/Base/Container/RelArray/hkRelArray.inl",0x1e8,
                   "Capacity reservation overflow",&local_68);
    }
    lVar10 = tpidr_el0;
    lVar9 = *(long *)(lVar10 + 0x38d490);
    if (lVar9 == 0) {
      lVar9 = FUN_0333d16c(0,1);
      *(long *)(lVar10 + 0x38d490) = lVar9;
    }
    plVar7 = *(long **)(*(long *)(lVar9 + 8) + 0x58);
    pvVar8 = (void *)(**(code **)(*plVar7 + 0x10))
                               (plVar7,-(ulong)(uVar6 >> 0x1f) & 0xfffffffc00000000 |
                                       (ulong)uVar6 << 2,0);
    pvVar3 = (void *)0x0;
    if (param_1[7] != 0) {
      pvVar3 = (void *)(param_1[7] + (long)puVar12);
    }
    memcpy(pvVar8,pvVar3,(long)*(int *)(param_1 + 8) << 2);
    if ((int)*(uint *)((long)param_1 + 0x44) < 0) {
      uVar1 = *(uint *)((long)param_1 + 0x44) & 0x7fffffff;
      if ((int)uVar1 <= (int)*(uint *)(param_1 + 8)) {
        uVar1 = *(uint *)(param_1 + 8);
      }
      lVar9 = 0;
      if (param_1[7] != 0) {
        lVar9 = param_1[7] + (long)puVar12;
      }
      lVar11 = *(long *)(lVar10 + 0x38d490);
      if (lVar11 == 0) {
        lVar11 = FUN_0333d16c(0,1);
        *(long *)(lVar10 + 0x38d490) = lVar11;
      }
      plVar7 = *(long **)(*(long *)(lVar11 + 8) + 0x58);
      (**(code **)(*plVar7 + 0x18))(plVar7,lVar9,(ulong)uVar1 << 2);
    }
    if (pvVar8 == (void *)0x0) {
      lVar10 = 0;
    }
    else {
      lVar10 = (long)pvVar8 - (long)puVar12;
    }
    param_1[7] = lVar10;
    *(int *)(param_1 + 8) = iVar4;
    *(uint *)((long)param_1 + 0x44) = uVar6 | 0x80000000;
    memcpy((void *)(lVar10 + (long)puVar12),pvVar2,(long)iVar4 << 2);
  }
  uVar5 = *(undefined4 *)(param_2 + 0x48);
  puVar12 = param_1 + 10;
  *puVar12 = 0;
  *(undefined4 *)(param_1 + 9) = uVar5;
  param_1[0xb] = 0;
  lVar10 = *(long *)(param_2 + 0x50);
  iVar4 = *(int *)(param_2 + 0x58);
  pvVar2 = (void *)0x0;
  if (lVar10 != 0) {
    pvVar2 = (void *)(lVar10 + param_2 + 0x50);
  }
  if ((0 < iVar4) && (pvVar2 != (void *)0x0)) {
    uVar6 = iVar4 - 1U | (int)(iVar4 - 1U) >> 0x10;
    *(undefined4 *)((long)param_1 + 0x5c) = 0;
    uVar6 = uVar6 | (int)uVar6 >> 8;
    uVar6 = uVar6 | (int)uVar6 >> 4;
    uVar6 = uVar6 | (int)uVar6 >> 2;
    uVar6 = (uVar6 | (int)uVar6 >> 1) + 1;
    if ((int)uVar6 < iVar4) {
      local_58 = 0;
      local_68 = 0;
      puStack_60 = PTR_DAT_04372528;
      FUN_03320b50(0x5d9e6698,"../..\\Common/Base/Container/RelArray/hkRelArray.inl",0x1e8,
                   "Capacity reservation overflow",&local_68);
    }
    lVar10 = tpidr_el0;
    lVar9 = *(long *)(lVar10 + 0x38d490);
    if (lVar9 == 0) {
      lVar9 = FUN_0333d16c(0,1);
      *(long *)(lVar10 + 0x38d490) = lVar9;
    }
    plVar7 = *(long **)(*(long *)(lVar9 + 8) + 0x58);
    pvVar8 = (void *)(**(code **)(*plVar7 + 0x10))
                               (plVar7,-(ulong)(uVar6 >> 0x1f) & 0xfffffffc00000000 |
                                       (ulong)uVar6 << 2,0);
    pvVar3 = (void *)0x0;
    if (param_1[10] != 0) {
      pvVar3 = (void *)(param_1[10] + (long)puVar12);
    }
    memcpy(pvVar8,pvVar3,(long)*(int *)(param_1 + 0xb) << 2);
    if ((int)*(uint *)((long)param_1 + 0x5c) < 0) {
      uVar1 = *(uint *)((long)param_1 + 0x5c) & 0x7fffffff;
      if ((int)uVar1 <= (int)*(uint *)(param_1 + 0xb)) {
        uVar1 = *(uint *)(param_1 + 0xb);
      }
      lVar9 = 0;
      if (param_1[10] != 0) {
        lVar9 = param_1[10] + (long)puVar12;
      }
      lVar11 = *(long *)(lVar10 + 0x38d490);
      if (lVar11 == 0) {
        lVar11 = FUN_0333d16c(0,1);
        *(long *)(lVar10 + 0x38d490) = lVar11;
      }
      plVar7 = *(long **)(*(long *)(lVar11 + 8) + 0x58);
      (**(code **)(*plVar7 + 0x18))(plVar7,lVar9,(ulong)uVar1 << 2);
    }
    if (pvVar8 == (void *)0x0) {
      lVar10 = 0;
    }
    else {
      lVar10 = (long)pvVar8 - (long)puVar12;
    }
    param_1[10] = lVar10;
    *(int *)(param_1 + 0xb) = iVar4;
    *(uint *)((long)param_1 + 0x5c) = uVar6 | 0x80000000;
    memcpy((void *)(lVar10 + (long)puVar12),pvVar2,(long)iVar4 << 2);
  }
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0x60);
  return;
}


