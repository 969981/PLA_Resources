/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0339fa0c; name: FUN_0339fa0c
 */


void FUN_0339fa0c(long *param_1)

{
  ulong *puVar1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined *puVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined *puStack_68;
  undefined4 *local_60;
  undefined4 *puStack_58;
  
  lVar9 = param_1[2];
  if ((lVar9 != 0) && (*(int *)(lVar9 + 4) != -2)) {
    uVar2 = (long)(int)param_1[3] + 1;
    lVar10 = tpidr_el0;
    lVar11 = *(long *)(lVar10 + 0x38d490);
    if (lVar11 == 0) {
      lVar11 = FUN_0333d16c(0,1);
      *(long *)(lVar10 + 0x38d490) = lVar11;
    }
    plVar7 = *(long **)(*(long *)(lVar11 + 8) + 0x58);
    local_78 = (undefined4)uVar2;
    uStack_74 = 8;
    if ((uVar2 & 0x1ffffffff0000000) != 0) {
      local_70 = 2;
      puStack_68 = &DAT_0411b3a0;
      local_60 = &uStack_74;
      puStack_58 = &local_78;
      FUN_03320b50(0x39ec3d88,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Memory/Allocator/hkMemoryAllocator.cpp"
                   ,0x61,"Memory allocation request overflow {}*{}",&local_70);
    }
    (**(code **)(*plVar7 + 0x18))
              (plVar7,lVar9,-(uVar2 >> 0x1c & 1) & 0xffffffff00000000 | uVar2 * 8 & 0xfffffff8);
    param_1[2] = (long)&DAT_03aad864;
    *(undefined4 *)(param_1 + 3) = 0;
  }
  puVar6 = PTR_PTR_0434a080;
  if ((int)param_1[1] != 0) {
    lVar10 = *param_1;
    lVar9 = lVar10 + (long)(int)param_1[1] * 0x18;
    do {
      if (*(int *)(lVar9 + -8) != 0) {
        lVar11 = *(long *)(lVar9 + -0x10);
        lVar12 = lVar11 + (long)*(int *)(lVar9 + -8) * 0x18;
LAB_0339fb30:
        do {
          puVar1 = (ulong *)(lVar12 + -8);
          lVar12 = lVar12 + -0x18;
          if ((*puVar1 & 1) != 0) {
            plVar8 = (long *)(*puVar1 & 0xfffffffffffffffe);
            plVar7 = plVar8 + 1;
            do {
              lVar5 = *plVar7;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
              if (bVar4) {
                *(int *)plVar7 = (int)lVar5 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if ((plVar8 != (long *)0x0) && ((int)lVar5 == 1)) {
              (**(code **)(*plVar8 + 8))();
              if (lVar12 == lVar11) break;
              goto LAB_0339fb30;
            }
          }
        } while (lVar12 != lVar11);
      }
      lVar11 = lVar9 + -0x18;
      *(undefined4 *)(lVar9 + -8) = 0;
      if ((-1 < (int)*(uint *)(lVar9 + -4)) && (*(long *)(lVar9 + -0x10) != 0)) {
        (**(code **)(*(long *)puVar6 + 0x18))
                  (puVar6,*(long *)(lVar9 + -0x10),
                   ((ulong)*(uint *)(lVar9 + -4) & 0x3fffffff) * 0x18);
      }
      *(undefined8 *)(lVar9 + -0x10) = 0;
      *(undefined4 *)(lVar9 + -4) = 0x80000000;
      lVar9 = lVar11;
    } while (lVar11 != lVar10);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0xc)) && (*param_1 != 0)) {
    (**(code **)(*(long *)puVar6 + 0x18))
              (puVar6,*param_1,((ulong)*(uint *)((long)param_1 + 0xc) & 0x3fffffff) * 0x18);
  }
  *param_1 = 0;
  *(undefined4 *)((long)param_1 + 0xc) = 0x80000000;
  return;
}


