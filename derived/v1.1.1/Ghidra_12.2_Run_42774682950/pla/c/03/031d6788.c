/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031d6788; name: FUN_031d6788
 */


void FUN_031d6788(undefined4 *param_1,undefined4 *param_2,long param_3)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined4 *puVar5;
  long lVar6;
  undefined *puVar7;
  long *plVar8;
  long lVar9;
  undefined4 local_68;
  undefined4 uStack_64;
  long *local_60;
  undefined *local_58;
  undefined4 *local_50;
  undefined8 local_48;
  
  *param_1 = *param_2;
  if ((param_3 != 0) && (*(long *)(param_3 + 8) != 0)) {
    plVar8 = (long *)(param_3 + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = *plVar8 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lVar4 = *(long *)(param_1 + 2);
  *(long *)(param_1 + 2) = param_3;
  if (lVar4 != 0) {
    FUN_032d647c();
  }
  param_1[6] = 0;
  if ((-1 < (int)param_1[7]) && (*(long *)(param_1 + 4) != 0)) {
    FUN_032cf244(PTR_PTR_0434a080,*(long *)(param_1 + 4),8,param_1[7] & 0x3fffffff);
  }
  param_1[7] = 0x80000000;
  puVar5 = *(undefined4 **)(param_1 + 8);
  *(undefined8 *)(param_1 + 4) = 0;
  if ((puVar5 != (undefined4 *)0x0) && (puVar5[1] != -2)) {
    lVar4 = tpidr_el0;
    lVar9 = *(long *)(lVar4 + 0x38d490);
    puVar7 = (undefined *)((long)(int)param_1[10] + 1);
    if (lVar9 == 0) {
      local_58 = (undefined *)((long)(int)param_1[10] + 1);
      local_50 = puVar5;
      lVar9 = FUN_0333d16c(0,1);
      *(long *)(lVar4 + 0x38d490) = lVar9;
      puVar5 = local_50;
      puVar7 = local_58;
    }
    plVar8 = *(long **)(*(long *)(lVar9 + 8) + 0x58);
    local_48 = (undefined4 *)CONCAT44(8,(int)puVar7);
    if (((ulong)puVar7 & 0x1ffffffff0000000) != 0) {
      local_60 = plVar8;
      local_58 = puVar7;
      local_50 = puVar5;
      FUN_03320b50(0x39ec3d88,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Memory/Allocator/hkMemoryAllocator.cpp"
                   ,0x61,"Memory allocation request overflow {}*{}",(long)register0x00000008 + -0x40
                  );
      plVar8 = local_60;
      puVar5 = local_50;
      puVar7 = local_58;
    }
    (**(code **)(*plVar8 + 0x18))
              (plVar8,puVar5,
               -((ulong)puVar7 >> 0x1c & 1) & 0xffffffff00000000 | ((ulong)puVar7 & 0x1fffffff) << 3
              );
    *(undefined **)(param_1 + 8) = &DAT_03aad864;
    param_1[10] = 0;
  }
  puVar7 = PTR_PTR_0434a080;
  plVar8 = (long *)(param_1 + 0xc);
  if (param_1[0xe] != 0) {
    lVar9 = *plVar8;
    lVar4 = (long)(int)param_1[0xe] * 0x28;
    do {
      lVar6 = lVar9 + lVar4;
      *(undefined4 *)(lVar6 + -0x10) = 0;
      if ((-1 < (int)*(uint *)(lVar6 + -0xc)) && (*(long *)(lVar6 + -0x18) != 0)) {
        FUN_032cf244(puVar7,*(long *)(lVar6 + -0x18),4,*(uint *)(lVar6 + -0xc) & 0x3fffffff);
      }
      lVar4 = lVar4 + -0x28;
      *(undefined8 *)(lVar6 + -0x18) = 0;
      *(undefined4 *)(lVar6 + -0xc) = 0x80000000;
    } while (lVar4 != 0);
  }
  param_1[0xe] = 0;
  if ((-1 < (int)param_1[0xf]) && (*plVar8 != 0)) {
    FUN_032cf244(puVar7,*plVar8,0x28,param_1[0xf] & 0x3fffffff);
  }
  param_1[0xf] = 0x80000000;
  lVar4 = *(long *)(param_1 + 0x10);
  *plVar8 = 0;
  if ((lVar4 != 0) && (*(int *)(lVar4 + 4) != -2)) {
    uVar1 = (long)(int)param_1[0x12] + 1;
    lVar9 = tpidr_el0;
    lVar6 = *(long *)(lVar9 + 0x38d490);
    if (lVar6 == 0) {
      lVar6 = FUN_0333d16c(0,1);
      *(long *)(lVar9 + 0x38d490) = lVar6;
    }
    plVar8 = *(long **)(*(long *)(lVar6 + 8) + 0x58);
    local_68 = (undefined4)uVar1;
    uStack_64 = 8;
    if ((uVar1 & 0x1ffffffff0000000) != 0) {
      local_60 = (long *)0x2;
      local_58 = &DAT_0411b3a0;
      local_50 = &uStack_64;
      local_48 = &local_68;
      FUN_03320b50(0x39ec3d88,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Memory/Allocator/hkMemoryAllocator.cpp"
                   ,0x61,"Memory allocation request overflow {}*{}",&local_60);
    }
    (**(code **)(*plVar8 + 0x18))
              (plVar8,lVar4,-(uVar1 >> 0x1c & 1) & 0xffffffff00000000 | uVar1 * 8 & 0xfffffff8);
    *(undefined **)(param_1 + 0x10) = &DAT_03aad864;
    param_1[0x12] = 0;
  }
  return;
}


