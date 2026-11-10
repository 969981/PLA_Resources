/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03315ae4; name: FUN_03315ae4
 */


long FUN_03315ae4(long *param_1,uint param_2,long param_3,uint param_4,uint *param_5)

{
  int *piVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  char cVar6;
  bool bVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  uint uVar12;
  ulong uVar13;
  uint uVar14;
  uint uVar15;
  ulong local_80 [2];
  undefined *local_70;
  uint *puStack_68;
  uint local_54;
  
  if (0x3fffffff < (int)param_2) {
    FUN_032bd0a8(param_2);
  }
  uVar14 = *param_5;
  uVar12 = (uVar14 & 0x3fffffff) << 1;
  if (0x3ffffffe < uVar12) {
    uVar12 = 0x3fffffff;
  }
  uVar15 = uVar14 & 0x3fffffff;
  local_54 = param_2;
  if ((int)param_2 <= (int)uVar12) {
    local_54 = uVar12;
  }
  local_80[0] = (ulong)local_54 * 0x30;
  if ((int)local_54 < (int)uVar15 || 0x3fffffff < (int)local_54) {
    local_80[1] = 1;
    puStack_68 = &local_54;
    local_70 = &DAT_0411b3b8;
    FUN_03320b50(0x65816502,
                 "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                 ,0x5a,"Invalid requestedCapacity {}",local_80 + 1);
    uVar14 = *param_5;
    uVar15 = uVar14 & 0x3fffffff;
  }
  lVar9 = (**(code **)(*param_1 + 0x10))(param_1,local_80[0],local_80);
  if (0 < (int)param_4) {
    uVar11 = 0;
    do {
      puVar3 = (undefined8 *)(lVar9 + uVar11 * 0x30);
      puVar4 = (undefined8 *)(param_3 + uVar11 * 0x30);
      uVar5 = puVar4[1];
      *puVar3 = *puVar4;
      puVar3[1] = uVar5;
      uVar13 = puVar4[2];
      puVar3[2] = uVar13;
      if ((uVar13 & 1) != 0) {
        piVar1 = (int *)((uVar13 & 0xfffffffffffffffe) + 8);
        do {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar7) {
            *piVar1 = *piVar1 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
      }
      uVar5 = puVar4[4];
      puVar3[3] = puVar4[3];
      puVar3[4] = uVar5;
      uVar13 = puVar4[5];
      puVar3[5] = uVar13;
      if ((uVar13 & 1) != 0) {
        piVar1 = (int *)((uVar13 & 0xfffffffffffffffe) + 8);
        do {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar7) {
            *piVar1 = *piVar1 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 != param_4);
    uVar11 = 0;
    do {
      uVar13 = *(ulong *)(param_3 + uVar11 * 0x30 + 0x28);
      if ((uVar13 & 1) != 0) {
        plVar10 = (long *)(uVar13 & 0xfffffffffffffffe);
        plVar2 = plVar10 + 1;
        do {
          lVar8 = *plVar2;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar7) {
            *(int *)plVar2 = (int)lVar8 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if ((plVar10 != (long *)0x0) && ((int)lVar8 == 1)) {
          (**(code **)(*plVar10 + 8))();
        }
      }
      uVar13 = *(ulong *)(param_3 + uVar11 * 0x30 + 0x10);
      if ((uVar13 & 1) != 0) {
        plVar10 = (long *)(uVar13 & 0xfffffffffffffffe);
        plVar2 = plVar10 + 1;
        do {
          lVar8 = *plVar2;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar7) {
            *(int *)plVar2 = (int)lVar8 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if ((plVar10 != (long *)0x0) && ((int)lVar8 == 1)) {
          (**(code **)(*plVar10 + 8))();
        }
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 != param_4);
  }
  if (-1 < (int)uVar14) {
    (**(code **)(*param_1 + 0x18))(param_1,param_3,(ulong)uVar15 * 0x30);
  }
  if (local_80[0] < 0xbffffffd0) {
    uVar12 = (uint)(local_80[0] / 0x30);
  }
  else {
    uVar12 = 0x3fffffff;
  }
  *param_5 = uVar12;
  return lVar9;
}


