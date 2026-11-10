/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f726bc; name: FUN_02f726bc
 */


void FUN_02f726bc(long *param_1,long *param_2)

{
  uint uVar1;
  void *__src;
  int iVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  void *__dest;
  void *__src_00;
  long lVar6;
  long lVar7;
  undefined8 local_68;
  undefined *puStack_60;
  undefined8 local_58;
  
  *param_1 = 0;
  param_1[1] = 0;
  iVar2 = (int)param_2[1];
  __src = (void *)0x0;
  if (*param_2 != 0) {
    __src = (void *)(*param_2 + (long)param_2);
  }
  if (0 < iVar2 && __src != (void *)0x0) {
    uVar3 = iVar2 - 1U | (int)(iVar2 - 1U) >> 0x10;
    *(undefined4 *)((long)param_1 + 0xc) = 0;
    uVar3 = uVar3 | (int)uVar3 >> 8;
    uVar3 = uVar3 | (int)uVar3 >> 4;
    uVar3 = uVar3 | (int)uVar3 >> 2;
    uVar3 = (uVar3 | (int)uVar3 >> 1) + 1;
    if ((int)uVar3 < iVar2) {
      local_58 = 0;
      local_68 = 0;
      puStack_60 = PTR_DAT_04372528;
      FUN_03320b50(0x5d9e6698,"../..\\Common/Base/Container/RelArray/hkRelArray.inl",0x1e8,
                   "Capacity reservation overflow",&local_68);
    }
    lVar4 = tpidr_el0;
    lVar6 = *(long *)(lVar4 + 0x38d490);
    if (lVar6 == 0) {
      lVar6 = FUN_0333d16c(0,1);
      *(long *)(lVar4 + 0x38d490) = lVar6;
    }
    plVar5 = *(long **)(*(long *)(lVar6 + 8) + 0x58);
    __dest = (void *)(**(code **)(*plVar5 + 0x10))
                               (plVar5,-(ulong)(uVar3 >> 0x1f) & 0xffffffe000000000 |
                                       (ulong)uVar3 << 5,0);
    __src_00 = (void *)0x0;
    if (*param_1 != 0) {
      __src_00 = (void *)(*param_1 + (long)param_1);
    }
    memcpy(__dest,__src_00,(long)(int)param_1[1] << 5);
    if ((int)*(uint *)((long)param_1 + 0xc) < 0) {
      uVar1 = *(uint *)((long)param_1 + 0xc) & 0x7fffffff;
      if ((int)uVar1 <= (int)*(uint *)(param_1 + 1)) {
        uVar1 = *(uint *)(param_1 + 1);
      }
      if (*param_1 == 0) {
        lVar6 = 0;
      }
      else {
        lVar6 = *param_1 + (long)param_1;
      }
      lVar7 = *(long *)(lVar4 + 0x38d490);
      if (lVar7 == 0) {
        lVar7 = FUN_0333d16c(0,1);
        *(long *)(lVar4 + 0x38d490) = lVar7;
      }
      plVar5 = *(long **)(*(long *)(lVar7 + 8) + 0x58);
      (**(code **)(*plVar5 + 0x18))(plVar5,lVar6,(ulong)uVar1 << 5);
    }
    lVar4 = 0;
    if (__dest != (void *)0x0) {
      lVar4 = (long)__dest - (long)param_1;
    }
    *(int *)(param_1 + 1) = iVar2;
    *(uint *)((long)param_1 + 0xc) = uVar3 | 0x80000000;
    *param_1 = lVar4;
    memcpy((void *)(lVar4 + (long)param_1),__src,(long)iVar2 << 5);
  }
  *(short *)(param_1 + 2) = (short)param_2[2];
  return;
}


