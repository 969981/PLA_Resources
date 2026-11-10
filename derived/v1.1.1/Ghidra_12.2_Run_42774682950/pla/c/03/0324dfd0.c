/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0324dfd0; name: FUN_0324dfd0
 */


void FUN_0324dfd0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined2 uVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  long *plVar8;
  long lVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  long lVar12;
  void *pvVar13;
  uint uVar14;
  undefined4 uVar15;
  uint uVar16;
  long *plVar17;
  int *piVar18;
  int iVar19;
  long lVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  ulong *puVar23;
  undefined8 *puVar24;
  long lVar25;
  long lVar26;
  uint *puVar27;
  int *piVar28;
  void *pvVar29;
  uint *puVar30;
  int iVar31;
  ulong uVar32;
  ulong uVar33;
  undefined4 *puVar34;
  long lVar35;
  undefined8 *puVar36;
  ulong local_d0;
  ulong local_c8;
  ulong local_98;
  ulong local_90;
  undefined4 local_84;
  ulong local_80;
  undefined *local_78;
  ulong *local_70;
  ulong *local_68;
  
  *param_1 = *param_2;
  plVar8 = *(long **)(param_1 + 2);
  plVar17 = *(long **)(param_2 + 2);
  if (plVar8 != plVar17) {
    if ((plVar17 != (long *)0x0) && (plVar17[1] != 0)) {
      plVar17 = plVar17 + 2;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar6) {
          *plVar17 = *plVar17 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      plVar8 = *(long **)(param_1 + 2);
      plVar17 = *(long **)(param_2 + 2);
    }
    *(long **)(param_1 + 2) = plVar17;
    if ((plVar8 != (long *)0x0) && (plVar8[1] != 0)) {
      plVar17 = plVar8 + 2;
      do {
        lVar20 = *plVar17;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar6) {
          *plVar17 = lVar20 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar20 + -1 == 0) {
        (**(code **)(*plVar8 + 0x18))();
      }
    }
  }
  plVar8 = *(long **)(param_1 + 4);
  plVar17 = *(long **)(param_2 + 4);
  if (plVar8 != plVar17) {
    if ((plVar17 != (long *)0x0) && (plVar17[1] != 0)) {
      plVar17 = plVar17 + 2;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar6) {
          *plVar17 = *plVar17 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      plVar8 = *(long **)(param_1 + 4);
      plVar17 = *(long **)(param_2 + 4);
    }
    *(long **)(param_1 + 4) = plVar17;
    if ((plVar8 != (long *)0x0) && (plVar8[1] != 0)) {
      plVar17 = plVar8 + 2;
      do {
        lVar20 = *plVar17;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar6) {
          *plVar17 = lVar20 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar20 + -1 == 0) {
        (**(code **)(*plVar8 + 0x18))();
      }
    }
  }
  uVar21 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + 10);
  *(undefined8 *)(param_1 + 8) = uVar21;
  uVar21 = *(undefined8 *)(param_2 + 0xc);
  *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_2 + 0xe);
  *(undefined8 *)(param_1 + 0xc) = uVar21;
  uVar21 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0x12) = *(undefined8 *)(param_2 + 0x12);
  *(undefined8 *)(param_1 + 0x10) = uVar21;
  uVar21 = *(undefined8 *)(param_2 + 0x14);
  *(undefined8 *)(param_1 + 0x16) = *(undefined8 *)(param_2 + 0x16);
  *(undefined8 *)(param_1 + 0x14) = uVar21;
  uVar21 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x1a) = *(undefined8 *)(param_2 + 0x1a);
  *(undefined8 *)(param_1 + 0x18) = uVar21;
  uVar21 = *(undefined8 *)(param_2 + 0x1c);
  *(undefined8 *)(param_1 + 0x1e) = *(undefined8 *)(param_2 + 0x1e);
  *(undefined8 *)(param_1 + 0x1c) = uVar21;
  uVar21 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x22) = *(undefined8 *)(param_2 + 0x22);
  *(undefined8 *)(param_1 + 0x20) = uVar21;
  uVar21 = *(undefined8 *)(param_2 + 0x24);
  *(undefined8 *)(param_1 + 0x26) = *(undefined8 *)(param_2 + 0x26);
  *(undefined8 *)(param_1 + 0x24) = uVar21;
  param_1[0x28] = param_2[0x28];
  puVar7 = PTR_PTR_0434a080;
  if (param_2 == param_1) goto LAB_0324ed4c;
  uVar2 = param_2[0x2c];
  lVar20 = (long)(int)uVar2;
  lVar35 = *(long *)(param_2 + 0x2a);
  uVar16 = param_1[0x2d] & 0x3fffffff;
  if ((int)uVar16 < (int)uVar2) {
    lVar25 = *(long *)(param_1 + 0x2a);
    uVar3 = param_1[0x2c];
    uVar32 = (ulong)uVar3;
    local_84 = 0x10;
    local_98 = lVar20 << 4;
    local_90 = CONCAT44(local_90._4_4_,uVar2);
    if ((int)uVar2 < 0) {
      local_70 = &local_90;
      local_80 = 2;
      local_78 = &DAT_0411b3a0;
      local_68 = (ulong *)&local_84;
      FUN_03320b50(0x1bd2a77e,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                   ,0x53,"Array size overflow {}*{}",&local_80);
      uVar14 = (uint)local_90;
      if ((int)uVar16 <= (int)(uint)local_90) goto LAB_0324e16c;
LAB_0324e178:
      local_80 = 1;
      local_70 = &local_90;
      local_78 = &DAT_0411b3b8;
      FUN_03320b50(0x65816502,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                   ,0x5a,"Invalid requestedCapacity {}",&local_80);
    }
    else {
      uVar14 = uVar2;
      if ((int)uVar2 < (int)uVar16) goto LAB_0324e178;
LAB_0324e16c:
      if (0x3fffffff < (int)uVar14) goto LAB_0324e178;
    }
    uVar16 = param_1[0x2d];
    lVar9 = (**(code **)(*(long *)puVar7 + 0x10))(puVar7,local_98,&local_98);
    if (0 < (int)uVar3) {
      piVar18 = (int *)(lVar9 + 0xc);
      puVar23 = (ulong *)(lVar25 + 8);
      uVar33 = uVar32;
      do {
        piVar18[-3] = 0;
        piVar18[-2] = 0;
        piVar18[-1] = 0;
        piVar18[0] = -0x80000000;
        if (*(int *)((long)puVar23 + 4) < 0) {
          local_84 = 4;
          iVar31 = (int)*puVar23;
          local_90 = (long)iVar31 << 2;
          if (iVar31 < 0) {
            local_80 = 2;
            local_78 = &DAT_0411b3a0;
            local_70 = puVar23;
            local_68 = (ulong *)&local_84;
            FUN_03320b50(0x77a36e5f,
                         "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                         ,0x27,"Array size overflow {}*{}",&local_80);
            iVar31 = (int)*puVar23;
          }
          if (iVar31 == 0) {
            *(int *)((long)puVar23 + 4) = 0;
            puVar23[-1] = 0;
          }
          else {
            pvVar13 = (void *)(**(code **)(*(long *)puVar7 + 0x10))(puVar7,local_90,&local_90);
            if (pvVar13 != (void *)0x0) {
              local_c8 = local_90 >> 2;
              if (0x3ffffffe < local_c8) {
                local_c8 = 0x3fffffff;
              }
              memcpy(pvVar13,(void *)puVar23[-1],local_90);
              puVar23[-1] = (ulong)pvVar13;
              *(int *)((long)puVar23 + 4) = (int)local_c8;
            }
          }
        }
        *(ulong *)(piVar18 + -3) = puVar23[-1];
        piVar18[-1] = (int)*puVar23;
        *piVar18 = *(int *)((long)puVar23 + 4);
        uVar33 = uVar33 - 1;
        puVar23[-1] = 0;
        *puVar23 = 0;
        piVar18 = piVar18 + 4;
        puVar23 = puVar23 + 2;
      } while (uVar33 != 0);
      piVar18 = (int *)(lVar25 + 0xc);
      do {
        piVar18[-1] = 0;
        if ((-1 < *piVar18) && (*(long *)(piVar18 + -3) != 0)) {
          (**(code **)(*(long *)puVar7 + 0x18))(puVar7,*(long *)(piVar18 + -3),*piVar18 << 2);
        }
        piVar18[-3] = 0;
        piVar18[-2] = 0;
        uVar32 = uVar32 - 1;
        *piVar18 = -0x80000000;
        piVar18 = piVar18 + 4;
      } while (uVar32 != 0);
    }
    if (-1 < (int)uVar16) {
      (**(code **)(*(long *)puVar7 + 0x18))(puVar7,lVar25,((ulong)uVar16 & 0x3fffffff) << 4);
    }
    if (local_98 < 0x3fffffff0) {
      uVar15 = (undefined4)(local_98 >> 4);
    }
    else {
      uVar15 = 0x3fffffff;
    }
    param_1[0x2d] = uVar15;
    *(long *)(param_1 + 0x2a) = lVar9;
  }
  uVar16 = param_1[0x2c];
  if ((int)uVar2 < (int)uVar16) {
    lVar26 = *(long *)(param_1 + 0x2a);
    lVar9 = (long)(int)uVar16;
    lVar25 = lVar26 + lVar9 * 0x10;
    *(undefined4 *)(lVar25 + -8) = 0;
    if ((-1 < *(int *)(lVar25 + -4)) && (lVar12 = *(long *)(lVar25 + -0x10), lVar12 != 0)) {
      (**(code **)(*(long *)puVar7 + 0x18))(puVar7,lVar12,*(int *)(lVar25 + -4) << 2);
    }
    *(undefined8 *)(lVar25 + -0x10) = 0;
    *(undefined4 *)(lVar25 + -4) = 0x80000000;
    if ((long *)(lVar25 + -0x10) != (long *)(lVar26 + lVar20 * 0x10)) {
      plVar17 = (long *)(lVar9 * 0x10 + lVar26 + -0x20);
      lVar20 = lVar20 * 0x10 + lVar9 * -0x10 + 0x10;
      do {
        *(undefined4 *)(plVar17 + 1) = 0;
        if ((-1 < *(int *)((long)plVar17 + 0xc)) && (*plVar17 != 0)) {
          (**(code **)(*(long *)puVar7 + 0x18))(puVar7,*plVar17,*(int *)((long)plVar17 + 0xc) << 2);
        }
        *plVar17 = 0;
        lVar20 = lVar20 + 0x10;
        *(undefined4 *)((long)plVar17 + 0xc) = 0x80000000;
        plVar17 = plVar17 + -2;
      } while (lVar20 != 0);
    }
    uVar16 = param_1[0x2c];
  }
  if ((int)uVar2 <= (int)uVar16) {
    uVar16 = uVar2;
  }
  if ((*(long *)(param_1 + 0x2a) != lVar35) && (0 < (int)uVar16)) {
    uVar32 = (ulong)uVar16;
    puVar27 = (uint *)(*(long *)(param_1 + 0x2a) + 0xc);
    puVar30 = (uint *)(lVar35 + 8);
    do {
      uVar3 = *puVar30;
      pvVar29 = *(void **)(puVar30 + -2);
      pvVar13 = *(void **)(puVar27 + -3);
      if ((int)(*puVar27 & 0x3fffffff) < (int)uVar3) {
        pvVar13 = (void *)FUN_032bd1d4(puVar7,uVar3,4,pvVar13,puVar27[-1],puVar27);
        *(void **)(puVar27 + -3) = pvVar13;
      }
      memcpy(pvVar13,pvVar29,(long)(int)uVar3 << 2);
      uVar32 = uVar32 - 1;
      puVar27[-1] = uVar3;
      puVar27 = puVar27 + 4;
      puVar30 = puVar30 + 4;
    } while (uVar32 != 0);
  }
  if (0 < (int)(uVar2 - uVar16)) {
    iVar31 = 0;
    puVar24 = (undefined8 *)(*(long *)(param_1 + 0x2a) + (long)(int)uVar16 * 0x10);
    puVar36 = (undefined8 *)(lVar35 + (long)(int)uVar16 * 0x10);
    do {
      *puVar24 = 0;
      puVar24[1] = 0x8000000000000000;
      uVar3 = *(uint *)(puVar36 + 1);
      puVar34 = (undefined4 *)*puVar36;
      local_98 = CONCAT44(local_98._4_4_,uVar3);
      if ((int)uVar3 < 1) {
        *puVar24 = 0;
        puVar24[1] = 0x8000000000000000;
      }
      else {
        uVar32 = (ulong)(int)uVar3;
        local_90 = CONCAT44(local_90._4_4_,4);
        if ((uVar32 & 0x3fffffffe0000000) != 0) {
          local_78 = &DAT_0411b3a0;
          local_80 = 2;
          local_68 = &local_98;
          local_70 = &local_90;
          FUN_03320b50(0xc69ddef,
                       "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Memory/Allocator/hkMemoryAllocator.cpp"
                       ,0x30,"Memory allocation request overflow {}*{}",&local_80);
        }
        local_80 = -(uVar32 >> 0x1d & 1) & 0xffffffff00000000 | (uVar32 & 0x3fffffff) << 2;
        puVar10 = (undefined4 *)(**(code **)(*(long *)puVar7 + 0x10))(puVar7,local_80,&local_80);
        *puVar24 = puVar10;
        iVar19 = 0;
        if ((uint)local_90 != 0) {
          iVar19 = (int)local_80 / (int)(uint)local_90;
        }
        *(uint *)(puVar24 + 1) = uVar3;
        *(int *)((long)puVar24 + 0xc) = iVar19;
        uVar14 = uVar3 & 7;
        if (6 < uVar3 - 1) {
          iVar19 = uVar14 - uVar3;
          puVar11 = puVar10;
          do {
            *puVar11 = *puVar34;
            puVar11[1] = puVar34[1];
            puVar11[2] = puVar34[2];
            puVar11[3] = puVar34[3];
            puVar11[4] = puVar34[4];
            puVar11[5] = puVar34[5];
            puVar11[6] = puVar34[6];
            puVar1 = puVar34 + 7;
            puVar10 = puVar11 + 8;
            puVar34 = puVar34 + 8;
            iVar19 = iVar19 + 8;
            puVar11[7] = *puVar1;
            puVar11 = puVar10;
          } while (iVar19 != 0);
        }
        for (; uVar14 != 0; uVar14 = uVar14 - 1) {
          *puVar10 = *puVar34;
          puVar10 = puVar10 + 1;
          puVar34 = puVar34 + 1;
        }
      }
      iVar31 = iVar31 + 1;
      puVar24 = puVar24 + 2;
      puVar36 = puVar36 + 2;
    } while (iVar31 != uVar2 - uVar16);
  }
  param_1[0x2c] = uVar2;
  lVar20 = *(long *)(param_2 + 0x2e);
  uVar2 = param_2[0x30];
  uVar16 = param_1[0x31] & 0x3fffffff;
  if ((int)uVar16 < (int)uVar2) {
    lVar35 = *(long *)(param_1 + 0x2e);
    local_98 = (long)(int)uVar2 << 6;
    uVar3 = param_1[0x30];
    uVar32 = (ulong)uVar3;
    local_84 = 0x40;
    local_90 = CONCAT44(local_90._4_4_,uVar2);
    if ((int)uVar2 < 0) {
      local_70 = &local_90;
      local_80 = 2;
      local_78 = &DAT_0411b3a0;
      local_68 = (ulong *)&local_84;
      FUN_03320b50(0x1bd2a77e,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                   ,0x53,"Array size overflow {}*{}",&local_80);
      uVar14 = (uint)local_90;
      if ((int)uVar16 <= (int)(uint)local_90) goto LAB_0324e76c;
LAB_0324e778:
      local_80 = 1;
      local_70 = &local_90;
      local_78 = &DAT_0411b3b8;
      FUN_03320b50(0x65816502,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                   ,0x5a,"Invalid requestedCapacity {}",&local_80);
    }
    else {
      uVar14 = uVar2;
      if ((int)uVar2 < (int)uVar16) goto LAB_0324e778;
LAB_0324e76c:
      if (0x3fffffff < (int)uVar14) goto LAB_0324e778;
    }
    uVar16 = param_1[0x31];
    lVar25 = (**(code **)(*(long *)puVar7 + 0x10))(puVar7,local_98,&local_98);
    if (0 < (int)uVar3) {
      piVar18 = (int *)(lVar35 + 0x3c);
      piVar28 = (int *)(lVar25 + 0x3c);
      uVar33 = uVar32;
      do {
        *(undefined8 *)(piVar28 + -0xd) = *(undefined8 *)(piVar18 + -0xd);
        *(undefined8 *)(piVar28 + -0xf) = *(undefined8 *)(piVar18 + -0xf);
        uVar21 = *(undefined8 *)(piVar18 + -9);
        *(undefined8 *)(piVar28 + -5) = *(undefined8 *)(piVar18 + -5);
        uVar22 = *(undefined8 *)(piVar18 + -0xb);
        *(undefined8 *)(piVar28 + -7) = *(undefined8 *)(piVar18 + -7);
        *(undefined8 *)(piVar28 + -9) = uVar21;
        *(undefined8 *)(piVar28 + -0xb) = uVar22;
        piVar28[-3] = 0;
        piVar28[-2] = 0;
        piVar28[-1] = 0;
        piVar28[0] = -0x80000000;
        if (*piVar18 < 0) {
          local_84 = 4;
          puVar23 = (ulong *)(piVar18 + -1);
          iVar31 = (int)*puVar23;
          local_90 = (long)iVar31 << 2;
          if (iVar31 < 0) {
            local_80 = 2;
            local_78 = &DAT_0411b3a0;
            local_70 = puVar23;
            local_68 = (ulong *)&local_84;
            FUN_03320b50(0x77a36e5f,
                         "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                         ,0x27,"Array size overflow {}*{}",&local_80);
            iVar31 = (int)*puVar23;
          }
          if (iVar31 == 0) {
            *piVar18 = 0;
            piVar18[-3] = 0;
            piVar18[-2] = 0;
          }
          else {
            pvVar13 = (void *)(**(code **)(*(long *)puVar7 + 0x10))(puVar7,local_90,&local_90);
            if (pvVar13 != (void *)0x0) {
              local_d0 = local_90 >> 2;
              if (0x3ffffffe < local_d0) {
                local_d0 = 0x3fffffff;
              }
              memcpy(pvVar13,*(void **)(piVar18 + -3),local_90);
              *(void **)(piVar18 + -3) = pvVar13;
              *piVar18 = (int)local_d0;
            }
          }
        }
        *(undefined8 *)(piVar28 + -3) = *(undefined8 *)(piVar18 + -3);
        piVar28[-1] = piVar18[-1];
        *piVar28 = *piVar18;
        uVar33 = uVar33 - 1;
        piVar18[-3] = 0;
        piVar18[-2] = 0;
        piVar18[-1] = 0;
        piVar18[0] = 0;
        piVar18 = piVar18 + 0x10;
        piVar28 = piVar28 + 0x10;
      } while (uVar33 != 0);
      piVar18 = (int *)(lVar35 + 0x3c);
      do {
        piVar18[-1] = 0;
        if ((-1 < *piVar18) && (*(long *)(piVar18 + -3) != 0)) {
          (**(code **)(*(long *)puVar7 + 0x18))(puVar7,*(long *)(piVar18 + -3),*piVar18 << 2);
        }
        piVar18[-3] = 0;
        piVar18[-2] = 0;
        uVar32 = uVar32 - 1;
        *piVar18 = -0x80000000;
        piVar18 = piVar18 + 0x10;
      } while (uVar32 != 0);
    }
    if (-1 < (int)uVar16) {
      (**(code **)(*(long *)puVar7 + 0x18))(puVar7,lVar35,((ulong)uVar16 & 0x3fffffff) << 6);
    }
    if (local_98 < 0xfffffffc0) {
      uVar15 = (undefined4)(local_98 >> 6);
    }
    else {
      uVar15 = 0x3fffffff;
    }
    param_1[0x31] = uVar15;
    *(long *)(param_1 + 0x2e) = lVar25;
  }
  uVar16 = param_1[0x30];
  if ((int)uVar2 < (int)uVar16) {
    puVar34 = (undefined4 *)(*(long *)(param_1 + 0x2e) + (long)(int)uVar16 * 0x40 + -8);
    lVar35 = (long)(int)uVar2 * 0x40 + (long)(int)uVar16 * -0x40;
    do {
      *puVar34 = 0;
      if ((-1 < (int)puVar34[1]) && (*(long *)(puVar34 + -2) != 0)) {
        (**(code **)(*(long *)puVar7 + 0x18))(puVar7,*(long *)(puVar34 + -2),puVar34[1] << 2);
      }
      *(undefined8 *)(puVar34 + -2) = 0;
      lVar35 = lVar35 + 0x40;
      puVar34[1] = 0x80000000;
      puVar34 = puVar34 + -0x10;
    } while (lVar35 != 0);
    uVar16 = param_1[0x30];
  }
  lVar35 = *(long *)(param_1 + 0x2e);
  if ((int)uVar2 <= (int)uVar16) {
    uVar16 = uVar2;
  }
  if ((lVar35 != lVar20) && (0 < (int)uVar16)) {
    lVar25 = 0;
    uVar32 = (ulong)uVar16;
    do {
      puVar34 = (undefined4 *)(lVar20 + lVar25);
      puVar10 = (undefined4 *)(lVar35 + lVar25);
      *puVar10 = *puVar34;
      uVar21 = *(undefined8 *)(puVar34 + 4);
      *(undefined8 *)(puVar10 + 6) = *(undefined8 *)(puVar34 + 6);
      *(undefined8 *)(puVar10 + 4) = uVar21;
      uVar21 = *(undefined8 *)(puVar34 + 8);
      *(undefined8 *)(puVar10 + 10) = *(undefined8 *)(puVar34 + 10);
      *(undefined8 *)(puVar10 + 8) = uVar21;
      iVar31 = puVar34[0xe];
      pvVar29 = *(void **)(puVar34 + 0xc);
      pvVar13 = *(void **)(puVar10 + 0xc);
      if ((int)(puVar10[0xf] & 0x3fffffff) < iVar31) {
        pvVar13 = (void *)FUN_032bd1d4(puVar7,iVar31,4,pvVar13,puVar10[0xe]);
        *(void **)(puVar10 + 0xc) = pvVar13;
      }
      memcpy(pvVar13,pvVar29,(long)iVar31 << 2);
      uVar32 = uVar32 - 1;
      lVar25 = lVar25 + 0x40;
      puVar10[0xe] = iVar31;
    } while (uVar32 != 0);
  }
  if (0 < (int)(uVar2 - uVar16)) {
    puVar24 = (undefined8 *)(lVar20 + (long)(int)uVar16 * 0x40);
    iVar31 = 0;
    puVar36 = (undefined8 *)(*(long *)(param_1 + 0x2e) + (long)(int)uVar16 * 0x40);
    do {
      uVar21 = puVar24[5];
      puVar36[3] = puVar24[3];
      puVar36[5] = uVar21;
      puVar36[1] = puVar24[1];
      *puVar36 = *puVar24;
      uVar21 = puVar24[2];
      puVar36[4] = puVar24[4];
      puVar36[2] = uVar21;
      puVar36[6] = 0;
      puVar36[7] = 0x8000000000000000;
      uVar3 = *(uint *)(puVar24 + 7);
      puVar34 = (undefined4 *)puVar24[6];
      puVar24 = puVar24 + 8;
      local_98 = CONCAT44(local_98._4_4_,uVar3);
      if ((int)uVar3 < 1) {
        puVar36[6] = 0;
        puVar36[7] = 0x8000000000000000;
      }
      else {
        uVar32 = (ulong)(int)uVar3;
        local_90 = CONCAT44(local_90._4_4_,4);
        if ((uVar32 & 0x3fffffffe0000000) != 0) {
          local_78 = &DAT_0411b3a0;
          local_80 = 2;
          local_68 = &local_98;
          local_70 = &local_90;
          FUN_03320b50(0xc69ddef,
                       "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Memory/Allocator/hkMemoryAllocator.cpp"
                       ,0x30,"Memory allocation request overflow {}*{}",&local_80);
        }
        local_80 = -(uVar32 >> 0x1d & 1) & 0xffffffff00000000 | (uVar32 & 0x3fffffff) << 2;
        puVar10 = (undefined4 *)(**(code **)(*(long *)puVar7 + 0x10))(puVar7,local_80,&local_80);
        puVar36[6] = puVar10;
        iVar19 = 0;
        if ((uint)local_90 != 0) {
          iVar19 = (int)local_80 / (int)(uint)local_90;
        }
        *(uint *)(puVar36 + 7) = uVar3;
        *(int *)((long)puVar36 + 0x3c) = iVar19;
        uVar14 = uVar3 & 7;
        if (6 < uVar3 - 1) {
          iVar19 = uVar14 - uVar3;
          puVar11 = puVar10;
          do {
            *puVar11 = *puVar34;
            puVar11[1] = puVar34[1];
            puVar11[2] = puVar34[2];
            puVar11[3] = puVar34[3];
            puVar11[4] = puVar34[4];
            puVar11[5] = puVar34[5];
            puVar11[6] = puVar34[6];
            puVar1 = puVar34 + 7;
            puVar10 = puVar11 + 8;
            puVar34 = puVar34 + 8;
            iVar19 = iVar19 + 8;
            puVar11[7] = *puVar1;
            puVar11 = puVar10;
          } while (iVar19 != 0);
        }
        for (; uVar14 != 0; uVar14 = uVar14 - 1) {
          *puVar10 = *puVar34;
          puVar10 = puVar10 + 1;
          puVar34 = puVar34 + 1;
        }
      }
      iVar31 = iVar31 + 1;
      puVar36 = puVar36 + 8;
    } while (iVar31 != uVar2 - uVar16);
  }
  param_1[0x30] = uVar2;
LAB_0324ed4c:
  uVar4 = *(undefined2 *)(param_2 + 0x32);
  *(undefined1 *)((long)param_1 + 0xca) = *(undefined1 *)((long)param_2 + 0xca);
  *(undefined2 *)(param_1 + 0x32) = uVar4;
  return;
}


