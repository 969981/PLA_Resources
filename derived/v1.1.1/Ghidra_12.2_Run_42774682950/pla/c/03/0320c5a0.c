/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0320c5a0; name: FUN_0320c5a0
 */


short FUN_0320c5a0(long param_1,long param_2,short param_3)

{
  short *psVar1;
  uint uVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  char cVar6;
  bool bVar7;
  short sVar8;
  short sVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  undefined8 uVar13;
  uint uVar14;
  uint uVar15;
  long lVar16;
  ulong uVar17;
  int iVar18;
  long lVar19;
  long *plVar20;
  long *plVar21;
  
  lVar12 = tpidr_el0;
  lVar16 = *(long *)(lVar12 + 0x38d490);
  if (lVar16 == 0) {
    lVar16 = FUN_0333d16c(0,1);
    *(long *)(lVar12 + 0x38d490) = lVar16;
    lVar19 = *(long *)(lVar16 + 0x10);
  }
  else {
    lVar19 = *(long *)(lVar16 + 0x10);
  }
  if (lVar19 != 0) {
    puVar4 = *(undefined8 **)(lVar19 + 8);
    uVar17 = (long)puVar4 + 0x17U & 0xfffffffffffffff8;
    if ((uVar17 <= *(ulong *)(lVar19 + 0x10)) &&
       (*(ulong *)(lVar19 + 8) = uVar17, puVar4 != (undefined8 *)0x0)) {
      *puVar4 = "TthkaiNavMeshClearanceCacheFillingTasks::addTasks";
      uVar13 = nn::os::GetSystemTick();
      puVar4[1] = uVar13;
      lVar16 = *(long *)(lVar12 + 0x38d490);
    }
  }
  if (lVar16 == 0) {
    lVar16 = FUN_0333d16c(0,1);
    *(long *)(lVar12 + 0x38d490) = lVar16;
  }
  plVar10 = *(long **)(*(long *)(lVar16 + 8) + 0x58);
  plVar10 = (long *)(**(code **)(*plVar10 + 0x10))(plVar10,0x30,0);
  plVar10[1] = 0xffffffff;
  plVar20 = plVar10 + 2;
  *plVar20 = 1;
  *plVar10 = (long)&PTR_LAB_042f21f8;
  plVar10[4] = (long)&PTR_LAB_042f2240;
  plVar10[5] = param_2;
  if ((param_2 != 0) && (*(long *)(param_2 + 8) != 0)) {
    plVar11 = (long *)(param_2 + 0x10);
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar7) {
        *plVar11 = *plVar11 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  sVar8 = FUN_0333b6e8(param_1,plVar10,0x40);
  if ((param_3 != -1) && (sVar8 != -1)) {
    uVar15 = *(uint *)(param_1 + 0x334);
    iVar18 = *(int *)(param_1 + 0x330);
    uVar2 = iVar18 + 1;
    if (iVar18 < (int)(uVar15 & 0x3fffffff)) {
      lVar16 = *(long *)(param_1 + 0x328);
    }
    else {
      uVar13 = *(undefined8 *)(param_1 + 0x328);
      if (0x3ffffffe < iVar18) {
        FUN_032bd0a8(uVar2);
        uVar15 = *(uint *)(param_1 + 0x334);
      }
      uVar15 = (uVar15 & 0x3fffffff) << 1;
      if (0x3ffffffe < uVar15) {
        uVar15 = 0x3fffffff;
      }
      uVar14 = uVar2;
      if ((int)uVar2 <= (int)uVar15) {
        uVar14 = uVar15;
      }
      lVar16 = FUN_032bd1d4(PTR_PTR_0434a080,uVar14,4,uVar13,iVar18);
      iVar18 = *(int *)(param_1 + 0x330);
      *(long *)(param_1 + 0x328) = lVar16;
    }
    psVar1 = (short *)(lVar16 + (long)iVar18 * 4);
    *(uint *)(param_1 + 0x330) = uVar2;
    *psVar1 = param_3;
    psVar1[1] = sVar8;
  }
  lVar16 = *(long *)(lVar12 + 0x38d490);
  if (lVar16 == 0) {
    lVar16 = FUN_0333d16c(0,1);
    *(long *)(lVar12 + 0x38d490) = lVar16;
  }
  plVar11 = *(long **)(*(long *)(lVar16 + 8) + 0x58);
  plVar11 = (long *)(**(code **)(*plVar11 + 0x10))(plVar11,0x920,0);
  uVar5 = *(undefined4 *)(param_2 + 0x18);
  plVar11[1] = 0xffffffff;
  plVar21 = plVar11 + 2;
  *plVar21 = 1;
  plVar11[0x99] = -0x7fffffef00000000;
  *(undefined4 *)(plVar11 + 0x122) = uVar5;
  plVar11[0xe] = (long)(plVar11 + 0x10);
  plVar11[0xf] = -0x7fffffef00000000;
  *plVar11 = (long)&PTR_LAB_042f2288;
  plVar11[0x98] = (long)(plVar11 + 0x9a);
  plVar11[4] = (long)&PTR_LAB_042f22d0;
  plVar11[0x123] = param_2;
  if ((param_2 != 0) && (*(long *)(param_2 + 8) != 0)) {
    plVar3 = (long *)(param_2 + 0x10);
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar7) {
        *plVar3 = *plVar3 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  sVar9 = FUN_0333b858(param_1,plVar11,*(undefined4 *)(param_2 + 0x18),1,0x40);
  uVar15 = *(uint *)(param_1 + 0x334);
  iVar18 = *(int *)(param_1 + 0x330);
  uVar2 = iVar18 + 1;
  if (iVar18 < (int)(uVar15 & 0x3fffffff)) {
    lVar12 = *(long *)(param_1 + 0x328);
  }
  else {
    uVar13 = *(undefined8 *)(param_1 + 0x328);
    if (0x3ffffffe < iVar18) {
      FUN_032bd0a8(uVar2);
      uVar15 = *(uint *)(param_1 + 0x334);
    }
    uVar15 = (uVar15 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar15) {
      uVar15 = 0x3fffffff;
    }
    uVar14 = uVar2;
    if ((int)uVar2 <= (int)uVar15) {
      uVar14 = uVar15;
    }
    lVar12 = FUN_032bd1d4(PTR_PTR_0434a080,uVar14,4,uVar13,iVar18);
    iVar18 = *(int *)(param_1 + 0x330);
    *(long *)(param_1 + 0x328) = lVar12;
  }
  psVar1 = (short *)(lVar12 + (long)iVar18 * 4);
  *(uint *)(param_1 + 0x330) = uVar2;
  *psVar1 = sVar8;
  psVar1[1] = sVar9;
  *(long **)(param_2 + 0x78) = plVar11;
  if ((plVar11 != (long *)0x0) && (plVar11[1] != 0)) {
    do {
      lVar12 = *plVar21;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar7) {
        *plVar21 = lVar12 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar12 + -1 == 0) {
      (**(code **)(*plVar11 + 0x18))(plVar11);
    }
  }
  if ((plVar10 != (long *)0x0) && (plVar10[1] != 0)) {
    do {
      lVar12 = *plVar20;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar7) {
        *plVar20 = lVar12 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar12 + -1 == 0) {
      (**(code **)(*plVar10 + 0x18))(plVar10);
    }
  }
  if (lVar19 != 0) {
    puVar4 = *(undefined8 **)(lVar19 + 8);
    uVar17 = (long)puVar4 + 0x17U & 0xfffffffffffffff8;
    if ((uVar17 <= *(ulong *)(lVar19 + 0x10)) &&
       (*(ulong *)(lVar19 + 8) = uVar17, puVar4 != (undefined8 *)0x0)) {
      *puVar4 = &DAT_0390f40e;
      uVar13 = nn::os::GetSystemTick();
      puVar4[1] = uVar13;
    }
  }
  return sVar9;
}


