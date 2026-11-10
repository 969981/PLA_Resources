/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0338f0d0; name: FUN_0338f0d0
 */


void FUN_0338f0d0(undefined8 *param_1)

{
  int iVar1;
  undefined *puVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined4 **local_1a0;
  undefined8 local_198;
  undefined4 *local_190;
  undefined8 *puStack_188;
  undefined4 *local_90;
  undefined4 local_88 [16];
  undefined8 local_48;
  
  *param_1 = &PTR_FUN_0436f008;
  if (*(int *)(param_1 + 0x3f) == 1) {
    FUN_03322078(local_88,param_1 + 0x39);
    local_1a0 = &local_190;
    local_198 = (undefined *)0x8000001000000000;
    local_90 = local_88;
    FUN_03398be8(&local_1a0,0,0x54434d30);
    FUN_03398be8(&local_1a0,1,0x54434944);
    if (0 < *(int *)(param_1 + 0x3e)) {
      lVar7 = 0;
      do {
        local_48 = *(undefined8 *)(param_1[0x3d] + lVar7 * 8);
        FUN_032afb80(local_88,&local_48,8);
        lVar7 = lVar7 + 1;
      } while (lVar7 < *(int *)(param_1 + 0x3e));
    }
    FUN_03398cb8(&local_1a0);
    FUN_0338fd30(param_1,&local_1a0,local_88);
    FUN_03398cb8(&local_1a0);
    lVar7 = (long)local_198;
    uVar4 = (ulong)local_198._4_4_;
    local_198 = (undefined *)((ulong)local_198._4_4_ << 0x20);
    if ((-1 < lVar7) && (local_1a0 != (undefined4 **)0x0)) {
      (**(code **)(*(long *)PTR_PTR_0434a080 + 0x18))
                (PTR_PTR_0434a080,local_1a0,(uVar4 & 0x3fffffff) << 4);
    }
    FUN_03322120(local_88);
  }
  FUN_032da940(param_1 + 0x61);
  lVar7 = param_1[0x5f];
  if ((lVar7 != 0) && (*(int *)(lVar7 + 4) != -2)) {
    uVar4 = (long)*(int *)(param_1 + 0x60) + 1;
    lVar8 = tpidr_el0;
    lVar5 = *(long *)(lVar8 + 0x38d490);
    if (lVar5 == 0) {
      lVar5 = FUN_0333d16c(0,1);
      *(long *)(lVar8 + 0x38d490) = lVar5;
    }
    plVar3 = *(long **)(*(long *)(lVar5 + 8) + 0x58);
    local_88[0] = 8;
    local_48 = CONCAT44(local_48._4_4_,(int)uVar4);
    if ((uVar4 & 0x1ffffffff0000000) != 0) {
      local_1a0 = (undefined4 **)0x2;
      local_198 = &DAT_0411b3a0;
      local_190 = local_88;
      puStack_188 = &local_48;
      FUN_03320b50(0x39ec3d88,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Memory/Allocator/hkMemoryAllocator.cpp"
                   ,0x61,"Memory allocation request overflow {}*{}",&local_1a0);
    }
    (**(code **)(*plVar3 + 0x18))
              (plVar3,lVar7,-(uVar4 >> 0x1c & 1) & 0xffffffff00000000 | uVar4 * 8 & 0xfffffff8);
    param_1[0x5f] = &DAT_03aad864;
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  puVar2 = PTR_PTR_0434a080;
  *(undefined4 *)(param_1 + 0x5e) = 0;
  if ((-1 < *(int *)((long)param_1 + 0x2f4)) && (param_1[0x5d] != 0)) {
    (**(code **)(*(long *)puVar2 + 0x18))(puVar2,param_1[0x5d],*(int *)((long)param_1 + 0x2f4) << 2)
    ;
  }
  param_1[0x5d] = 0;
  *(undefined4 *)((long)param_1 + 0x2f4) = 0x80000000;
  FUN_032e876c(param_1 + 0x59);
  FUN_032e8100(param_1 + 0x54);
  if ((long *)param_1[0x53] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x53] + 8))();
  }
  FUN_032f76dc(param_1 + 0x45);
  FUN_03377e40(param_1 + 0x40);
  *(undefined4 *)(param_1 + 0x3e) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 500)) && (param_1[0x3d] != 0)) {
    (**(code **)(*(long *)puVar2 + 0x18))
              (puVar2,param_1[0x3d],((ulong)*(uint *)((long)param_1 + 500) & 0x3fffffff) << 3);
  }
  param_1[0x3d] = 0;
  *(undefined4 *)((long)param_1 + 500) = 0x80000000;
  if (param_1[0x39] != 0) {
    FUN_032d647c();
  }
  FUN_0339587c(param_1 + 0x2c);
  *(undefined4 *)(param_1 + 0x2a) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x154)) && (param_1[0x29] != 0)) {
    (**(code **)(*(long *)puVar2 + 0x18))
              (puVar2,param_1[0x29],((ulong)*(uint *)((long)param_1 + 0x154) & 0x3fffffff) << 3);
  }
  *(undefined4 *)((long)param_1 + 0x154) = 0x80000000;
  lVar7 = param_1[0x26];
  param_1[0x29] = 0;
  if ((lVar7 != 0) && (*(int *)(lVar7 + 4) != -2)) {
    uVar4 = (long)*(int *)(param_1 + 0x27) + 1;
    lVar8 = tpidr_el0;
    lVar5 = *(long *)(lVar8 + 0x38d490);
    if (lVar5 == 0) {
      lVar5 = FUN_0333d16c(0,1);
      *(long *)(lVar8 + 0x38d490) = lVar5;
    }
    plVar3 = *(long **)(*(long *)(lVar5 + 8) + 0x58);
    local_88[0] = 8;
    local_48 = CONCAT44(local_48._4_4_,(int)uVar4);
    if ((uVar4 & 0x1ffffffff0000000) != 0) {
      local_1a0 = (undefined4 **)0x2;
      local_198 = &DAT_0411b3a0;
      local_190 = local_88;
      puStack_188 = &local_48;
      FUN_03320b50(0x39ec3d88,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Memory/Allocator/hkMemoryAllocator.cpp"
                   ,0x61,"Memory allocation request overflow {}*{}",&local_1a0);
    }
    (**(code **)(*plVar3 + 0x18))
              (plVar3,lVar7,-(uVar4 >> 0x1c & 1) & 0xffffffff00000000 | uVar4 * 8 & 0xfffffff8);
    param_1[0x26] = &DAT_03aad864;
    *(undefined4 *)(param_1 + 0x27) = 0;
  }
  *(undefined4 *)(param_1 + 0x25) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 300)) && (param_1[0x24] != 0)) {
    (**(code **)(*(long *)puVar2 + 0x18))
              (puVar2,param_1[0x24],((ulong)*(uint *)((long)param_1 + 300) & 0x3fffffff) * 0xc);
  }
  iVar1 = *(int *)(param_1 + 0x1f);
  param_1[0x24] = 0;
  *(undefined4 *)((long)param_1 + 300) = 0x80000000;
  if (iVar1 != 0) {
    lVar8 = param_1[0x1e];
    lVar7 = lVar8 + (long)iVar1 * 0x18;
    *(undefined4 *)(lVar7 + -8) = 0;
    if ((-1 < (int)*(uint *)(lVar7 + -4)) && (*(long *)(lVar7 + -0x10) != 0)) {
      (**(code **)(*(long *)puVar2 + 0x18))
                (puVar2,*(long *)(lVar7 + -0x10),((ulong)*(uint *)(lVar7 + -4) & 0x3fffffff) << 4);
    }
    *(undefined8 *)(lVar7 + -0x10) = 0;
    *(undefined4 *)(lVar7 + -4) = 0x80000000;
    if (lVar7 + -0x18 != lVar8) {
      lVar7 = (long)iVar1 * 0x18;
      do {
        lVar5 = lVar8 + lVar7;
        *(undefined4 *)(lVar5 + -0x20) = 0;
        if ((-1 < (int)*(uint *)(lVar5 + -0x1c)) && (*(long *)(lVar5 + -0x28) != 0)) {
          (**(code **)(*(long *)puVar2 + 0x18))
                    (puVar2,*(long *)(lVar5 + -0x28),
                     ((ulong)*(uint *)(lVar5 + -0x1c) & 0x3fffffff) << 4);
        }
        lVar7 = lVar7 + -0x18;
        *(undefined8 *)(lVar5 + -0x28) = 0;
        *(undefined4 *)(lVar5 + -0x1c) = 0x80000000;
      } while (lVar7 != 0x18);
    }
  }
  *(undefined4 *)(param_1 + 0x1f) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0xfc)) && (param_1[0x1e] != 0)) {
    (**(code **)(*(long *)puVar2 + 0x18))
              (puVar2,param_1[0x1e],((ulong)*(uint *)((long)param_1 + 0xfc) & 0x3fffffff) * 0x18);
  }
  *(undefined4 *)((long)param_1 + 0xfc) = 0x80000000;
  param_1[0x1e] = 0;
  if (*(int *)(param_1 + 0x1d) != 0) {
    lVar5 = param_1[0x1c];
    lVar7 = (long)*(int *)(param_1 + 0x1d) << 3;
    lVar8 = tpidr_el0;
    do {
      while (uVar4 = *(ulong *)(lVar5 + -8 + lVar7), (uVar4 & 1) != 0) {
        lVar6 = *(long *)(lVar8 + 0x38d490);
        if (lVar6 == 0) {
          lVar6 = FUN_0333d16c(0,1);
          *(long *)(lVar8 + 0x38d490) = lVar6;
        }
        plVar3 = *(long **)(*(long *)(lVar6 + 8) + 0x58);
        *(undefined8 *)(uVar4 - 0x11) = 0;
        (**(code **)(*plVar3 + 0x18))
                  (plVar3,(undefined8 *)(uVar4 - 0x11),(long)*(int *)(uVar4 - 9) + 0x10);
        lVar7 = lVar7 + -8;
        if (lVar7 == 0) goto LAB_0338f3a0;
      }
      lVar7 = lVar7 + -8;
    } while (lVar7 != 0);
  }
LAB_0338f3a0:
  *(undefined4 *)(param_1 + 0x1d) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0xec)) && (param_1[0x1c] != 0)) {
    (**(code **)(*(long *)puVar2 + 0x18))
              (puVar2,param_1[0x1c],((ulong)*(uint *)((long)param_1 + 0xec) & 0x3fffffff) << 3);
  }
  *(undefined4 *)((long)param_1 + 0xec) = 0x80000000;
  lVar7 = param_1[0x19];
  param_1[0x1c] = 0;
  if ((lVar7 != 0) && (*(int *)(lVar7 + 4) != -2)) {
    uVar4 = (long)*(int *)(param_1 + 0x1a) + 1;
    lVar8 = tpidr_el0;
    lVar5 = *(long *)(lVar8 + 0x38d490);
    if (lVar5 == 0) {
      lVar5 = FUN_0333d16c(0,1);
      *(long *)(lVar8 + 0x38d490) = lVar5;
    }
    plVar3 = *(long **)(*(long *)(lVar5 + 8) + 0x58);
    local_88[0] = 8;
    local_48 = CONCAT44(local_48._4_4_,(int)uVar4);
    if ((uVar4 & 0x1ffffffff0000000) != 0) {
      local_1a0 = (undefined4 **)0x2;
      local_198 = &DAT_0411b3a0;
      local_190 = local_88;
      puStack_188 = &local_48;
      FUN_03320b50(0x39ec3d88,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Memory/Allocator/hkMemoryAllocator.cpp"
                   ,0x61,"Memory allocation request overflow {}*{}",&local_1a0);
    }
    (**(code **)(*plVar3 + 0x18))
              (plVar3,lVar7,-(uVar4 >> 0x1c & 1) & 0xffffffff00000000 | uVar4 * 8 & 0xfffffff8);
    param_1[0x19] = &DAT_03aad864;
    *(undefined4 *)(param_1 + 0x1a) = 0;
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0xc4)) && (param_1[0x17] != 0)) {
    (**(code **)(*(long *)puVar2 + 0x18))
              (puVar2,param_1[0x17],((ulong)*(uint *)((long)param_1 + 0xc4) & 0x3fffffff) << 3);
  }
  *(undefined4 *)((long)param_1 + 0xc4) = 0x80000000;
  param_1[0x17] = 0;
  if (*(int *)(param_1 + 0x16) != 0) {
    lVar5 = param_1[0x15];
    lVar7 = (long)*(int *)(param_1 + 0x16) << 3;
    lVar8 = tpidr_el0;
    do {
      while (uVar4 = *(ulong *)(lVar5 + -8 + lVar7), (uVar4 & 1) != 0) {
        lVar6 = *(long *)(lVar8 + 0x38d490);
        if (lVar6 == 0) {
          lVar6 = FUN_0333d16c(0,1);
          *(long *)(lVar8 + 0x38d490) = lVar6;
        }
        plVar3 = *(long **)(*(long *)(lVar6 + 8) + 0x58);
        *(undefined8 *)(uVar4 - 0x11) = 0;
        (**(code **)(*plVar3 + 0x18))
                  (plVar3,(undefined8 *)(uVar4 - 0x11),(long)*(int *)(uVar4 - 9) + 0x10);
        lVar7 = lVar7 + -8;
        if (lVar7 == 0) goto LAB_0338f494;
      }
      lVar7 = lVar7 + -8;
    } while (lVar7 != 0);
  }
LAB_0338f494:
  *(undefined4 *)(param_1 + 0x16) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0xb4)) && (param_1[0x15] != 0)) {
    (**(code **)(*(long *)puVar2 + 0x18))
              (puVar2,param_1[0x15],((ulong)*(uint *)((long)param_1 + 0xb4) & 0x3fffffff) << 3);
  }
  *(undefined4 *)((long)param_1 + 0xb4) = 0x80000000;
  lVar7 = param_1[0x12];
  param_1[0x15] = 0;
  if ((lVar7 != 0) && (*(int *)(lVar7 + 4) != -2)) {
    uVar4 = (long)*(int *)(param_1 + 0x13) + 1;
    lVar8 = tpidr_el0;
    lVar5 = *(long *)(lVar8 + 0x38d490);
    if (lVar5 == 0) {
      lVar5 = FUN_0333d16c(0,1);
      *(long *)(lVar8 + 0x38d490) = lVar5;
    }
    plVar3 = *(long **)(*(long *)(lVar5 + 8) + 0x58);
    local_88[0] = 8;
    local_48 = CONCAT44(local_48._4_4_,(int)uVar4);
    if ((uVar4 & 0x1ffffffff0000000) != 0) {
      local_1a0 = (undefined4 **)0x2;
      local_198 = &DAT_0411b3a0;
      local_190 = local_88;
      puStack_188 = &local_48;
      FUN_03320b50(0x39ec3d88,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Memory/Allocator/hkMemoryAllocator.cpp"
                   ,0x61,"Memory allocation request overflow {}*{}",&local_1a0);
    }
    (**(code **)(*plVar3 + 0x18))
              (plVar3,lVar7,-(uVar4 >> 0x1c & 1) & 0xffffffff00000000 | uVar4 * 8 & 0xfffffff8);
    param_1[0x12] = &DAT_03aad864;
    *(undefined4 *)(param_1 + 0x13) = 0;
  }
  *(undefined4 *)(param_1 + 0x11) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x8c)) && (param_1[0x10] != 0)) {
    (**(code **)(*(long *)puVar2 + 0x18))
              (puVar2,param_1[0x10],((ulong)*(uint *)((long)param_1 + 0x8c) & 0x3fffffff) << 3);
  }
  *(undefined4 *)((long)param_1 + 0x8c) = 0x80000000;
  param_1[0x10] = 0;
  if (*(int *)(param_1 + 0xf) != 0) {
    lVar5 = param_1[0xe];
    lVar7 = (long)*(int *)(param_1 + 0xf) << 3;
    lVar8 = tpidr_el0;
    do {
      while (uVar4 = *(ulong *)(lVar5 + -8 + lVar7), (uVar4 & 1) != 0) {
        lVar6 = *(long *)(lVar8 + 0x38d490);
        if (lVar6 == 0) {
          lVar6 = FUN_0333d16c(0,1);
          *(long *)(lVar8 + 0x38d490) = lVar6;
        }
        plVar3 = *(long **)(*(long *)(lVar6 + 8) + 0x58);
        *(undefined8 *)(uVar4 - 0x11) = 0;
        (**(code **)(*plVar3 + 0x18))
                  (plVar3,(undefined8 *)(uVar4 - 0x11),(long)*(int *)(uVar4 - 9) + 0x10);
        lVar7 = lVar7 + -8;
        if (lVar7 == 0) goto LAB_0338f588;
      }
      lVar7 = lVar7 + -8;
    } while (lVar7 != 0);
  }
LAB_0338f588:
  *(undefined4 *)(param_1 + 0xf) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x7c)) && (param_1[0xe] != 0)) {
    (**(code **)(*(long *)puVar2 + 0x18))
              (puVar2,param_1[0xe],((ulong)*(uint *)((long)param_1 + 0x7c) & 0x3fffffff) << 3);
  }
  *(undefined4 *)((long)param_1 + 0x7c) = 0x80000000;
  lVar7 = param_1[0xb];
  param_1[0xe] = 0;
  if ((lVar7 != 0) && (*(int *)(lVar7 + 4) != -2)) {
    uVar4 = (long)*(int *)(param_1 + 0xc) + 1;
    lVar8 = tpidr_el0;
    lVar5 = *(long *)(lVar8 + 0x38d490);
    if (lVar5 == 0) {
      lVar5 = FUN_0333d16c(0,1);
      *(long *)(lVar8 + 0x38d490) = lVar5;
    }
    plVar3 = *(long **)(*(long *)(lVar5 + 8) + 0x58);
    local_88[0] = 8;
    local_48 = CONCAT44(local_48._4_4_,(int)uVar4);
    if ((uVar4 & 0x1ffffffff0000000) != 0) {
      local_1a0 = (undefined4 **)0x2;
      local_198 = &DAT_0411b3a0;
      local_190 = local_88;
      puStack_188 = &local_48;
      FUN_03320b50(0x39ec3d88,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Memory/Allocator/hkMemoryAllocator.cpp"
                   ,0x61,"Memory allocation request overflow {}*{}",&local_1a0);
    }
    (**(code **)(*plVar3 + 0x18))
              (plVar3,lVar7,-(uVar4 >> 0x1c & 1) & 0xffffffff00000000 | uVar4 * 8 & 0xfffffff8);
    param_1[0xb] = &DAT_03aad864;
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  *(undefined4 *)(param_1 + 10) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x54)) && (param_1[9] != 0)) {
    (**(code **)(*(long *)puVar2 + 0x18))
              (puVar2,param_1[9],((ulong)*(uint *)((long)param_1 + 0x54) & 0x3fffffff) << 3);
  }
  param_1[9] = 0;
  *(undefined4 *)((long)param_1 + 0x54) = 0x80000000;
  *(undefined4 *)(param_1 + 7) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x3c)) && (param_1[6] != 0)) {
    (**(code **)(*(long *)puVar2 + 0x18))
              (puVar2,param_1[6],*(uint *)((long)param_1 + 0x3c) & 0x3fffffff);
  }
  param_1[6] = 0;
  *(undefined4 *)((long)param_1 + 0x3c) = 0x80000000;
  *(undefined4 *)(param_1 + 4) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x24)) && (param_1[3] != 0)) {
    (**(code **)(*(long *)puVar2 + 0x18))
              (puVar2,param_1[3],((ulong)*(uint *)((long)param_1 + 0x24) & 0x3fffffff) << 3);
  }
  param_1[3] = 0;
  *(undefined4 *)((long)param_1 + 0x24) = 0x80000000;
  *(undefined4 *)(param_1 + 2) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x14)) && (param_1[1] != 0)) {
    (**(code **)(*(long *)puVar2 + 0x18))
              (puVar2,param_1[1],*(uint *)((long)param_1 + 0x14) & 0x3fffffff);
  }
  param_1[1] = 0;
  *(undefined4 *)((long)param_1 + 0x14) = 0x80000000;
  return;
}


