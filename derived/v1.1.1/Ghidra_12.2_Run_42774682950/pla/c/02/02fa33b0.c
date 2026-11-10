/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02fa33b0; name: FUN_02fa33b0
 */


void FUN_02fa33b0(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  void *__src;
  void *__src_00;
  uint uVar3;
  uint uVar4;
  undefined8 *puVar5;
  long *plVar6;
  long *plVar7;
  void *__dest;
  int iVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  ulong uVar16;
  long *plVar17;
  undefined8 local_78;
  undefined *local_70;
  undefined8 local_68;
  
  puVar5 = (undefined8 *)FUN_032cf5b0(0x60);
  puVar5[5] = 0;
  *puVar5 = &PTR_LAB_042b83c0;
  puVar5[1] = 0xffffffff;
  puVar5[2] = 1;
  plVar15 = puVar5 + 4;
  *plVar15 = 0;
  lVar11 = *(long *)(param_2 + 0x20);
  uVar3 = *(uint *)(param_2 + 0x28);
  uVar16 = (ulong)uVar3;
  plVar17 = (long *)0x0;
  if (lVar11 != 0) {
    plVar17 = (long *)(lVar11 + param_2 + 0x20);
  }
  if ((int)uVar3 < 1 || plVar17 == (long *)0x0) goto LAB_02fa3790;
  uVar4 = uVar3 - 1 | (int)(uVar3 - 1) >> 0x10;
  *(undefined4 *)((long)puVar5 + 0x2c) = 0;
  uVar4 = uVar4 | (int)uVar4 >> 8;
  uVar4 = uVar4 | (int)uVar4 >> 4;
  uVar4 = uVar4 | (int)uVar4 >> 2;
  uVar4 = (uVar4 | (int)uVar4 >> 1) + 1;
  if ((int)uVar4 < (int)uVar3) {
    local_78 = 0;
    local_68 = 0;
    local_70 = PTR_DAT_04372528;
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
  plVar7 = (long *)(**(code **)(*plVar6 + 0x10))(plVar6,(long)(int)uVar4 * 0x18,0);
  plVar6 = (long *)0x0;
  if (puVar5[4] != 0) {
    plVar6 = (long *)(puVar5[4] + (long)plVar15);
  }
  uVar12 = (ulong)*(uint *)(puVar5 + 5);
  if (0 < (int)*(uint *)(puVar5 + 5)) {
    plVar14 = plVar7;
    do {
      lVar9 = 0;
      if (*plVar6 != 0) {
        lVar9 = *plVar6 + (long)plVar6;
      }
      lVar13 = 0;
      if (lVar9 != 0) {
        lVar13 = lVar9 - (long)plVar14;
      }
      uVar12 = uVar12 - 1;
      *plVar14 = lVar13;
      *(int *)(plVar14 + 1) = (int)plVar6[1];
      *(undefined4 *)((long)plVar14 + 0xc) = *(undefined4 *)((long)plVar6 + 0xc);
      *plVar6 = 0;
      plVar6[1] = 0;
      *(int *)(plVar14 + 2) = (int)plVar6[2];
      plVar14 = plVar14 + 3;
      plVar6 = plVar6 + 3;
    } while (uVar12 != 0);
  }
  if ((int)*(uint *)((long)puVar5 + 0x2c) < 0) {
    uVar2 = *(uint *)((long)puVar5 + 0x2c) & 0x7fffffff;
    if ((int)uVar2 <= (int)*(uint *)(puVar5 + 5)) {
      uVar2 = *(uint *)(puVar5 + 5);
    }
    lVar9 = 0;
    if (puVar5[4] != 0) {
      lVar9 = puVar5[4] + (long)plVar15;
    }
    lVar13 = *(long *)(lVar11 + 0x38d490);
    if (lVar13 == 0) {
      lVar13 = FUN_0333d16c(0,1);
      *(long *)(lVar11 + 0x38d490) = lVar13;
    }
    plVar6 = *(long **)(*(long *)(lVar13 + 8) + 0x58);
    (**(code **)(*plVar6 + 0x18))(plVar6,lVar9,(ulong)uVar2 * 0x18);
    if (plVar7 == (long *)0x0) goto LAB_02fa3558;
LAB_02fa34bc:
    lVar9 = (long)plVar7 - (long)plVar15;
  }
  else {
    if (plVar7 != (long *)0x0) goto LAB_02fa34bc;
LAB_02fa3558:
    lVar9 = 0;
  }
  puVar5[4] = lVar9;
  *(uint *)(puVar5 + 5) = uVar3;
  *(uint *)((long)puVar5 + 0x2c) = uVar4 | 0x80000000;
  puVar1 = (undefined8 *)(lVar9 + (long)plVar15);
  iVar8 = uVar3 - 1;
  *puVar1 = 0;
  puVar1[1] = 0;
  if (iVar8 != 0) {
    do {
      iVar8 = iVar8 + -1;
      puVar1[3] = 0;
      puVar1[4] = 0;
      puVar1 = puVar1 + 3;
    } while (iVar8 != 0);
  }
  plVar15 = (long *)(*plVar15 + (long)plVar15);
  do {
    *plVar15 = 0;
    plVar15[1] = 0;
    iVar8 = (int)plVar17[1];
    __src = (void *)0x0;
    if (*plVar17 != 0) {
      __src = (void *)(*plVar17 + (long)plVar17);
    }
    if (0 < iVar8 && __src != (void *)0x0) {
      uVar3 = iVar8 - 1U | (int)(iVar8 - 1U) >> 0x10;
      *(undefined4 *)((long)plVar15 + 0xc) = 0;
      uVar3 = uVar3 | (int)uVar3 >> 8;
      uVar3 = uVar3 | (int)uVar3 >> 4;
      uVar3 = uVar3 | (int)uVar3 >> 2;
      uVar3 = (uVar3 | (int)uVar3 >> 1) + 1;
      if ((int)uVar3 < iVar8) {
        local_78 = 0;
        local_68 = 0;
        local_70 = PTR_DAT_04372528;
        FUN_03320b50(0x5d9e6698,"../..\\Common/Base/Container/RelArray/hkRelArray.inl",0x1e8,
                     "Capacity reservation overflow",&local_78);
      }
      lVar9 = *(long *)(lVar11 + 0x38d490);
      if (lVar9 == 0) {
        lVar9 = FUN_0333d16c(0,1);
        *(long *)(lVar11 + 0x38d490) = lVar9;
      }
      plVar6 = *(long **)(*(long *)(lVar9 + 8) + 0x58);
      __dest = (void *)(**(code **)(*plVar6 + 0x10))
                                 (plVar6,-(ulong)(uVar3 >> 0x1f) & 0xfffffffc00000000 |
                                         (ulong)uVar3 << 2,0);
      __src_00 = (void *)0x0;
      if (*plVar15 != 0) {
        __src_00 = (void *)(*plVar15 + (long)plVar15);
      }
      memcpy(__dest,__src_00,(long)(int)plVar15[1] << 2);
      if ((int)*(uint *)((long)plVar15 + 0xc) < 0) {
        uVar4 = *(uint *)((long)plVar15 + 0xc) & 0x7fffffff;
        if ((int)uVar4 <= (int)*(uint *)(plVar15 + 1)) {
          uVar4 = *(uint *)(plVar15 + 1);
        }
        lVar9 = 0;
        if (*plVar15 != 0) {
          lVar9 = *plVar15 + (long)plVar15;
        }
        lVar13 = *(long *)(lVar11 + 0x38d490);
        if (lVar13 == 0) {
          lVar13 = FUN_0333d16c(0,1);
          *(long *)(lVar11 + 0x38d490) = lVar13;
        }
        plVar6 = *(long **)(*(long *)(lVar13 + 8) + 0x58);
        (**(code **)(*plVar6 + 0x18))(plVar6,lVar9,(ulong)uVar4 << 2);
        if (__dest == (void *)0x0) goto LAB_02fa3788;
LAB_02fa3724:
        lVar9 = (long)__dest - (long)plVar15;
      }
      else {
        if (__dest != (void *)0x0) goto LAB_02fa3724;
LAB_02fa3788:
        lVar9 = 0;
      }
      *plVar15 = lVar9;
      *(int *)(plVar15 + 1) = iVar8;
      *(uint *)((long)plVar15 + 0xc) = uVar3 | 0x80000000;
      memcpy((void *)(lVar9 + (long)plVar15),__src,(long)iVar8 << 2);
    }
    plVar6 = plVar17 + 2;
    uVar16 = uVar16 - 1;
    plVar17 = plVar17 + 3;
    *(int *)(plVar15 + 2) = (int)*plVar6;
    plVar15 = plVar15 + 3;
  } while (uVar16 != 0);
LAB_02fa3790:
  puVar5[7] = *(undefined8 *)(param_2 + 0x38);
  uVar10 = *(undefined8 *)(param_2 + 0x30);
  puVar5[8] = *(undefined8 *)(param_2 + 0x40);
  puVar5[6] = uVar10;
  *(undefined4 *)(puVar5 + 10) = *(undefined4 *)(param_2 + 0x50);
  *param_1 = puVar5;
  return;
}


