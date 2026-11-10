/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0339587c; name: FUN_0339587c
 */


void FUN_0339587c(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 local_60;
  undefined *puStack_58;
  undefined4 *local_50;
  undefined4 *puStack_48;
  undefined4 local_38;
  undefined4 uStack_34;
  
  lVar7 = param_1[10];
  if ((lVar7 != 0) && (*(int *)(lVar7 + 4) != -2)) {
    uVar4 = (long)(int)param_1[0xb] + 1;
    lVar1 = tpidr_el0;
    lVar5 = *(long *)(lVar1 + 0x38d490);
    if (lVar5 == 0) {
      lVar5 = FUN_0333d16c(0,1);
      *(long *)(lVar1 + 0x38d490) = lVar5;
    }
    plVar3 = *(long **)(*(long *)(lVar5 + 8) + 0x58);
    local_38 = (undefined4)uVar4;
    uStack_34 = 8;
    if ((uVar4 & 0x1ffffffff0000000) != 0) {
      local_60 = 2;
      puStack_58 = &DAT_0411b3a0;
      local_50 = &uStack_34;
      puStack_48 = &local_38;
      FUN_03320b50(0x39ec3d88,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Memory/Allocator/hkMemoryAllocator.cpp"
                   ,0x61,"Memory allocation request overflow {}*{}",&local_60);
    }
    (**(code **)(*plVar3 + 0x18))
              (plVar3,lVar7,-(uVar4 >> 0x1c & 1) & 0xffffffff00000000 | uVar4 * 8 & 0xfffffff8);
    param_1[10] = (long)&DAT_03aad864;
    *(undefined4 *)(param_1 + 0xb) = 0;
  }
  puVar2 = PTR_PTR_0434a080;
  if ((int)param_1[9] != 0) {
    lVar5 = param_1[8];
    lVar1 = tpidr_el0;
    lVar7 = (long)(int)param_1[9] << 4;
    do {
      while (uVar4 = *(ulong *)(lVar5 + -0x10 + lVar7), (uVar4 & 1) != 0) {
        lVar6 = *(long *)(lVar1 + 0x38d490);
        if (lVar6 == 0) {
          lVar6 = FUN_0333d16c(0,1);
          *(long *)(lVar1 + 0x38d490) = lVar6;
        }
        plVar3 = *(long **)(*(long *)(lVar6 + 8) + 0x58);
        *(undefined8 *)(uVar4 - 0x11) = 0;
        (**(code **)(*plVar3 + 0x18))
                  (plVar3,(undefined8 *)(uVar4 - 0x11),(long)*(int *)(uVar4 - 9) + 0x10);
        lVar7 = lVar7 + -0x10;
        if (lVar7 == 0) goto LAB_03395958;
      }
      lVar7 = lVar7 + -0x10;
    } while (lVar7 != 0);
  }
LAB_03395958:
  *(undefined4 *)(param_1 + 9) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x4c)) && (param_1[8] != 0)) {
    (**(code **)(*(long *)puVar2 + 0x18))
              (puVar2,param_1[8],((ulong)*(uint *)((long)param_1 + 0x4c) & 0x3fffffff) << 4);
  }
  param_1[8] = 0;
  *(undefined4 *)((long)param_1 + 0x4c) = 0x80000000;
  *(undefined4 *)(param_1 + 7) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x3c)) && (param_1[6] != 0)) {
    (**(code **)(*(long *)puVar2 + 0x18))
              (puVar2,param_1[6],((ulong)*(uint *)((long)param_1 + 0x3c) & 0x3fffffff) << 4);
  }
  param_1[6] = 0;
  *(undefined4 *)((long)param_1 + 0x3c) = 0x80000000;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x2c)) && (param_1[4] != 0)) {
    (**(code **)(*(long *)puVar2 + 0x18))
              (puVar2,param_1[4],((ulong)*(uint *)((long)param_1 + 0x2c) & 0x3fffffff) << 3);
  }
  param_1[4] = 0;
  *(undefined4 *)((long)param_1 + 0x2c) = 0x80000000;
  *(undefined4 *)(param_1 + 3) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x1c)) && (param_1[2] != 0)) {
    (**(code **)(*(long *)puVar2 + 0x18))
              (puVar2,param_1[2],((ulong)*(uint *)((long)param_1 + 0x1c) & 0x3fffffff) << 3);
  }
  param_1[2] = 0;
  *(undefined4 *)((long)param_1 + 0x1c) = 0x80000000;
  *(undefined4 *)(param_1 + 1) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0xc)) && (*param_1 != 0)) {
    (**(code **)(*(long *)puVar2 + 0x18))
              (puVar2,*param_1,((ulong)*(uint *)((long)param_1 + 0xc) & 0x3fffffff) * 0xc);
  }
  *param_1 = 0;
  *(undefined4 *)((long)param_1 + 0xc) = 0x80000000;
  return;
}


