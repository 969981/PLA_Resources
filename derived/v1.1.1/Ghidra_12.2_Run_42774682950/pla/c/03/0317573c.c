/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0317573c; name: FUN_0317573c
 */


void FUN_0317573c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined4 uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  uint uVar18;
  int iVar19;
  long lVar20;
  long lVar21;
  ulong uVar22;
  ulong local_a8;
  ulong local_90;
  undefined4 local_88;
  uint local_84;
  undefined8 local_80;
  undefined *local_78;
  uint *local_70;
  undefined4 *puStack_68;
  
  param_1[5] = 0;
  *param_1 = &PTR_LAB_042fb6a8;
  param_1[1] = 0xffffffff;
  param_1[2] = 1;
  plVar10 = param_1 + 4;
  *plVar10 = 0;
  *(undefined1 *)(param_1 + 6) = 1;
  param_1[0xb] = 0;
  param_1[7] = 0;
  param_1[8] = 0x8000000000000000;
  param_1[9] = 0;
  param_1[10] = 0x8000000000000000;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  lVar15 = param_2[4];
  if (lVar15 != 0) {
    if (*(long *)(lVar15 + 8) == 0) {
      *plVar10 = lVar15;
    }
    else {
      plVar8 = (long *)(lVar15 + 0x10);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar6) {
          *plVar8 = *plVar8 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      plVar8 = (long *)*plVar10;
      *plVar10 = param_2[4];
      if ((plVar8 != (long *)0x0) && (plVar8[1] != 0)) {
        plVar10 = plVar8 + 2;
        do {
          lVar15 = *plVar10;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar6) {
            *plVar10 = lVar15 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar15 + -1 == 0) {
          (**(code **)(*plVar8 + 0x18))();
        }
      }
    }
  }
  *(undefined1 *)(param_2 + 6) = 0;
  iVar19 = *(int *)(param_2 + 10);
  if ((int)(*(uint *)((long)param_1 + 0x54) & 0x3fffffff) < iVar19) {
    uVar12 = FUN_0317a650(PTR_PTR_0434a080,iVar19,param_1[9],*(undefined4 *)(param_1 + 10),
                          (uint *)((long)param_1 + 0x54));
    param_1[9] = uVar12;
    iVar19 = *(int *)(param_2 + 10);
  }
  if (iVar19 != 0) {
    lVar15 = param_2[9];
    lVar21 = lVar15 + (long)iVar19 * 0x18;
    do {
      iVar19 = *(int *)(param_1 + 10);
      *(int *)(param_1 + 10) = iVar19 + 1;
      puVar13 = (undefined8 *)(param_1[9] + (long)iVar19 * 0x18);
      puVar11 = puVar13;
      do {
        *puVar11 = 0;
        puVar11[1] = 0;
        *(undefined1 *)(puVar11 + 2) = 1;
        puVar11 = puVar11 + 3;
      } while (puVar11 != puVar13 + 3);
      FUN_03175e78(puVar13,lVar15);
      lVar15 = lVar15 + 0x18;
    } while (lVar15 != lVar21);
  }
  puVar7 = PTR_PTR_0434a080;
  if (param_2 == param_1) goto LAB_03175984;
  uVar18 = *(uint *)((long)param_1 + 0x44) & 0x3fffffff;
  uVar3 = *(uint *)(param_2 + 8);
  lVar15 = param_2[7];
  lVar21 = (long)(int)uVar3;
  if ((int)uVar18 < (int)uVar3) {
    lVar17 = param_1[7];
    uVar4 = *(uint *)(param_1 + 8);
    uVar22 = (ulong)uVar4;
    local_88 = 0xf0;
    local_90 = lVar21 * 0xf0;
    local_84 = uVar3;
    if ((int)uVar3 < 0) {
      local_80 = 2;
      local_78 = &DAT_0411b3a0;
      local_70 = &local_84;
      puStack_68 = &local_88;
      FUN_03320b50(0x1bd2a77e,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                   ,0x53,"Array size overflow {}*{}",&local_80);
      if ((int)uVar18 <= (int)local_84) goto LAB_0317586c;
LAB_03175878:
      local_80 = 1;
      local_70 = &local_84;
      local_78 = &DAT_0411b3b8;
      FUN_03320b50(0x65816502,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                   ,0x5a,"Invalid requestedCapacity {}",&local_80);
    }
    else {
      if ((int)uVar3 < (int)uVar18) goto LAB_03175878;
LAB_0317586c:
      if (0x3fffffff < (int)local_84) goto LAB_03175878;
    }
    uVar18 = *(uint *)((long)param_1 + 0x44);
    lVar9 = (**(code **)(*(long *)puVar7 + 0x10))(puVar7,local_90,&local_90);
    if (0 < (int)uVar4) {
      lVar20 = lVar17;
      lVar16 = lVar9;
      local_a8 = uVar22;
      do {
        FUN_0317a8c4(lVar16,lVar20);
        lVar20 = lVar20 + 0xf0;
        local_a8 = local_a8 - 1;
        lVar16 = lVar16 + 0xf0;
      } while (local_a8 != 0);
      lVar20 = lVar17;
      do {
        FUN_0317aa00(lVar20);
        uVar22 = uVar22 - 1;
        lVar20 = lVar20 + 0xf0;
      } while (uVar22 != 0);
    }
    if (-1 < (int)uVar18) {
      (**(code **)(*(long *)puVar7 + 0x18))(puVar7,lVar17,((ulong)uVar18 & 0x3fffffff) * 0xf0);
    }
    if (local_90 < 0x3bffffff10) {
      uVar14 = (undefined4)(local_90 / 0xf0);
    }
    else {
      uVar14 = 0x3fffffff;
    }
    *(undefined4 *)((long)param_1 + 0x44) = uVar14;
    param_1[7] = lVar9;
  }
  uVar18 = *(uint *)(param_1 + 8);
  if ((int)uVar3 < (int)uVar18) {
    lVar9 = (long)(int)uVar18;
    lVar20 = param_1[7];
    lVar17 = lVar20 + lVar9 * 0xf0 + -0xf0;
    FUN_0317aa00(lVar17);
    if (lVar17 != lVar20 + lVar21 * 0xf0) {
      lVar21 = lVar21 * 0xf0 + lVar9 * -0xf0 + 0xf0;
      lVar17 = lVar9 * 0xf0 + lVar20 + -0x1e0;
      do {
        FUN_0317aa00(lVar17);
        lVar21 = lVar21 + 0xf0;
        lVar17 = lVar17 + -0xf0;
      } while (lVar21 != 0);
    }
    uVar18 = *(uint *)(param_1 + 8);
  }
  if ((int)uVar3 <= (int)uVar18) {
    uVar18 = uVar3;
  }
  lVar21 = param_1[7];
  if ((lVar21 != lVar15) && (0 < (int)uVar18)) {
    uVar22 = (ulong)uVar18;
    lVar17 = lVar15;
    do {
      FUN_0317af1c(lVar21,lVar17);
      uVar22 = uVar22 - 1;
      lVar21 = lVar21 + 0xf0;
      lVar17 = lVar17 + 0xf0;
    } while (uVar22 != 0);
    lVar21 = param_1[7];
  }
  iVar19 = uVar3 - uVar18;
  if (0 < iVar19) {
    lVar9 = (long)(int)uVar18 * 0xf0;
    lVar17 = lVar15 + lVar9;
    lVar9 = lVar21 + lVar9;
    FUN_031834ac(lVar9,lVar17);
    if (iVar19 != 1) {
      FUN_031834ac(lVar9 + 0xf0,lVar17 + 0xf0);
      iVar19 = iVar19 + -2;
      if (iVar19 != 0) {
        lVar17 = (long)(int)uVar18 * 0xf0 + 0x1e0;
        lVar15 = lVar15 + lVar17;
        lVar21 = lVar21 + lVar17;
        do {
          FUN_031834ac(lVar21,lVar15);
          iVar19 = iVar19 + -1;
          lVar15 = lVar15 + 0xf0;
          lVar21 = lVar21 + 0xf0;
        } while (iVar19 != 0);
      }
    }
  }
  *(uint *)(param_1 + 8) = uVar3;
LAB_03175984:
  lVar17 = param_2[0xb];
  lVar15 = tpidr_el0;
  lVar21 = *(long *)(lVar15 + 0x38d490);
  if (lVar21 == 0) {
    lVar21 = FUN_0333d16c(0,1);
    *(long *)(lVar15 + 0x38d490) = lVar21;
  }
  plVar10 = *(long **)(*(long *)(lVar21 + 8) + 0x58);
  puVar11 = (undefined8 *)(**(code **)(*plVar10 + 0x10))(plVar10,0x330,0);
  puVar11[1] = 0xffffffff;
  puVar11[2] = 1;
  *puVar11 = &PTR_LAB_0430b170;
  puVar11[3] = puVar11 + 5;
  puVar11[4] = 0x8000002000000000;
  FUN_0317b570(puVar11 + 3,lVar17 + 0x18);
  *(undefined4 *)(puVar11 + 0x65) = *(undefined4 *)(lVar17 + 0x328);
  plVar10 = (long *)param_1[0xb];
  param_1[0xb] = puVar11;
  if ((plVar10 != (long *)0x0) && (plVar10[1] != 0)) {
    plVar8 = plVar10 + 2;
    do {
      lVar21 = *plVar8;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar6) {
        *plVar8 = lVar21 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar21 + -1 == 0) {
      (**(code **)(*plVar10 + 0x18))();
    }
  }
  uVar12 = param_2[0xc];
  uVar1 = param_2[0xd];
  uVar2 = param_2[0xf];
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = uVar2;
  param_1[0xc] = uVar12;
  param_1[0xd] = uVar1;
  uVar12 = param_2[0x10];
  uVar1 = param_2[0x11];
  uVar2 = param_2[0x13];
  param_1[0x12] = param_2[0x12];
  param_1[0x13] = uVar2;
  param_1[0x10] = uVar12;
  param_1[0x11] = uVar1;
  uVar12 = param_2[0x14];
  uVar1 = param_2[0x15];
  uVar2 = param_2[0x17];
  param_1[0x16] = param_2[0x16];
  param_1[0x17] = uVar2;
  param_1[0x14] = uVar12;
  param_1[0x15] = uVar1;
  uVar12 = param_2[0x18];
  uVar1 = param_2[0x19];
  uVar2 = param_2[0x1b];
  param_1[0x1a] = param_2[0x1a];
  param_1[0x1b] = uVar2;
  param_1[0x18] = uVar12;
  param_1[0x19] = uVar1;
  lVar21 = *(long *)(lVar15 + 0x38d490);
  if (lVar21 == 0) {
    lVar21 = FUN_0333d16c(0,1);
    *(long *)(lVar15 + 0x38d490) = lVar21;
  }
  plVar10 = *(long **)(*(long *)(lVar21 + 8) + 0x58);
  puVar11 = (undefined8 *)(**(code **)(*plVar10 + 0x10))(plVar10,0x28,0);
  *puVar11 = &DAT_042f5e50;
  puVar11[1] = 0xffffffff;
  puVar11[2] = 1;
  *(undefined4 *)(puVar11 + 3) = 0x3d4ccccd;
  puVar11[4] = param_1;
  plVar10 = (long *)param_1[0x1c];
  param_1[0x1c] = puVar11;
  if ((plVar10 != (long *)0x0) && (plVar10[1] != 0)) {
    plVar8 = plVar10 + 2;
    do {
      lVar21 = *plVar8;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar6) {
        *plVar8 = lVar21 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar21 + -1 == 0) {
      (**(code **)(*plVar10 + 0x18))();
    }
  }
  lVar21 = *(long *)(lVar15 + 0x38d490);
  if (lVar21 == 0) {
    lVar21 = FUN_0333d16c(0,1);
    *(long *)(lVar15 + 0x38d490) = lVar21;
  }
  plVar10 = *(long **)(*(long *)(lVar21 + 8) + 0x58);
  puVar11 = (undefined8 *)(**(code **)(*plVar10 + 0x10))(plVar10,0x20,0);
  *puVar11 = &DAT_042f6440;
  puVar11[1] = 0xffffffff;
  puVar11[2] = 1;
  puVar11[3] = param_1;
  plVar10 = (long *)param_1[0x1d];
  param_1[0x1d] = puVar11;
  if ((plVar10 != (long *)0x0) && (plVar10[1] != 0)) {
    plVar8 = plVar10 + 2;
    do {
      lVar15 = *plVar8;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar6) {
        *plVar8 = lVar15 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar15 + -1 == 0) {
      (**(code **)(*plVar10 + 0x18))();
    }
  }
  return;
}


