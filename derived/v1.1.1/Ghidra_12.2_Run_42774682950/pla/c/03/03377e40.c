/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03377e40; name: FUN_03377e40
 */


void FUN_03377e40(undefined8 *param_1)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 local_50;
  undefined *puStack_48;
  undefined4 *local_40;
  undefined4 *puStack_38;
  undefined4 local_28;
  undefined4 uStack_24;
  
  plVar7 = (long *)*param_1;
  if (plVar7 == (long *)0x0) {
    return;
  }
  FUN_032e8100(plVar7 + 0xd);
  *(undefined8 *)((long)plVar7 + 0x5c) = 0;
  *(undefined4 *)((long)plVar7 + 100) = 0;
  FUN_0337ac1c(plVar7 + 10);
  puVar3 = PTR_PTR_0434a080;
  *(undefined4 *)(plVar7 + 9) = 0;
  if ((-1 < (int)*(uint *)((long)plVar7 + 0x4c)) && (plVar7[8] != 0)) {
    (**(code **)(*(long *)puVar3 + 0x18))
              (puVar3,plVar7[8],((ulong)*(uint *)((long)plVar7 + 0x4c) & 0x3fffffff) << 3);
  }
  *(undefined4 *)((long)plVar7 + 0x4c) = 0x80000000;
  lVar5 = plVar7[6];
  plVar7[8] = 0;
  lVar2 = tpidr_el0;
  if ((lVar5 != 0) && (*(int *)(lVar5 + 4) != -2)) {
    uVar1 = (long)(int)plVar7[7] + 1;
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
    plVar7[6] = (long)&DAT_03aad864;
    *(undefined4 *)(plVar7 + 7) = 0;
  }
  *(undefined4 *)(plVar7 + 5) = 0;
  if ((-1 < (int)*(uint *)((long)plVar7 + 0x2c)) && (plVar7[4] != 0)) {
    (**(code **)(*(long *)puVar3 + 0x18))
              (puVar3,plVar7[4],((ulong)*(uint *)((long)plVar7 + 0x2c) & 0x3fffffff) << 5);
  }
  *(undefined4 *)((long)plVar7 + 0x2c) = 0x80000000;
  lVar5 = plVar7[2];
  plVar7[4] = 0;
  if ((lVar5 != 0) && (*(int *)(lVar5 + 4) != -2)) {
    uVar1 = (long)(int)plVar7[3] + 1;
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
    plVar7[2] = (long)&DAT_03aad864;
    *(undefined4 *)(plVar7 + 3) = 0;
  }
  *(undefined4 *)(plVar7 + 1) = 0;
  if ((-1 < (int)*(uint *)((long)plVar7 + 0xc)) && (*plVar7 != 0)) {
    (**(code **)(*(long *)puVar3 + 0x18))
              (puVar3,*plVar7,((ulong)*(uint *)((long)plVar7 + 0xc) & 0x3fffffff) << 4);
  }
  *plVar7 = 0;
  *(undefined4 *)((long)plVar7 + 0xc) = 0x80000000;
  lVar5 = *(long *)(lVar2 + 0x38d490);
  if (lVar5 == 0) {
    lVar5 = FUN_0333d16c(0,1);
    *(long *)(lVar2 + 0x38d490) = lVar5;
  }
  plVar4 = *(long **)(*(long *)(lVar5 + 8) + 0x58);
                    /* WARNING: Could not recover jumptable at 0x03377f90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0x18))(plVar4,plVar7,0x90);
  return;
}


