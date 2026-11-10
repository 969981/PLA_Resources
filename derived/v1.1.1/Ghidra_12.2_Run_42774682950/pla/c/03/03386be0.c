/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03386be0; name: FUN_03386be0
 */


void FUN_03386be0(undefined8 *param_1)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined *puStack_48;
  undefined4 *local_40;
  undefined4 *puStack_38;
  
  plVar7 = (long *)param_1[0x22];
  *param_1 = &PTR_FUN_0436e988;
  if (plVar7 == (long *)0x0) {
    plVar4 = (long *)PTR_PTR_0434a080;
  }
  else {
    lVar6 = plVar7[2];
    lVar2 = tpidr_el0;
    if ((lVar6 != 0) && (*(int *)(lVar6 + 4) != -2)) {
      uVar1 = (long)(int)plVar7[3] + 1;
      lVar5 = *(long *)(lVar2 + 0x38d490);
      if (lVar5 == 0) {
        lVar5 = FUN_0333d16c(0,1);
        *(long *)(lVar2 + 0x38d490) = lVar5;
      }
      plVar4 = *(long **)(*(long *)(lVar5 + 8) + 0x58);
      local_58 = (undefined4)uVar1;
      uStack_54 = 8;
      if ((uVar1 & 0x1ffffffff0000000) != 0) {
        local_50 = 2;
        puStack_48 = &DAT_0411b3a0;
        local_40 = &uStack_54;
        puStack_38 = &local_58;
        FUN_03320b50(0x39ec3d88,
                     "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Memory/Allocator/hkMemoryAllocator.cpp"
                     ,0x61,"Memory allocation request overflow {}*{}",&local_50);
      }
      (**(code **)(*plVar4 + 0x18))
                (plVar4,lVar6,-(uVar1 >> 0x1c & 1) & 0xffffffff00000000 | (uVar1 & 0x1fffffff) << 3)
      ;
      plVar7[2] = (long)&DAT_03aad864;
      *(undefined4 *)(plVar7 + 3) = 0;
    }
    plVar4 = (long *)PTR_PTR_0434a080;
    *(undefined4 *)(plVar7 + 1) = 0;
    if ((-1 < *(int *)((long)plVar7 + 0xc)) && (*plVar7 != 0)) {
      (**(code **)(*plVar4 + 0x18))(plVar4,*plVar7,*(int *)((long)plVar7 + 0xc) << 2);
    }
    *plVar7 = 0;
    *(undefined4 *)((long)plVar7 + 0xc) = 0x80000000;
    lVar6 = *(long *)(lVar2 + 0x38d490);
    if (lVar6 == 0) {
      lVar6 = FUN_0333d16c(0,1);
      *(long *)(lVar2 + 0x38d490) = lVar6;
    }
    plVar3 = *(long **)(*(long *)(lVar6 + 8) + 0x58);
    (**(code **)(*plVar3 + 0x18))(plVar3,plVar7,0x20);
  }
  param_1[0x15] = &PTR_FUN_0434af50;
  FUN_032da7c8(param_1 + 0x15);
  *(undefined4 *)(param_1 + 0x19) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x14) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0xa4)) && (param_1[0x13] != 0)) {
    (**(code **)(*plVar4 + 0x18))
              (plVar4,param_1[0x13],((ulong)*(uint *)((long)param_1 + 0xa4) & 0x3fffffff) << 4);
  }
  param_1[0x13] = 0;
  *(undefined4 *)((long)param_1 + 0xa4) = 0x80000000;
  *(undefined4 *)(param_1 + 0x12) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x94)) && (param_1[0x11] != 0)) {
    (**(code **)(*plVar4 + 0x18))
              (plVar4,param_1[0x11],((ulong)*(uint *)((long)param_1 + 0x94) & 0x3fffffff) << 3);
  }
  param_1[0x11] = 0;
  *(undefined4 *)((long)param_1 + 0x94) = 0x80000000;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x84)) && (param_1[0xf] != 0)) {
    (**(code **)(*plVar4 + 0x18))
              (plVar4,param_1[0xf],((ulong)*(uint *)((long)param_1 + 0x84) & 0x3fffffff) << 3);
  }
  param_1[0xf] = 0;
  *(undefined4 *)((long)param_1 + 0x84) = 0x80000000;
  *(undefined4 *)(param_1 + 0xe) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x74)) && (param_1[0xd] != 0)) {
    (**(code **)(*plVar4 + 0x18))
              (plVar4,param_1[0xd],((ulong)*(uint *)((long)param_1 + 0x74) & 0x3fffffff) << 3);
  }
  param_1[0xd] = 0;
  *(undefined4 *)((long)param_1 + 0x74) = 0x80000000;
  *(undefined4 *)(param_1 + 0xc) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 100)) && (param_1[0xb] != 0)) {
    (**(code **)(*plVar4 + 0x18))
              (plVar4,param_1[0xb],((ulong)*(uint *)((long)param_1 + 100) & 0x3fffffff) << 3);
  }
  param_1[0xb] = 0;
  *(undefined4 *)((long)param_1 + 100) = 0x80000000;
  *(undefined4 *)(param_1 + 6) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x34)) && (param_1[5] != 0)) {
    (**(code **)(*plVar4 + 0x18))(plVar4,param_1[5],*(uint *)((long)param_1 + 0x34) & 0x3fffffff);
  }
  param_1[5] = 0;
  *(undefined4 *)((long)param_1 + 0x34) = 0x80000000;
  *(undefined4 *)(param_1 + 4) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x24)) && (param_1[3] != 0)) {
    (**(code **)(*plVar4 + 0x18))(plVar4,param_1[3],*(uint *)((long)param_1 + 0x24) & 0x3fffffff);
  }
  *param_1 = &PTR_LAB_0436e058;
  param_1[3] = 0;
  *(undefined4 *)((long)param_1 + 0x24) = 0x80000000;
  *(undefined4 *)(param_1 + 2) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x14)) && (param_1[1] != 0)) {
    (**(code **)(*plVar4 + 0x18))
              (plVar4,param_1[1],((ulong)*(uint *)((long)param_1 + 0x14) & 0x3fffffff) << 3);
  }
  param_1[1] = 0;
  *(undefined4 *)((long)param_1 + 0x14) = 0x80000000;
  return;
}


