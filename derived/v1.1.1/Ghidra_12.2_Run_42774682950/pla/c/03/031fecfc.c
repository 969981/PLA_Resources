/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031fecfc; name: FUN_031fecfc
 */


void FUN_031fecfc(long param_1)

{
  byte *pbVar1;
  long *plVar2;
  undefined4 uVar3;
  byte bVar4;
  int iVar5;
  char cVar6;
  bool bVar7;
  undefined8 uVar8;
  long lVar9;
  undefined4 *puVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  long *plVar17;
  long lVar18;
  byte *pbVar19;
  undefined8 *puVar20;
  long *local_a8;
  long *local_a0;
  long *plStack_98;
  long local_90;
  undefined4 local_88 [2];
  undefined4 local_80 [2];
  undefined4 local_78 [2];
  undefined4 local_70 [2];
  undefined4 local_68 [2];
  undefined4 local_60 [2];
  long local_58;
  
  lVar16 = tpidr_el0;
  if (*(long *)(lVar16 + 0x38d490) == 0) {
    lVar18 = FUN_0333d16c(0,1);
    *(long *)(lVar16 + 0x38d490) = lVar18;
    lVar18 = *(long *)(lVar18 + 0x10);
  }
  else {
    lVar18 = *(long *)(*(long *)(lVar16 + 0x38d490) + 0x10);
  }
  if (lVar18 != 0) {
    puVar20 = *(undefined8 **)(lVar18 + 8);
    uVar11 = (long)puVar20 + 0x17U & 0xfffffffffffffff8;
    if ((uVar11 <= *(ulong *)(lVar18 + 0x10)) &&
       (*(ulong *)(lVar18 + 8) = uVar11, puVar20 != (undefined8 *)0x0)) {
      *puVar20 = "TthkaiUpdateNavDataTasks::FireEvents";
      uVar8 = nn::os::GetSystemTick();
      puVar20[1] = uVar8;
    }
  }
  plVar17 = (long *)(param_1 + 0x28);
  lVar14 = *plVar17;
  lVar12 = *(long *)(lVar14 + 0xb8);
  local_58 = lVar18;
  if ((lVar12 == 0) || (iVar5 = *(int *)(lVar12 + 0x20), iVar5 == 0)) {
    plVar13 = *(long **)(lVar14 + 0xb0);
  }
  else {
    lVar14 = *(long *)(lVar12 + 0x18);
    pbVar19 = (byte *)(lVar14 + 4);
    do {
      uVar3 = *(undefined4 *)(pbVar19 + -4);
      if (pbVar19[1] != 0) {
        if ((*pbVar19 >> 1 & 1) == 0) {
          if ((*pbVar19 >> 3 & 1) != 0) {
            puVar10 = local_68;
            lVar9 = *(long *)(*plVar17 + 0x20);
            lVar12 = lVar9 + 0x68;
            local_68[0] = uVar3;
            goto LAB_031feef4;
          }
          bVar4 = *pbVar19;
          if ((bVar4 & 1) == 0) goto LAB_031fef00;
LAB_031feea8:
          puVar10 = local_70;
          lVar9 = *(long *)(*plVar17 + 0x20);
          lVar12 = lVar9 + 0x40;
          local_70[0] = uVar3;
LAB_031feebc:
          FUN_031c8b10(lVar12,lVar9,puVar10);
        }
        else {
          puVar10 = local_60;
          lVar9 = *(long *)(*plVar17 + 0x20);
          lVar12 = lVar9 + 0x48;
          local_60[0] = uVar3;
LAB_031feef4:
          FUN_031c8b10(lVar12,lVar9,puVar10);
          bVar4 = *pbVar19;
          if ((bVar4 & 1) != 0) goto LAB_031feea8;
LAB_031fef00:
          if ((bVar4 >> 2 & 1) != 0) {
            puVar10 = local_78;
            lVar9 = *(long *)(*plVar17 + 0x20);
            lVar12 = lVar9 + 0x60;
            local_78[0] = uVar3;
            goto LAB_031feebc;
          }
        }
        bVar4 = *pbVar19;
        if ((bVar4 >> 5 & 1) != 0) {
          local_80[0] = uVar3;
          FUN_031c8b10(*(long *)(*plVar17 + 0x20) + 0x58,*(long *)(*plVar17 + 0x20),local_80);
          bVar4 = *pbVar19;
        }
        if ((bVar4 >> 4 & 1) != 0) {
          local_88[0] = uVar3;
          FUN_031c8b10(*(long *)(*plVar17 + 0x20) + 0x50,*(long *)(*plVar17 + 0x20),local_88);
        }
      }
      pbVar1 = pbVar19 + 4;
      pbVar19 = pbVar19 + 8;
    } while (pbVar1 != (byte *)(lVar14 + (long)iVar5 * 8));
    lVar14 = *plVar17;
    plVar13 = *(long **)(lVar14 + 0xb0);
  }
  if ((plVar13 == (long *)0x0) || (plVar13[1] == 0)) {
    plVar15 = *(long **)(lVar14 + 0xc0);
  }
  else {
    plVar15 = plVar13 + 2;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar7) {
        *plVar15 = *plVar15 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    plVar15 = *(long **)(*plVar17 + 0xc0);
  }
  if ((plVar15 != (long *)0x0) && (plVar15[1] != 0)) {
    plVar2 = plVar15 + 2;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar7) {
        *plVar2 = *plVar2 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  if (plVar15 != (long *)0x0 || plVar13 != (long *)0x0) {
    if (*(long *)(lVar16 + 0x38d490) == 0) {
      lVar14 = FUN_0333d16c(0,1);
      *(long *)(lVar16 + 0x38d490) = lVar14;
      lVar16 = *(long *)(lVar14 + 0x10);
    }
    else {
      lVar16 = *(long *)(*(long *)(lVar16 + 0x38d490) + 0x10);
    }
    if (lVar16 != 0) {
      puVar20 = *(undefined8 **)(lVar16 + 8);
      uVar11 = (long)puVar20 + 0x17U & 0xfffffffffffffff8;
      if ((uVar11 <= *(ulong *)(lVar16 + 0x10)) &&
         (*(ulong *)(lVar16 + 8) = uVar11, puVar20 != (undefined8 *)0x0)) {
        *puVar20 = "TtdynamicNavMeshModifiedCallback";
        uVar8 = nn::os::GetSystemTick();
        puVar20[1] = uVar8;
      }
    }
    local_a8 = plVar13;
    local_a0 = plVar15;
    local_90 = lVar16;
    FUN_031ff470(*(long *)(*plVar17 + 0x20) + 0x70,*(long *)(*plVar17 + 0x20),&local_a8);
    if (lVar16 != 0) {
      puVar20 = *(undefined8 **)(lVar16 + 8);
      uVar11 = (long)puVar20 + 0x17U & 0xfffffffffffffff8;
      if ((uVar11 <= *(ulong *)(lVar16 + 0x10)) &&
         (*(ulong *)(lVar16 + 8) = uVar11, puVar20 != (undefined8 *)0x0)) {
        *puVar20 = &DAT_0390f40e;
        uVar8 = nn::os::GetSystemTick();
        puVar20[1] = uVar8;
      }
    }
  }
  lVar16 = *plVar17;
  if (*(int *)(lVar16 + 0x168) != 0) {
    lVar14 = *(long *)(lVar16 + 0x160);
    lVar12 = (long)*(int *)(lVar16 + 0x168) << 5;
    do {
      local_a8 = (long *)CONCAT44(local_a8._4_4_,*(undefined4 *)(lVar14 + 8));
      local_a0 = *(long **)(*(long *)(lVar14 + 0x10) + 0x18);
      plStack_98 = local_a0 + (long)*(int *)(*(long *)(lVar14 + 0x10) + 0x20) * 0x12;
      FUN_031ff52c(*(long *)(lVar16 + 0x20) + 0xc0,*(long *)(lVar16 + 0x20),&local_a8);
      FUN_031f7d78(lVar14);
      lVar16 = *plVar17;
      lVar14 = lVar14 + 0x20;
      lVar12 = lVar12 + -0x20;
    } while (lVar12 != 0);
  }
  *(undefined4 *)(lVar16 + 0x168) = 0;
  lVar16 = *plVar17;
  if (*(int *)(lVar16 + 0x178) != 0) {
    lVar14 = *(long *)(lVar16 + 0x170);
    lVar12 = (long)*(int *)(lVar16 + 0x178) << 5;
    do {
      local_a8 = (long *)CONCAT44(local_a8._4_4_,*(undefined4 *)(lVar14 + 8));
      local_a0 = *(long **)(*(long *)(lVar14 + 0x10) + 0x18);
      plStack_98 = local_a0 + (long)*(int *)(*(long *)(lVar14 + 0x10) + 0x20) * 0x24;
      FUN_031ff5e8(*(long *)(lVar16 + 0x20) + 200,*(long *)(lVar16 + 0x20),&local_a8);
      FUN_031f7dac(lVar14);
      lVar16 = *plVar17;
      lVar14 = lVar14 + 0x20;
      lVar12 = lVar12 + -0x20;
    } while (lVar12 != 0);
  }
  *(undefined4 *)(lVar16 + 0x178) = 0;
  lVar16 = *plVar17;
  if (*(int *)(lVar16 + 0x188) != 0) {
    lVar14 = *(long *)(lVar16 + 0x180);
    lVar12 = (long)*(int *)(lVar16 + 0x188) << 4;
    do {
      FUN_031ff6a4(*(long *)(lVar16 + 0x20) + 0xd0,*(long *)(lVar16 + 0x20),
                   *(undefined4 *)(lVar14 + 8));
      FUN_031f7de0(lVar14);
      lVar16 = *plVar17;
      lVar14 = lVar14 + 0x10;
      lVar12 = lVar12 + -0x10;
    } while (lVar12 != 0);
  }
  *(undefined4 *)(lVar16 + 0x188) = 0;
  lVar16 = *plVar17;
  iVar5 = *(int *)(lVar16 + 0x198);
  bVar7 = false;
  if (iVar5 != 0) {
    bVar7 = *(int *)(lVar16 + 0x1a8) != 0;
  }
  lVar14 = *(long *)(lVar16 + 0x20);
  if ((3 < *(ulong *)(lVar14 + 0x88)) && (iVar5 != 0)) {
    lVar16 = *(long *)(lVar16 + 400);
    if (bVar7) {
      lVar12 = (long)iVar5 * 0x10;
      puVar20 = (undefined8 *)(lVar16 + 8);
      while( true ) {
        lVar12 = lVar12 + -0x10;
        uVar11 = FUN_031e97d0(*(undefined8 *)(lVar14 + 0x170),*puVar20);
        if ((uVar11 & 1) != 0) {
          FUN_031ff760(*(long *)(*plVar17 + 0x20) + 0x88,*(long *)(*plVar17 + 0x20),*puVar20);
        }
        if (lVar12 == 0) break;
        puVar20 = puVar20 + 2;
        lVar14 = *(long *)(*plVar17 + 0x20);
      }
    }
    else {
      FUN_031ff760(lVar14 + 0x88,lVar14,*(undefined8 *)(lVar16 + 8));
      if (iVar5 != 1) {
        lVar14 = (long)iVar5 * 0x10 + -0x10;
        puVar20 = (undefined8 *)(lVar16 + 0x18);
        do {
          FUN_031ff760(*(long *)(*plVar17 + 0x20) + 0x88,*(long *)(*plVar17 + 0x20),*puVar20);
          lVar14 = lVar14 + -0x10;
          puVar20 = puVar20 + 2;
        } while (lVar14 != 0);
      }
    }
  }
  lVar16 = *plVar17;
  if (*(int *)(lVar16 + 0x198) != 0) {
    lVar14 = *(long *)(lVar16 + 400);
    lVar16 = (long)*(int *)(lVar16 + 0x198) << 4;
    do {
      FUN_031f7de4(lVar14);
      lVar14 = lVar14 + 0x10;
      lVar16 = lVar16 + -0x10;
    } while (lVar16 != 0);
    lVar16 = *plVar17;
  }
  lVar14 = *(long *)(lVar16 + 0x20);
  if (3 < *(ulong *)(lVar14 + 0x90)) {
    iVar5 = *(int *)(lVar16 + 0x1a8);
    if (iVar5 != 0) {
      lVar16 = *(long *)(lVar16 + 0x1a0);
      if (bVar7) {
        lVar12 = (long)iVar5 * 0x20;
        puVar20 = (undefined8 *)(lVar16 + 8);
        while( true ) {
          lVar12 = lVar12 + -0x20;
          uVar11 = FUN_031e97d0(*(undefined8 *)(lVar14 + 0x170),*puVar20);
          if ((uVar11 & 1) == 0) {
            FUN_031ff760(*(long *)(*plVar17 + 0x20) + 0x90,*(long *)(*plVar17 + 0x20),*puVar20);
          }
          if (lVar12 == 0) break;
          puVar20 = puVar20 + 4;
          lVar14 = *(long *)(*plVar17 + 0x20);
        }
      }
      else {
        FUN_031ff760(lVar14 + 0x90,lVar14,*(undefined8 *)(lVar16 + 8));
        if (iVar5 != 1) {
          lVar14 = (long)iVar5 * 0x20 + -0x20;
          puVar20 = (undefined8 *)(lVar16 + 0x28);
          do {
            FUN_031ff760(*(long *)(*plVar17 + 0x20) + 0x90,*(long *)(*plVar17 + 0x20),*puVar20);
            lVar14 = lVar14 + -0x20;
            puVar20 = puVar20 + 4;
          } while (lVar14 != 0);
        }
      }
    }
  }
  iVar5 = *(int *)(*plVar17 + 0x1a8);
  if (iVar5 != 0) {
    lVar16 = *(long *)(*plVar17 + 0x1a0);
    lVar14 = (long)iVar5 << 5;
    do {
      FUN_031f7e18(lVar16);
      lVar16 = lVar16 + 0x20;
      lVar14 = lVar14 + -0x20;
    } while (lVar14 != 0);
  }
  if ((plVar15 != (long *)0x0) && (plVar15[1] != 0)) {
    plVar17 = plVar15 + 2;
    do {
      lVar16 = *plVar17;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar7) {
        *plVar17 = lVar16 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar16 + -1 == 0) {
      (**(code **)(*plVar15 + 0x18))();
    }
  }
  if ((plVar13 != (long *)0x0) && (plVar13[1] != 0)) {
    plVar17 = plVar13 + 2;
    do {
      lVar16 = *plVar17;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar7) {
        *plVar17 = lVar16 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar16 + -1 == 0) {
      (**(code **)(*plVar13 + 0x18))();
    }
  }
  if (lVar18 != 0) {
    puVar20 = *(undefined8 **)(lVar18 + 8);
    uVar11 = (long)puVar20 + 0x17U & 0xfffffffffffffff8;
    if ((uVar11 <= *(ulong *)(lVar18 + 0x10)) &&
       (*(ulong *)(lVar18 + 8) = uVar11, puVar20 != (undefined8 *)0x0)) {
      *puVar20 = &DAT_0390f40e;
      uVar8 = nn::os::GetSystemTick();
      puVar20[1] = uVar8;
    }
  }
  return;
}


