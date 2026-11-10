/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 033284dc; name: FUN_033284dc
 */


void FUN_033284dc(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined *puVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong *puVar11;
  ulong *puVar12;
  undefined8 local_60;
  undefined *puStack_58;
  undefined4 *local_50;
  undefined4 *puStack_48;
  undefined4 local_38;
  undefined4 uStack_34;
  
  *param_1 = (long)&PTR_LAB_04350700;
  FUN_033277a4();
  FUN_03327690();
  FUN_03340f78(param_1 + 10);
  FUN_03340f78(param_1 + 9);
  puVar5 = PTR_PTR_0434a080;
  *(undefined4 *)(param_1 + 8) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x44)) && (param_1[7] != 0)) {
    (**(code **)(*(long *)puVar5 + 0x18))
              (puVar5,param_1[7],((ulong)*(uint *)((long)param_1 + 0x44) & 0x3fffffff) << 3);
  }
  *(undefined4 *)((long)param_1 + 0x44) = 0x80000000;
  lVar7 = param_1[5];
  param_1[7] = 0;
  if ((lVar7 == 0) || (*(int *)(lVar7 + 4) == -2)) {
    iVar4 = (int)param_1[4];
  }
  else {
    uVar8 = (long)(int)param_1[6] + 1;
    lVar9 = tpidr_el0;
    lVar10 = *(long *)(lVar9 + 0x38d490);
    if (lVar10 == 0) {
      lVar10 = FUN_0333d16c(0,1);
      *(long *)(lVar9 + 0x38d490) = lVar10;
    }
    plVar6 = *(long **)(*(long *)(lVar10 + 8) + 0x58);
    local_38 = (undefined4)uVar8;
    uStack_34 = 8;
    if ((uVar8 & 0x1ffffffff0000000) != 0) {
      local_60 = 2;
      puStack_58 = &DAT_0411b3a0;
      local_50 = &uStack_34;
      puStack_48 = &local_38;
      FUN_03320b50(0x39ec3d88,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Memory/Allocator/hkMemoryAllocator.cpp"
                   ,0x61,"Memory allocation request overflow {}*{}",&local_60);
    }
    (**(code **)(*plVar6 + 0x18))
              (plVar6,lVar7,-(uVar8 >> 0x1c & 1) & 0xffffffff00000000 | uVar8 * 8 & 0xfffffff8);
    param_1[5] = (long)&DAT_03aad864;
    *(undefined4 *)(param_1 + 6) = 0;
    iVar4 = (int)param_1[4];
  }
  if (iVar4 != 0) {
    puVar11 = (ulong *)param_1[3];
    lVar7 = tpidr_el0;
    puVar12 = puVar11 + (long)iVar4 * 2;
    do {
      while( true ) {
        plVar6 = (long *)puVar12[-1];
        puVar12 = puVar12 + -2;
        if ((plVar6 == (long *)0x0) || (plVar6[1] == 0)) break;
        plVar1 = plVar6 + 2;
        do {
          lVar9 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar9 + -1 != 0) break;
        (**(code **)(*plVar6 + 0x18))();
        uVar8 = *puVar12;
        if ((uVar8 & 1) != 0) goto LAB_033285dc;
LAB_033285bc:
        if (puVar12 == puVar11) goto LAB_0332868c;
      }
      uVar8 = *puVar12;
      if ((uVar8 & 1) == 0) goto LAB_033285bc;
LAB_033285dc:
      lVar9 = *(long *)(lVar7 + 0x38d490);
      if (lVar9 == 0) {
        lVar9 = FUN_0333d16c(0,1);
        *(long *)(lVar7 + 0x38d490) = lVar9;
      }
      plVar6 = *(long **)(*(long *)(lVar9 + 8) + 0x58);
      *(undefined8 *)(uVar8 - 0x11) = 0;
      (**(code **)(*plVar6 + 0x18))
                (plVar6,(undefined8 *)(uVar8 - 0x11),(long)*(int *)(uVar8 - 9) + 0x10);
    } while (puVar12 != puVar11);
  }
LAB_0332868c:
  *(undefined4 *)(param_1 + 4) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x24)) && (param_1[3] != 0)) {
    (**(code **)(*(long *)puVar5 + 0x18))
              (puVar5,param_1[3],((ulong)*(uint *)((long)param_1 + 0x24) & 0x3fffffff) << 4);
  }
  param_1[3] = 0;
  puVar5 = PTR_DAT_043723c0;
  *(undefined4 *)((long)param_1 + 0x24) = 0x80000000;
  *param_1 = (long)(puVar5 + 0x10);
  return;
}


