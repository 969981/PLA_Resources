/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02fb2a80; name: FUN_02fb2a80
 */


void FUN_02fb2a80(long param_1,long param_2)

{
  uint uVar1;
  void *pvVar2;
  void *pvVar3;
  int iVar4;
  uint uVar5;
  long *plVar6;
  void *pvVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 local_78;
  undefined *puStack_70;
  undefined8 local_68;
  
  FUN_02fb3030();
  puVar11 = (undefined8 *)(param_1 + 0x70);
  *puVar11 = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  lVar9 = *(long *)(param_2 + 0x70);
  iVar4 = *(int *)(param_2 + 0x78);
  pvVar2 = (void *)0x0;
  if (lVar9 != 0) {
    pvVar2 = (void *)(lVar9 + param_2 + 0x70);
  }
  if (0 < iVar4 && pvVar2 != (void *)0x0) {
    uVar5 = iVar4 - 1U | (int)(iVar4 - 1U) >> 0x10;
    *(undefined4 *)(param_1 + 0x7c) = 0;
    uVar5 = uVar5 | (int)uVar5 >> 8;
    uVar5 = uVar5 | (int)uVar5 >> 4;
    uVar5 = uVar5 | (int)uVar5 >> 2;
    uVar5 = (uVar5 | (int)uVar5 >> 1) + 1;
    if ((int)uVar5 < iVar4) {
      local_68 = 0;
      local_78 = 0;
      puStack_70 = PTR_DAT_04372528;
      FUN_03320b50(0x5d9e6698,"../..\\Common/Base/Container/RelArray/hkRelArray.inl",0x1e8,
                   "Capacity reservation overflow",&local_78);
    }
    lVar9 = tpidr_el0;
    lVar8 = *(long *)(lVar9 + 0x38d490);
    if (lVar8 == 0) {
      lVar8 = FUN_0333d16c(0,1);
      *(long *)(lVar9 + 0x38d490) = lVar8;
    }
    plVar6 = *(long **)(*(long *)(lVar8 + 8) + 0x58);
    pvVar7 = (void *)(**(code **)(*plVar6 + 0x10))
                               (plVar6,-(ulong)(uVar5 >> 0x1f) & 0xfffffffc00000000 |
                                       (ulong)uVar5 << 2,0);
    pvVar3 = (void *)0x0;
    if (*(long *)(param_1 + 0x70) != 0) {
      pvVar3 = (void *)(*(long *)(param_1 + 0x70) + (long)puVar11);
    }
    memcpy(pvVar7,pvVar3,(long)*(int *)(param_1 + 0x78) << 2);
    if ((int)*(uint *)(param_1 + 0x7c) < 0) {
      uVar1 = *(uint *)(param_1 + 0x7c) & 0x7fffffff;
      if ((int)uVar1 <= (int)*(uint *)(param_1 + 0x78)) {
        uVar1 = *(uint *)(param_1 + 0x78);
      }
      lVar8 = 0;
      if (*(long *)(param_1 + 0x70) != 0) {
        lVar8 = *(long *)(param_1 + 0x70) + (long)puVar11;
      }
      lVar10 = *(long *)(lVar9 + 0x38d490);
      if (lVar10 == 0) {
        lVar10 = FUN_0333d16c(0,1);
        *(long *)(lVar9 + 0x38d490) = lVar10;
      }
      plVar6 = *(long **)(*(long *)(lVar10 + 8) + 0x58);
      (**(code **)(*plVar6 + 0x18))(plVar6,lVar8,(ulong)uVar1 << 2);
    }
    if (pvVar7 == (void *)0x0) {
      lVar9 = 0;
    }
    else {
      lVar9 = (long)pvVar7 - (long)puVar11;
    }
    *(long *)(param_1 + 0x70) = lVar9;
    *(int *)(param_1 + 0x78) = iVar4;
    *(uint *)(param_1 + 0x7c) = uVar5 | 0x80000000;
    memcpy((void *)(lVar9 + (long)puVar11),pvVar2,(long)iVar4 << 2);
  }
  puVar11 = (undefined8 *)(param_1 + 0x80);
  *puVar11 = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  lVar9 = *(long *)(param_2 + 0x80);
  iVar4 = *(int *)(param_2 + 0x88);
  pvVar2 = (void *)0x0;
  if (lVar9 != 0) {
    pvVar2 = (void *)(lVar9 + param_2 + 0x80);
  }
  if (0 < iVar4 && pvVar2 != (void *)0x0) {
    uVar5 = iVar4 - 1U | (int)(iVar4 - 1U) >> 0x10;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    uVar5 = uVar5 | (int)uVar5 >> 8;
    uVar5 = uVar5 | (int)uVar5 >> 4;
    uVar5 = uVar5 | (int)uVar5 >> 2;
    uVar5 = (uVar5 | (int)uVar5 >> 1) + 1;
    if ((int)uVar5 < iVar4) {
      local_68 = 0;
      local_78 = 0;
      puStack_70 = PTR_DAT_04372528;
      FUN_03320b50(0x5d9e6698,"../..\\Common/Base/Container/RelArray/hkRelArray.inl",0x1e8,
                   "Capacity reservation overflow",&local_78);
    }
    lVar9 = tpidr_el0;
    lVar8 = *(long *)(lVar9 + 0x38d490);
    if (lVar8 == 0) {
      lVar8 = FUN_0333d16c(0,1);
      *(long *)(lVar9 + 0x38d490) = lVar8;
    }
    plVar6 = *(long **)(*(long *)(lVar8 + 8) + 0x58);
    pvVar7 = (void *)(**(code **)(*plVar6 + 0x10))
                               (plVar6,-(ulong)(uVar5 >> 0x1f) & 0xfffffff800000000 |
                                       (ulong)uVar5 << 3,0);
    pvVar3 = (void *)0x0;
    if (*(long *)(param_1 + 0x80) != 0) {
      pvVar3 = (void *)(*(long *)(param_1 + 0x80) + (long)puVar11);
    }
    memcpy(pvVar7,pvVar3,(long)*(int *)(param_1 + 0x88) << 3);
    if ((int)*(uint *)(param_1 + 0x8c) < 0) {
      uVar1 = *(uint *)(param_1 + 0x8c) & 0x7fffffff;
      if ((int)uVar1 <= (int)*(uint *)(param_1 + 0x88)) {
        uVar1 = *(uint *)(param_1 + 0x88);
      }
      lVar8 = 0;
      if (*(long *)(param_1 + 0x80) != 0) {
        lVar8 = *(long *)(param_1 + 0x80) + (long)puVar11;
      }
      lVar10 = *(long *)(lVar9 + 0x38d490);
      if (lVar10 == 0) {
        lVar10 = FUN_0333d16c(0,1);
        *(long *)(lVar9 + 0x38d490) = lVar10;
      }
      plVar6 = *(long **)(*(long *)(lVar10 + 8) + 0x58);
      (**(code **)(*plVar6 + 0x18))(plVar6,lVar8,(ulong)uVar1 << 3);
    }
    lVar9 = 0;
    if (pvVar7 != (void *)0x0) {
      lVar9 = (long)pvVar7 - (long)puVar11;
    }
    *(int *)(param_1 + 0x88) = iVar4;
    *(uint *)(param_1 + 0x8c) = uVar5 | 0x80000000;
    *(long *)(param_1 + 0x80) = lVar9;
    memcpy((void *)(lVar9 + (long)puVar11),pvVar2,(long)iVar4 << 3);
  }
  puVar11 = (undefined8 *)(param_1 + 0x90);
  *puVar11 = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  lVar9 = *(long *)(param_2 + 0x90);
  iVar4 = *(int *)(param_2 + 0x98);
  pvVar2 = (void *)0x0;
  if (lVar9 != 0) {
    pvVar2 = (void *)(lVar9 + param_2 + 0x90);
  }
  if ((0 < iVar4) && (pvVar2 != (void *)0x0)) {
    uVar5 = iVar4 - 1U | (int)(iVar4 - 1U) >> 0x10;
    *(undefined4 *)(param_1 + 0x9c) = 0;
    uVar5 = uVar5 | (int)uVar5 >> 8;
    uVar5 = uVar5 | (int)uVar5 >> 4;
    uVar5 = uVar5 | (int)uVar5 >> 2;
    uVar5 = (uVar5 | (int)uVar5 >> 1) + 1;
    if ((int)uVar5 < iVar4) {
      local_68 = 0;
      local_78 = 0;
      puStack_70 = PTR_DAT_04372528;
      FUN_03320b50(0x5d9e6698,"../..\\Common/Base/Container/RelArray/hkRelArray.inl",0x1e8,
                   "Capacity reservation overflow",&local_78);
    }
    lVar9 = tpidr_el0;
    lVar8 = *(long *)(lVar9 + 0x38d490);
    if (lVar8 == 0) {
      lVar8 = FUN_0333d16c(0,1);
      *(long *)(lVar9 + 0x38d490) = lVar8;
    }
    plVar6 = *(long **)(*(long *)(lVar8 + 8) + 0x58);
    pvVar7 = (void *)(**(code **)(*plVar6 + 0x10))
                               (plVar6,-(ulong)(uVar5 >> 0x1f) & 0xfffffffc00000000 |
                                       (ulong)uVar5 << 2,0);
    pvVar3 = (void *)0x0;
    if (*(long *)(param_1 + 0x90) != 0) {
      pvVar3 = (void *)(*(long *)(param_1 + 0x90) + (long)puVar11);
    }
    memcpy(pvVar7,pvVar3,(long)*(int *)(param_1 + 0x98) << 2);
    if ((int)*(uint *)(param_1 + 0x9c) < 0) {
      uVar1 = *(uint *)(param_1 + 0x9c) & 0x7fffffff;
      if ((int)uVar1 <= (int)*(uint *)(param_1 + 0x98)) {
        uVar1 = *(uint *)(param_1 + 0x98);
      }
      lVar8 = 0;
      if (*(long *)(param_1 + 0x90) != 0) {
        lVar8 = *(long *)(param_1 + 0x90) + (long)puVar11;
      }
      lVar10 = *(long *)(lVar9 + 0x38d490);
      if (lVar10 == 0) {
        lVar10 = FUN_0333d16c(0,1);
        *(long *)(lVar9 + 0x38d490) = lVar10;
      }
      plVar6 = *(long **)(*(long *)(lVar10 + 8) + 0x58);
      (**(code **)(*plVar6 + 0x18))(plVar6,lVar8,(ulong)uVar1 << 2);
    }
    lVar9 = 0;
    if (pvVar7 != (void *)0x0) {
      lVar9 = (long)pvVar7 - (long)puVar11;
    }
    *(int *)(param_1 + 0x98) = iVar4;
    *(uint *)(param_1 + 0x9c) = uVar5 | 0x80000000;
    *(long *)(param_1 + 0x90) = lVar9;
    memcpy((void *)(lVar9 + (long)puVar11),pvVar2,(long)iVar4 << 2);
  }
  return;
}


