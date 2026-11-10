/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031d62c4; name: FUN_031d62c4
 */


void FUN_031d62c4(long param_1)

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
  
  lVar6 = *(long *)(param_1 + 0x60);
  if ((lVar6 != 0) && (*(int *)(lVar6 + 4) != -2)) {
    uVar1 = (long)*(int *)(param_1 + 0x68) + 1;
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
    *(undefined **)(param_1 + 0x60) = &DAT_03aad864;
    *(undefined4 *)(param_1 + 0x68) = 0;
  }
  puVar3 = PTR_PTR_0434a080;
  if (*(int *)(param_1 + 0x58) != 0) {
    lVar7 = *(long *)(param_1 + 0x50);
    lVar6 = (long)*(int *)(param_1 + 0x58) * 0x18;
    do {
      lVar5 = lVar7 + lVar6;
      *(undefined4 *)(lVar5 + -8) = 0;
      if ((-1 < (int)*(uint *)(lVar5 + -4)) && (*(long *)(lVar5 + -0x10) != 0)) {
        FUN_032cf244(puVar3,*(long *)(lVar5 + -0x10),8,*(uint *)(lVar5 + -4) & 0x3fffffff);
      }
      lVar6 = lVar6 + -0x18;
      *(undefined8 *)(lVar5 + -0x10) = 0;
      *(undefined4 *)(lVar5 + -4) = 0x80000000;
    } while (lVar6 != 0);
  }
  *(undefined4 *)(param_1 + 0x58) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x5c)) && (*(long *)(param_1 + 0x50) != 0)) {
    FUN_032cf244(puVar3,*(long *)(param_1 + 0x50),0x18,*(uint *)(param_1 + 0x5c) & 0x3fffffff);
  }
  *(undefined4 *)(param_1 + 0x5c) = 0x80000000;
  lVar6 = *(long *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x50) = 0;
  if ((lVar6 == 0) || (*(int *)(lVar6 + 4) == -2)) {
    iVar2 = *(int *)(param_1 + 0x38);
  }
  else {
    uVar1 = (long)*(int *)(param_1 + 0x48) + 1;
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
    *(undefined **)(param_1 + 0x40) = &DAT_03aad864;
    *(undefined4 *)(param_1 + 0x48) = 0;
    iVar2 = *(int *)(param_1 + 0x38);
  }
  if (iVar2 != 0) {
    lVar7 = *(long *)(param_1 + 0x30);
    lVar6 = (long)iVar2 * 0x28;
    do {
      lVar5 = lVar7 + lVar6;
      *(undefined4 *)(lVar5 + -0x10) = 0;
      if ((-1 < (int)*(uint *)(lVar5 + -0xc)) && (*(long *)(lVar5 + -0x18) != 0)) {
        FUN_032cf244(puVar3,*(long *)(lVar5 + -0x18),4,*(uint *)(lVar5 + -0xc) & 0x3fffffff);
      }
      lVar6 = lVar6 + -0x28;
      *(undefined8 *)(lVar5 + -0x18) = 0;
      *(undefined4 *)(lVar5 + -0xc) = 0x80000000;
    } while (lVar6 != 0);
  }
  *(undefined4 *)(param_1 + 0x38) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x3c)) && (*(long *)(param_1 + 0x30) != 0)) {
    FUN_032cf244(puVar3,*(long *)(param_1 + 0x30),0x28,*(uint *)(param_1 + 0x3c) & 0x3fffffff);
  }
  *(undefined4 *)(param_1 + 0x3c) = 0x80000000;
  lVar6 = *(long *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x30) = 0;
  if ((lVar6 != 0) && (*(int *)(lVar6 + 4) != -2)) {
    uVar1 = (long)*(int *)(param_1 + 0x28) + 1;
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
    *(undefined **)(param_1 + 0x20) = &DAT_03aad864;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x1c)) && (*(long *)(param_1 + 0x10) != 0)) {
    FUN_032cf244(puVar3,*(long *)(param_1 + 0x10),8,*(uint *)(param_1 + 0x1c) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0x80000000;
  if (*(long *)(param_1 + 8) == 0) {
    return;
  }
  FUN_032d647c();
  return;
}


