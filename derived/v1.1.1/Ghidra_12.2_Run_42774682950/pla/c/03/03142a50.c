/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03142a50; name: FUN_03142a50
 */


long * FUN_03142a50(long *param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined8 *puVar11;
  long *plVar12;
  int iVar13;
  undefined8 *puVar14;
  long lVar15;
  long *plVar16;
  undefined4 *puVar17;
  undefined4 *puVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  ulong local_90;
  undefined4 local_88;
  uint local_84;
  undefined8 local_80;
  undefined *local_78;
  uint *local_70;
  undefined4 *puStack_68;
  
  puVar5 = PTR_PTR_0434a080;
  if (param_2 == param_1) goto LAB_03142d80;
  uVar10 = *(uint *)((long)param_1 + 0xc) & 0x3fffffff;
  uVar1 = *(uint *)(param_2 + 1);
  lVar20 = *param_2;
  if ((int)uVar10 < (int)uVar1) {
    lVar19 = *param_1;
    uVar2 = *(uint *)(param_1 + 1);
    local_88 = 0x10;
    local_90 = (long)(int)uVar1 << 4;
    local_84 = uVar1;
    if ((int)uVar1 < 0) {
      local_80 = 2;
      local_78 = &DAT_0411b3a0;
      local_70 = &local_84;
      puStack_68 = &local_88;
      FUN_03320b50(0x1bd2a77e,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                   ,0x53,"Array size overflow {}*{}",&local_80);
      if ((int)uVar10 <= (int)local_84) goto LAB_03142acc;
LAB_03142ad8:
      local_80 = 1;
      local_70 = &local_84;
      local_78 = &DAT_0411b3b8;
      FUN_03320b50(0x65816502,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                   ,0x5a,"Invalid requestedCapacity {}",&local_80);
    }
    else {
      if ((int)uVar1 < (int)uVar10) goto LAB_03142ad8;
LAB_03142acc:
      if (0x3fffffff < (int)local_84) goto LAB_03142ad8;
    }
    uVar10 = *(uint *)((long)param_1 + 0xc);
    lVar6 = (**(code **)(*(long *)puVar5 + 0x10))(puVar5,local_90,&local_90);
    if (0 < (int)uVar2) {
      puVar11 = (undefined8 *)(lVar19 + 8);
      puVar14 = (undefined8 *)(lVar6 + 8);
      uVar21 = (ulong)uVar2;
      do {
        *(undefined4 *)(puVar14 + -1) = *(undefined4 *)(puVar11 + -1);
        uVar21 = uVar21 - 1;
        *puVar14 = *puVar11;
        *puVar11 = 0;
        puVar11 = puVar11 + 2;
        puVar14 = puVar14 + 2;
      } while (uVar21 != 0);
      uVar21 = 0;
      do {
        plVar7 = *(long **)(lVar19 + uVar21 * 0x10 + 8);
        if ((plVar7 != (long *)0x0) && (plVar7[1] != 0)) {
          plVar8 = plVar7 + 2;
          do {
            lVar15 = *plVar8;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar4) {
              *plVar8 = lVar15 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar15 + -1 == 0) {
            (**(code **)(*plVar7 + 0x18))();
          }
        }
        uVar21 = uVar21 + 1;
      } while (uVar21 != uVar2);
    }
    if (-1 < (int)uVar10) {
      (**(code **)(*(long *)puVar5 + 0x18))(puVar5,lVar19,((ulong)uVar10 & 0x3fffffff) << 4);
    }
    if (local_90 < 0x3fffffff0) {
      uVar9 = (undefined4)(local_90 >> 4);
    }
    else {
      uVar9 = 0x3fffffff;
    }
    *(undefined4 *)((long)param_1 + 0xc) = uVar9;
    *param_1 = lVar6;
  }
  uVar10 = *(uint *)(param_1 + 1);
  if ((int)uVar1 < (int)uVar10) {
    lVar6 = *param_1;
    lVar19 = lVar6 + (long)(int)uVar10 * 0x10;
    do {
      plVar7 = *(long **)(lVar19 + -8);
      lVar19 = lVar19 + -0x10;
      if ((plVar7 != (long *)0x0) && (plVar7[1] != 0)) {
        plVar8 = plVar7 + 2;
        do {
          lVar15 = *plVar8;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar4) {
            *plVar8 = lVar15 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar15 + -1 == 0) {
          (**(code **)(*plVar7 + 0x18))();
        }
      }
    } while (lVar19 != lVar6 + (long)(int)uVar1 * 0x10);
    uVar10 = *(uint *)(param_1 + 1);
  }
  lVar19 = *param_1;
  if ((int)uVar1 <= (int)uVar10) {
    uVar10 = uVar1;
  }
  if ((lVar19 != lVar20) && (0 < (int)uVar10)) {
    uVar21 = 0;
    do {
      puVar18 = (undefined4 *)(lVar20 + uVar21 * 0x10);
      puVar17 = (undefined4 *)(lVar19 + uVar21 * 0x10);
      plVar12 = (long *)(puVar17 + 2);
      *puVar17 = *puVar18;
      plVar16 = (long *)(puVar18 + 2);
      plVar7 = (long *)*plVar16;
      plVar8 = (long *)*plVar12;
      if (plVar8 != plVar7) {
        if ((plVar7 != (long *)0x0) && (plVar7[1] != 0)) {
          plVar7 = plVar7 + 2;
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar4) {
              *plVar7 = *plVar7 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          plVar8 = (long *)*plVar12;
          plVar7 = (long *)*plVar16;
        }
        *plVar12 = (long)plVar7;
        if ((plVar8 != (long *)0x0) && (plVar8[1] != 0)) {
          plVar7 = plVar8 + 2;
          do {
            lVar6 = *plVar7;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar4) {
              *plVar7 = lVar6 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar6 + -1 == 0) {
            (**(code **)(*plVar8 + 0x18))();
          }
        }
      }
      uVar21 = uVar21 + 1;
    } while (uVar21 != uVar10);
    lVar19 = *param_1;
  }
  if (0 < (int)(uVar1 - uVar10)) {
    iVar13 = 0;
    puVar17 = (undefined4 *)(lVar20 + (long)(int)uVar10 * 0x10);
    puVar18 = (undefined4 *)(lVar19 + (long)(int)uVar10 * 0x10);
    do {
      *puVar18 = *puVar17;
      lVar20 = *(long *)(puVar17 + 2);
      *(long *)(puVar18 + 2) = lVar20;
      puVar18 = puVar18 + 4;
      puVar17 = puVar17 + 4;
      if ((lVar20 != 0) && (*(long *)(lVar20 + 8) != 0)) {
        plVar7 = (long *)(lVar20 + 0x10);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar4) {
            *plVar7 = *plVar7 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      iVar13 = iVar13 + 1;
    } while (iVar13 != uVar1 - uVar10);
  }
  *(uint *)(param_1 + 1) = uVar1;
LAB_03142d80:
  FUN_032c27dc(param_1 + 2,param_2 + 2);
  return param_1;
}


