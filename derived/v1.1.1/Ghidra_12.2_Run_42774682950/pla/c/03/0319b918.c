/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0319b918; name: FUN_0319b918
 */


void FUN_0319b918(long *param_1)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 local_70;
  undefined *puStack_68;
  undefined4 *local_60;
  undefined4 *puStack_58;
  undefined4 local_48;
  undefined4 uStack_44;
  
  lVar5 = param_1[2];
  if ((lVar5 != 0) && (*(int *)(lVar5 + 4) != -2)) {
    uVar1 = (long)(int)param_1[3] + 1;
    lVar6 = tpidr_el0;
    lVar7 = *(long *)(lVar6 + 0x38d490);
    if (lVar7 == 0) {
      lVar7 = FUN_0333d16c(0,1);
      *(long *)(lVar6 + 0x38d490) = lVar7;
    }
    plVar4 = *(long **)(*(long *)(lVar7 + 8) + 0x58);
    local_48 = (undefined4)uVar1;
    uStack_44 = 8;
    if ((uVar1 & 0x1ffffffff0000000) != 0) {
      local_70 = 2;
      puStack_68 = &DAT_0411b3a0;
      local_60 = &uStack_44;
      puStack_58 = &local_48;
      FUN_03320b50(0x39ec3d88,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Memory/Allocator/hkMemoryAllocator.cpp"
                   ,0x61,"Memory allocation request overflow {}*{}",&local_70);
    }
    (**(code **)(*plVar4 + 0x18))
              (plVar4,lVar5,-(uVar1 >> 0x1c & 1) & 0xffffffff00000000 | uVar1 * 8 & 0xfffffff8);
    param_1[2] = (long)&DAT_03aad864;
    *(undefined4 *)(param_1 + 3) = 0;
  }
  puVar3 = PTR_PTR_0434a080;
  if ((int)param_1[1] != 0) {
    lVar6 = *param_1;
    lVar5 = 0;
    lVar7 = (long)(int)param_1[1] * 0x40;
    do {
      lVar2 = lVar6 + lVar7;
      *(undefined4 *)(lVar2 + -8) = 0;
      if ((-1 < *(int *)(lVar2 + -4)) && (*(long *)(lVar2 + -0x10) != 0)) {
        (**(code **)(*(long *)puVar3 + 0x18))
                  (puVar3,*(long *)(lVar2 + -0x10),*(int *)(lVar2 + -4) << 2);
      }
      *(undefined8 *)(lVar2 + -0x10) = 0;
      *(undefined4 *)(lVar2 + -4) = 0x80000000;
      *(undefined4 *)(lVar2 + -0x30) = 0;
      if ((-1 < (int)*(uint *)(lVar2 + -0x2c)) && (*(long *)(lVar2 + -0x38) != 0)) {
        (**(code **)(*(long *)puVar3 + 0x18))
                  (puVar3,*(long *)(lVar2 + -0x38),
                   ((ulong)*(uint *)(lVar2 + -0x2c) & 0x3fffffff) * 0x14);
      }
      lVar5 = lVar5 + 0x40;
      lVar6 = lVar6 + -0x40;
      *(undefined8 *)(lVar2 + -0x38) = 0;
      *(undefined4 *)(lVar2 + -0x2c) = 0x80000000;
    } while (lVar7 != lVar5);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0xc)) && (*param_1 != 0)) {
    (**(code **)(*(long *)puVar3 + 0x18))
              (puVar3,*param_1,((ulong)*(uint *)((long)param_1 + 0xc) & 0x3fffffff) << 6);
  }
  *param_1 = 0;
  *(undefined4 *)((long)param_1 + 0xc) = 0x80000000;
  return;
}


