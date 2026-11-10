/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031c8500; name: FUN_031c8500
 */


void FUN_031c8500(int *param_1,long param_2,long param_3,undefined8 *param_4,long param_5,
                 long param_6,undefined8 *param_7,long param_8)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  undefined *puVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  uint uVar12;
  long lVar13;
  undefined8 *puVar14;
  int iVar15;
  uint *puVar16;
  long lVar17;
  int iVar18;
  ulong uVar19;
  undefined4 local_2e8 [2];
  undefined4 local_2e0 [2];
  undefined4 local_2d8 [2];
  int local_2d0 [2];
  int local_2c8 [2];
  uint local_2c0;
  undefined2 uStack_2bc;
  undefined8 local_2b8;
  undefined8 *local_2b0;
  long local_2a8;
  undefined8 *local_2a0;
  int local_298;
  int local_288;
  undefined2 local_284 [2];
  long local_280 [2];
  int local_270 [4];
  undefined8 local_260;
  undefined8 uStack_258;
  
  if ((*(ulong *)(param_2 + 0x28) < 4) && (*(long *)(param_2 + 0x4d8) == 0)) {
    puVar10 = (undefined8 *)0x0;
    puVar9 = (undefined8 *)0x0;
  }
  else {
    lVar17 = tpidr_el0;
    lVar13 = *(long *)(lVar17 + 0x38d490);
    if (lVar13 == 0) {
      lVar13 = FUN_0333d16c(0,1);
      *(long *)(lVar17 + 0x38d490) = lVar13;
    }
    plVar8 = *(long **)(*(long *)(lVar13 + 8) + 0x58);
    puVar9 = (undefined8 *)(**(code **)(*plVar8 + 0x10))(plVar8,0x28,0);
    *puVar9 = &PTR_LAB_042f0cd8;
    puVar9[1] = 0xffffffff;
    puVar9[2] = 1;
    puVar9[3] = 0;
    puVar9[4] = 0x8000000000000000;
    puVar7 = PTR_PTR_0434a080;
    uVar19 = (ulong)(param_5 - (long)param_4) >> 3;
    iVar18 = (int)uVar19;
    local_270[0] = iVar18;
    if (iVar18 < 1) {
      puVar9[3] = 0;
      puVar9[4] = 0x8000000000000000;
    }
    else {
      puVar10 = (undefined8 *)FUN_032cf190(PTR_PTR_0434a080,8,local_270);
      puVar9[3] = puVar10;
      *(int *)(puVar9 + 4) = iVar18;
      *(int *)((long)puVar9 + 0x24) = local_270[0];
      puVar11 = param_4;
      do {
        uVar6 = (int)uVar19 - 1;
        uVar19 = (ulong)uVar6;
        *puVar10 = *puVar11;
        puVar10 = puVar10 + 1;
        puVar11 = puVar11 + 1;
      } while (uVar6 != 0);
    }
    lVar13 = *(long *)(lVar17 + 0x38d490);
    if (lVar13 == 0) {
      lVar13 = FUN_0333d16c(0,1);
      *(long *)(lVar17 + 0x38d490) = lVar13;
    }
    plVar8 = *(long **)(*(long *)(lVar13 + 8) + 0x58);
    puVar10 = (undefined8 *)(**(code **)(*plVar8 + 0x10))(plVar8,0x28,0);
    *puVar10 = &PTR_LAB_042f0cd8;
    puVar10[1] = 0xffffffff;
    uVar19 = (ulong)(param_8 - (long)param_7) >> 3;
    puVar10[2] = 1;
    puVar10[3] = 0;
    iVar18 = (int)uVar19;
    puVar10[4] = 0x8000000000000000;
    local_270[0] = iVar18;
    if (iVar18 < 1) {
      puVar10[3] = 0;
      puVar10[4] = 0x8000000000000000;
    }
    else {
      puVar11 = (undefined8 *)FUN_032cf190(puVar7,8,local_270);
      puVar10[3] = puVar11;
      *(int *)(puVar10 + 4) = iVar18;
      *(int *)((long)puVar10 + 0x24) = local_270[0];
      puVar14 = param_7;
      do {
        uVar6 = (int)uVar19 - 1;
        uVar19 = (ulong)uVar6;
        *puVar11 = *puVar14;
        puVar11 = puVar11 + 1;
        puVar14 = puVar14 + 1;
      } while (uVar6 != 0);
    }
  }
  uStack_2bc = 0;
  local_2c0 = 0x8000030;
  local_298 = -1;
  if (param_6 != 0) {
    iVar18 = *(int *)(*(long *)(param_6 + 0x20) + 0x60);
    if (iVar18 != -1) {
      local_298 = iVar18;
    }
  }
  local_2b8 = param_3;
  local_2b0 = puVar9;
  local_2a8 = param_6;
  local_2a0 = puVar10;
  FUN_031aa380(param_2 + 0x28,param_2,&local_2c0);
  if (*(char *)(param_3 + 200) != '\0') {
    FUN_0331fefc(local_280,local_270,0x200);
    FUN_0332448c(local_280,
                 "An particular hkaiNavMeshInstance must not be added to a world more than once. To reload a section into the world after unloading it, create a new instance for the navmesh."
                );
    FUN_03320af0(0x6dfa275c,local_270,
                 "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Ai/Pathfinding/NavMesh/hkaiNavMeshInstance.cpp"
                 ,0xe0);
    FUN_0331ff7c(local_280);
  }
  *(undefined1 *)(param_3 + 200) = 1;
  if (*(long *)(param_2 + 0x4d8) == 0) {
    FUN_03176534(*(undefined8 *)(param_2 + 0x130),param_3,param_4,param_5,param_6,param_7,param_8,1)
    ;
    iVar18 = *(int *)(*(long *)(param_3 + 0x20) + 0x17c);
    *param_1 = iVar18;
    FUN_032cb060(local_270,param_3 + 0x60);
    uStack_258 = *(undefined8 *)(param_3 + 0x98);
    local_260 = *(undefined8 *)(param_3 + 0x90);
    if (*(long *)(param_3 + 0xc0) == 0) {
      local_280[0] = 0;
    }
    else {
      FUN_03187ca0(local_280);
    }
    lVar17 = *(long *)(param_3 + 0x20);
    local_2d8[0] = *(undefined4 *)(lVar17 + 0x17c);
    FUN_031e83c4(*(undefined8 *)(param_2 + 0x170),local_2d8,*(undefined8 *)(lVar17 + 0x68),
                 local_280[0],local_270,*(undefined4 *)(lVar17 + 0x180));
    local_2e0[0] = *(undefined4 *)(*(long *)(param_3 + 0x20) + 0x17c);
    FUN_031ca7f8(*(undefined8 *)(param_2 + 0x138),local_2e0,param_3);
    lVar13 = *(long *)(*(long *)(param_2 + 0x138) + 0xf0);
    local_284[0] = 0;
    local_288 = iVar18;
    lVar17 = FUN_031c9374(lVar13 + 0x18,&local_288,local_284);
    lVar17 = *(long *)(lVar13 + 0x18) + ((lVar17 << 0x20) >> 0x1d);
    *(byte *)(lVar17 + 4) = *(byte *)(lVar17 + 4) | 1;
    *(undefined1 *)(lVar17 + 5) = 0;
    if (param_6 != 0) {
      lVar13 = *(long *)(*(long *)(param_2 + 0x138) + 0xf0);
      local_284[0] = 0;
      local_288 = iVar18;
      lVar17 = FUN_031c9374(lVar13 + 0x18,&local_288,local_284);
      lVar17 = *(long *)(lVar13 + 0x18) + ((lVar17 << 0x20) >> 0x1d);
      *(byte *)(lVar17 + 4) = *(byte *)(lVar17 + 4) | 4;
      *(undefined1 *)(lVar17 + 5) = 0;
    }
    local_2e8[0] = *(undefined4 *)(*(long *)(param_3 + 0x20) + 0x17c);
    FUN_031c8b10(param_2 + 0x40,param_2,local_2e8);
    if (local_280[0] != 0) {
      FUN_032d647c();
    }
  }
  else {
    if (local_298 == -1) {
      FUN_031763f8(local_2c8,*(undefined8 *)(param_2 + 0x130),
                   *(undefined4 *)(*(long *)(param_3 + 0x20) + 0x178));
      local_298 = local_2c8[0];
    }
    uVar6 = local_2c0;
    lVar17 = *(long *)(param_2 + 0x4e0);
    if (*(long *)(local_2b8 + 8) != 0) {
      plVar8 = (long *)(local_2b8 + 0x10);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar5) {
          *plVar8 = *plVar8 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    if (local_2b0[1] != 0) {
      plVar8 = local_2b0 + 2;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar5) {
          *plVar8 = *plVar8 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    iVar18 = *(int *)(local_2b0 + 4);
    if (0 < iVar18) {
      plVar8 = (long *)local_2b0[3];
      iVar15 = 0;
      do {
        lVar13 = *plVar8;
        if ((lVar13 != 0) && (*(long *)(lVar13 + 8) != 0)) {
          plVar1 = (long *)(lVar13 + 0x10);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar5) {
              *plVar1 = *plVar1 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        iVar15 = iVar15 + 1;
        plVar8 = plVar8 + 1;
      } while (iVar15 != iVar18);
    }
    if ((local_2a8 != 0) && (*(long *)(local_2a8 + 8) != 0)) {
      plVar8 = (long *)(local_2a8 + 0x10);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar5) {
          *plVar8 = *plVar8 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    if (local_2a0[1] != 0) {
      plVar8 = local_2a0 + 2;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar5) {
          *plVar8 = *plVar8 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    iVar18 = *(int *)(local_2a0 + 4);
    if (0 < iVar18) {
      plVar8 = (long *)local_2a0[3];
      iVar15 = 0;
      do {
        lVar13 = *plVar8;
        if ((lVar13 != 0) && (*(long *)(lVar13 + 8) != 0)) {
          plVar1 = (long *)(lVar13 + 0x10);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar5) {
              *plVar1 = *plVar1 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        iVar15 = iVar15 + 1;
        plVar8 = plVar8 + 1;
      } while (iVar15 != iVar18);
    }
    if ((int)(*(int *)(lVar17 + 0x18) + (local_2c0 & 0xffff)) < 0xee1) {
      puVar11 = (undefined8 *)(*(long *)(lVar17 + 0x10) + (long)*(int *)(lVar17 + 0x18) + 0x20);
    }
    else {
      puVar11 = (undefined8 *)FUN_032bf82c(lVar17);
    }
    uVar12 = uVar6 >> 4 & 0xfff;
    puVar16 = &local_2c0;
    do {
      uVar12 = uVar12 - 1;
      uVar2 = puVar16[2];
      uVar3 = puVar16[3];
      *puVar11 = *(undefined8 *)puVar16;
      *(uint *)(puVar11 + 1) = uVar2;
      *(uint *)((long)puVar11 + 0xc) = uVar3;
      puVar16 = puVar16 + 4;
      puVar11 = puVar11 + 2;
    } while (0 < (int)uVar12);
    *(uint *)(lVar17 + 0x18) = *(int *)(lVar17 + 0x18) + (uVar6 & 0xffff);
    *(int *)(lVar17 + 0x1c) = *(int *)(lVar17 + 0x1c) + 1;
    local_2d0[0] = local_298;
    FUN_03179b84(*(undefined8 *)(param_2 + 0x130),local_2d0,param_3 + 0x60);
    *param_1 = local_298;
  }
  if (puVar10 != (undefined8 *)0x0) {
    FUN_032d647c(puVar10);
  }
  if (puVar9 != (undefined8 *)0x0) {
    FUN_032d647c(puVar9);
  }
  return;
}


