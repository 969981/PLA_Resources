/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02fb24f8; name: FUN_02fb24f8
 */


void FUN_02fb24f8(long *param_1,long *param_2)

{
  uint uVar1;
  void *pvVar2;
  void *pvVar3;
  int iVar4;
  uint uVar5;
  long *plVar6;
  void *pvVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 local_78;
  undefined *puStack_70;
  undefined8 local_68;
  
  *param_1 = 0;
  param_1[1] = 0;
  iVar4 = (int)param_2[1];
  pvVar2 = (void *)0x0;
  if (*param_2 != 0) {
    pvVar2 = (void *)(*param_2 + (long)param_2);
  }
  if (0 < iVar4 && pvVar2 != (void *)0x0) {
    uVar5 = iVar4 - 1U | (int)(iVar4 - 1U) >> 0x10;
    *(undefined4 *)((long)param_1 + 0xc) = 0;
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
    lVar11 = tpidr_el0;
    lVar9 = *(long *)(lVar11 + 0x38d490);
    if (lVar9 == 0) {
      lVar9 = FUN_0333d16c(0,1);
      *(long *)(lVar11 + 0x38d490) = lVar9;
    }
    plVar6 = *(long **)(*(long *)(lVar9 + 8) + 0x58);
    pvVar7 = (void *)(**(code **)(*plVar6 + 0x10))
                               (plVar6,-(ulong)(uVar5 >> 0x1f) & 0xfffffff800000000 |
                                       (ulong)uVar5 << 3,0);
    pvVar3 = (void *)0x0;
    if (*param_1 != 0) {
      pvVar3 = (void *)(*param_1 + (long)param_1);
    }
    memcpy(pvVar7,pvVar3,(long)(int)param_1[1] << 3);
    if ((int)*(uint *)((long)param_1 + 0xc) < 0) {
      uVar1 = *(uint *)((long)param_1 + 0xc) & 0x7fffffff;
      if ((int)uVar1 <= (int)*(uint *)(param_1 + 1)) {
        uVar1 = *(uint *)(param_1 + 1);
      }
      lVar9 = 0;
      if (*param_1 != 0) {
        lVar9 = *param_1 + (long)param_1;
      }
      lVar10 = *(long *)(lVar11 + 0x38d490);
      if (lVar10 == 0) {
        lVar10 = FUN_0333d16c(0,1);
        *(long *)(lVar11 + 0x38d490) = lVar10;
      }
      plVar6 = *(long **)(*(long *)(lVar10 + 8) + 0x58);
      (**(code **)(*plVar6 + 0x18))(plVar6,lVar9,(ulong)uVar1 << 3);
    }
    lVar11 = 0;
    if (pvVar7 != (void *)0x0) {
      lVar11 = (long)pvVar7 - (long)param_1;
    }
    *(int *)(param_1 + 1) = iVar4;
    *(uint *)((long)param_1 + 0xc) = uVar5 | 0x80000000;
    *param_1 = lVar11;
    memcpy((void *)(lVar11 + (long)param_1),pvVar2,(long)iVar4 << 3);
  }
  plVar6 = param_1 + 2;
  *plVar6 = 0;
  param_1[3] = 0;
  lVar11 = param_2[2];
  iVar4 = (int)param_2[3];
  pvVar2 = (void *)0x0;
  if (lVar11 != 0) {
    pvVar2 = (void *)(lVar11 + (long)(param_2 + 2));
  }
  if (0 < iVar4 && pvVar2 != (void *)0x0) {
    uVar5 = iVar4 - 1U | (int)(iVar4 - 1U) >> 0x10;
    *(undefined4 *)((long)param_1 + 0x1c) = 0;
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
    lVar11 = tpidr_el0;
    lVar9 = *(long *)(lVar11 + 0x38d490);
    if (lVar9 == 0) {
      lVar9 = FUN_0333d16c(0,1);
      *(long *)(lVar11 + 0x38d490) = lVar9;
    }
    plVar8 = *(long **)(*(long *)(lVar9 + 8) + 0x58);
    pvVar7 = (void *)(**(code **)(*plVar8 + 0x10))(plVar8,(long)(int)uVar5,0);
    pvVar3 = (void *)0x0;
    if (param_1[2] != 0) {
      pvVar3 = (void *)(param_1[2] + (long)plVar6);
    }
    memcpy(pvVar7,pvVar3,(long)(int)param_1[3]);
    if ((int)*(uint *)((long)param_1 + 0x1c) < 0) {
      uVar1 = *(uint *)((long)param_1 + 0x1c) & 0x7fffffff;
      if ((int)uVar1 <= (int)*(uint *)(param_1 + 3)) {
        uVar1 = *(uint *)(param_1 + 3);
      }
      lVar9 = 0;
      if (param_1[2] != 0) {
        lVar9 = param_1[2] + (long)plVar6;
      }
      lVar10 = *(long *)(lVar11 + 0x38d490);
      if (lVar10 == 0) {
        lVar10 = FUN_0333d16c(0,1);
        *(long *)(lVar11 + 0x38d490) = lVar10;
      }
      plVar8 = *(long **)(*(long *)(lVar10 + 8) + 0x58);
      (**(code **)(*plVar8 + 0x18))(plVar8,lVar9,uVar1);
    }
    lVar11 = 0;
    if (pvVar7 != (void *)0x0) {
      lVar11 = (long)pvVar7 - (long)plVar6;
    }
    *(int *)(param_1 + 3) = iVar4;
    *(uint *)((long)param_1 + 0x1c) = uVar5 | 0x80000000;
    param_1[2] = lVar11;
    memcpy((void *)(lVar11 + (long)plVar6),pvVar2,(long)iVar4);
  }
  plVar6 = param_1 + 4;
  *plVar6 = 0;
  param_1[5] = 0;
  lVar11 = param_2[4];
  iVar4 = (int)param_2[5];
  pvVar2 = (void *)0x0;
  if (lVar11 != 0) {
    pvVar2 = (void *)(lVar11 + (long)(param_2 + 4));
  }
  if ((0 < iVar4) && (pvVar2 != (void *)0x0)) {
    uVar5 = iVar4 - 1U | (int)(iVar4 - 1U) >> 0x10;
    *(undefined4 *)((long)param_1 + 0x2c) = 0;
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
    lVar11 = tpidr_el0;
    lVar9 = *(long *)(lVar11 + 0x38d490);
    if (lVar9 == 0) {
      lVar9 = FUN_0333d16c(0,1);
      *(long *)(lVar11 + 0x38d490) = lVar9;
    }
    plVar8 = *(long **)(*(long *)(lVar9 + 8) + 0x58);
    pvVar7 = (void *)(**(code **)(*plVar8 + 0x10))
                               (plVar8,-(ulong)(uVar5 >> 0x1f) & 0xfffffffc00000000 |
                                       (ulong)uVar5 << 2,0);
    pvVar3 = (void *)0x0;
    if (param_1[4] != 0) {
      pvVar3 = (void *)(param_1[4] + (long)plVar6);
    }
    memcpy(pvVar7,pvVar3,(long)(int)param_1[5] << 2);
    if ((int)*(uint *)((long)param_1 + 0x2c) < 0) {
      uVar1 = *(uint *)((long)param_1 + 0x2c) & 0x7fffffff;
      if ((int)uVar1 <= (int)*(uint *)(param_1 + 5)) {
        uVar1 = *(uint *)(param_1 + 5);
      }
      lVar9 = 0;
      if (param_1[4] != 0) {
        lVar9 = param_1[4] + (long)plVar6;
      }
      lVar10 = *(long *)(lVar11 + 0x38d490);
      if (lVar10 == 0) {
        lVar10 = FUN_0333d16c(0,1);
        *(long *)(lVar11 + 0x38d490) = lVar10;
      }
      plVar8 = *(long **)(*(long *)(lVar10 + 8) + 0x58);
      (**(code **)(*plVar8 + 0x18))(plVar8,lVar9,(ulong)uVar1 << 2);
    }
    lVar11 = 0;
    if (pvVar7 != (void *)0x0) {
      lVar11 = (long)pvVar7 - (long)plVar6;
    }
    *(int *)(param_1 + 5) = iVar4;
    *(uint *)((long)param_1 + 0x2c) = uVar5 | 0x80000000;
    param_1[4] = lVar11;
    memcpy((void *)(lVar11 + (long)plVar6),pvVar2,(long)iVar4 << 2);
  }
  return;
}


