/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032e0138; name: FUN_032e0138
 */


void FUN_032e0138(long *param_1)

{
  ulong uVar1;
  int iVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined *puStack_58;
  undefined4 *local_50;
  undefined4 *puStack_48;
  
  *param_1 = (long)&PTR_LAB_0434b070;
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x18));
  lVar6 = param_1[0x16];
  if ((lVar6 != 0) && (*(int *)(lVar6 + 4) != -2)) {
    uVar1 = (long)(int)param_1[0x17] + 1;
    lVar7 = tpidr_el0;
    lVar5 = *(long *)(lVar7 + 0x38d490);
    if (lVar5 == 0) {
      lVar5 = FUN_0333d16c(0,1);
      *(long *)(lVar7 + 0x38d490) = lVar5;
    }
    plVar4 = *(long **)(*(long *)(lVar5 + 8) + 0x58);
    local_68 = (undefined4)uVar1;
    uStack_64 = 8;
    if ((uVar1 & 0x1ffffffff0000000) != 0) {
      local_60 = 2;
      puStack_58 = &DAT_0411b3a0;
      local_50 = &uStack_64;
      puStack_48 = &local_68;
      FUN_03320b50(0x39ec3d88,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Memory/Allocator/hkMemoryAllocator.cpp"
                   ,0x61,"Memory allocation request overflow {}*{}",&local_60);
    }
    (**(code **)(*plVar4 + 0x18))
              (plVar4,lVar6,-(uVar1 >> 0x1c & 1) & 0xffffffff00000000 | uVar1 * 8 & 0xfffffff8);
    param_1[0x16] = (long)&DAT_03aad864;
    *(undefined4 *)(param_1 + 0x17) = 0;
  }
  puVar3 = PTR_PTR_0434a080;
  if ((int)param_1[0x15] != 0) {
    lVar7 = param_1[0x14];
    lVar6 = (long)(int)param_1[0x15] * 0x18;
    do {
      lVar5 = lVar7 + lVar6;
      *(undefined4 *)(lVar5 + -8) = 0;
      if ((-1 < (int)*(uint *)(lVar5 + -4)) && (*(long *)(lVar5 + -0x10) != 0)) {
        (**(code **)(*(long *)puVar3 + 0x18))
                  (puVar3,*(long *)(lVar5 + -0x10),((ulong)*(uint *)(lVar5 + -4) & 0x3fffffff) << 3)
        ;
      }
      lVar6 = lVar6 + -0x18;
      *(undefined8 *)(lVar5 + -0x10) = 0;
      *(undefined4 *)(lVar5 + -4) = 0x80000000;
    } while (lVar6 != 0);
  }
  *(undefined4 *)(param_1 + 0x15) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0xac)) && (param_1[0x14] != 0)) {
    (**(code **)(*(long *)puVar3 + 0x18))
              (puVar3,param_1[0x14],((ulong)*(uint *)((long)param_1 + 0xac) & 0x3fffffff) * 0x18);
  }
  param_1[0x14] = 0;
  *(undefined4 *)((long)param_1 + 0xac) = 0x80000000;
  FUN_032e876c(param_1 + 0x10);
  FUN_032e8100(param_1 + 0xb);
  lVar6 = param_1[9];
  if ((lVar6 == 0) || (*(int *)(lVar6 + 4) == -2)) {
    iVar2 = (int)param_1[8];
  }
  else {
    uVar1 = (long)(int)param_1[10] + 1;
    lVar7 = tpidr_el0;
    lVar5 = *(long *)(lVar7 + 0x38d490);
    if (lVar5 == 0) {
      lVar5 = FUN_0333d16c(0,1);
      *(long *)(lVar7 + 0x38d490) = lVar5;
    }
    plVar4 = *(long **)(*(long *)(lVar5 + 8) + 0x58);
    local_68 = (undefined4)uVar1;
    uStack_64 = 8;
    if ((uVar1 & 0x1ffffffff0000000) != 0) {
      local_60 = 2;
      puStack_58 = &DAT_0411b3a0;
      local_50 = &uStack_64;
      puStack_48 = &local_68;
      FUN_03320b50(0x39ec3d88,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Memory/Allocator/hkMemoryAllocator.cpp"
                   ,0x61,"Memory allocation request overflow {}*{}",&local_60);
    }
    (**(code **)(*plVar4 + 0x18))
              (plVar4,lVar6,-(uVar1 >> 0x1c & 1) & 0xffffffff00000000 | uVar1 * 8 & 0xfffffff8);
    param_1[9] = (long)&DAT_03aad864;
    *(undefined4 *)(param_1 + 10) = 0;
    iVar2 = (int)param_1[8];
  }
  if (iVar2 != 0) {
    lVar7 = param_1[7];
    lVar6 = (long)iVar2 * 0x18;
    do {
      lVar5 = lVar7 + lVar6;
      *(undefined4 *)(lVar5 + -8) = 0;
      if ((-1 < (int)*(uint *)(lVar5 + -4)) && (*(long *)(lVar5 + -0x10) != 0)) {
        (**(code **)(*(long *)puVar3 + 0x18))
                  (puVar3,*(long *)(lVar5 + -0x10),((ulong)*(uint *)(lVar5 + -4) & 0x3fffffff) << 4)
        ;
      }
      lVar6 = lVar6 + -0x18;
      *(undefined8 *)(lVar5 + -0x10) = 0;
      *(undefined4 *)(lVar5 + -4) = 0x80000000;
    } while (lVar6 != 0);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x44)) && (param_1[7] != 0)) {
    (**(code **)(*(long *)puVar3 + 0x18))
              (puVar3,param_1[7],((ulong)*(uint *)((long)param_1 + 0x44) & 0x3fffffff) * 0x18);
  }
  *(undefined4 *)((long)param_1 + 0x44) = 0x80000000;
  lVar6 = param_1[5];
  param_1[7] = 0;
  if ((lVar6 == 0) || (*(int *)(lVar6 + 4) == -2)) {
    iVar2 = (int)param_1[4];
  }
  else {
    uVar1 = (long)(int)param_1[6] + 1;
    lVar7 = tpidr_el0;
    lVar5 = *(long *)(lVar7 + 0x38d490);
    if (lVar5 == 0) {
      lVar5 = FUN_0333d16c(0,1);
      *(long *)(lVar7 + 0x38d490) = lVar5;
    }
    plVar4 = *(long **)(*(long *)(lVar5 + 8) + 0x58);
    local_68 = (undefined4)uVar1;
    uStack_64 = 8;
    if ((uVar1 & 0x1ffffffff0000000) != 0) {
      local_60 = 2;
      puStack_58 = &DAT_0411b3a0;
      local_50 = &uStack_64;
      puStack_48 = &local_68;
      FUN_03320b50(0x39ec3d88,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Memory/Allocator/hkMemoryAllocator.cpp"
                   ,0x61,"Memory allocation request overflow {}*{}",&local_60);
    }
    (**(code **)(*plVar4 + 0x18))
              (plVar4,lVar6,-(uVar1 >> 0x1c & 1) & 0xffffffff00000000 | uVar1 * 8 & 0xfffffff8);
    param_1[5] = (long)&DAT_03aad864;
    *(undefined4 *)(param_1 + 6) = 0;
    iVar2 = (int)param_1[4];
  }
  if (iVar2 != 0) {
    lVar7 = param_1[3];
    lVar6 = (long)iVar2 * 0x18;
    do {
      lVar5 = lVar7 + lVar6;
      *(undefined4 *)(lVar5 + -8) = 0;
      if ((-1 < (int)*(uint *)(lVar5 + -4)) && (*(long *)(lVar5 + -0x10) != 0)) {
        (**(code **)(*(long *)puVar3 + 0x18))
                  (puVar3,*(long *)(lVar5 + -0x10),((ulong)*(uint *)(lVar5 + -4) & 0x3fffffff) << 4)
        ;
      }
      lVar6 = lVar6 + -0x18;
      *(undefined8 *)(lVar5 + -0x10) = 0;
      *(undefined4 *)(lVar5 + -4) = 0x80000000;
    } while (lVar6 != 0);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x24)) && (param_1[3] != 0)) {
    (**(code **)(*(long *)puVar3 + 0x18))
              (puVar3,param_1[3],((ulong)*(uint *)((long)param_1 + 0x24) & 0x3fffffff) * 0x18);
  }
  param_1[3] = 0;
  puVar3 = PTR_DAT_043723c0;
  *(undefined4 *)((long)param_1 + 0x24) = 0x80000000;
  *param_1 = (long)(puVar3 + 0x10);
  return;
}


