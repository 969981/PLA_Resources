/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03213860; name: FUN_03213860
 */


short FUN_03213860(long param_1,long param_2,short param_3)

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
  long lVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  long *plVar17;
  
  lVar14 = tpidr_el0;
  lVar13 = *(long *)(lVar14 + 0x38d490);
  if (lVar13 == 0) {
    lVar13 = FUN_0333d16c(0,1);
    *(long *)(lVar14 + 0x38d490) = lVar13;
    lVar16 = *(long *)(lVar13 + 0x10);
  }
  else {
    lVar16 = *(long *)(lVar13 + 0x10);
  }
  if (lVar16 != 0) {
    puVar4 = *(undefined8 **)(lVar16 + 8);
    uVar15 = (long)puVar4 + 0x17U & 0xfffffffffffffff8;
    if ((uVar15 <= *(ulong *)(lVar16 + 0x10)) &&
       (*(ulong *)(lVar16 + 8) = uVar15, puVar4 != (undefined8 *)0x0)) {
      *puVar4 = "TthkaiNavigatorUpdateTasks::addFinalTasks";
      uVar9 = nn::os::GetSystemTick();
      puVar4[1] = uVar9;
      lVar13 = *(long *)(lVar14 + 0x38d490);
    }
  }
  if (lVar13 == 0) {
    lVar13 = FUN_0333d16c(0,1);
    *(long *)(lVar14 + 0x38d490) = lVar13;
  }
  plVar8 = *(long **)(*(long *)(lVar13 + 8) + 0x58);
  plVar8 = (long *)(**(code **)(*plVar8 + 0x10))(plVar8,0x30,0);
  plVar8[1] = 0xffffffff;
  plVar17 = plVar8 + 2;
  *plVar17 = 1;
  *plVar8 = (long)&PTR_LAB_042f2d60;
  plVar8[4] = (long)&PTR_LAB_042f2da0;
  plVar8[5] = param_2;
  if ((param_2 != 0) && (*(long *)(param_2 + 8) != 0)) {
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
      lVar14 = FUN_032bd1d4(PTR_PTR_0434a080,uVar10,4,uVar9,iVar11);
      iVar11 = *(int *)(param_1 + 0x330);
      *(long *)(param_1 + 0x328) = lVar14;
    }
    psVar1 = (short *)(lVar14 + (long)iVar11 * 4);
    *(uint *)(param_1 + 0x330) = uVar2;
    *psVar1 = param_3;
    psVar1[1] = sVar7;
  }
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
  if (lVar16 != 0) {
    puVar4 = *(undefined8 **)(lVar16 + 8);
    uVar15 = (long)puVar4 + 0x17U & 0xfffffffffffffff8;
    if ((uVar15 <= *(ulong *)(lVar16 + 0x10)) &&
       (*(ulong *)(lVar16 + 8) = uVar15, puVar4 != (undefined8 *)0x0)) {
      *puVar4 = &DAT_0390f40e;
      uVar9 = nn::os::GetSystemTick();
      puVar4[1] = uVar9;
    }
  }
  return sVar7;
}


