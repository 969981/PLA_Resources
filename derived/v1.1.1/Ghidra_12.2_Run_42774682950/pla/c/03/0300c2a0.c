/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0300c2a0; name: FUN_0300c2a0
 */


void FUN_0300c2a0(long param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  uint uVar4;
  void *__src;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  long *plVar8;
  void *__dest;
  long lVar9;
  long lVar10;
  uint uVar11;
  long lVar12;
  undefined8 local_78;
  undefined *puStack_70;
  undefined8 local_68;
  
  uVar7 = *(uint *)(param_1 + 0x3f8);
  iVar1 = uVar7 + 0x20;
  *(uint *)(param_1 + 0x3ec) = uVar7;
  uVar11 = *(uint *)(param_1 + 0x3fc);
  if (*(uint *)(param_1 + 0x3fc) == 0) {
    *(uint *)(param_1 + 0x3fc) = uVar7;
    uVar11 = uVar7;
  }
  uVar4 = uVar11 & 0x7fffffff;
  if ((int)(uVar11 & 0x7fffffff) <= (int)uVar7) {
    uVar4 = uVar7;
  }
  plVar2 = (long *)(param_1 + 0x3f0);
  if ((int)uVar4 < iVar1) {
    uVar11 = uVar7 + 0x1f | (int)(uVar7 + 0x1f) >> 0x10;
    uVar11 = uVar11 | (int)uVar11 >> 8;
    uVar11 = uVar11 | (int)uVar11 >> 4;
    uVar11 = uVar11 | (int)uVar11 >> 2;
    uVar11 = (uVar11 | (int)uVar11 >> 1) + 1;
    if ((int)uVar11 < iVar1) {
      local_68 = 0;
      local_78 = 0;
      puStack_70 = PTR_DAT_04372528;
      FUN_03320b50(0x5d9e6698,"../..\\Common/Base/Container/RelArray/hkRelArray.inl",0x1e8,
                   "Capacity reservation overflow",&local_78);
    }
    lVar10 = tpidr_el0;
    lVar9 = *(long *)(lVar10 + 0x38d490);
    if (lVar9 == 0) {
      lVar9 = FUN_0333d16c(0,1);
      *(long *)(lVar10 + 0x38d490) = lVar9;
    }
    plVar8 = *(long **)(*(long *)(lVar9 + 8) + 0x58);
    __dest = (void *)(**(code **)(*plVar8 + 0x10))(plVar8,(long)(int)uVar11,0);
    __src = (void *)0x0;
    if (*(long *)(param_1 + 0x3f0) != 0) {
      __src = (void *)(*(long *)(param_1 + 0x3f0) + (long)plVar2);
    }
    memcpy(__dest,__src,(long)*(int *)(param_1 + 0x3f8));
    if ((int)*(uint *)(param_1 + 0x3fc) < 0) {
      uVar4 = *(uint *)(param_1 + 0x3fc) & 0x7fffffff;
      if ((int)uVar4 <= (int)*(uint *)(param_1 + 0x3f8)) {
        uVar4 = *(uint *)(param_1 + 0x3f8);
      }
      lVar9 = 0;
      if (*(long *)(param_1 + 0x3f0) != 0) {
        lVar9 = *(long *)(param_1 + 0x3f0) + (long)plVar2;
      }
      lVar12 = *(long *)(lVar10 + 0x38d490);
      if (lVar12 == 0) {
        lVar12 = FUN_0333d16c(0,1);
        *(long *)(lVar10 + 0x38d490) = lVar12;
      }
      plVar8 = *(long **)(*(long *)(lVar12 + 8) + 0x58);
      (**(code **)(*plVar8 + 0x18))(plVar8,lVar9,uVar4);
    }
    lVar10 = 0;
    if (__dest != (void *)0x0) {
      lVar10 = (long)__dest - (long)plVar2;
    }
    *(uint *)(param_1 + 0x3fc) = uVar11 | 0x80000000;
    *(long *)(param_1 + 0x3f0) = lVar10;
  }
  else {
    lVar10 = *plVar2;
  }
  *(int *)(param_1 + 0x3f8) = iVar1;
  uVar5 = *(undefined4 *)(param_2 + 1);
  uVar6 = *(undefined4 *)((long)param_2 + 0xc);
  puVar3 = (undefined8 *)((long)plVar2 + (int)uVar7 + lVar10);
  *puVar3 = *param_2;
  *(undefined4 *)(puVar3 + 1) = uVar5;
  *(undefined4 *)((long)puVar3 + 0xc) = uVar6;
  uVar5 = *(undefined4 *)(param_2 + 3);
  uVar6 = *(undefined4 *)((long)param_2 + 0x1c);
  puVar3[2] = param_2[2];
  *(undefined4 *)(puVar3 + 3) = uVar5;
  *(undefined4 *)((long)puVar3 + 0x1c) = uVar6;
  if (param_3 != 0x13) {
    lVar10 = param_1 + (long)param_3 * 4;
    *(undefined4 *)(lVar10 + 0x354) = *(undefined4 *)(param_1 + 0x3ec);
    iVar1 = *(int *)(param_1 + 0x304);
    *(int *)(param_1 + 0x304) = iVar1 + 1;
    *(int *)(lVar10 + 0x3a0) = iVar1;
  }
  return;
}


