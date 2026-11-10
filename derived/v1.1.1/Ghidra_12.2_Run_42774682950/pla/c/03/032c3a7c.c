/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032c3a7c; name: FUN_032c3a7c
 */


long * FUN_032c3a7c(long *param_1)

{
  int *piVar1;
  int *piVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  undefined8 local_50;
  undefined *puStack_48;
  int *local_40;
  int *piStack_38;
  int local_28 [2];
  
  iVar7 = *(int *)((long)param_1 + 0x114);
  lVar6 = tpidr_el0;
  lVar5 = *(long *)(lVar6 + 0x38d490);
  if (lVar5 == 0) {
    lVar5 = FUN_0333d16c(0,1);
    *(long *)(lVar6 + 0x38d490) = lVar5;
  }
  plVar4 = *(long **)(*(long *)(lVar5 + 8) + 0x58);
  local_28[1] = 1;
  local_28[0] = iVar7;
  if (iVar7 < 0) {
    local_50 = 2;
    puStack_48 = &DAT_0411b3a0;
    local_40 = local_28 + 1;
    piStack_38 = local_28;
    FUN_03320b50(0x2f29d85e,
                 "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Memory/Allocator/hkMemoryAllocator.cpp"
                 ,0x57,"Memory allocation request overflow {}*{}",&local_50);
  }
  plVar4 = (long *)(**(code **)(*plVar4 + 0x10))(plVar4,(long)iVar7,0);
  memset(plVar4,0,(ulong)*(uint *)((long)param_1 + 0x114));
  *plVar4 = (long)(PTR_DAT_043723c0 + 0x10);
  plVar4[1] = 0xffffffff;
  plVar4[2] = 1;
  plVar4[1] = (long)*(int *)((long)param_1 + 0x114);
  plVar4[2] = 0;
  if (0 < (int)param_1[1]) {
    iVar7 = (int)param_1[0x22];
    lVar5 = 0;
    lVar6 = 0;
    do {
      piVar1 = (int *)(*param_1 + lVar5);
      if (piVar1[3] == 0) {
        piVar2 = (int *)((long)piVar1[1] + (long)plVar4);
        *piVar2 = iVar7 - piVar1[1];
        piVar2[1] = *piVar1;
      }
      else if (piVar1[3] == 1) {
        plVar3 = (long *)((long)piVar1[1] + (long)plVar4);
        *plVar3 = (long)iVar7 - (long)piVar1[1];
        *(int *)(plVar3 + 1) = *piVar1;
      }
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 0x10;
      iVar7 = (piVar1[2] * *piVar1 + 0xfU & 0xfffffff0) + iVar7;
    } while (lVar6 < (int)param_1[1]);
  }
  return plVar4;
}


