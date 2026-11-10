/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031ff830; name: FUN_031ff830
 */


short FUN_031ff830(long param_1,long param_2,short param_3)

{
  short *psVar1;
  uint uVar2;
  long *plVar3;
  undefined8 *puVar4;
  char cVar5;
  bool bVar6;
  short sVar7;
  long *plVar8;
  undefined8 uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long *plVar17;
  
  lVar15 = tpidr_el0;
  if (*(long *)(lVar15 + 0x38d490) == 0) {
    lVar16 = FUN_0333d16c(0,1);
    *(long *)(lVar15 + 0x38d490) = lVar16;
    lVar16 = *(long *)(lVar16 + 0x10);
  }
  else {
    lVar16 = *(long *)(*(long *)(lVar15 + 0x38d490) + 0x10);
  }
  if (lVar16 != 0) {
    puVar4 = *(undefined8 **)(lVar16 + 8);
    uVar13 = (long)puVar4 + 0x17U & 0xfffffffffffffff8;
    if ((uVar13 <= *(ulong *)(lVar16 + 0x10)) &&
       (*(ulong *)(lVar16 + 8) = uVar13, puVar4 != (undefined8 *)0x0)) {
      *puVar4 = "TthkaiUpdateNavDataTasks::addPhase1Tasks";
      uVar9 = nn::os::GetSystemTick();
      puVar4[1] = uVar9;
    }
  }
  if (*(long *)(param_2 + 0x30) != 0) {
    lVar14 = *(long *)(lVar15 + 0x38d490);
    if (lVar14 == 0) {
      lVar14 = FUN_0333d16c(0,1);
      *(long *)(lVar15 + 0x38d490) = lVar14;
    }
    plVar8 = *(long **)(*(long *)(lVar14 + 8) + 0x58);
    plVar8 = (long *)(**(code **)(*plVar8 + 0x10))(plVar8,0x30,0);
    plVar8[1] = 0xffffffff;
    plVar17 = plVar8 + 2;
    *plVar17 = 1;
    *plVar8 = (long)&PTR_LAB_042f1348;
    plVar8[4] = (long)&PTR_LAB_042f1390;
    plVar8[5] = param_2;
    if (*(long *)(param_2 + 8) != 0) {
      plVar3 = (long *)(param_2 + 0x10);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar6) {
          *plVar3 = *plVar3 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    sVar7 = FUN_0333b6e8(param_1,plVar8,0x40);
    if ((param_3 != -1) && (sVar7 != -1)) {
      uVar12 = *(uint *)(param_1 + 0x334);
      iVar11 = *(int *)(param_1 + 0x330);
      uVar2 = iVar11 + 1;
      if (iVar11 < (int)(uVar12 & 0x3fffffff)) {
        lVar14 = *(long *)(param_1 + 0x328);
      }
      else {
        uVar9 = *(undefined8 *)(param_1 + 0x328);
        if (0x3ffffffe < iVar11) {
          FUN_032bd0a8(uVar2);
          uVar12 = *(uint *)(param_1 + 0x334);
        }
        uVar12 = (uVar12 & 0x3fffffff) << 1;
        if (0x3ffffffe < uVar12) {
          uVar12 = 0x3fffffff;
        }
        uVar10 = uVar2;
        if ((int)uVar2 <= (int)uVar12) {
          uVar10 = uVar12;
        }
        lVar14 = FUN_032bd1d4(PTR_PTR_0434a080,uVar10,4,uVar9,iVar11,(uint *)(param_1 + 0x334));
        *(long *)(param_1 + 0x328) = lVar14;
        iVar11 = *(int *)(param_1 + 0x330);
      }
      psVar1 = (short *)(lVar14 + (long)iVar11 * 4);
      *(uint *)(param_1 + 0x330) = uVar2;
      *psVar1 = param_3;
      psVar1[1] = sVar7;
    }
    param_3 = sVar7;
    if ((plVar8 != (long *)0x0) && (plVar8[1] != 0)) {
      do {
        lVar14 = *plVar17;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar6) {
          *plVar17 = lVar14 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar14 + -1 == 0) {
        (**(code **)(*plVar8 + 0x18))(plVar8);
      }
    }
  }
  lVar14 = *(long *)(lVar15 + 0x38d490);
  if (lVar14 == 0) {
    lVar14 = FUN_0333d16c(0,1);
    *(long *)(lVar15 + 0x38d490) = lVar14;
  }
  plVar8 = *(long **)(*(long *)(lVar14 + 8) + 0x58);
  plVar8 = (long *)(**(code **)(*plVar8 + 0x10))(plVar8,0x30,0);
  plVar8[1] = 0xffffffff;
  plVar17 = plVar8 + 2;
  *plVar17 = 1;
  *plVar8 = (long)&PTR_LAB_042f13f0;
  plVar8[4] = (long)&PTR_LAB_042f1438;
  plVar8[5] = param_2;
  if (*(long *)(param_2 + 8) != 0) {
    plVar3 = (long *)(param_2 + 0x10);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar6) {
        *plVar3 = *plVar3 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  sVar7 = FUN_0333b6e8(param_1,plVar8,0x40);
  if ((param_3 != -1) && (sVar7 != -1)) {
    uVar12 = *(uint *)(param_1 + 0x334);
    iVar11 = *(int *)(param_1 + 0x330);
    uVar2 = iVar11 + 1;
    if (iVar11 < (int)(uVar12 & 0x3fffffff)) {
      lVar15 = *(long *)(param_1 + 0x328);
    }
    else {
      uVar9 = *(undefined8 *)(param_1 + 0x328);
      if (0x3ffffffe < iVar11) {
        FUN_032bd0a8(uVar2);
        uVar12 = *(uint *)(param_1 + 0x334);
      }
      uVar12 = (uVar12 & 0x3fffffff) << 1;
      if (0x3ffffffe < uVar12) {
        uVar12 = 0x3fffffff;
      }
      uVar10 = uVar2;
      if ((int)uVar2 <= (int)uVar12) {
        uVar10 = uVar12;
      }
      lVar15 = FUN_032bd1d4(PTR_PTR_0434a080,uVar10,4,uVar9,iVar11,(uint *)(param_1 + 0x334));
      iVar11 = *(int *)(param_1 + 0x330);
      *(long *)(param_1 + 0x328) = lVar15;
    }
    psVar1 = (short *)(lVar15 + (long)iVar11 * 4);
    *(uint *)(param_1 + 0x330) = uVar2;
    *psVar1 = param_3;
    psVar1[1] = sVar7;
  }
  if ((plVar8 != (long *)0x0) && (plVar8[1] != 0)) {
    do {
      lVar15 = *plVar17;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar6) {
        *plVar17 = lVar15 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar15 + -1 == 0) {
      (**(code **)(*plVar8 + 0x18))(plVar8);
    }
  }
  if (lVar16 != 0) {
    puVar4 = *(undefined8 **)(lVar16 + 8);
    uVar13 = (long)puVar4 + 0x17U & 0xfffffffffffffff8;
    if ((uVar13 <= *(ulong *)(lVar16 + 0x10)) &&
       (*(ulong *)(lVar16 + 8) = uVar13, puVar4 != (undefined8 *)0x0)) {
      *puVar4 = &DAT_0390f40e;
      uVar9 = nn::os::GetSystemTick();
      puVar4[1] = uVar9;
    }
  }
  return sVar7;
}


