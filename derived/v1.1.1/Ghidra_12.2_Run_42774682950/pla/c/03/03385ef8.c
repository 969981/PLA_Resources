/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03385ef8; name: FUN_03385ef8
 */


void FUN_03385ef8(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 local_50;
  undefined *puStack_48;
  undefined4 *local_40;
  undefined4 *puStack_38;
  undefined4 local_28;
  undefined4 uStack_24;
  
  lVar6 = *(long *)(param_1 + 0x220);
  if ((lVar6 != 0) && (*(int *)(lVar6 + 4) != -2)) {
    uVar1 = (long)*(int *)(param_1 + 0x228) + 1;
    lVar4 = tpidr_el0;
    lVar5 = *(long *)(lVar4 + 0x38d490);
    if (lVar5 == 0) {
      lVar5 = FUN_0333d16c(0,1);
      *(long *)(lVar4 + 0x38d490) = lVar5;
    }
    plVar3 = *(long **)(*(long *)(lVar5 + 8) + 0x58);
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
    (**(code **)(*plVar3 + 0x18))
              (plVar3,lVar6,-(uVar1 >> 0x1c & 1) & 0xffffffff00000000 | (uVar1 & 0x1fffffff) << 3);
    *(undefined **)(param_1 + 0x220) = &DAT_03aad864;
    *(undefined4 *)(param_1 + 0x228) = 0;
  }
  puVar2 = PTR_PTR_0434a080;
  *(undefined4 *)(param_1 + 0x218) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x21c)) && (*(long *)(param_1 + 0x210) != 0)) {
    (**(code **)(*(long *)puVar2 + 0x18))
              (puVar2,*(long *)(param_1 + 0x210),
               ((ulong)*(uint *)(param_1 + 0x21c) & 0x3fffffff) << 3);
  }
  *(undefined8 *)(param_1 + 0x210) = 0;
  *(undefined4 *)(param_1 + 0x21c) = 0x80000000;
  *(undefined4 *)(param_1 + 0x200) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x204)) && (*(long *)(param_1 + 0x1f8) != 0)) {
    (**(code **)(*(long *)puVar2 + 0x18))
              (puVar2,*(long *)(param_1 + 0x1f8),
               ((ulong)*(uint *)(param_1 + 0x204) & 0x3fffffff) << 3);
  }
  *(undefined8 *)(param_1 + 0x1f8) = 0;
  *(undefined4 *)(param_1 + 0x204) = 0x80000000;
  *(undefined4 *)(param_1 + 0x1f0) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 500)) && (*(long *)(param_1 + 0x1e8) != 0)) {
    (**(code **)(*(long *)puVar2 + 0x18))
              (puVar2,*(long *)(param_1 + 0x1e8),((ulong)*(uint *)(param_1 + 500) & 0x3fffffff) << 3
              );
  }
  *(undefined8 *)(param_1 + 0x1e8) = 0;
  *(undefined4 *)(param_1 + 500) = 0x80000000;
  *(undefined4 *)(param_1 + 0x1e0) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x1e4)) && (*(long *)(param_1 + 0x1d8) != 0)) {
    (**(code **)(*(long *)puVar2 + 0x18))
              (puVar2,*(long *)(param_1 + 0x1d8),*(uint *)(param_1 + 0x1e4) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0x1d8) = 0;
  *(undefined4 *)(param_1 + 0x1e4) = 0x80000000;
  *(undefined4 *)(param_1 + 0x178) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x17c)) && (*(long *)(param_1 + 0x170) != 0)) {
    (**(code **)(*(long *)puVar2 + 0x18))
              (puVar2,*(long *)(param_1 + 0x170),
               ((ulong)*(uint *)(param_1 + 0x17c) & 0x3fffffff) << 3);
  }
  *(undefined8 *)(param_1 + 0x170) = 0;
  *(undefined4 *)(param_1 + 0x17c) = 0x80000000;
  *(undefined4 *)(param_1 + 0x168) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x16c)) && (*(long *)(param_1 + 0x160) != 0)) {
    (**(code **)(*(long *)puVar2 + 0x18))
              (puVar2,*(long *)(param_1 + 0x160),*(uint *)(param_1 + 0x16c) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0x160) = 0;
  *(undefined4 *)(param_1 + 0x16c) = 0x80000000;
  if (*(int *)(param_1 + 0x148) != 0) {
    lVar4 = *(long *)(param_1 + 0x140);
    lVar6 = (long)*(int *)(param_1 + 0x148) * 0x18;
    do {
      lVar5 = lVar4 + lVar6;
      *(undefined4 *)(lVar5 + -8) = 0;
      if ((-1 < (int)*(uint *)(lVar5 + -4)) && (*(long *)(lVar5 + -0x10) != 0)) {
        (**(code **)(*(long *)puVar2 + 0x18))
                  (puVar2,*(long *)(lVar5 + -0x10),((ulong)*(uint *)(lVar5 + -4) & 0x3fffffff) << 4)
        ;
      }
      lVar6 = lVar6 + -0x18;
      *(undefined8 *)(lVar5 + -0x10) = 0;
      *(undefined4 *)(lVar5 + -4) = 0x80000000;
    } while (lVar6 != 0);
  }
  *(undefined4 *)(param_1 + 0x148) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x14c)) && (*(long *)(param_1 + 0x140) != 0)) {
    (**(code **)(*(long *)puVar2 + 0x18))
              (puVar2,*(long *)(param_1 + 0x140),
               ((ulong)*(uint *)(param_1 + 0x14c) & 0x3fffffff) * 0x18);
  }
  *(undefined8 *)(param_1 + 0x140) = 0;
  *(undefined4 *)(param_1 + 0x14c) = 0x80000000;
  *(undefined4 *)(param_1 + 0x130) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x134)) && (*(long *)(param_1 + 0x128) != 0)) {
    (**(code **)(*(long *)puVar2 + 0x18))
              (puVar2,*(long *)(param_1 + 0x128),
               ((ulong)*(uint *)(param_1 + 0x134) & 0x3fffffff) << 3);
  }
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 0x134) = 0x80000000;
  FUN_03386be0(param_1 + 8);
  return;
}


