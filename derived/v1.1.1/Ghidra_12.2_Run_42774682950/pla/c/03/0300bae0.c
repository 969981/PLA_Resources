/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0300bae0; name: FUN_0300bae0
 */


void FUN_0300bae0(long param_1,undefined8 *param_2,uint param_3,int param_4)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  uint uVar4;
  void *__src;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  byte bVar8;
  long *plVar9;
  void *__dest;
  uint uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  undefined8 local_78;
  undefined *puStack_70;
  undefined8 local_68;
  
  uVar7 = *(uint *)(param_1 + 0x3f8);
  iVar1 = uVar7 + 0x10;
  *(uint *)(param_1 + 0x3ec) = uVar7;
  uVar10 = *(uint *)(param_1 + 0x3fc);
  if (*(uint *)(param_1 + 0x3fc) == 0) {
    *(uint *)(param_1 + 0x3fc) = uVar7;
    uVar10 = uVar7;
  }
  uVar4 = uVar10 & 0x7fffffff;
  if ((int)(uVar10 & 0x7fffffff) <= (int)uVar7) {
    uVar4 = uVar7;
  }
  plVar2 = (long *)(param_1 + 0x3f0);
  if ((int)uVar4 < iVar1) {
    uVar10 = uVar7 + 0xf | (int)(uVar7 + 0xf) >> 0x10;
    uVar10 = uVar10 | (int)uVar10 >> 8;
    uVar10 = uVar10 | (int)uVar10 >> 4;
    uVar10 = uVar10 | (int)uVar10 >> 2;
    uVar10 = (uVar10 | (int)uVar10 >> 1) + 1;
    if ((int)uVar10 < iVar1) {
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
    plVar9 = *(long **)(*(long *)(lVar11 + 8) + 0x58);
    __dest = (void *)(**(code **)(*plVar9 + 0x10))(plVar9,(long)(int)uVar10,0);
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
      lVar11 = 0;
      if (*(long *)(param_1 + 0x3f0) != 0) {
        lVar11 = *(long *)(param_1 + 0x3f0) + (long)plVar2;
      }
      lVar14 = *(long *)(lVar12 + 0x38d490);
      if (lVar14 == 0) {
        lVar14 = FUN_0333d16c(0,1);
        *(long *)(lVar12 + 0x38d490) = lVar14;
      }
      plVar9 = *(long **)(*(long *)(lVar14 + 8) + 0x58);
      (**(code **)(*plVar9 + 0x18))(plVar9,lVar11,uVar4);
    }
    lVar12 = 0;
    if (__dest != (void *)0x0) {
      lVar12 = (long)__dest - (long)plVar2;
    }
    *(uint *)(param_1 + 0x3fc) = uVar10 | 0x80000000;
    *(long *)(param_1 + 0x3f0) = lVar12;
  }
  else {
    lVar12 = *plVar2;
  }
  puVar3 = (undefined8 *)((long)plVar2 + (int)uVar7 + lVar12);
  *(int *)(param_1 + 0x3f8) = iVar1;
  if (param_3 != 0x13) {
    *(uint *)(param_1 + (ulong)param_3 * 4 + 0x308) = uVar7;
  }
  uVar5 = *(undefined4 *)(param_2 + 1);
  uVar6 = *(undefined4 *)((long)param_2 + 0xc);
  *puVar3 = *param_2;
  *(undefined4 *)(puVar3 + 1) = uVar5;
  *(undefined4 *)((long)puVar3 + 0xc) = uVar6;
  if ((param_4 != 0x13) && (bVar8 = *(byte *)((long)param_2 + 4), (ulong)bVar8 != 0)) {
    lVar12 = param_1 + (long)param_4 * 4;
    uVar13 = 0;
    *(undefined4 *)(lVar12 + 0x354) = *(undefined4 *)(param_1 + 0x3ec);
    do {
      iVar1 = *(int *)(param_1 + 0x304);
      *(int *)(param_1 + 0x304) = iVar1 + 1;
      *(int *)(lVar12 + 0x3a0 + uVar13 * 4) = iVar1;
      uVar13 = uVar13 + 1;
    } while (uVar13 < (ulong)bVar8 << 1);
  }
  return;
}


