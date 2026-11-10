/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0317b180; name: FUN_0317b180
 */


long * FUN_0317b180(long *param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  long *plVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 *puVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  int iVar14;
  long *plVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  uint uVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  ulong local_78;
  ulong local_70;
  undefined *local_68;
  uint *local_60;
  undefined4 *puStack_58;
  undefined4 local_48;
  uint local_44;
  
  puVar5 = PTR_PTR_0434a080;
  if (param_2 == param_1) goto LAB_0317b200;
  uVar18 = *(uint *)((long)param_1 + 0xc) & 0x3fffffff;
  uVar1 = *(uint *)(param_2 + 1);
  lVar20 = *param_2;
  if ((int)uVar18 < (int)uVar1) {
    lVar19 = *param_1;
    uVar2 = *(uint *)(param_1 + 1);
    local_78 = (long)(int)uVar1 << 4;
    local_48 = 0x10;
    local_44 = uVar1;
    if ((int)uVar1 < 0) {
      local_70 = 2;
      local_68 = &DAT_0411b3a0;
      local_60 = &local_44;
      puStack_58 = &local_48;
      FUN_03320b50(0x1bd2a77e,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                   ,0x53,"Array size overflow {}*{}",&local_70);
      if ((int)uVar18 <= (int)local_44) goto LAB_0317b264;
LAB_0317b270:
      local_70 = 1;
      local_60 = &local_44;
      local_68 = &DAT_0411b3b8;
      FUN_03320b50(0x65816502,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                   ,0x5a,"Invalid requestedCapacity {}",&local_70);
    }
    else {
      if ((int)uVar1 < (int)uVar18) goto LAB_0317b270;
LAB_0317b264:
      if (0x3fffffff < (int)local_44) goto LAB_0317b270;
    }
    uVar18 = *(uint *)((long)param_1 + 0xc);
    lVar13 = (**(code **)(*(long *)puVar5 + 0x10))(puVar5,local_78,&local_78);
    if (0 < (int)uVar2) {
      puVar8 = (undefined8 *)(lVar19 + 8);
      puVar10 = (undefined8 *)(lVar13 + 8);
      uVar21 = (ulong)uVar2;
      do {
        *(undefined4 *)(puVar10 + -1) = *(undefined4 *)(puVar8 + -1);
        uVar21 = uVar21 - 1;
        *puVar10 = *puVar8;
        *puVar8 = 0;
        puVar8 = puVar8 + 2;
        puVar10 = puVar10 + 2;
      } while (uVar21 != 0);
      uVar21 = 0;
      do {
        plVar15 = *(long **)(lVar19 + uVar21 * 0x10 + 8);
        if ((plVar15 != (long *)0x0) && (plVar15[1] != 0)) {
          plVar6 = plVar15 + 2;
          do {
            lVar11 = *plVar6;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar4) {
              *plVar6 = lVar11 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar11 + -1 == 0) {
            (**(code **)(*plVar15 + 0x18))();
          }
        }
        uVar21 = uVar21 + 1;
      } while (uVar21 != uVar2);
    }
    if (-1 < (int)uVar18) {
      (**(code **)(*(long *)puVar5 + 0x18))(puVar5,lVar19,((ulong)uVar18 & 0x3fffffff) << 4);
    }
    if (local_78 < 0x3fffffff0) {
      uVar7 = (undefined4)(local_78 >> 4);
    }
    else {
      uVar7 = 0x3fffffff;
    }
    *(undefined4 *)((long)param_1 + 0xc) = uVar7;
    *param_1 = lVar13;
  }
  uVar18 = *(uint *)(param_1 + 1);
  if ((int)uVar1 < (int)uVar18) {
    lVar13 = *param_1;
    lVar19 = lVar13 + (long)(int)uVar18 * 0x10;
    do {
      plVar15 = *(long **)(lVar19 + -8);
      lVar19 = lVar19 + -0x10;
      if ((plVar15 != (long *)0x0) && (plVar15[1] != 0)) {
        plVar6 = plVar15 + 2;
        do {
          lVar11 = *plVar6;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar4) {
            *plVar6 = lVar11 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar11 + -1 == 0) {
          (**(code **)(*plVar15 + 0x18))();
        }
      }
    } while (lVar19 != lVar13 + (long)(int)uVar1 * 0x10);
    uVar18 = *(uint *)(param_1 + 1);
  }
  if ((int)uVar1 <= (int)uVar18) {
    uVar18 = uVar1;
  }
  lVar19 = *param_1;
  if ((lVar19 != lVar20) && (0 < (int)uVar18)) {
    uVar21 = 0;
    do {
      puVar17 = (undefined4 *)(lVar20 + uVar21 * 0x10);
      puVar16 = (undefined4 *)(lVar19 + uVar21 * 0x10);
      plVar9 = (long *)(puVar16 + 2);
      *puVar16 = *puVar17;
      plVar12 = (long *)(puVar17 + 2);
      plVar15 = (long *)*plVar12;
      plVar6 = (long *)*plVar9;
      if (plVar6 != plVar15) {
        if ((plVar15 != (long *)0x0) && (plVar15[1] != 0)) {
          plVar15 = plVar15 + 2;
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
            if (bVar4) {
              *plVar15 = *plVar15 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          plVar6 = (long *)*plVar9;
          plVar15 = (long *)*plVar12;
        }
        *plVar9 = (long)plVar15;
        if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
          plVar15 = plVar6 + 2;
          do {
            lVar13 = *plVar15;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
            if (bVar4) {
              *plVar15 = lVar13 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar13 + -1 == 0) {
            (**(code **)(*plVar6 + 0x18))();
          }
        }
      }
      uVar21 = uVar21 + 1;
    } while (uVar21 != uVar18);
    lVar19 = *param_1;
  }
  if (0 < (int)(uVar1 - uVar18)) {
    iVar14 = 0;
    puVar16 = (undefined4 *)(lVar20 + (long)(int)uVar18 * 0x10);
    puVar17 = (undefined4 *)(lVar19 + (long)(int)uVar18 * 0x10);
    do {
      *puVar17 = *puVar16;
      lVar20 = *(long *)(puVar16 + 2);
      *(long *)(puVar17 + 2) = lVar20;
      puVar17 = puVar17 + 4;
      puVar16 = puVar16 + 4;
      if ((lVar20 != 0) && (*(long *)(lVar20 + 8) != 0)) {
        plVar15 = (long *)(lVar20 + 0x10);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar4) {
            *plVar15 = *plVar15 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      iVar14 = iVar14 + 1;
    } while (iVar14 != uVar1 - uVar18);
  }
  *(uint *)(param_1 + 1) = uVar1;
LAB_0317b200:
  FUN_032c27dc(param_1 + 2,param_2 + 2);
  return param_1;
}


