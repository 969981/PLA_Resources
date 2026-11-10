/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02fa1548; name: FUN_02fa1548
 */


/* WARNING: Removing unreachable block (ram,0x02fa1744) */

void FUN_02fa1548(undefined8 *param_1,long param_2,long param_3)

{
  long *plVar1;
  uint uVar2;
  void *pvVar3;
  int iVar4;
  uint uVar5;
  undefined1 uVar6;
  uint uVar7;
  undefined8 uVar8;
  long *plVar9;
  void *__dest;
  void *pvVar10;
  long lVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  long *plVar16;
  undefined8 *puVar17;
  uint uVar18;
  undefined8 local_78;
  undefined *puStack_70;
  undefined8 local_68;
  
  uVar6 = *(undefined1 *)(param_2 + 0x18);
  plVar1 = param_1 + 4;
  param_1[6] = 0;
  *param_1 = &PTR_LAB_042b7de0;
  param_1[1] = 0xffffffff;
  param_1[2] = 1;
  *(undefined1 *)(param_1 + 3) = uVar6;
  param_3 = param_3 - (long)plVar1;
  param_1[4] = param_3;
  plVar16 = param_1 + 5;
  *plVar16 = 0;
  puVar17 = param_1 + 7;
  *puVar17 = 0;
  param_1[8] = 0;
  lVar14 = *(long *)(param_2 + 0x38);
  iVar4 = *(int *)(param_2 + 0x40);
  pvVar3 = (void *)0x0;
  if (lVar14 != 0) {
    pvVar3 = (void *)(lVar14 + param_2 + 0x38);
  }
  if (0 < iVar4 && pvVar3 != (void *)0x0) {
    uVar7 = iVar4 - 1U | (int)(iVar4 - 1U) >> 0x10;
    *(undefined4 *)((long)param_1 + 0x44) = 0;
    uVar7 = uVar7 | (int)uVar7 >> 8;
    uVar7 = uVar7 | (int)uVar7 >> 4;
    uVar7 = uVar7 | (int)uVar7 >> 2;
    uVar7 = (uVar7 | (int)uVar7 >> 1) + 1;
    if ((int)uVar7 < iVar4) {
      local_68 = 0;
      local_78 = 0;
      puStack_70 = PTR_DAT_04372528;
      FUN_03320b50(0x5d9e6698,"../..\\Common/Base/Container/RelArray/hkRelArray.inl",0x1e8,
                   "Capacity reservation overflow",&local_78);
    }
    lVar14 = tpidr_el0;
    lVar11 = *(long *)(lVar14 + 0x38d490);
    if (lVar11 == 0) {
      lVar11 = FUN_0333d16c(0,1);
      *(long *)(lVar14 + 0x38d490) = lVar11;
    }
    plVar9 = *(long **)(*(long *)(lVar11 + 8) + 0x58);
    __dest = (void *)(**(code **)(*plVar9 + 0x10))
                               (plVar9,-(ulong)(uVar7 >> 0x1f) & 0xfffffffc00000000 |
                                       (ulong)uVar7 << 2,0);
    pvVar10 = (void *)0x0;
    if (param_1[7] != 0) {
      pvVar10 = (void *)(param_1[7] + (long)puVar17);
    }
    memcpy(__dest,pvVar10,(long)*(int *)(param_1 + 8) << 2);
    if ((int)*(uint *)((long)param_1 + 0x44) < 0) {
      uVar5 = *(uint *)((long)param_1 + 0x44) & 0x7fffffff;
      if ((int)uVar5 <= (int)*(uint *)(param_1 + 8)) {
        uVar5 = *(uint *)(param_1 + 8);
      }
      lVar11 = 0;
      if (param_1[7] != 0) {
        lVar11 = param_1[7] + (long)puVar17;
      }
      lVar13 = *(long *)(lVar14 + 0x38d490);
      if (lVar13 == 0) {
        lVar13 = FUN_0333d16c(0,1);
        *(long *)(lVar14 + 0x38d490) = lVar13;
      }
      plVar9 = *(long **)(*(long *)(lVar13 + 8) + 0x58);
      (**(code **)(*plVar9 + 0x18))(plVar9,lVar11,(ulong)uVar5 << 2);
      if (__dest == (void *)0x0) goto LAB_02fa188c;
LAB_02fa1668:
      lVar14 = (long)__dest - (long)puVar17;
    }
    else {
      if (__dest != (void *)0x0) goto LAB_02fa1668;
LAB_02fa188c:
      lVar14 = 0;
    }
    param_1[7] = lVar14;
    *(int *)(param_1 + 8) = iVar4;
    *(uint *)((long)param_1 + 0x44) = uVar7 | 0x80000000;
    memcpy((void *)(lVar14 + (long)puVar17),pvVar3,(long)iVar4 << 2);
    param_3 = param_1[4];
  }
  lVar14 = 0;
  if (param_3 != 0) {
    lVar14 = param_3 + (long)plVar1;
  }
  FUN_032d645c(lVar14);
  uVar7 = *(uint *)(param_2 + 0x30);
  if ((int)uVar7 < 1) {
    return;
  }
  uVar5 = *(uint *)(param_1 + 6);
  if (uVar7 == uVar5) goto LAB_02fa16b8;
  if (*(uint *)((long)param_1 + 0x34) == 0) {
    *(uint *)((long)param_1 + 0x34) = uVar5;
    uVar18 = uVar7 - uVar5;
    uVar12 = uVar5;
    if (uVar18 == 0 || (int)uVar7 < (int)uVar5) goto LAB_02fa18a4;
  }
  else {
    uVar18 = uVar7 - uVar5;
    uVar12 = *(uint *)((long)param_1 + 0x34);
    if (uVar18 == 0 || (int)uVar7 < (int)uVar5) {
LAB_02fa18a4:
      *(uint *)(param_1 + 6) = uVar7;
      goto LAB_02fa16b8;
    }
  }
  uVar2 = uVar12 & 0x7fffffff;
  if ((int)(uVar12 & 0x7fffffff) <= (int)uVar5) {
    uVar2 = uVar5;
  }
  if ((int)uVar2 < (int)uVar7) {
    uVar12 = uVar7 - 1 | (int)(uVar7 - 1) >> 0x10;
    uVar12 = uVar12 | (int)uVar12 >> 8;
    uVar12 = uVar12 | (int)uVar12 >> 4;
    uVar12 = uVar12 | (int)uVar12 >> 2;
    uVar12 = (uVar12 | (int)uVar12 >> 1) + 1;
    if ((int)uVar12 < (int)uVar7) {
      local_68 = 0;
      local_78 = 0;
      puStack_70 = PTR_DAT_04372528;
      FUN_03320b50(0x5d9e6698,"../..\\Common/Base/Container/RelArray/hkRelArray.inl",0x1e8,
                   "Capacity reservation overflow",&local_78);
    }
    lVar14 = tpidr_el0;
    lVar11 = *(long *)(lVar14 + 0x38d490);
    if (lVar11 == 0) {
      lVar11 = FUN_0333d16c(0,1);
      *(long *)(lVar14 + 0x38d490) = lVar11;
    }
    plVar9 = *(long **)(*(long *)(lVar11 + 8) + 0x58);
    pvVar10 = (void *)(**(code **)(*plVar9 + 0x10))
                                (plVar9,-(ulong)(uVar12 >> 0x1f) & 0xfffffff800000000 |
                                        (ulong)uVar12 << 3,0);
    pvVar3 = (void *)0x0;
    if (param_1[5] != 0) {
      pvVar3 = (void *)(param_1[5] + (long)plVar16);
    }
    memcpy(pvVar10,pvVar3,(long)*(int *)(param_1 + 6) << 3);
    if ((int)*(uint *)((long)param_1 + 0x34) < 0) {
      uVar2 = *(uint *)((long)param_1 + 0x34) & 0x7fffffff;
      if ((int)uVar2 <= (int)*(uint *)(param_1 + 6)) {
        uVar2 = *(uint *)(param_1 + 6);
      }
      lVar11 = 0;
      if (param_1[5] != 0) {
        lVar11 = param_1[5] + (long)plVar16;
      }
      lVar13 = *(long *)(lVar14 + 0x38d490);
      if (lVar13 == 0) {
        lVar13 = FUN_0333d16c(0,1);
        *(long *)(lVar14 + 0x38d490) = lVar13;
      }
      plVar9 = *(long **)(*(long *)(lVar13 + 8) + 0x58);
      (**(code **)(*plVar9 + 0x18))(plVar9,lVar11,(ulong)uVar2 << 3);
    }
    lVar14 = 0;
    if (pvVar10 != (void *)0x0) {
      lVar14 = (long)pvVar10 - (long)plVar16;
    }
    *(uint *)((long)param_1 + 0x34) = uVar12 | 0x80000000;
    param_1[5] = lVar14;
  }
  else {
    lVar14 = *plVar16;
  }
  *(uint *)(param_1 + 6) = uVar7;
  if (0 < (int)uVar18) {
    memset((void *)((long)plVar16 + (long)(int)uVar5 * 8 + lVar14),0,(ulong)uVar18 << 3);
  }
LAB_02fa16b8:
  uVar15 = 0;
  do {
    lVar14 = *(long *)(param_2 + 0x28 + uVar15 * 8 + *(long *)(param_2 + 0x28));
    if (lVar14 != 0) {
      lVar11 = 0;
      if (*plVar1 != 0) {
        lVar11 = *plVar1 + (long)plVar1;
      }
      plVar9 = (long *)(lVar11 + 0x48 + (uVar15 & 0xffff) * 0x40 + *(long *)(lVar11 + 0x48) + 0x30);
      lVar13 = *plVar9;
      lVar11 = 0;
      if (lVar13 != 0) {
        lVar11 = lVar13 + (long)plVar9;
      }
      (**(code **)(DAT_0442d3b0 + (ulong)*(byte *)(lVar14 + 0x18) * 0x40 + 0x4038))
                (&local_78,lVar14,lVar11);
      uVar8 = local_78;
      local_78 = 0;
      *(undefined8 *)((long)plVar16 + uVar15 * 8 + *plVar16) = uVar8;
    }
    uVar15 = uVar15 + 1;
  } while (uVar7 != uVar15);
  return;
}


