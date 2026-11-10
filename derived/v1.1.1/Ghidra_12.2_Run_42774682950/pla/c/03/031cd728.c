/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031cd728; name: FUN_031cd728
 */


void FUN_031cd728(long *param_1)

{
  long *plVar1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined *puStack_48;
  undefined4 *local_40;
  undefined4 *puStack_38;
  
  lVar8 = param_1[10];
  if ((lVar8 != 0) && (*(int *)(lVar8 + 4) != -2)) {
    uVar2 = (long)(int)param_1[0xb] + 1;
    lVar9 = tpidr_el0;
    lVar7 = *(long *)(lVar9 + 0x38d490);
    if (lVar7 == 0) {
      lVar7 = FUN_0333d16c(0,1);
      *(long *)(lVar9 + 0x38d490) = lVar7;
    }
    plVar6 = *(long **)(*(long *)(lVar7 + 8) + 0x58);
    local_58 = (undefined4)uVar2;
    uStack_54 = 8;
    if ((uVar2 & 0x1ffffffff0000000) != 0) {
      local_50 = 2;
      puStack_48 = &DAT_0411b3a0;
      local_40 = &uStack_54;
      puStack_38 = &local_58;
      FUN_03320b50(0x39ec3d88,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Memory/Allocator/hkMemoryAllocator.cpp"
                   ,0x61,"Memory allocation request overflow {}*{}",&local_50);
    }
    (**(code **)(*plVar6 + 0x18))
              (plVar6,lVar8,-(uVar2 >> 0x1c & 1) & 0xffffffff00000000 | uVar2 * 8 & 0xfffffff8);
    param_1[10] = (long)&DAT_03aad864;
    *(undefined4 *)(param_1 + 0xb) = 0;
  }
  puVar5 = PTR_PTR_0434a080;
  if ((int)param_1[9] != 0) {
    lVar9 = param_1[8];
    lVar8 = lVar9 + (long)(int)param_1[9] * 0x10;
    do {
      plVar6 = *(long **)(lVar8 + -8);
      lVar8 = lVar8 + -0x10;
      if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
        plVar1 = plVar6 + 2;
        do {
          lVar7 = *plVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar7 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar7 + -1 == 0) {
          (**(code **)(*plVar6 + 0x18))();
        }
      }
    } while (lVar8 != lVar9);
  }
  *(undefined4 *)(param_1 + 9) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x4c)) && (param_1[8] != 0)) {
    (**(code **)(*(long *)puVar5 + 0x18))
              (puVar5,param_1[8],((ulong)*(uint *)((long)param_1 + 0x4c) & 0x3fffffff) << 4);
  }
  *(undefined4 *)((long)param_1 + 0x4c) = 0x80000000;
  lVar8 = param_1[6];
  param_1[8] = 0;
  if ((lVar8 != 0) && (*(int *)(lVar8 + 4) != -2)) {
    uVar2 = (long)(int)param_1[7] + 1;
    lVar9 = tpidr_el0;
    lVar7 = *(long *)(lVar9 + 0x38d490);
    if (lVar7 == 0) {
      lVar7 = FUN_0333d16c(0,1);
      *(long *)(lVar9 + 0x38d490) = lVar7;
    }
    plVar6 = *(long **)(*(long *)(lVar7 + 8) + 0x58);
    local_58 = (undefined4)uVar2;
    uStack_54 = 8;
    if ((uVar2 & 0x1ffffffff0000000) != 0) {
      local_50 = 2;
      puStack_48 = &DAT_0411b3a0;
      local_40 = &uStack_54;
      puStack_38 = &local_58;
      FUN_03320b50(0x39ec3d88,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Memory/Allocator/hkMemoryAllocator.cpp"
                   ,0x61,"Memory allocation request overflow {}*{}",&local_50);
    }
    (**(code **)(*plVar6 + 0x18))
              (plVar6,lVar8,-(uVar2 >> 0x1c & 1) & 0xffffffff00000000 | uVar2 * 8 & 0xfffffff8);
    param_1[6] = (long)&DAT_03aad864;
    *(undefined4 *)(param_1 + 7) = 0;
  }
  *(undefined4 *)(param_1 + 5) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x2c)) && (param_1[4] != 0)) {
    (**(code **)(*(long *)puVar5 + 0x18))
              (puVar5,param_1[4],((ulong)*(uint *)((long)param_1 + 0x2c) & 0x3fffffff) * 0xc);
  }
  *(undefined4 *)((long)param_1 + 0x2c) = 0x80000000;
  lVar8 = param_1[2];
  param_1[4] = 0;
  if ((lVar8 != 0) && (*(int *)(lVar8 + 4) != -2)) {
    uVar2 = (long)(int)param_1[3] + 1;
    lVar9 = tpidr_el0;
    lVar7 = *(long *)(lVar9 + 0x38d490);
    if (lVar7 == 0) {
      lVar7 = FUN_0333d16c(0,1);
      *(long *)(lVar9 + 0x38d490) = lVar7;
    }
    plVar6 = *(long **)(*(long *)(lVar7 + 8) + 0x58);
    local_58 = (undefined4)uVar2;
    uStack_54 = 8;
    if ((uVar2 & 0x1ffffffff0000000) != 0) {
      local_50 = 2;
      puStack_48 = &DAT_0411b3a0;
      local_40 = &uStack_54;
      puStack_38 = &local_58;
      FUN_03320b50(0x39ec3d88,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Memory/Allocator/hkMemoryAllocator.cpp"
                   ,0x61,"Memory allocation request overflow {}*{}",&local_50);
    }
    (**(code **)(*plVar6 + 0x18))
              (plVar6,lVar8,-(uVar2 >> 0x1c & 1) & 0xffffffff00000000 | uVar2 * 8 & 0xfffffff8);
    param_1[2] = (long)&DAT_03aad864;
    *(undefined4 *)(param_1 + 3) = 0;
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if ((-1 < *(int *)((long)param_1 + 0xc)) && (*param_1 != 0)) {
    (**(code **)(*(long *)puVar5 + 0x18))(puVar5,*param_1,*(int *)((long)param_1 + 0xc) << 2);
  }
  *param_1 = 0;
  *(undefined4 *)((long)param_1 + 0xc) = 0x80000000;
  return;
}


