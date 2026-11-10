/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031e5598; name: FUN_031e5598
 */


void FUN_031e5598(long *param_1,uint *param_2)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  uint *puVar13;
  undefined8 *puVar14;
  long lVar15;
  long lVar16;
  undefined4 *puVar17;
  long *plVar18;
  int *piVar19;
  undefined4 *puVar20;
  int *piVar21;
  long lVar22;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined *puStack_78;
  undefined4 *local_70;
  undefined4 *puStack_68;
  
  lVar9 = (long)(int)param_1[1] + -1;
  uVar2 = param_2[1];
  lVar15 = (long)(int)uVar2;
  if (uVar2 != (uint)lVar9) {
    lVar9 = FUN_031e5518(param_1,*param_1 + lVar9 * 0x28);
    *(uint *)(lVar9 + 4) = uVar2;
  }
  lVar16 = *param_1;
  plVar18 = (long *)(lVar16 + lVar15 * 0x28 + 0x18);
  lVar9 = *plVar18;
  if ((lVar9 != 0) && (*(int *)(lVar9 + 4) != -2)) {
    piVar19 = (int *)(lVar16 + lVar15 * 0x28 + 0x20);
    uVar11 = (long)*piVar19 + 1;
    lVar22 = tpidr_el0;
    lVar10 = *(long *)(lVar22 + 0x38d490);
    if (lVar10 == 0) {
      lVar10 = FUN_0333d16c(0,1);
      *(long *)(lVar22 + 0x38d490) = lVar10;
    }
    plVar8 = *(long **)(*(long *)(lVar10 + 8) + 0x58);
    local_88 = (undefined4)uVar11;
    uStack_84 = 8;
    if ((uVar11 & 0x1ffffffff0000000) != 0) {
      local_80 = 2;
      puStack_78 = &DAT_0411b3a0;
      local_70 = &uStack_84;
      puStack_68 = &local_88;
      FUN_03320b50(0x39ec3d88,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Memory/Allocator/hkMemoryAllocator.cpp"
                   ,0x61,"Memory allocation request overflow {}*{}",&local_80);
    }
    (**(code **)(*plVar8 + 0x18))
              (plVar8,lVar9,-(uVar11 >> 0x1c & 1) & 0xffffffff00000000 | uVar11 * 8 & 0xfffffff8);
    *plVar18 = (long)&DAT_03aad864;
    *piVar19 = 0;
  }
  puVar7 = PTR_PTR_0434a080;
  lVar9 = lVar16 + lVar15 * 0x28;
  plVar18 = (long *)(lVar9 + 8);
  lVar22 = *plVar18;
  piVar19 = (int *)(lVar9 + 0x10);
  iVar4 = *piVar19;
  if (iVar4 != 0) {
    lVar9 = lVar22 + (long)iVar4 * 0x10;
    do {
      plVar8 = *(long **)(lVar9 + -8);
      lVar9 = lVar9 + -0x10;
      if ((plVar8 != (long *)0x0) && (plVar8[1] != 0)) {
        plVar1 = plVar8 + 2;
        do {
          lVar10 = *plVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *plVar1 = lVar10 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar10 + -1 == 0) {
          (**(code **)(*plVar8 + 0x18))();
        }
      }
    } while (lVar9 != lVar22);
  }
  *piVar19 = 0;
  puVar13 = (uint *)(lVar16 + lVar15 * 0x28 + 0x14);
  uVar3 = *puVar13;
  if ((-1 < (int)uVar3) && (*plVar18 != 0)) {
    (**(code **)(*(long *)puVar7 + 0x18))(puVar7,*plVar18,((ulong)uVar3 & 0x3fffffff) << 4);
  }
  *plVar18 = 0;
  *puVar13 = 0x80000000;
  lVar9 = (long)(int)param_1[1] + -1;
  *(uint *)(param_1 + 1) = (uint)lVar9;
  if ((uint)lVar9 != uVar2) {
    lVar16 = *param_1;
    puVar17 = (undefined4 *)(lVar16 + lVar9 * 0x28);
    puVar20 = (undefined4 *)(lVar16 + lVar15 * 0x28);
    piVar19 = puVar20 + 4;
    *puVar20 = *puVar17;
    *(undefined8 *)(puVar20 + 2) = 0;
    piVar19[0] = 0;
    piVar19[1] = -0x80000000;
    puVar13 = puVar17 + 5;
    puVar14 = (undefined8 *)(puVar17 + 2);
    if ((int)*puVar13 < 0) {
      FUN_031cf070(puVar7,puVar14);
    }
    *(undefined8 *)(puVar20 + 2) = *puVar14;
    lVar9 = lVar16 + lVar9 * 0x28;
    lVar16 = lVar16 + lVar15 * 0x28;
    piVar21 = (int *)(lVar9 + 0x10);
    *piVar19 = *piVar21;
    puVar20[5] = *puVar13;
    *puVar14 = 0;
    *(undefined8 *)(puVar17 + 4) = 0;
    *(undefined8 *)(lVar16 + 0x18) = *(undefined8 *)(lVar9 + 0x18);
    *(undefined4 *)(lVar16 + 0x20) = *(undefined4 *)(lVar9 + 0x20);
    *(undefined **)(lVar9 + 0x18) = &DAT_03aad864;
    *(undefined4 *)(lVar9 + 0x20) = 0;
    plVar18 = (long *)(lVar9 + 8);
    lVar9 = *plVar18;
    if (*piVar21 != 0) {
      lVar15 = lVar9 + (long)*piVar21 * 0x10;
      do {
        plVar8 = *(long **)(lVar15 + -8);
        lVar15 = lVar15 + -0x10;
        if ((plVar8 != (long *)0x0) && (plVar8[1] != 0)) {
          plVar1 = plVar8 + 2;
          do {
            lVar16 = *plVar1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar6) {
              *plVar1 = lVar16 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar16 + -1 == 0) {
            (**(code **)(*plVar8 + 0x18))();
          }
        }
      } while (lVar15 != lVar9);
    }
    *piVar21 = 0;
    if ((-1 < (int)*puVar13) && (*plVar18 != 0)) {
      (**(code **)(*(long *)puVar7 + 0x18))(puVar7,*plVar18,((ulong)*puVar13 & 0x3fffffff) << 4);
    }
    *plVar18 = 0;
    *puVar13 = 0x80000000;
  }
  lVar9 = param_1[2];
  uVar11 = (ulong)(int)param_1[3];
  uVar12 = ((long)param_2 - lVar9 >> 3) + 1U & uVar11;
  while (puVar13 = (uint *)(lVar9 + uVar12 * 8), -1 < (int)puVar13[1]) {
    lVar15 = lVar9 + ((ulong)*puVar13 & uVar11 & 0xffffffff) * 8;
    uVar12 = (ulong)(int)uVar11;
    if ((uVar12 & (long)param_2 - lVar15 >> 3) < (uVar12 & (long)puVar13 - lVar15 >> 3)) {
      *(undefined8 *)param_2 = *(undefined8 *)puVar13;
      uVar11 = (ulong)*(uint *)(param_1 + 3);
      lVar9 = param_1[2];
      uVar12 = (ulong)(int)*(uint *)(param_1 + 3);
      param_2 = puVar13;
    }
    uVar12 = ((ulong)((long)puVar13 - lVar9) >> 3) + 1 & uVar12;
  }
  param_2[1] = 0xffffffff;
  return;
}


