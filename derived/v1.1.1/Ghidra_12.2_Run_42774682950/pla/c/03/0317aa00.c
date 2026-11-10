/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0317aa00; name: FUN_0317aa00
 */


void FUN_0317aa00(long *param_1)

{
  long *plVar1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined *puStack_48;
  undefined4 *local_40;
  undefined4 *puStack_38;
  
  lVar8 = param_1[0x1a];
  if ((lVar8 != 0) && (*(int *)(lVar8 + 4) != -2)) {
    uVar2 = (long)(int)param_1[0x1b] + 1;
    lVar9 = tpidr_el0;
    lVar7 = *(long *)(lVar9 + 0x38d490);
    if (lVar7 == 0) {
      lVar7 = FUN_0333d16c(0,1);
      *(long *)(lVar9 + 0x38d490) = lVar7;
    }
    plVar6 = *(long **)(*(long *)(lVar7 + 8) + 0x58);
    local_58 = (undefined4)uVar2;
    uStack_54 = 8;
    if ((uVar2 & 0x1ffffffff0000000) != 0) {
      local_50 = 2;
      puStack_48 = &DAT_0411b3a0;
      local_40 = &uStack_54;
      puStack_38 = &local_58;
      FUN_03320b50(0x39ec3d88,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Memory/Allocator/hkMemoryAllocator.cpp"
                   ,0x61,"Memory allocation request overflow {}*{}",&local_50);
    }
    (**(code **)(*plVar6 + 0x18))
              (plVar6,lVar8,-(uVar2 >> 0x1c & 1) & 0xffffffff00000000 | uVar2 * 8 & 0xfffffff8);
    param_1[0x1a] = (long)&DAT_03aad864;
    *(undefined4 *)(param_1 + 0x1b) = 0;
  }
  puVar5 = PTR_PTR_0434a080;
  if ((int)param_1[0x19] != 0) {
    lVar9 = param_1[0x18];
    lVar8 = lVar9 + (long)(int)param_1[0x19] * 0x10;
    do {
      plVar6 = *(long **)(lVar8 + -8);
      lVar8 = lVar8 + -0x10;
      if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
        plVar1 = plVar6 + 2;
        do {
          lVar7 = *plVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar7 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar7 + -1 == 0) {
          (**(code **)(*plVar6 + 0x18))();
        }
      }
    } while (lVar8 != lVar9);
  }
  *(undefined4 *)(param_1 + 0x19) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0xcc)) && (param_1[0x18] != 0)) {
    (**(code **)(*(long *)puVar5 + 0x18))
              (puVar5,param_1[0x18],((ulong)*(uint *)((long)param_1 + 0xcc) & 0x3fffffff) << 4);
  }
  *(undefined4 *)((long)param_1 + 0xcc) = 0x80000000;
  lVar8 = param_1[0x16];
  param_1[0x18] = 0;
  if ((lVar8 != 0) && (*(int *)(lVar8 + 4) != -2)) {
    uVar2 = (long)(int)param_1[0x17] + 1;
    lVar9 = tpidr_el0;
    lVar7 = *(long *)(lVar9 + 0x38d490);
    if (lVar7 == 0) {
      lVar7 = FUN_0333d16c(0,1);
      *(long *)(lVar9 + 0x38d490) = lVar7;
    }
    plVar6 = *(long **)(*(long *)(lVar7 + 8) + 0x58);
    local_58 = (undefined4)uVar2;
    uStack_54 = 8;
    if ((uVar2 & 0x1ffffffff0000000) != 0) {
      local_50 = 2;
      puStack_48 = &DAT_0411b3a0;
      local_40 = &uStack_54;
      puStack_38 = &local_58;
      FUN_03320b50(0x39ec3d88,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Memory/Allocator/hkMemoryAllocator.cpp"
                   ,0x61,"Memory allocation request overflow {}*{}",&local_50);
    }
    (**(code **)(*plVar6 + 0x18))
              (plVar6,lVar8,-(uVar2 >> 0x1c & 1) & 0xffffffff00000000 | uVar2 * 8 & 0xfffffff8);
    param_1[0x16] = (long)&DAT_03aad864;
    *(undefined4 *)(param_1 + 0x17) = 0;
  }
  *(undefined4 *)(param_1 + 0x15) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0xac)) && (param_1[0x14] != 0)) {
    (**(code **)(*(long *)puVar5 + 0x18))
              (puVar5,param_1[0x14],((ulong)*(uint *)((long)param_1 + 0xac) & 0x3fffffff) << 3);
  }
  plVar6 = (long *)param_1[2];
  param_1[0x14] = 0;
  *(undefined4 *)((long)param_1 + 0xac) = 0x80000000;
  if ((plVar6 == (long *)0x0) || (plVar6[1] == 0)) {
LAB_0317aaa8:
    plVar6 = (long *)param_1[1];
  }
  else {
    plVar1 = plVar6 + 2;
    do {
      lVar8 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 + -1 != 0) goto LAB_0317aaa8;
    (**(code **)(*plVar6 + 0x18))();
    plVar6 = (long *)param_1[1];
  }
  if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
    plVar1 = plVar6 + 2;
    do {
      lVar8 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 + -1 == 0) {
      (**(code **)(*plVar6 + 0x18))();
      param_1 = (long *)*param_1;
      goto joined_r0x0317ab30;
    }
  }
  param_1 = (long *)*param_1;
joined_r0x0317ab30:
  if ((param_1 != (long *)0x0) && (param_1[1] != 0)) {
    plVar6 = param_1 + 2;
    do {
      lVar8 = *plVar6;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *plVar6 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0317ac18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x18))();
      return;
    }
  }
  return;
}


