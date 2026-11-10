/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0318e6a8; name: FUN_0318e6a8
 */


void FUN_0318e6a8(long *param_1)

{
  ulong uVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined *puStack_58;
  undefined4 *local_50;
  undefined4 *puStack_48;
  
  puVar2 = PTR_PTR_0434a080;
  if ((int)param_1[1] != 0) {
    lVar5 = (long)(int)param_1[1] * 0x38;
    lVar6 = *param_1;
    do {
      lVar4 = lVar6 + lVar5;
      *(undefined4 *)(lVar4 + -8) = 0;
      if ((-1 < *(int *)(lVar4 + -4)) && (*(long *)(lVar4 + -0x10) != 0)) {
        (**(code **)(*(long *)puVar2 + 0x18))
                  (puVar2,*(long *)(lVar4 + -0x10),*(int *)(lVar4 + -4) << 2);
      }
      *(undefined8 *)(lVar4 + -0x10) = 0;
      *(undefined4 *)(lVar4 + -4) = 0x80000000;
      *(undefined4 *)(lVar4 + -0x18) = 0;
      if ((-1 < *(int *)(lVar4 + -0x14)) && (*(long *)(lVar4 + -0x20) != 0)) {
        (**(code **)(*(long *)puVar2 + 0x18))
                  (puVar2,*(long *)(lVar4 + -0x20),*(int *)(lVar4 + -0x14) << 2);
      }
      *(undefined8 *)(lVar4 + -0x20) = 0;
      *(undefined4 *)(lVar4 + -0x14) = 0x80000000;
      *(undefined4 *)(lVar4 + -0x28) = 0;
      if ((-1 < (int)*(uint *)(lVar4 + -0x24)) && (*(long *)(lVar4 + -0x30) != 0)) {
        (**(code **)(*(long *)puVar2 + 0x18))
                  (puVar2,*(long *)(lVar4 + -0x30),
                   ((ulong)*(uint *)(lVar4 + -0x24) & 0x3fffffff) * 0x14);
      }
      lVar5 = lVar5 + -0x38;
      *(undefined8 *)(lVar4 + -0x30) = 0;
      *(undefined4 *)(lVar4 + -0x24) = 0x80000000;
    } while (lVar5 != 0);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0xc)) && (*param_1 != 0)) {
    (**(code **)(*(long *)puVar2 + 0x18))
              (puVar2,*param_1,((ulong)*(uint *)((long)param_1 + 0xc) & 0x3fffffff) * 0x38);
  }
  lVar5 = param_1[2];
  *param_1 = 0;
  *(undefined4 *)((long)param_1 + 0xc) = 0x80000000;
  if ((lVar5 != 0) && (*(int *)(lVar5 + 4) != -2)) {
    uVar1 = (long)(int)param_1[3] + 1;
    lVar6 = tpidr_el0;
    lVar4 = *(long *)(lVar6 + 0x38d490);
    if (lVar4 == 0) {
      lVar4 = FUN_0333d16c(0,1);
      *(long *)(lVar6 + 0x38d490) = lVar4;
    }
    plVar3 = *(long **)(*(long *)(lVar4 + 8) + 0x58);
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
    (**(code **)(*plVar3 + 0x18))
              (plVar3,lVar5,-(uVar1 >> 0x1c & 1) & 0xffffffff00000000 | uVar1 * 8 & 0xfffffff8);
    param_1[2] = (long)&DAT_03aad864;
    *(undefined4 *)(param_1 + 3) = 0;
  }
  return;
}


