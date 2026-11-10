/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f8879c; name: FUN_02f8879c
 */


void FUN_02f8879c(long param_1,long param_2)

{
  long *plVar1;
  int iVar2;
  uint uVar3;
  void *pvVar4;
  uint uVar5;
  uint uVar6;
  long *plVar7;
  void *pvVar8;
  void *pvVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 local_78;
  undefined *puStack_70;
  undefined8 local_68;
  
  uVar10 = *(uint *)(param_1 + 0x24);
  uVar5 = *(uint *)(param_2 + 0x20);
  uVar6 = uVar10 & 0x7fffffff;
  if ((int)(uVar10 & 0x7fffffff) <= (int)*(uint *)(param_1 + 0x20)) {
    uVar6 = *(uint *)(param_1 + 0x20);
  }
  plVar1 = (long *)(param_1 + 0x18);
  if ((int)uVar6 < (int)uVar5) {
    lVar12 = tpidr_el0;
    lVar11 = *(long *)(lVar12 + 0x38d490);
    if (lVar11 == 0) {
      lVar11 = FUN_0333d16c(0,1);
      *(long *)(lVar12 + 0x38d490) = lVar11;
    }
    plVar7 = *(long **)(*(long *)(lVar11 + 8) + 0x58);
    pvVar8 = (void *)(**(code **)(*plVar7 + 0x10))(plVar7,(long)(int)uVar5 << 2,0);
    pvVar4 = (void *)0x0;
    if (*(long *)(param_1 + 0x18) != 0) {
      pvVar4 = (void *)(*(long *)(param_1 + 0x18) + (long)plVar1);
    }
    memcpy(pvVar8,pvVar4,(long)*(int *)(param_1 + 0x20) << 2);
    if ((int)*(uint *)(param_1 + 0x24) < 0) {
      uVar6 = *(uint *)(param_1 + 0x24) & 0x7fffffff;
      if ((int)uVar6 <= (int)*(uint *)(param_1 + 0x20)) {
        uVar6 = *(uint *)(param_1 + 0x20);
      }
      lVar11 = 0;
      if (*(long *)(param_1 + 0x18) != 0) {
        lVar11 = *(long *)(param_1 + 0x18) + (long)plVar1;
      }
      lVar13 = *(long *)(lVar12 + 0x38d490);
      if (lVar13 == 0) {
        lVar13 = FUN_0333d16c(0,1);
        *(long *)(lVar12 + 0x38d490) = lVar13;
      }
      plVar7 = *(long **)(*(long *)(lVar13 + 8) + 0x58);
      (**(code **)(*plVar7 + 0x18))(plVar7,lVar11,(ulong)uVar6 << 2);
    }
    lVar12 = 0;
    if (pvVar8 != (void *)0x0) {
      lVar12 = (long)pvVar8 - (long)plVar1;
    }
    *(long *)(param_1 + 0x18) = lVar12;
    uVar10 = uVar5 | 0x80000000;
    *(uint *)(param_1 + 0x24) = uVar10;
    uVar5 = *(uint *)(param_2 + 0x20);
  }
  lVar12 = *(long *)(param_2 + 0x18);
  pvVar4 = (void *)0x0;
  if (lVar12 != 0) {
    pvVar4 = (void *)(lVar12 + param_2 + 0x18);
  }
  if ((0 < (int)uVar5) && (pvVar4 != (void *)0x0)) {
    uVar6 = *(uint *)(param_1 + 0x20);
    iVar2 = uVar6 + uVar5;
    if (uVar10 == 0) {
      *(uint *)(param_1 + 0x24) = uVar6;
      uVar10 = uVar6;
    }
    uVar3 = uVar10 & 0x7fffffff;
    if ((int)(uVar10 & 0x7fffffff) <= (int)uVar6) {
      uVar3 = uVar6;
    }
    if ((int)uVar3 < iVar2) {
      uVar10 = iVar2 - 1U | (int)(iVar2 - 1U) >> 0x10;
      uVar10 = uVar10 | (int)uVar10 >> 8;
      uVar10 = uVar10 | (int)uVar10 >> 4;
      uVar10 = uVar10 | (int)uVar10 >> 2;
      uVar10 = (uVar10 | (int)uVar10 >> 1) + 1;
      if ((int)uVar10 < iVar2) {
        local_68 = 0;
        local_78 = 0;
        puStack_70 = PTR_DAT_04372528;
        FUN_03320b50(0x5d9e6698,"../..\\Common/Base/Container/RelArray/hkRelArray.inl",0x1e8,
                     "Capacity reservation overflow",&local_78);
      }
      lVar12 = tpidr_el0;
      lVar11 = *(long *)(lVar12 + 0x38d490);
      if (lVar11 == 0) {
        lVar11 = FUN_0333d16c(0,1);
        *(long *)(lVar12 + 0x38d490) = lVar11;
      }
      plVar7 = *(long **)(*(long *)(lVar11 + 8) + 0x58);
      pvVar9 = (void *)(**(code **)(*plVar7 + 0x10))
                                 (plVar7,-(ulong)(uVar10 >> 0x1f) & 0xfffffffc00000000 |
                                         (ulong)uVar10 << 2,0);
      pvVar8 = (void *)0x0;
      if (*(long *)(param_1 + 0x18) != 0) {
        pvVar8 = (void *)(*(long *)(param_1 + 0x18) + (long)plVar1);
      }
      memcpy(pvVar9,pvVar8,(long)*(int *)(param_1 + 0x20) << 2);
      if ((int)*(uint *)(param_1 + 0x24) < 0) {
        uVar3 = *(uint *)(param_1 + 0x24) & 0x7fffffff;
        if ((int)uVar3 <= (int)*(uint *)(param_1 + 0x20)) {
          uVar3 = *(uint *)(param_1 + 0x20);
        }
        lVar11 = 0;
        if (*(long *)(param_1 + 0x18) != 0) {
          lVar11 = *(long *)(param_1 + 0x18) + (long)plVar1;
        }
        lVar13 = *(long *)(lVar12 + 0x38d490);
        if (lVar13 == 0) {
          lVar13 = FUN_0333d16c(0,1);
          *(long *)(lVar12 + 0x38d490) = lVar13;
        }
        plVar7 = *(long **)(*(long *)(lVar13 + 8) + 0x58);
        (**(code **)(*plVar7 + 0x18))(plVar7,lVar11,(ulong)uVar3 << 2);
      }
      lVar12 = 0;
      if (pvVar9 != (void *)0x0) {
        lVar12 = (long)pvVar9 - (long)plVar1;
      }
      *(uint *)(param_1 + 0x24) = uVar10 | 0x80000000;
      *(long *)(param_1 + 0x18) = lVar12;
    }
    else {
      lVar12 = *plVar1;
    }
    *(int *)(param_1 + 0x20) = iVar2;
    memcpy((void *)((long)plVar1 + (long)(int)uVar6 * 4 + lVar12),pvVar4,
           -(ulong)(uVar5 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar5 << 2);
  }
  uVar10 = *(uint *)(param_1 + 0x34);
  uVar5 = *(uint *)(param_2 + 0x30);
  uVar6 = uVar10 & 0x7fffffff;
  if ((int)(uVar10 & 0x7fffffff) <= (int)*(uint *)(param_1 + 0x30)) {
    uVar6 = *(uint *)(param_1 + 0x30);
  }
  plVar1 = (long *)(param_1 + 0x28);
  if ((int)uVar6 < (int)uVar5) {
    lVar12 = tpidr_el0;
    lVar11 = *(long *)(lVar12 + 0x38d490);
    if (lVar11 == 0) {
      lVar11 = FUN_0333d16c(0,1);
      *(long *)(lVar12 + 0x38d490) = lVar11;
    }
    plVar7 = *(long **)(*(long *)(lVar11 + 8) + 0x58);
    pvVar8 = (void *)(**(code **)(*plVar7 + 0x10))(plVar7,(long)(int)uVar5 << 1,0);
    pvVar4 = (void *)0x0;
    if (*(long *)(param_1 + 0x28) != 0) {
      pvVar4 = (void *)(*(long *)(param_1 + 0x28) + (long)plVar1);
    }
    memcpy(pvVar8,pvVar4,(long)*(int *)(param_1 + 0x30) << 1);
    if ((int)*(uint *)(param_1 + 0x34) < 0) {
      uVar6 = *(uint *)(param_1 + 0x34) & 0x7fffffff;
      if ((int)uVar6 <= (int)*(uint *)(param_1 + 0x30)) {
        uVar6 = *(uint *)(param_1 + 0x30);
      }
      lVar11 = 0;
      if (*(long *)(param_1 + 0x28) != 0) {
        lVar11 = *(long *)(param_1 + 0x28) + (long)plVar1;
      }
      lVar13 = *(long *)(lVar12 + 0x38d490);
      if (lVar13 == 0) {
        lVar13 = FUN_0333d16c(0,1);
        *(long *)(lVar12 + 0x38d490) = lVar13;
      }
      plVar7 = *(long **)(*(long *)(lVar13 + 8) + 0x58);
      (**(code **)(*plVar7 + 0x18))(plVar7,lVar11,uVar6 << 1);
    }
    lVar12 = 0;
    if (pvVar8 != (void *)0x0) {
      lVar12 = (long)pvVar8 - (long)plVar1;
    }
    *(long *)(param_1 + 0x28) = lVar12;
    uVar10 = uVar5 | 0x80000000;
    *(uint *)(param_1 + 0x34) = uVar10;
    uVar5 = *(uint *)(param_2 + 0x30);
  }
  lVar12 = *(long *)(param_2 + 0x28);
  pvVar4 = (void *)0x0;
  if (lVar12 != 0) {
    pvVar4 = (void *)(lVar12 + param_2 + 0x28);
  }
  if ((0 < (int)uVar5) && (pvVar4 != (void *)0x0)) {
    uVar6 = *(uint *)(param_1 + 0x30);
    iVar2 = uVar6 + uVar5;
    if (uVar10 == 0) {
      *(uint *)(param_1 + 0x34) = uVar6;
      uVar10 = uVar6;
    }
    uVar3 = uVar10 & 0x7fffffff;
    if ((int)(uVar10 & 0x7fffffff) <= (int)uVar6) {
      uVar3 = uVar6;
    }
    if ((int)uVar3 < iVar2) {
      uVar10 = iVar2 - 1U | (int)(iVar2 - 1U) >> 0x10;
      uVar10 = uVar10 | (int)uVar10 >> 8;
      uVar10 = uVar10 | (int)uVar10 >> 4;
      uVar10 = uVar10 | (int)uVar10 >> 2;
      uVar10 = (uVar10 | (int)uVar10 >> 1) + 1;
      if ((int)uVar10 < iVar2) {
        local_68 = 0;
        local_78 = 0;
        puStack_70 = PTR_DAT_04372528;
        FUN_03320b50(0x5d9e6698,"../..\\Common/Base/Container/RelArray/hkRelArray.inl",0x1e8,
                     "Capacity reservation overflow",&local_78);
      }
      lVar12 = tpidr_el0;
      lVar11 = *(long *)(lVar12 + 0x38d490);
      if (lVar11 == 0) {
        lVar11 = FUN_0333d16c(0,1);
        *(long *)(lVar12 + 0x38d490) = lVar11;
      }
      plVar7 = *(long **)(*(long *)(lVar11 + 8) + 0x58);
      pvVar9 = (void *)(**(code **)(*plVar7 + 0x10))
                                 (plVar7,-(ulong)(uVar10 >> 0x1f) & 0xfffffffe00000000 |
                                         (ulong)uVar10 << 1,0);
      pvVar8 = (void *)0x0;
      if (*(long *)(param_1 + 0x28) != 0) {
        pvVar8 = (void *)(*(long *)(param_1 + 0x28) + (long)plVar1);
      }
      memcpy(pvVar9,pvVar8,(long)*(int *)(param_1 + 0x30) << 1);
      if ((int)*(uint *)(param_1 + 0x34) < 0) {
        uVar3 = *(uint *)(param_1 + 0x34) & 0x7fffffff;
        if ((int)uVar3 <= (int)*(uint *)(param_1 + 0x30)) {
          uVar3 = *(uint *)(param_1 + 0x30);
        }
        lVar11 = 0;
        if (*(long *)(param_1 + 0x28) != 0) {
          lVar11 = *(long *)(param_1 + 0x28) + (long)plVar1;
        }
        lVar13 = *(long *)(lVar12 + 0x38d490);
        if (lVar13 == 0) {
          lVar13 = FUN_0333d16c(0,1);
          *(long *)(lVar12 + 0x38d490) = lVar13;
        }
        plVar7 = *(long **)(*(long *)(lVar13 + 8) + 0x58);
        (**(code **)(*plVar7 + 0x18))(plVar7,lVar11,uVar3 << 1);
      }
      lVar12 = 0;
      if (pvVar9 != (void *)0x0) {
        lVar12 = (long)pvVar9 - (long)plVar1;
      }
      *(uint *)(param_1 + 0x34) = uVar10 | 0x80000000;
      *(long *)(param_1 + 0x28) = lVar12;
    }
    else {
      lVar12 = *plVar1;
    }
    *(int *)(param_1 + 0x30) = iVar2;
    memcpy((void *)((long)plVar1 + (long)(int)uVar6 * 2 + lVar12),pvVar4,
           -(ulong)(uVar5 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar5 << 1);
  }
  uVar10 = *(uint *)(param_1 + 0x44);
  uVar5 = *(uint *)(param_2 + 0x40);
  uVar6 = uVar10 & 0x7fffffff;
  if ((int)(uVar10 & 0x7fffffff) <= (int)*(uint *)(param_1 + 0x40)) {
    uVar6 = *(uint *)(param_1 + 0x40);
  }
  plVar1 = (long *)(param_1 + 0x38);
  if ((int)uVar6 < (int)uVar5) {
    lVar12 = tpidr_el0;
    lVar11 = *(long *)(lVar12 + 0x38d490);
    if (lVar11 == 0) {
      lVar11 = FUN_0333d16c(0,1);
      *(long *)(lVar12 + 0x38d490) = lVar11;
    }
    plVar7 = *(long **)(*(long *)(lVar11 + 8) + 0x58);
    pvVar8 = (void *)(**(code **)(*plVar7 + 0x10))(plVar7,(long)(int)uVar5 << 2,0);
    pvVar4 = (void *)0x0;
    if (*(long *)(param_1 + 0x38) != 0) {
      pvVar4 = (void *)(*(long *)(param_1 + 0x38) + (long)plVar1);
    }
    memcpy(pvVar8,pvVar4,(long)*(int *)(param_1 + 0x40) << 2);
    if ((int)*(uint *)(param_1 + 0x44) < 0) {
      uVar6 = *(uint *)(param_1 + 0x44) & 0x7fffffff;
      if ((int)uVar6 <= (int)*(uint *)(param_1 + 0x40)) {
        uVar6 = *(uint *)(param_1 + 0x40);
      }
      lVar11 = 0;
      if (*(long *)(param_1 + 0x38) != 0) {
        lVar11 = *(long *)(param_1 + 0x38) + (long)plVar1;
      }
      lVar13 = *(long *)(lVar12 + 0x38d490);
      if (lVar13 == 0) {
        lVar13 = FUN_0333d16c(0,1);
        *(long *)(lVar12 + 0x38d490) = lVar13;
      }
      plVar7 = *(long **)(*(long *)(lVar13 + 8) + 0x58);
      (**(code **)(*plVar7 + 0x18))(plVar7,lVar11,(ulong)uVar6 << 2);
    }
    lVar12 = 0;
    if (pvVar8 != (void *)0x0) {
      lVar12 = (long)pvVar8 - (long)plVar1;
    }
    *(long *)(param_1 + 0x38) = lVar12;
    uVar10 = uVar5 | 0x80000000;
    *(uint *)(param_1 + 0x44) = uVar10;
    uVar5 = *(uint *)(param_2 + 0x40);
  }
  lVar12 = *(long *)(param_2 + 0x38);
  pvVar4 = (void *)0x0;
  if (lVar12 != 0) {
    pvVar4 = (void *)(lVar12 + param_2 + 0x38);
  }
  if ((0 < (int)uVar5) && (pvVar4 != (void *)0x0)) {
    uVar6 = *(uint *)(param_1 + 0x40);
    iVar2 = uVar6 + uVar5;
    if (uVar10 == 0) {
      *(uint *)(param_1 + 0x44) = uVar6;
      uVar10 = uVar6;
    }
    uVar3 = uVar10 & 0x7fffffff;
    if ((int)(uVar10 & 0x7fffffff) <= (int)uVar6) {
      uVar3 = uVar6;
    }
    if ((int)uVar3 < iVar2) {
      uVar10 = iVar2 - 1U | (int)(iVar2 - 1U) >> 0x10;
      uVar10 = uVar10 | (int)uVar10 >> 8;
      uVar10 = uVar10 | (int)uVar10 >> 4;
      uVar10 = uVar10 | (int)uVar10 >> 2;
      uVar10 = (uVar10 | (int)uVar10 >> 1) + 1;
      if ((int)uVar10 < iVar2) {
        local_68 = 0;
        local_78 = 0;
        puStack_70 = PTR_DAT_04372528;
        FUN_03320b50(0x5d9e6698,"../..\\Common/Base/Container/RelArray/hkRelArray.inl",0x1e8,
                     "Capacity reservation overflow",&local_78);
      }
      lVar12 = tpidr_el0;
      lVar11 = *(long *)(lVar12 + 0x38d490);
      if (lVar11 == 0) {
        lVar11 = FUN_0333d16c(0,1);
        *(long *)(lVar12 + 0x38d490) = lVar11;
      }
      plVar7 = *(long **)(*(long *)(lVar11 + 8) + 0x58);
      pvVar9 = (void *)(**(code **)(*plVar7 + 0x10))
                                 (plVar7,-(ulong)(uVar10 >> 0x1f) & 0xfffffffc00000000 |
                                         (ulong)uVar10 << 2,0);
      pvVar8 = (void *)0x0;
      if (*(long *)(param_1 + 0x38) != 0) {
        pvVar8 = (void *)(*(long *)(param_1 + 0x38) + (long)plVar1);
      }
      memcpy(pvVar9,pvVar8,(long)*(int *)(param_1 + 0x40) << 2);
      if ((int)*(uint *)(param_1 + 0x44) < 0) {
        uVar3 = *(uint *)(param_1 + 0x44) & 0x7fffffff;
        if ((int)uVar3 <= (int)*(uint *)(param_1 + 0x40)) {
          uVar3 = *(uint *)(param_1 + 0x40);
        }
        lVar11 = 0;
        if (*(long *)(param_1 + 0x38) != 0) {
          lVar11 = *(long *)(param_1 + 0x38) + (long)plVar1;
        }
        lVar13 = *(long *)(lVar12 + 0x38d490);
        if (lVar13 == 0) {
          lVar13 = FUN_0333d16c(0,1);
          *(long *)(lVar12 + 0x38d490) = lVar13;
        }
        plVar7 = *(long **)(*(long *)(lVar13 + 8) + 0x58);
        (**(code **)(*plVar7 + 0x18))(plVar7,lVar11,(ulong)uVar3 << 2);
      }
      lVar12 = 0;
      if (pvVar9 != (void *)0x0) {
        lVar12 = (long)pvVar9 - (long)plVar1;
      }
      *(uint *)(param_1 + 0x44) = uVar10 | 0x80000000;
      *(long *)(param_1 + 0x38) = lVar12;
    }
    else {
      lVar12 = *plVar1;
    }
    *(int *)(param_1 + 0x40) = iVar2;
    memcpy((void *)((long)plVar1 + (long)(int)uVar6 * 4 + lVar12),pvVar4,
           -(ulong)(uVar5 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar5 << 2);
  }
  uVar10 = *(uint *)(param_1 + 0x54);
  uVar5 = *(uint *)(param_2 + 0x50);
  uVar6 = uVar10 & 0x7fffffff;
  if ((int)(uVar10 & 0x7fffffff) <= (int)*(uint *)(param_1 + 0x50)) {
    uVar6 = *(uint *)(param_1 + 0x50);
  }
  plVar1 = (long *)(param_1 + 0x48);
  if ((int)uVar6 < (int)uVar5) {
    lVar12 = tpidr_el0;
    lVar11 = *(long *)(lVar12 + 0x38d490);
    if (lVar11 == 0) {
      lVar11 = FUN_0333d16c(0,1);
      *(long *)(lVar12 + 0x38d490) = lVar11;
    }
    plVar7 = *(long **)(*(long *)(lVar11 + 8) + 0x58);
    pvVar8 = (void *)(**(code **)(*plVar7 + 0x10))(plVar7,(long)(int)uVar5 << 5,0);
    pvVar4 = (void *)0x0;
    if (*(long *)(param_1 + 0x48) != 0) {
      pvVar4 = (void *)(*(long *)(param_1 + 0x48) + (long)plVar1);
    }
    memcpy(pvVar8,pvVar4,(long)*(int *)(param_1 + 0x50) << 5);
    if ((int)*(uint *)(param_1 + 0x54) < 0) {
      uVar6 = *(uint *)(param_1 + 0x54) & 0x7fffffff;
      if ((int)uVar6 <= (int)*(uint *)(param_1 + 0x50)) {
        uVar6 = *(uint *)(param_1 + 0x50);
      }
      lVar11 = 0;
      if (*(long *)(param_1 + 0x48) != 0) {
        lVar11 = *(long *)(param_1 + 0x48) + (long)plVar1;
      }
      lVar13 = *(long *)(lVar12 + 0x38d490);
      if (lVar13 == 0) {
        lVar13 = FUN_0333d16c(0,1);
        *(long *)(lVar12 + 0x38d490) = lVar13;
      }
      plVar7 = *(long **)(*(long *)(lVar13 + 8) + 0x58);
      (**(code **)(*plVar7 + 0x18))(plVar7,lVar11,(ulong)uVar6 << 5);
    }
    lVar12 = 0;
    if (pvVar8 != (void *)0x0) {
      lVar12 = (long)pvVar8 - (long)plVar1;
    }
    *(long *)(param_1 + 0x48) = lVar12;
    uVar10 = uVar5 | 0x80000000;
    *(uint *)(param_1 + 0x54) = uVar10;
    uVar5 = *(uint *)(param_2 + 0x50);
  }
  lVar12 = *(long *)(param_2 + 0x48);
  pvVar4 = (void *)0x0;
  if (lVar12 != 0) {
    pvVar4 = (void *)(lVar12 + param_2 + 0x48);
  }
  if ((0 < (int)uVar5) && (pvVar4 != (void *)0x0)) {
    uVar6 = *(uint *)(param_1 + 0x50);
    iVar2 = uVar6 + uVar5;
    if (uVar10 == 0) {
      *(uint *)(param_1 + 0x54) = uVar6;
      uVar10 = uVar6;
    }
    uVar3 = uVar10 & 0x7fffffff;
    if ((int)(uVar10 & 0x7fffffff) <= (int)uVar6) {
      uVar3 = uVar6;
    }
    if ((int)uVar3 < iVar2) {
      uVar10 = iVar2 - 1U | (int)(iVar2 - 1U) >> 0x10;
      uVar10 = uVar10 | (int)uVar10 >> 8;
      uVar10 = uVar10 | (int)uVar10 >> 4;
      uVar10 = uVar10 | (int)uVar10 >> 2;
      uVar10 = (uVar10 | (int)uVar10 >> 1) + 1;
      if ((int)uVar10 < iVar2) {
        local_68 = 0;
        local_78 = 0;
        puStack_70 = PTR_DAT_04372528;
        FUN_03320b50(0x5d9e6698,"../..\\Common/Base/Container/RelArray/hkRelArray.inl",0x1e8,
                     "Capacity reservation overflow",&local_78);
      }
      lVar12 = tpidr_el0;
      lVar11 = *(long *)(lVar12 + 0x38d490);
      if (lVar11 == 0) {
        lVar11 = FUN_0333d16c(0,1);
        *(long *)(lVar12 + 0x38d490) = lVar11;
      }
      plVar7 = *(long **)(*(long *)(lVar11 + 8) + 0x58);
      pvVar9 = (void *)(**(code **)(*plVar7 + 0x10))
                                 (plVar7,-(ulong)(uVar10 >> 0x1f) & 0xffffffe000000000 |
                                         (ulong)uVar10 << 5,0);
      pvVar8 = (void *)0x0;
      if (*(long *)(param_1 + 0x48) != 0) {
        pvVar8 = (void *)(*(long *)(param_1 + 0x48) + (long)plVar1);
      }
      memcpy(pvVar9,pvVar8,(long)*(int *)(param_1 + 0x50) << 5);
      if ((int)*(uint *)(param_1 + 0x54) < 0) {
        uVar3 = *(uint *)(param_1 + 0x54) & 0x7fffffff;
        if ((int)uVar3 <= (int)*(uint *)(param_1 + 0x50)) {
          uVar3 = *(uint *)(param_1 + 0x50);
        }
        lVar11 = 0;
        if (*(long *)(param_1 + 0x48) != 0) {
          lVar11 = *(long *)(param_1 + 0x48) + (long)plVar1;
        }
        lVar13 = *(long *)(lVar12 + 0x38d490);
        if (lVar13 == 0) {
          lVar13 = FUN_0333d16c(0,1);
          *(long *)(lVar12 + 0x38d490) = lVar13;
        }
        plVar7 = *(long **)(*(long *)(lVar13 + 8) + 0x58);
        (**(code **)(*plVar7 + 0x18))(plVar7,lVar11,(ulong)uVar3 << 5);
      }
      lVar12 = 0;
      if (pvVar9 != (void *)0x0) {
        lVar12 = (long)pvVar9 - (long)plVar1;
      }
      *(uint *)(param_1 + 0x54) = uVar10 | 0x80000000;
      *(long *)(param_1 + 0x48) = lVar12;
    }
    else {
      lVar12 = *plVar1;
    }
    *(int *)(param_1 + 0x50) = iVar2;
    memcpy((void *)((long)plVar1 + (long)(int)uVar6 * 0x20 + lVar12),pvVar4,
           -(ulong)(uVar5 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar5 << 5);
  }
  return;
}


