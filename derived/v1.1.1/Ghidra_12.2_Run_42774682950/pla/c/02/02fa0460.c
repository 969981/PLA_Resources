/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02fa0460; name: FUN_02fa0460
 */


/* WARNING: Removing unreachable block (ram,0x02fa0588) */

void FUN_02fa0460(undefined8 *param_1,long param_2,long param_3)

{
  long *plVar1;
  uint uVar2;
  void *__src;
  uint uVar3;
  uint uVar4;
  undefined1 uVar5;
  undefined8 uVar6;
  long lVar7;
  void *__dest;
  long *plVar8;
  long lVar9;
  uint uVar10;
  long lVar11;
  ulong uVar12;
  long *plVar13;
  uint uVar14;
  undefined8 local_78;
  undefined *puStack_70;
  undefined8 local_68;
  
  uVar5 = *(undefined1 *)(param_2 + 0x18);
  param_1[2] = 1;
  plVar1 = param_1 + 4;
  *param_1 = &PTR_LAB_042b7ca0;
  param_1[1] = 0xffffffff;
  param_1[4] = param_3 - (long)plVar1;
  *(undefined1 *)(param_1 + 3) = uVar5;
  param_1[6] = 0;
  plVar13 = param_1 + 5;
  *plVar13 = 0;
  FUN_02fa07a4(param_1 + 7,param_2 + 0x38);
  lVar7 = 0;
  if (param_1[4] != 0) {
    lVar7 = param_1[4] + (long)plVar1;
  }
  FUN_032d645c(lVar7);
  uVar3 = *(uint *)(param_2 + 0x30);
  if ((int)uVar3 < 1) {
    return;
  }
  uVar4 = *(uint *)(param_1 + 6);
  if (uVar3 == uVar4) goto LAB_02fa04fc;
  if (*(uint *)((long)param_1 + 0x34) == 0) {
    *(uint *)((long)param_1 + 0x34) = uVar4;
    uVar14 = uVar3 - uVar4;
    uVar10 = uVar4;
    if (uVar14 == 0 || (int)uVar3 < (int)uVar4) goto LAB_02fa0684;
  }
  else {
    uVar14 = uVar3 - uVar4;
    uVar10 = *(uint *)((long)param_1 + 0x34);
    if (uVar14 == 0 || (int)uVar3 < (int)uVar4) {
LAB_02fa0684:
      *(uint *)(param_1 + 6) = uVar3;
      goto LAB_02fa04fc;
    }
  }
  uVar2 = uVar10 & 0x7fffffff;
  if ((int)(uVar10 & 0x7fffffff) <= (int)uVar4) {
    uVar2 = uVar4;
  }
  if ((int)uVar2 < (int)uVar3) {
    uVar10 = uVar3 - 1 | (int)(uVar3 - 1) >> 0x10;
    uVar10 = uVar10 | (int)uVar10 >> 8;
    uVar10 = uVar10 | (int)uVar10 >> 4;
    uVar10 = uVar10 | (int)uVar10 >> 2;
    uVar10 = (uVar10 | (int)uVar10 >> 1) + 1;
    if ((int)uVar10 < (int)uVar3) {
      local_68 = 0;
      local_78 = 0;
      puStack_70 = PTR_DAT_04372528;
      FUN_03320b50(0x5d9e6698,"../..\\Common/Base/Container/RelArray/hkRelArray.inl",0x1e8,
                   "Capacity reservation overflow",&local_78);
    }
    lVar7 = tpidr_el0;
    lVar9 = *(long *)(lVar7 + 0x38d490);
    if (lVar9 == 0) {
      lVar9 = FUN_0333d16c(0,1);
      *(long *)(lVar7 + 0x38d490) = lVar9;
    }
    plVar8 = *(long **)(*(long *)(lVar9 + 8) + 0x58);
    __dest = (void *)(**(code **)(*plVar8 + 0x10))
                               (plVar8,-(ulong)(uVar10 >> 0x1f) & 0xfffffff800000000 |
                                       (ulong)uVar10 << 3,0);
    __src = (void *)0x0;
    if (param_1[5] != 0) {
      __src = (void *)(param_1[5] + (long)plVar13);
    }
    memcpy(__dest,__src,(long)*(int *)(param_1 + 6) << 3);
    if ((int)*(uint *)((long)param_1 + 0x34) < 0) {
      uVar2 = *(uint *)((long)param_1 + 0x34) & 0x7fffffff;
      if ((int)uVar2 <= (int)*(uint *)(param_1 + 6)) {
        uVar2 = *(uint *)(param_1 + 6);
      }
      lVar9 = 0;
      if (param_1[5] != 0) {
        lVar9 = param_1[5] + (long)plVar13;
      }
      lVar11 = *(long *)(lVar7 + 0x38d490);
      if (lVar11 == 0) {
        lVar11 = FUN_0333d16c(0,1);
        *(long *)(lVar7 + 0x38d490) = lVar11;
      }
      plVar8 = *(long **)(*(long *)(lVar11 + 8) + 0x58);
      (**(code **)(*plVar8 + 0x18))(plVar8,lVar9,(ulong)uVar2 << 3);
    }
    lVar7 = 0;
    if (__dest != (void *)0x0) {
      lVar7 = (long)__dest - (long)plVar13;
    }
    *(uint *)((long)param_1 + 0x34) = uVar10 | 0x80000000;
    param_1[5] = lVar7;
  }
  else {
    lVar7 = *plVar13;
  }
  *(uint *)(param_1 + 6) = uVar3;
  if (0 < (int)uVar14) {
    memset((void *)((long)plVar13 + (long)(int)uVar4 * 8 + lVar7),0,(ulong)uVar14 << 3);
  }
LAB_02fa04fc:
  uVar12 = 0;
  do {
    lVar7 = *(long *)(param_2 + 0x28 + uVar12 * 8 + *(long *)(param_2 + 0x28));
    if (lVar7 != 0) {
      lVar9 = 0;
      if (*plVar1 != 0) {
        lVar9 = *plVar1 + (long)plVar1;
      }
      plVar8 = (long *)(lVar9 + 0x48 + (uVar12 & 0xffff) * 0x40 + *(long *)(lVar9 + 0x48) + 0x30);
      lVar11 = *plVar8;
      lVar9 = 0;
      if (lVar11 != 0) {
        lVar9 = lVar11 + (long)plVar8;
      }
      (**(code **)(DAT_0442d3b0 + (ulong)*(byte *)(lVar7 + 0x18) * 0x40 + 0x4038))
                (&local_78,lVar7,lVar9);
      uVar6 = local_78;
      local_78 = 0;
      *(undefined8 *)((long)plVar13 + uVar12 * 8 + *plVar13) = uVar6;
    }
    uVar12 = uVar12 + 1;
  } while (uVar3 != uVar12);
  return;
}


