/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031e3f14; name: FUN_031e3f14
 */


long FUN_031e3f14(long *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  ulong uVar15;
  long *plVar16;
  long lVar17;
  long lVar18;
  uint *puVar19;
  long local_a8;
  undefined8 local_a0;
  undefined *local_98;
  ulong local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined *puStack_78;
  undefined4 *local_70;
  undefined4 *puStack_68;
  
  iVar8 = *param_2;
  iVar3 = *param_3;
  local_a8 = 0;
  local_a0 = -0x8000000000000000;
  iVar9 = iVar8;
  if (iVar3 <= iVar8) {
    iVar9 = iVar3;
  }
  local_98 = (undefined *)0x0;
  local_90 = 0;
  if (iVar3 <= iVar8) {
    iVar3 = iVar8;
  }
  FUN_032c2320(&local_98);
  iVar8 = FUN_031e45e0(param_1,param_2,&local_a8);
  puVar6 = local_98;
  if ((local_98 != (undefined *)0x0) && (*(int *)(local_98 + 4) != -2)) {
    uVar15 = (long)(int)local_90 + 1;
    lVar12 = tpidr_el0;
    lVar18 = *(long *)(lVar12 + 0x38d490);
    if (lVar18 == 0) {
      lVar18 = FUN_0333d16c(0,1);
      *(long *)(lVar12 + 0x38d490) = lVar18;
    }
    plVar11 = *(long **)(*(long *)(lVar18 + 8) + 0x58);
    local_88 = (undefined4)uVar15;
    uStack_84 = 8;
    if ((uVar15 & 0x1ffffffff0000000) != 0) {
      local_80 = 2;
      puStack_78 = &DAT_0411b3a0;
      local_70 = &uStack_84;
      puStack_68 = &local_88;
      FUN_03320b50(0x39ec3d88,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Memory/Allocator/hkMemoryAllocator.cpp"
                   ,0x61,"Memory allocation request overflow {}*{}",&local_80);
    }
    (**(code **)(*plVar11 + 0x18))
              (plVar11,puVar6,-(uVar15 >> 0x1c & 1) & 0xffffffff00000000 | uVar15 * 8 & 0xfffffff8);
    local_98 = &DAT_03aad864;
    local_90 = local_90 & 0xffffffff00000000;
  }
  lVar12 = local_a8;
  puVar6 = PTR_PTR_0434a080;
  if ((int)local_a0 != 0) {
    lVar18 = local_a8 + (long)(int)local_a0 * 0x10;
    do {
      plVar11 = *(long **)(lVar18 + -8);
      lVar18 = lVar18 + -0x10;
      if ((plVar11 != (long *)0x0) && (plVar11[1] != 0)) {
        plVar13 = plVar11 + 2;
        do {
          lVar17 = *plVar13;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar5) {
            *plVar13 = lVar17 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar17 + -1 == 0) {
          (**(code **)(*plVar11 + 0x18))();
        }
      }
    } while (lVar18 != lVar12);
  }
  lVar12 = local_a0;
  uVar15 = (ulong)local_a0._4_4_;
  local_a0 = (ulong)local_a0._4_4_ << 0x20;
  if ((-1 < lVar12) && (local_a8 != 0)) {
    (**(code **)(*(long *)puVar6 + 0x18))(puVar6,local_a8,(uVar15 & 0x3fffffff) << 4);
  }
  lVar18 = *param_1 + (long)iVar8 * 0x28;
  local_80 = 0;
  lVar12 = FUN_031e3670(lVar18 + 8,param_3,&local_80);
  plVar11 = (long *)(*(long *)(lVar18 + 8) + ((lVar12 << 0x20) >> 0x1c) + 8);
  if (*plVar11 == 0) {
    plVar13 = (long *)FUN_032cf5b0(0x60);
    plVar13[2] = 1;
    *plVar13 = (long)&PTR_LAB_0430a6d8;
    plVar13[1] = 0xffffffff;
    plVar13[4] = 0;
    plVar13[5] = -0x8000000000000000;
    FUN_032c2320(plVar13 + 6);
    plVar13[8] = 0;
    plVar13[9] = -0x8000000000000000;
    FUN_032c2320(plVar13 + 10);
    plVar14 = (long *)*plVar11;
    if ((plVar14 != plVar13) && (*plVar11 = (long)plVar13, plVar14 != (long *)0x0)) {
      if (plVar14[1] != 0) {
        plVar13 = plVar14 + 2;
        do {
          lVar12 = *plVar13;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar5) {
            *plVar13 = lVar12 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar12 + -1 == 0) {
          (**(code **)(*plVar14 + 0x18))();
        }
      }
      plVar13 = (long *)*plVar11;
    }
    *(int *)(plVar13 + 3) = iVar9;
    *(int *)((long)plVar13 + 0x1c) = iVar3;
    local_98 = (undefined *)0x0;
    local_90 = 0;
    local_a8 = 0;
    local_a0 = -0x8000000000000000;
    FUN_032c2320(&local_98);
    iVar9 = FUN_031e45e0(param_1,param_3,&local_a8);
    puVar7 = local_98;
    if ((local_98 == (undefined *)0x0) || (*(int *)(local_98 + 4) == -2)) {
      lVar12 = local_a8;
    }
    else {
      uVar15 = (long)(int)local_90 + 1;
      lVar12 = tpidr_el0;
      lVar18 = *(long *)(lVar12 + 0x38d490);
      if (lVar18 == 0) {
        lVar18 = FUN_0333d16c(0,1);
        *(long *)(lVar12 + 0x38d490) = lVar18;
      }
      plVar13 = *(long **)(*(long *)(lVar18 + 8) + 0x58);
      local_88 = (undefined4)uVar15;
      uStack_84 = 8;
      if ((uVar15 & 0x1ffffffff0000000) != 0) {
        local_80 = 2;
        puStack_78 = &DAT_0411b3a0;
        local_70 = &uStack_84;
        puStack_68 = &local_88;
        FUN_03320b50(0x39ec3d88,
                     "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Memory/Allocator/hkMemoryAllocator.cpp"
                     ,0x61,"Memory allocation request overflow {}*{}",&local_80);
      }
      (**(code **)(*plVar13 + 0x18))
                (plVar13,puVar7,-(uVar15 >> 0x1c & 1) & 0xffffffff00000000 | uVar15 * 8 & 0xfffffff8
                );
      local_98 = &DAT_03aad864;
      local_90 = local_90 & 0xffffffff00000000;
      lVar12 = local_a8;
    }
    local_a8 = lVar12;
    if ((int)local_a0 != 0) {
      lVar18 = lVar12 + (long)(int)local_a0 * 0x10;
      do {
        plVar13 = *(long **)(lVar18 + -8);
        lVar18 = lVar18 + -0x10;
        if ((plVar13 != (long *)0x0) && (plVar13[1] != 0)) {
          plVar14 = plVar13 + 2;
          do {
            lVar17 = *plVar14;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar5) {
              *plVar14 = lVar17 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar17 + -1 == 0) {
            (**(code **)(*plVar13 + 0x18))();
          }
        }
      } while (lVar18 != lVar12);
    }
    lVar12 = local_a0;
    uVar15 = (ulong)local_a0._4_4_;
    local_a0 = (ulong)local_a0._4_4_ << 0x20;
    if ((-1 < lVar12) && (local_a8 != 0)) {
      (**(code **)(*(long *)puVar6 + 0x18))(puVar6,local_a8,(uVar15 & 0x3fffffff) << 4);
    }
    lVar18 = *param_1;
    lVar12 = lVar18 + (long)iVar9 * 0x28;
    plVar13 = (long *)(lVar12 + 8);
    uVar10 = FUN_031e4f3c(plVar13,param_2);
    puVar19 = (uint *)(lVar12 + 0x10);
    if (*puVar19 == uVar10) {
      lVar12 = *plVar13;
      uVar2 = uVar10 + 1;
      if ((int)(*(uint *)(lVar18 + (long)iVar9 * 0x28 + 0x14) & 0x3fffffff) <= (int)uVar10) {
        lVar12 = FUN_031e5024(puVar6,uVar2);
        *plVar13 = lVar12;
        uVar10 = *puVar19;
      }
      piVar1 = (int *)(lVar12 + (long)(int)uVar10 * 0x10);
      *piVar1 = *param_2;
      lVar12 = *plVar11;
      *(long *)(piVar1 + 2) = lVar12;
      if ((lVar12 != 0) && (*(long *)(lVar12 + 8) != 0)) {
        plVar13 = (long *)(lVar12 + 0x10);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar5) {
            *plVar13 = *plVar13 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      *puVar19 = uVar2;
    }
    else {
      plVar16 = (long *)(*plVar13 + ((long)((ulong)uVar10 << 0x20) >> 0x1c) + 8);
      plVar14 = (long *)*plVar16;
      plVar13 = (long *)*plVar11;
      if (plVar14 != plVar13) {
        if ((plVar13 != (long *)0x0) && (plVar13[1] != 0)) {
          plVar13 = plVar13 + 2;
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar5) {
              *plVar13 = *plVar13 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          plVar14 = (long *)*plVar16;
          plVar13 = (long *)*plVar11;
        }
        *plVar16 = (long)plVar13;
        if ((plVar14 != (long *)0x0) && (plVar14[1] != 0)) {
          plVar13 = plVar14 + 2;
          do {
            lVar12 = *plVar13;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar5) {
              *plVar13 = lVar12 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar12 + -1 == 0) {
            (**(code **)(*plVar14 + 0x18))();
          }
        }
      }
    }
  }
  return *plVar11;
}


