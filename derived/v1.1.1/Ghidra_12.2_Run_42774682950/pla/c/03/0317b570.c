/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0317b570; name: FUN_0317b570
 */


void FUN_0317b570(long *param_1,long *param_2)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  long *plVar8;
  void *__dest;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  ulong uVar16;
  uint *puVar17;
  long lVar18;
  uint uVar19;
  long lVar20;
  long *plVar21;
  undefined8 *puVar22;
  void *__src;
  int *piVar23;
  int iVar24;
  ulong local_90;
  uint local_88;
  undefined1 local_84 [4];
  ulong local_80;
  undefined *local_78;
  ulong *local_70;
  uint *local_68;
  
  puVar7 = PTR_PTR_0434a080;
  if (param_1 == param_2) {
    return;
  }
  uVar2 = *(uint *)(param_2 + 1);
  lVar20 = *param_2;
  uVar19 = *(uint *)((long)param_1 + 0xc) & 0x3fffffff;
  if ((int)uVar2 <= (int)uVar19) goto LAB_0317b5c4;
  lVar14 = *param_1;
  uVar3 = *(uint *)(param_1 + 1);
  local_90 = (long)(int)uVar2 * 0x18;
  local_88 = 0x18;
  local_84 = (undefined1  [4])uVar2;
  if ((int)uVar2 < 0) {
    local_80 = 2;
    local_78 = &DAT_0411b3a0;
    local_70 = (ulong *)local_84;
    local_68 = &local_88;
    FUN_03320b50(0x1bd2a77e,
                 "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                 ,0x53,"Array size overflow {}*{}",&local_80);
    if ((int)uVar19 <= (int)local_84) goto LAB_0317b7c8;
LAB_0317b7d4:
    local_80 = 1;
    local_70 = (ulong *)local_84;
    local_78 = &DAT_0411b3b8;
    FUN_03320b50(0x65816502,
                 "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                 ,0x5a,"Invalid requestedCapacity {}",&local_80);
  }
  else {
    if ((int)uVar2 < (int)uVar19) goto LAB_0317b7d4;
LAB_0317b7c8:
    if (0x3fffffff < (int)local_84) goto LAB_0317b7d4;
  }
  uVar19 = *(uint *)((long)param_1 + 0xc);
  lVar18 = (**(code **)(*(long *)puVar7 + 0x10))(puVar7,local_90,&local_90);
  if (0 < (int)uVar3) {
    uVar16 = 0;
    do {
      puVar22 = (undefined8 *)(lVar14 + uVar16 * 0x18);
      plVar21 = (long *)(lVar18 + uVar16 * 0x18);
      *plVar21 = 0;
      puVar17 = (uint *)(plVar21 + 1);
      puVar17[0] = 0;
      puVar17[1] = 0x80000000;
      uVar9 = *(uint *)(puVar22 + 1);
      plVar15 = (long *)*puVar22;
      local_88 = uVar9;
      if ((int)uVar9 < 1) {
        *plVar21 = 0;
        *puVar17 = 0;
        *(int *)((long)plVar21 + 0xc) = -0x80000000;
      }
      else {
        local_84 = (undefined1  [4])0x18;
        if (((ulong)((long)(int)uVar9 * 3) >> 0x1c & 0x1ffffffff) != 0) {
          local_78 = &DAT_0411b3a0;
          local_80 = 2;
          local_68 = &local_88;
          local_70 = (ulong *)local_84;
          FUN_03320b50(0xc69ddef,
                       "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Memory/Allocator/hkMemoryAllocator.cpp"
                       ,0x30,"Memory allocation request overflow {}*{}",&local_80);
        }
        local_80 = -((ulong)(uVar9 * 3 >> 0x1c) & 1) & 0xffffffff00000000 |
                   ((ulong)(uVar9 * 3) & 0x1fffffff) << 3;
        plVar8 = (long *)(**(code **)(*(long *)puVar7 + 0x10))(puVar7,local_80,&local_80);
        *plVar21 = (long)plVar8;
        *puVar17 = uVar9;
        iVar24 = 0;
        if (local_84 != (undefined1  [4])0x0) {
          iVar24 = (int)local_80 / (int)local_84;
        }
        uVar10 = 0;
        *(int *)((long)plVar21 + 0xc) = iVar24;
        do {
          lVar13 = *plVar15;
          *plVar8 = lVar13;
          if ((lVar13 != 0) && (*(long *)(lVar13 + 8) != 0)) {
            plVar1 = (long *)(lVar13 + 0x10);
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar6) {
                *plVar1 = *plVar1 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
          lVar13 = plVar15[1];
          uVar10 = uVar10 + 1;
          *(int *)(plVar8 + 2) = (int)plVar15[2];
          plVar8[1] = lVar13;
          plVar8 = plVar8 + 3;
          plVar15 = plVar15 + 3;
        } while (uVar10 != uVar9);
      }
      uVar16 = uVar16 + 1;
      plVar21[2] = puVar22[2];
    } while (uVar16 != uVar3);
    uVar16 = 0;
    do {
      plVar15 = (long *)(lVar14 + uVar16 * 0x18);
      plVar21 = plVar15 + 1;
      iVar24 = (int)*plVar21;
      if (0 < iVar24) {
        lVar13 = 0;
        do {
          if ((0.0 <= *(float *)(*plVar15 + lVar13 * 0x18 + 8)) &&
             (plVar8 = *(long **)(*plVar15 + lVar13 * 0x18), plVar8 != (long *)0x0)) {
            if (plVar8[1] != 0) {
              plVar1 = plVar8 + 2;
              do {
                lVar12 = *plVar1;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar6) {
                  *plVar1 = lVar12 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (lVar12 + -1 == 0) {
                (**(code **)(*plVar8 + 0x18))();
              }
            }
            iVar24 = (int)*plVar21;
          }
          lVar13 = lVar13 + 1;
        } while (lVar13 < iVar24);
      }
      *(int *)plVar21 = 0;
      puVar17 = (uint *)(lVar14 + uVar16 * 0x18 + 0xc);
      uVar9 = *puVar17;
      if ((-1 < (int)uVar9) && (*plVar15 != 0)) {
        (**(code **)(*(long *)puVar7 + 0x18))(puVar7,*plVar15,((ulong)uVar9 & 0x3fffffff) * 0x18);
      }
      uVar16 = uVar16 + 1;
      *plVar15 = 0;
      *puVar17 = 0x80000000;
    } while (uVar16 != uVar3);
  }
  if (-1 < (int)uVar19) {
    (**(code **)(*(long *)puVar7 + 0x18))(puVar7,lVar14,((ulong)uVar19 & 0x3fffffff) * 0x18);
  }
  if (local_90 < 0x5ffffffe8) {
    uVar11 = (undefined4)(local_90 / 0x18);
  }
  else {
    uVar11 = 0x3fffffff;
  }
  *(undefined4 *)((long)param_1 + 0xc) = uVar11;
  *param_1 = lVar18;
LAB_0317b5c4:
  uVar19 = *(uint *)(param_1 + 1);
  if ((int)uVar2 < (int)uVar19) {
    lVar14 = *param_1;
    plVar21 = (long *)(lVar14 + (long)(int)uVar19 * 0x18);
    do {
      plVar15 = plVar21 + -3;
      iVar24 = (int)plVar21[-2];
      if (0 < iVar24) {
        lVar18 = 0;
        do {
          if ((0.0 <= *(float *)(*plVar15 + lVar18 * 0x18 + 8)) &&
             (plVar8 = *(long **)(*plVar15 + lVar18 * 0x18), plVar8 != (long *)0x0)) {
            if (plVar8[1] != 0) {
              plVar1 = plVar8 + 2;
              do {
                lVar13 = *plVar1;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar6) {
                  *plVar1 = lVar13 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (lVar13 + -1 == 0) {
                (**(code **)(*plVar8 + 0x18))();
              }
            }
            iVar24 = (int)plVar21[-2];
          }
          lVar18 = lVar18 + 1;
        } while (lVar18 < iVar24);
      }
      *(undefined4 *)(plVar21 + -2) = 0;
      if ((-1 < (int)*(uint *)((long)plVar21 + -0xc)) && (*plVar15 != 0)) {
        (**(code **)(*(long *)puVar7 + 0x18))
                  (puVar7,*plVar15,((ulong)*(uint *)((long)plVar21 + -0xc) & 0x3fffffff) * 0x18);
      }
      plVar21[-3] = 0;
      *(undefined4 *)((long)plVar21 + -0xc) = 0x80000000;
      plVar21 = plVar15;
    } while (plVar15 != (long *)(lVar14 + (long)(int)uVar2 * 0x18));
    uVar19 = *(uint *)(param_1 + 1);
  }
  if ((int)uVar2 <= (int)uVar19) {
    uVar19 = uVar2;
  }
  if ((*param_1 != lVar20) && (0 < (int)uVar19)) {
    uVar16 = (ulong)uVar19;
    piVar23 = (int *)(*param_1 + 8);
    puVar22 = (undefined8 *)(lVar20 + 0x10);
    do {
      __src = (void *)puVar22[-2];
      iVar24 = *(int *)(puVar22 + -1);
      __dest = *(void **)(piVar23 + -2);
      if ((int)(piVar23[1] & 0x3fffffffU) < iVar24) {
        __dest = (void *)FUN_032bd1d4(puVar7,iVar24,0x18,__dest,*piVar23);
        *(void **)(piVar23 + -2) = __dest;
      }
      memcpy(__dest,__src,(long)iVar24 * 0x18);
      *piVar23 = iVar24;
      *(undefined8 *)(piVar23 + 2) = *puVar22;
      uVar16 = uVar16 - 1;
      piVar23 = piVar23 + 6;
      puVar22 = puVar22 + 3;
    } while (uVar16 != 0);
  }
  if (0 < (int)(uVar2 - uVar19)) {
    iVar24 = 0;
    plVar21 = (long *)(*param_1 + (long)(int)uVar19 * 0x18);
    puVar22 = (undefined8 *)(lVar20 + (long)(int)uVar19 * 0x18);
    do {
      *plVar21 = 0;
      plVar21[1] = -0x8000000000000000;
      uVar3 = *(uint *)(puVar22 + 1);
      plVar15 = (long *)*puVar22;
      if ((int)uVar3 < 1) {
        *plVar21 = 0;
        plVar21[1] = -0x8000000000000000;
      }
      else {
        local_90 = CONCAT44(local_90._4_4_,0x18);
        local_84 = (undefined1  [4])uVar3;
        if (((ulong)((long)(int)uVar3 * 3) >> 0x1c & 0x1ffffffff) != 0) {
          local_78 = &DAT_0411b3a0;
          local_80 = 2;
          local_68 = (uint *)local_84;
          local_70 = &local_90;
          FUN_03320b50(0xc69ddef,
                       "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Memory/Allocator/hkMemoryAllocator.cpp"
                       ,0x30,"Memory allocation request overflow {}*{}",&local_80);
        }
        local_80 = -((ulong)(uVar3 * 3 >> 0x1c) & 1) & 0xffffffff00000000 |
                   ((ulong)(uVar3 * 3) & 0x1fffffff) << 3;
        plVar8 = (long *)(**(code **)(*(long *)puVar7 + 0x10))(puVar7,local_80,&local_80);
        uVar9 = 0;
        *plVar21 = (long)plVar8;
        iVar4 = 0;
        if ((int)local_90 != 0) {
          iVar4 = (int)local_80 / (int)local_90;
        }
        *(uint *)(plVar21 + 1) = uVar3;
        *(int *)((long)plVar21 + 0xc) = iVar4;
        do {
          lVar20 = *plVar15;
          *plVar8 = lVar20;
          if ((lVar20 != 0) && (*(long *)(lVar20 + 8) != 0)) {
            plVar1 = (long *)(lVar20 + 0x10);
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar6) {
                *plVar1 = *plVar1 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
          lVar20 = plVar15[1];
          uVar9 = uVar9 + 1;
          *(int *)(plVar8 + 2) = (int)plVar15[2];
          plVar8[1] = lVar20;
          plVar8 = plVar8 + 3;
          plVar15 = plVar15 + 3;
        } while (uVar9 != uVar3);
      }
      iVar24 = iVar24 + 1;
      plVar21[2] = puVar22[2];
      plVar21 = plVar21 + 3;
      puVar22 = puVar22 + 3;
    } while (iVar24 != uVar2 - uVar19);
  }
  *(uint *)(param_1 + 1) = uVar2;
  return;
}


