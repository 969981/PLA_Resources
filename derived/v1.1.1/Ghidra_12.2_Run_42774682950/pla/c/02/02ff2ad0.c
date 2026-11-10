/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ff2ad0; name: FUN_02ff2ad0
 */


void FUN_02ff2ad0(undefined8 *param_1,long param_2)

{
  uint uVar1;
  void *__src;
  void *__src_00;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  uint uVar7;
  long *plVar8;
  void *__dest;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 local_68;
  undefined *puStack_60;
  undefined8 local_58;
  
  FUN_02ff2280();
  *param_1 = &PTR_LAB_042ba7f0;
  uVar2 = *(undefined8 *)(param_2 + 0x80);
  uVar4 = *(undefined8 *)(param_2 + 0x88);
  uVar3 = *(undefined8 *)(param_2 + 0x70);
  uVar5 = *(undefined8 *)(param_2 + 0x78);
  puVar12 = param_1 + 0x12;
  *puVar12 = 0;
  param_1[0xe] = uVar3;
  param_1[0xf] = uVar5;
  param_1[0x13] = 0;
  param_1[0x10] = uVar2;
  param_1[0x11] = uVar4;
  lVar9 = *(long *)(param_2 + 0x90);
  iVar6 = *(int *)(param_2 + 0x98);
  __src = (void *)0x0;
  if (lVar9 != 0) {
    __src = (void *)(lVar9 + param_2 + 0x90);
  }
  if (0 < iVar6 && __src != (void *)0x0) {
    uVar7 = iVar6 - 1U | (int)(iVar6 - 1U) >> 0x10;
    *(undefined4 *)((long)param_1 + 0x9c) = 0;
    uVar7 = uVar7 | (int)uVar7 >> 8;
    uVar7 = uVar7 | (int)uVar7 >> 4;
    uVar7 = uVar7 | (int)uVar7 >> 2;
    uVar7 = (uVar7 | (int)uVar7 >> 1) + 1;
    if ((int)uVar7 < iVar6) {
      local_58 = 0;
      local_68 = 0;
      puStack_60 = PTR_DAT_04372528;
      FUN_03320b50(0x5d9e6698,"../..\\Common/Base/Container/RelArray/hkRelArray.inl",0x1e8,
                   "Capacity reservation overflow",&local_68);
    }
    lVar9 = tpidr_el0;
    lVar10 = *(long *)(lVar9 + 0x38d490);
    if (lVar10 == 0) {
      lVar10 = FUN_0333d16c(0,1);
      *(long *)(lVar9 + 0x38d490) = lVar10;
    }
    plVar8 = *(long **)(*(long *)(lVar10 + 8) + 0x58);
    __dest = (void *)(**(code **)(*plVar8 + 0x10))
                               (plVar8,-(ulong)(uVar7 >> 0x1f) & 0xfffffffe00000000 |
                                       (ulong)uVar7 << 1,0);
    __src_00 = (void *)0x0;
    if (param_1[0x12] != 0) {
      __src_00 = (void *)(param_1[0x12] + (long)puVar12);
    }
    memcpy(__dest,__src_00,(long)*(int *)(param_1 + 0x13) << 1);
    if ((int)*(uint *)((long)param_1 + 0x9c) < 0) {
      uVar1 = *(uint *)((long)param_1 + 0x9c) & 0x7fffffff;
      if ((int)uVar1 <= (int)*(uint *)(param_1 + 0x13)) {
        uVar1 = *(uint *)(param_1 + 0x13);
      }
      lVar10 = 0;
      if (param_1[0x12] != 0) {
        lVar10 = param_1[0x12] + (long)puVar12;
      }
      lVar11 = *(long *)(lVar9 + 0x38d490);
      if (lVar11 == 0) {
        lVar11 = FUN_0333d16c(0,1);
        *(long *)(lVar9 + 0x38d490) = lVar11;
      }
      plVar8 = *(long **)(*(long *)(lVar11 + 8) + 0x58);
      (**(code **)(*plVar8 + 0x18))(plVar8,lVar10,uVar1 << 1);
    }
    lVar9 = 0;
    if (__dest != (void *)0x0) {
      lVar9 = (long)__dest - (long)puVar12;
    }
    *(int *)(param_1 + 0x13) = iVar6;
    *(uint *)((long)param_1 + 0x9c) = uVar7 | 0x80000000;
    param_1[0x12] = lVar9;
    memcpy((void *)(lVar9 + (long)puVar12),__src,(long)iVar6 << 1);
  }
  return;
}


