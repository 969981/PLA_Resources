/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0300b870; name: FUN_0300b870
 */


void FUN_0300b870(long param_1,undefined8 param_2)

{
  int iVar1;
  long *plVar2;
  uint uVar3;
  void *__src;
  uint uVar4;
  long *plVar5;
  void *__dest;
  uint uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 local_78;
  undefined *puStack_70;
  undefined8 local_68;
  
  uVar4 = *(uint *)(param_1 + 0x3f8);
  iVar1 = uVar4 + 0x60;
  *(uint *)(param_1 + 0x3ec) = uVar4;
  uVar6 = *(uint *)(param_1 + 0x3fc);
  if (*(uint *)(param_1 + 0x3fc) == 0) {
    *(uint *)(param_1 + 0x3fc) = uVar4;
    uVar6 = uVar4;
  }
  uVar3 = uVar6 & 0x7fffffff;
  if ((int)(uVar6 & 0x7fffffff) <= (int)uVar4) {
    uVar3 = uVar4;
  }
  plVar2 = (long *)(param_1 + 0x3f0);
  if ((int)uVar3 < iVar1) {
    uVar6 = uVar4 + 0x5f | (int)(uVar4 + 0x5f) >> 0x10;
    uVar6 = uVar6 | (int)uVar6 >> 8;
    uVar6 = uVar6 | (int)uVar6 >> 4;
    uVar6 = uVar6 | (int)uVar6 >> 2;
    uVar6 = (uVar6 | (int)uVar6 >> 1) + 1;
    if ((int)uVar6 < iVar1) {
      local_68 = 0;
      local_78 = 0;
      puStack_70 = PTR_DAT_04372528;
      FUN_03320b50(0x5d9e6698,"../..\\Common/Base/Container/RelArray/hkRelArray.inl",0x1e8,
                   "Capacity reservation overflow",&local_78);
    }
    lVar8 = tpidr_el0;
    lVar7 = *(long *)(lVar8 + 0x38d490);
    if (lVar7 == 0) {
      lVar7 = FUN_0333d16c(0,1);
      *(long *)(lVar8 + 0x38d490) = lVar7;
    }
    plVar5 = *(long **)(*(long *)(lVar7 + 8) + 0x58);
    __dest = (void *)(**(code **)(*plVar5 + 0x10))(plVar5,(long)(int)uVar6,0);
    __src = (void *)0x0;
    if (*(long *)(param_1 + 0x3f0) != 0) {
      __src = (void *)(*(long *)(param_1 + 0x3f0) + (long)plVar2);
    }
    memcpy(__dest,__src,(long)*(int *)(param_1 + 0x3f8));
    if ((int)*(uint *)(param_1 + 0x3fc) < 0) {
      uVar3 = *(uint *)(param_1 + 0x3fc) & 0x7fffffff;
      if ((int)uVar3 <= (int)*(uint *)(param_1 + 0x3f8)) {
        uVar3 = *(uint *)(param_1 + 0x3f8);
      }
      lVar7 = 0;
      if (*(long *)(param_1 + 0x3f0) != 0) {
        lVar7 = *(long *)(param_1 + 0x3f0) + (long)plVar2;
      }
      lVar9 = *(long *)(lVar8 + 0x38d490);
      if (lVar9 == 0) {
        lVar9 = FUN_0333d16c(0,1);
        *(long *)(lVar8 + 0x38d490) = lVar9;
      }
      plVar5 = *(long **)(*(long *)(lVar9 + 8) + 0x58);
      (**(code **)(*plVar5 + 0x18))(plVar5,lVar7,uVar3);
    }
    lVar8 = 0;
    if (__dest != (void *)0x0) {
      lVar8 = (long)__dest - (long)plVar2;
    }
    *(uint *)(param_1 + 0x3fc) = uVar6 | 0x80000000;
    *(long *)(param_1 + 0x3f0) = lVar8;
  }
  else {
    lVar8 = *plVar2;
  }
  *(int *)(param_1 + 0x3f8) = iVar1;
  *(uint *)(param_1 + 0x310) = uVar4;
  FUN_0300d6e0((long)plVar2 + (int)uVar4 + lVar8,param_2);
  *(undefined4 *)(param_1 + 0x364) = *(undefined4 *)(param_1 + 0x3ec);
  iVar1 = *(int *)(param_1 + 0x304);
  *(int *)(param_1 + 0x3b0) = iVar1;
  *(int *)(param_1 + 0x3b4) = iVar1 + 1;
  *(int *)(param_1 + 0x3b8) = iVar1 + 2;
  *(int *)(param_1 + 0x3bc) = iVar1 + 3;
  *(int *)(param_1 + 0x3c0) = iVar1 + 4;
  *(int *)(param_1 + 0x304) = iVar1 + 6;
  *(int *)(param_1 + 0x3c4) = iVar1 + 5;
  return;
}


