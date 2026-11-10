/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0337a6e0; name: FUN_0337a6e0
 */


void FUN_0337a6e0(long *param_1,uint *param_2)

{
  ulong *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  undefined *puVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  int *piVar12;
  ulong uVar13;
  int *piVar14;
  ulong uVar15;
  long lVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  long lVar19;
  ulong *puVar20;
  long lVar21;
  long *plVar22;
  uint *puVar23;
  undefined8 *puVar24;
  
  lVar11 = (long)(int)param_1[1] + -1;
  uVar2 = param_2[1];
  lVar16 = (long)(int)uVar2;
  if (uVar2 != (uint)lVar11) {
    lVar11 = FUN_0337a5dc(param_1,*param_1 + lVar11 * 0x28);
    *(uint *)(lVar11 + 4) = uVar2;
  }
  puVar8 = PTR_PTR_0434a080;
  lVar19 = *param_1;
  lVar21 = lVar19 + lVar16 * 0x28;
  plVar22 = (long *)(lVar21 + 0x18);
  lVar11 = *plVar22;
  piVar12 = (int *)(lVar21 + 0x20);
  iVar4 = *piVar12;
  if (iVar4 != 0) {
    lVar21 = lVar11 + (long)iVar4 * 0x18;
    do {
      while( true ) {
        puVar20 = (ulong *)(lVar21 + -8);
        lVar21 = lVar21 + -0x18;
        if ((*puVar20 & 1) != 0) break;
LAB_0337a770:
        if (lVar21 == lVar11) goto LAB_0337a778;
      }
      plVar9 = (long *)(*puVar20 & 0xfffffffffffffffe);
      plVar10 = plVar9 + 1;
      do {
        lVar7 = *plVar10;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar6) {
          *(int *)plVar10 = (int)lVar7 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if ((plVar9 == (long *)0x0) || ((int)lVar7 != 1)) goto LAB_0337a770;
      (**(code **)(*plVar9 + 8))();
    } while (lVar21 != lVar11);
  }
LAB_0337a778:
  *piVar12 = 0;
  puVar23 = (uint *)(lVar19 + lVar16 * 0x28 + 0x24);
  uVar3 = *puVar23;
  if ((-1 < (int)uVar3) && (*plVar22 != 0)) {
    (**(code **)(*(long *)puVar8 + 0x18))(puVar8,*plVar22,((ulong)uVar3 & 0x3fffffff) * 0x18);
  }
  *plVar22 = 0;
  *puVar23 = 0x80000000;
  uVar13 = *(ulong *)(lVar19 + lVar16 * 0x28 + 0x10);
  if ((uVar13 & 1) != 0) {
    plVar10 = (long *)(uVar13 & 0xfffffffffffffffe);
    plVar22 = plVar10 + 1;
    do {
      lVar11 = *plVar22;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar6) {
        *(int *)plVar22 = (int)lVar11 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if ((plVar10 != (long *)0x0) && ((int)lVar11 == 1)) {
      (**(code **)(*plVar10 + 8))();
    }
  }
  lVar11 = (long)(int)param_1[1] + -1;
  *(uint *)(param_1 + 1) = (uint)lVar11;
  if ((uint)lVar11 != uVar2) {
    lVar19 = *param_1;
    puVar18 = (undefined8 *)(lVar19 + lVar11 * 0x28);
    puVar24 = (undefined8 *)(lVar19 + lVar16 * 0x28);
    *puVar24 = *puVar18;
    puVar24[1] = puVar18[1];
    puVar20 = puVar18 + 2;
    puVar24[2] = *puVar20;
    *puVar20 = 0;
    *puVar18 = 0;
    puVar18[1] = 0;
    puVar24[3] = 0;
    piVar12 = (int *)(puVar24 + 4);
    piVar12[0] = 0;
    piVar12[1] = -0x80000000;
    puVar23 = (uint *)((long)puVar18 + 0x24);
    puVar17 = puVar18 + 3;
    if ((int)*puVar23 < 0) {
      FUN_0337aab4(puVar8,puVar17);
    }
    puVar24[3] = *puVar17;
    lVar19 = lVar19 + lVar11 * 0x28;
    piVar14 = (int *)(lVar19 + 0x20);
    *piVar12 = *piVar14;
    *(uint *)((long)puVar24 + 0x24) = *puVar23;
    *puVar17 = 0;
    puVar18[4] = 0;
    plVar22 = (long *)(lVar19 + 0x18);
    lVar11 = *plVar22;
    if (*piVar14 != 0) {
      lVar16 = lVar11 + (long)*piVar14 * 0x18;
      do {
        while( true ) {
          puVar1 = (ulong *)(lVar16 + -8);
          lVar16 = lVar16 + -0x18;
          if ((*puVar1 & 1) != 0) break;
LAB_0337a898:
          if (lVar16 == lVar11) goto LAB_0337a8a0;
        }
        plVar9 = (long *)(*puVar1 & 0xfffffffffffffffe);
        plVar10 = plVar9 + 1;
        do {
          lVar19 = *plVar10;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar6) {
            *(int *)plVar10 = (int)lVar19 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if ((plVar9 == (long *)0x0) || ((int)lVar19 != 1)) goto LAB_0337a898;
        (**(code **)(*plVar9 + 8))();
      } while (lVar16 != lVar11);
    }
LAB_0337a8a0:
    *piVar14 = 0;
    if ((-1 < (int)*puVar23) && (*plVar22 != 0)) {
      (**(code **)(*(long *)puVar8 + 0x18))(puVar8,*plVar22,((ulong)*puVar23 & 0x3fffffff) * 0x18);
    }
    *plVar22 = 0;
    *puVar23 = 0x80000000;
    if ((*puVar20 & 1) != 0) {
      plVar10 = (long *)(*puVar20 & 0xfffffffffffffffe);
      plVar22 = plVar10 + 1;
      do {
        lVar11 = *plVar22;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar22,0x10);
        if (bVar6) {
          *(int *)plVar22 = (int)lVar11 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if ((plVar10 != (long *)0x0) && ((int)lVar11 == 1)) {
        (**(code **)(*plVar10 + 8))();
      }
    }
  }
  lVar11 = param_1[2];
  uVar13 = (ulong)(int)param_1[3];
  uVar15 = ((long)param_2 - lVar11 >> 3) + 1U & uVar13;
  while (puVar23 = (uint *)(lVar11 + uVar15 * 8), -1 < (int)puVar23[1]) {
    lVar16 = lVar11 + ((ulong)*puVar23 & uVar13 & 0xffffffff) * 8;
    uVar15 = (ulong)(int)uVar13;
    if ((uVar15 & (long)param_2 - lVar16 >> 3) < (uVar15 & (long)puVar23 - lVar16 >> 3)) {
      *(undefined8 *)param_2 = *(undefined8 *)puVar23;
      uVar13 = (ulong)*(uint *)(param_1 + 3);
      lVar11 = param_1[2];
      uVar15 = (ulong)(int)*(uint *)(param_1 + 3);
      param_2 = puVar23;
    }
    uVar15 = ((ulong)((long)puVar23 - lVar11) >> 3) + 1 & uVar15;
  }
  param_2[1] = 0xffffffff;
  return;
}


