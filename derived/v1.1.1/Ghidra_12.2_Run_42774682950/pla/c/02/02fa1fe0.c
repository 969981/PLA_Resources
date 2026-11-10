/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02fa1fe0; name: FUN_02fa1fe0
 */


void FUN_02fa1fe0(long *param_1,uint param_2,uint param_3,int param_4)

{
  uint *puVar1;
  uint uVar2;
  void *__src;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  long *plVar8;
  void *__dest;
  long lVar9;
  long lVar10;
  ulong uVar11;
  uint uVar12;
  long lVar13;
  undefined8 local_68;
  undefined *puStack_60;
  undefined8 local_58;
  
  uVar2 = (int)(param_3 + 0x1f) >> 5;
  uVar3 = *(uint *)(param_1 + 1);
  uVar4 = *(uint *)(param_1 + 2);
  *(uint *)(param_1 + 2) = param_3;
  if (uVar3 == uVar2) goto LAB_02fa20f4;
  uVar12 = *(uint *)((long)param_1 + 0xc);
  if (*(uint *)((long)param_1 + 0xc) == 0) {
    *(uint *)((long)param_1 + 0xc) = uVar3;
    uVar12 = uVar3;
  }
  if ((int)uVar3 < (int)uVar2) {
    uVar5 = uVar12 & 0x7fffffff;
    if ((int)(uVar12 & 0x7fffffff) <= (int)uVar3) {
      uVar5 = uVar3;
    }
    if ((int)uVar5 < (int)uVar2) {
      uVar3 = uVar2 - 1 | (int)(uVar2 - 1) >> 0x10;
      uVar3 = uVar3 | (int)uVar3 >> 8;
      uVar3 = uVar3 | (int)uVar3 >> 4;
      uVar3 = uVar3 | (int)uVar3 >> 2;
      uVar3 = (uVar3 | (int)uVar3 >> 1) + 1;
      if ((int)uVar3 < (int)uVar2) {
        local_58 = 0;
        local_68 = 0;
        puStack_60 = PTR_DAT_04372528;
        FUN_03320b50(0x5d9e6698,"../..\\Common/Base/Container/RelArray/hkRelArray.inl",0x1e8,
                     "Capacity reservation overflow",&local_68);
      }
      lVar10 = tpidr_el0;
      lVar9 = *(long *)(lVar10 + 0x38d490);
      if (lVar9 == 0) {
        lVar9 = FUN_0333d16c(0,1);
        *(long *)(lVar10 + 0x38d490) = lVar9;
      }
      plVar8 = *(long **)(*(long *)(lVar9 + 8) + 0x58);
      __dest = (void *)(**(code **)(*plVar8 + 0x10))
                                 (plVar8,-(ulong)(uVar3 >> 0x1f) & 0xfffffffc00000000 |
                                         (ulong)uVar3 << 2,0);
      __src = (void *)0x0;
      if (*param_1 != 0) {
        __src = (void *)(*param_1 + (long)param_1);
      }
      memcpy(__dest,__src,(long)(int)param_1[1] << 2);
      if ((int)*(uint *)((long)param_1 + 0xc) < 0) {
        uVar12 = *(uint *)((long)param_1 + 0xc) & 0x7fffffff;
        if ((int)uVar12 <= (int)*(uint *)(param_1 + 1)) {
          uVar12 = *(uint *)(param_1 + 1);
        }
        lVar9 = 0;
        if (*param_1 != 0) {
          lVar9 = *param_1 + (long)param_1;
        }
        lVar13 = *(long *)(lVar10 + 0x38d490);
        if (lVar13 == 0) {
          lVar13 = FUN_0333d16c(0,1);
          *(long *)(lVar10 + 0x38d490) = lVar13;
        }
        plVar8 = *(long **)(*(long *)(lVar13 + 8) + 0x58);
        (**(code **)(*plVar8 + 0x18))(plVar8,lVar9,(ulong)uVar12 << 2);
        if (__dest == (void *)0x0) goto LAB_02fa21b0;
LAB_02fa20dc:
        lVar10 = (long)__dest - (long)param_1;
      }
      else {
        if (__dest != (void *)0x0) goto LAB_02fa20dc;
LAB_02fa21b0:
        lVar10 = 0;
      }
      param_3 = *(uint *)(param_1 + 2);
      *param_1 = lVar10;
      *(uint *)((long)param_1 + 0xc) = uVar3 | 0x80000000;
    }
  }
  *(uint *)(param_1 + 1) = uVar2;
LAB_02fa20f4:
  param_3 = param_3 & (int)param_3 >> 0x1f;
  if ((int)param_2 < (int)param_3) {
    uVar2 = -1 << (ulong)(param_2 & 0x1f);
    uVar5 = -1 << (ulong)(param_3 & 0x1f);
    uVar3 = (int)param_2 >> 5;
    uVar12 = (int)param_3 >> 5;
    uVar6 = ~uVar5;
    uVar7 = -param_4;
    lVar10 = 0;
    if (*param_1 != 0) {
      lVar10 = *param_1 + (long)param_1;
    }
    if (uVar12 == uVar3) {
      uVar2 = uVar2 & uVar6;
      if (uVar2 != 0) {
        uVar11 = -(ulong)(uVar3 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar3 << 2;
        *(uint *)(lVar10 + uVar11) =
             *(uint *)(lVar10 + uVar11) & (uVar2 ^ 0xffffffff) | uVar2 & uVar7;
      }
    }
    else {
      uVar11 = -(ulong)(uVar3 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar3 << 2;
      *(uint *)(lVar10 + uVar11) = *(uint *)(lVar10 + uVar11) & (uVar2 ^ 0xffffffff) | uVar2 & uVar7
      ;
      if ((param_3 & 0x1f) != 0) {
        uVar11 = -(ulong)(uVar12 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar12 << 2;
        *(uint *)(lVar10 + uVar11) = *(uint *)(lVar10 + uVar11) & uVar5 | uVar6 & uVar7;
      }
      FUN_032d59e0(lVar10 + (long)(int)uVar3 * 4 + 4,uVar7,(long)(int)(uVar12 + ~uVar3));
    }
  }
  if ((int)uVar4 <= (int)param_2) {
    uVar4 = param_2;
  }
  uVar2 = (int)param_1[2] + 0x1f;
  if ((int)uVar4 < (int)(uVar2 & 0xffffffe0)) {
    uVar3 = (int)uVar4 >> 5;
    uVar2 = (int)uVar2 >> 5;
    lVar10 = 0;
    if (*param_1 != 0) {
      lVar10 = *param_1 + (long)param_1;
    }
    if (uVar2 != uVar3) {
      puVar1 = (uint *)(lVar10 + (long)(int)uVar3 * 4);
      uVar4 = -1 << (ulong)(uVar4 & 0x1f);
      *puVar1 = *puVar1 & (uVar4 ^ 0xffffffff) | uVar4 & -param_4;
      FUN_032d59e0(puVar1 + 1,-param_4,(long)(int)(uVar2 + ~uVar3));
    }
  }
  return;
}


