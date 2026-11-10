/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03314bbc; name: FUN_03314bbc
 */


void FUN_03314bbc(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  uint uVar1;
  long *plVar2;
  int *piVar3;
  undefined8 uVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  undefined *puVar8;
  long *plVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  undefined8 *puVar16;
  long lVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  ulong local_88;
  uint local_7c;
  undefined8 local_78;
  undefined *local_70;
  uint *puStack_68;
  
  uVar18 = *(uint *)(param_1 + 1);
  uVar19 = *(uint *)((long)param_1 + 0xc);
  uVar20 = uVar19 & 0x3fffffff;
  lVar17 = *param_1;
  uVar1 = uVar18 + 1;
  lVar15 = lVar17;
  if ((int)uVar20 <= (int)uVar18) {
    if (0x3ffffffe < (int)uVar18) {
      FUN_032bd0a8(uVar1);
      uVar19 = *(uint *)((long)param_1 + 0xc);
      uVar20 = uVar19 & 0x3fffffff;
    }
    puVar8 = PTR_PTR_0434a080;
    uVar10 = (uVar19 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar10) {
      uVar10 = 0x3fffffff;
    }
    local_7c = uVar1;
    if ((int)uVar1 <= (int)uVar10) {
      local_7c = uVar10;
    }
    local_88 = (ulong)local_7c * 0x30;
    if (((int)local_7c < (int)uVar20) || (0x3fffffff < (int)local_7c)) {
      local_78 = 1;
      puStack_68 = &local_7c;
      local_70 = &DAT_0411b3b8;
      FUN_03320b50(0x65816502,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                   ,0x5a,"Invalid requestedCapacity {}",&local_78);
      uVar19 = *(uint *)((long)param_1 + 0xc);
      uVar20 = uVar19 & 0x3fffffff;
    }
    lVar15 = (**(code **)(*(long *)puVar8 + 0x10))(puVar8,local_88,&local_88);
    if (0 < (int)uVar18) {
      puVar16 = (undefined8 *)(lVar15 + 0x18);
      puVar12 = (undefined8 *)(lVar17 + 0x18);
      uVar14 = (ulong)uVar18;
      do {
        puVar16[-3] = puVar12[-3];
        puVar16[-2] = puVar12[-2];
        puVar16[-1] = puVar12[-1];
        puVar12[-2] = 0;
        puVar12[-1] = 0;
        puVar12[-3] = 0;
        *puVar16 = *puVar12;
        puVar16[1] = puVar12[1];
        uVar14 = uVar14 - 1;
        puVar16[2] = puVar12[2];
        puVar12[1] = 0;
        puVar12[2] = 0;
        *puVar12 = 0;
        puVar16 = puVar16 + 6;
        puVar12 = puVar12 + 6;
      } while (uVar14 != 0);
      uVar14 = 0;
      do {
        uVar13 = *(ulong *)(lVar17 + uVar14 * 0x30 + 0x28);
        if ((uVar13 & 1) != 0) {
          plVar9 = (long *)(uVar13 & 0xfffffffffffffffe);
          plVar2 = plVar9 + 1;
          do {
            lVar7 = *plVar2;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar6) {
              *(int *)plVar2 = (int)lVar7 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if ((plVar9 != (long *)0x0) && ((int)lVar7 == 1)) {
            (**(code **)(*plVar9 + 8))();
          }
        }
        uVar13 = *(ulong *)(lVar17 + uVar14 * 0x30 + 0x10);
        if ((uVar13 & 1) != 0) {
          plVar9 = (long *)(uVar13 & 0xfffffffffffffffe);
          plVar2 = plVar9 + 1;
          do {
            lVar7 = *plVar2;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar6) {
              *(int *)plVar2 = (int)lVar7 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if ((plVar9 != (long *)0x0) && ((int)lVar7 == 1)) {
            (**(code **)(*plVar9 + 8))();
          }
        }
        uVar14 = uVar14 + 1;
      } while (uVar14 != uVar18);
    }
    if (-1 < (int)uVar19) {
      (**(code **)(*(long *)puVar8 + 0x18))(puVar8,lVar17,(ulong)uVar20 * 0x30);
    }
    if (local_88 < 0xbffffffd0) {
      uVar11 = (undefined4)(local_88 / 0x30);
    }
    else {
      uVar11 = 0x3fffffff;
    }
    uVar18 = *(uint *)(param_1 + 1);
    *(undefined4 *)((long)param_1 + 0xc) = uVar11;
    *param_1 = lVar15;
  }
  puVar16 = (undefined8 *)(lVar15 + (long)(int)uVar18 * 0x30);
  uVar4 = param_2[1];
  *puVar16 = *param_2;
  puVar16[1] = uVar4;
  uVar14 = param_2[2];
  puVar16[2] = uVar14;
  if ((uVar14 & 1) != 0) {
    piVar3 = (int *)((uVar14 & 0xfffffffffffffffe) + 8);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar6) {
        *piVar3 = *piVar3 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  lVar15 = lVar15 + (long)(int)uVar18 * 0x30;
  uVar4 = param_3[1];
  *(undefined8 *)(lVar15 + 0x18) = *param_3;
  *(undefined8 *)(lVar15 + 0x20) = uVar4;
  uVar14 = param_3[2];
  *(ulong *)(lVar15 + 0x28) = uVar14;
  if ((uVar14 & 1) != 0) {
    piVar3 = (int *)((uVar14 & 0xfffffffffffffffe) + 8);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar6) {
        *piVar3 = *piVar3 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  *(uint *)(param_1 + 1) = uVar1;
  return;
}


