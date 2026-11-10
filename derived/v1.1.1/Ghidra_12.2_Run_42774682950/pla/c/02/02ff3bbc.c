/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ff3bbc; name: FUN_02ff3bbc
 */


void FUN_02ff3bbc(undefined8 *param_1,long param_2,int param_3)

{
  uint uVar1;
  void *__src;
  void *__src_00;
  int iVar2;
  uint uVar3;
  long *plVar4;
  void *__dest;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 local_78;
  undefined *puStack_70;
  undefined8 local_68;
  
  FUN_02ff2280();
  *param_1 = &PTR_LAB_042b7448;
  plVar9 = param_1 + 0xd;
  *plVar9 = 0;
  lVar6 = param_1[8];
  lVar8 = 0;
  if (lVar6 != 0) {
    lVar8 = lVar6 + (long)(param_1 + 8);
  }
  FUN_02ff6218(param_1 + 0xe,param_2 + 0x70,lVar8);
  puVar10 = param_1 + 0x14;
  *puVar10 = 0;
  param_1[0x15] = 0;
  lVar8 = *(long *)(param_2 + 0xa0);
  iVar2 = *(int *)(param_2 + 0xa8);
  __src = (void *)0x0;
  if (lVar8 != 0) {
    __src = (void *)(lVar8 + param_2 + 0xa0);
  }
  if ((iVar2 < 1) || (__src == (void *)0x0)) goto LAB_02ff3d04;
  uVar3 = iVar2 - 1U | (int)(iVar2 - 1U) >> 0x10;
  *(undefined4 *)((long)param_1 + 0xac) = 0;
  uVar3 = uVar3 | (int)uVar3 >> 8;
  uVar3 = uVar3 | (int)uVar3 >> 4;
  uVar3 = uVar3 | (int)uVar3 >> 2;
  uVar3 = (uVar3 | (int)uVar3 >> 1) + 1;
  if ((int)uVar3 < iVar2) {
    local_68 = 0;
    local_78 = 0;
    puStack_70 = PTR_DAT_04372528;
    FUN_03320b50(0x5d9e6698,"../..\\Common/Base/Container/RelArray/hkRelArray.inl",0x1e8,
                 "Capacity reservation overflow",&local_78);
  }
  lVar8 = tpidr_el0;
  lVar6 = *(long *)(lVar8 + 0x38d490);
  if (lVar6 == 0) {
    lVar6 = FUN_0333d16c(0,1);
    *(long *)(lVar8 + 0x38d490) = lVar6;
  }
  plVar4 = *(long **)(*(long *)(lVar6 + 8) + 0x58);
  __dest = (void *)(**(code **)(*plVar4 + 0x10))
                             (plVar4,-(ulong)(uVar3 >> 0x1f) & 0xfffffffc00000000 |
                                     (ulong)uVar3 << 2,0);
  __src_00 = (void *)0x0;
  if (param_1[0x14] != 0) {
    __src_00 = (void *)(param_1[0x14] + (long)puVar10);
  }
  memcpy(__dest,__src_00,(long)*(int *)(param_1 + 0x15) << 2);
  if ((int)*(uint *)((long)param_1 + 0xac) < 0) {
    uVar1 = *(uint *)((long)param_1 + 0xac) & 0x7fffffff;
    if ((int)uVar1 <= (int)*(uint *)(param_1 + 0x15)) {
      uVar1 = *(uint *)(param_1 + 0x15);
    }
    lVar6 = 0;
    if (param_1[0x14] != 0) {
      lVar6 = param_1[0x14] + (long)puVar10;
    }
    lVar5 = *(long *)(lVar8 + 0x38d490);
    if (lVar5 == 0) {
      lVar5 = FUN_0333d16c(0,1);
      *(long *)(lVar8 + 0x38d490) = lVar5;
    }
    plVar4 = *(long **)(*(long *)(lVar5 + 8) + 0x58);
    (**(code **)(*plVar4 + 0x18))(plVar4,lVar6,(ulong)uVar1 << 2);
    if (__dest == (void *)0x0) goto LAB_02ff3e14;
LAB_02ff3ce4:
    lVar8 = (long)__dest - (long)puVar10;
  }
  else {
    if (__dest != (void *)0x0) goto LAB_02ff3ce4;
LAB_02ff3e14:
    lVar8 = 0;
  }
  param_1[0x14] = lVar8;
  *(int *)(param_1 + 0x15) = iVar2;
  *(uint *)((long)param_1 + 0xac) = uVar3 | 0x80000000;
  memcpy((void *)(lVar8 + (long)puVar10),__src,(long)iVar2 << 2);
LAB_02ff3d04:
  *(undefined4 *)(param_1 + 0x16) = *(undefined4 *)(param_2 + 0xb0);
  uVar7 = *(undefined8 *)(param_2 + 0xd8);
  param_1[0x19] = *(undefined8 *)(param_2 + 200);
  param_1[0x1b] = uVar7;
  uVar7 = *(undefined8 *)(param_2 + 0xd0);
  param_1[0x18] = *(undefined8 *)(param_2 + 0xc0);
  param_1[0x1a] = uVar7;
  param_1[9] = 0x28;
  plVar4 = (long *)(param_2 + 0x68);
  lVar8 = *plVar4;
  if (param_3 == 1) {
    lVar6 = 0;
    if (lVar8 != 0) {
      lVar6 = (long)plVar4 + (lVar8 - (long)plVar9);
    }
    lVar8 = 0;
    if (lVar6 != 0) {
      lVar8 = lVar6 + (long)plVar9;
    }
    *plVar9 = lVar6;
    FUN_032d645c(lVar8);
  }
  else {
    lVar6 = 0;
    if (lVar8 != 0) {
      lVar6 = lVar8 + (long)plVar4;
    }
    lVar5 = FUN_032cf5b0(0x58);
    FUN_02f88770(lVar5,lVar6);
    lVar8 = 0;
    if (lVar5 != 0) {
      lVar8 = lVar5 - (long)plVar9;
    }
    *plVar9 = lVar8;
  }
  return;
}


