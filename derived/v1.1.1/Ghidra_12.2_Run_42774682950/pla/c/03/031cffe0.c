/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031cffe0; name: FUN_031cffe0
 */


void FUN_031cffe0(long *param_1)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 local_50;
  undefined *puStack_48;
  undefined4 *local_40;
  undefined4 *puStack_38;
  undefined4 local_28;
  undefined4 uStack_24;
  
  *param_1 = (long)&PTR_LAB_0430aa18;
  puVar3 = PTR_PTR_0434a080;
  *(undefined4 *)(param_1 + 0x20) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x104)) && (param_1[0x1f] != 0)) {
    FUN_032cf244(puVar3,param_1[0x1f],0x20,*(uint *)((long)param_1 + 0x104) & 0x3fffffff);
  }
  *(undefined4 *)((long)param_1 + 0x104) = 0x80000000;
  lVar5 = param_1[0x1d];
  param_1[0x1f] = 0;
  if ((lVar5 != 0) && (*(int *)(lVar5 + 4) != -2)) {
    uVar1 = (long)(int)param_1[0x1e] + 1;
    lVar2 = tpidr_el0;
    lVar6 = *(long *)(lVar2 + 0x38d490);
    if (lVar6 == 0) {
      lVar6 = FUN_0333d16c(0,1);
      *(long *)(lVar2 + 0x38d490) = lVar6;
    }
    plVar4 = *(long **)(*(long *)(lVar6 + 8) + 0x58);
    local_28 = (undefined4)uVar1;
    uStack_24 = 8;
    if ((uVar1 & 0x1ffffffff0000000) != 0) {
      local_50 = 2;
      puStack_48 = &DAT_0411b3a0;
      local_40 = &uStack_24;
      puStack_38 = &local_28;
      FUN_03320b50(0x39ec3d88,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Memory/Allocator/hkMemoryAllocator.cpp"
                   ,0x61,"Memory allocation request overflow {}*{}",&local_50);
    }
    (**(code **)(*plVar4 + 0x18))
              (plVar4,lVar5,-(uVar1 >> 0x1c & 1) & 0xffffffff00000000 | (uVar1 & 0x1fffffff) << 3);
    param_1[0x1d] = (long)&DAT_03aad864;
    *(undefined4 *)(param_1 + 0x1e) = 0;
  }
  *(undefined4 *)(param_1 + 0x1c) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0xe4)) && (param_1[0x1b] != 0)) {
    FUN_032cf244(puVar3,param_1[0x1b],4,*(uint *)((long)param_1 + 0xe4) & 0x3fffffff);
  }
  *(undefined4 *)((long)param_1 + 0xe4) = 0x80000000;
  lVar5 = param_1[0x19];
  param_1[0x1b] = 0;
  if ((lVar5 != 0) && (*(int *)(lVar5 + 4) != -2)) {
    uVar1 = (long)(int)param_1[0x1a] + 1;
    lVar2 = tpidr_el0;
    lVar6 = *(long *)(lVar2 + 0x38d490);
    if (lVar6 == 0) {
      lVar6 = FUN_0333d16c(0,1);
      *(long *)(lVar2 + 0x38d490) = lVar6;
    }
    plVar4 = *(long **)(*(long *)(lVar6 + 8) + 0x58);
    local_28 = (undefined4)uVar1;
    uStack_24 = 8;
    if ((uVar1 & 0x1ffffffff0000000) != 0) {
      local_50 = 2;
      puStack_48 = &DAT_0411b3a0;
      local_40 = &uStack_24;
      puStack_38 = &local_28;
      FUN_03320b50(0x39ec3d88,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Memory/Allocator/hkMemoryAllocator.cpp"
                   ,0x61,"Memory allocation request overflow {}*{}",&local_50);
    }
    (**(code **)(*plVar4 + 0x18))
              (plVar4,lVar5,-(uVar1 >> 0x1c & 1) & 0xffffffff00000000 | (uVar1 & 0x1fffffff) << 3);
    param_1[0x19] = (long)&DAT_03aad864;
    *(undefined4 *)(param_1 + 0x1a) = 0;
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0xc4)) && (param_1[0x17] != 0)) {
    FUN_032cf244(puVar3,param_1[0x17],4,*(uint *)((long)param_1 + 0xc4) & 0x3fffffff);
  }
  param_1[0x17] = 0;
  *(undefined4 *)((long)param_1 + 0xc4) = 0x80000000;
  *(undefined4 *)(param_1 + 0x16) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0xb4)) && (param_1[0x15] != 0)) {
    FUN_032cf244(puVar3,param_1[0x15],4,*(uint *)((long)param_1 + 0xb4) & 0x3fffffff);
  }
  *(undefined4 *)((long)param_1 + 0xb4) = 0x80000000;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0xa4)) && (param_1[0x13] != 0)) {
    FUN_032cf244(puVar3,param_1[0x13],4,*(uint *)((long)param_1 + 0xa4) & 0x3fffffff);
  }
  param_1[0x13] = 0;
  *(undefined4 *)((long)param_1 + 0xa4) = 0x80000000;
  FUN_031d62c4(param_1 + 5);
  *param_1 = (long)(PTR_DAT_043723c0 + 0x10);
  return;
}


