/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0320ca40; name: FUN_0320ca40
 */


short FUN_0320ca40(long param_1,long param_2,short param_3)

{
  short *psVar1;
  uint uVar2;
  long *plVar3;
  undefined8 *puVar4;
  char cVar5;
  bool bVar6;
  short sVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  long *plVar17;
  
  lVar9 = tpidr_el0;
  lVar14 = *(long *)(lVar9 + 0x38d490);
  if (lVar14 == 0) {
    lVar14 = FUN_0333d16c(0,1);
    *(long *)(lVar9 + 0x38d490) = lVar14;
    lVar16 = *(long *)(lVar14 + 0x10);
  }
  else {
    lVar16 = *(long *)(lVar14 + 0x10);
  }
  if (lVar16 != 0) {
    puVar4 = *(undefined8 **)(lVar16 + 8);
    uVar15 = (long)puVar4 + 0x17U & 0xfffffffffffffff8;
    if ((uVar15 <= *(ulong *)(lVar16 + 0x10)) &&
       (*(ulong *)(lVar16 + 8) = uVar15, puVar4 != (undefined8 *)0x0)) {
      *puVar4 = "TthkaiNavMeshClearanceCacheFillingTasks::addFinalTasks";
      uVar10 = nn::os::GetSystemTick();
      puVar4[1] = uVar10;
      lVar14 = *(long *)(lVar9 + 0x38d490);
    }
  }
  if (lVar14 == 0) {
    lVar14 = FUN_0333d16c(0,1);
    *(long *)(lVar9 + 0x38d490) = lVar14;
  }
  plVar8 = *(long **)(*(long *)(lVar14 + 8) + 0x58);
  plVar8 = (long *)(**(code **)(*plVar8 + 0x10))(plVar8,0x30,0);
  plVar8[1] = 0xffffffff;
  plVar17 = plVar8 + 2;
  *plVar17 = 1;
  *plVar8 = (long)&PTR_LAB_042f2448;
  plVar8[4] = (long)&PTR_LAB_042f2490;
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
  if (param_3 != -1) {
    uVar13 = *(uint *)(param_1 + 0x334);
    iVar12 = *(int *)(param_1 + 0x330);
    uVar2 = iVar12 + 1;
    if (iVar12 < (int)(uVar13 & 0x3fffffff)) {
      lVar9 = *(long *)(param_1 + 0x328);
    }
    else {
      uVar10 = *(undefined8 *)(param_1 + 0x328);
      if (0x3ffffffe < iVar12) {
        FUN_032bd0a8(uVar2);
        uVar13 = *(uint *)(param_1 + 0x334);
      }
      uVar13 = (uVar13 & 0x3fffffff) << 1;
      if (0x3ffffffe < uVar13) {
        uVar13 = 0x3fffffff;
      }
      uVar11 = uVar2;
      if ((int)uVar2 <= (int)uVar13) {
        uVar11 = uVar13;
      }
      lVar9 = FUN_032bd1d4(PTR_PTR_0434a080,uVar11,4,uVar10,iVar12);
      iVar12 = *(int *)(param_1 + 0x330);
      *(long *)(param_1 + 0x328) = lVar9;
    }
    psVar1 = (short *)(lVar9 + (long)iVar12 * 4);
    *(uint *)(param_1 + 0x330) = uVar2;
    *psVar1 = param_3;
    psVar1[1] = sVar7;
  }
  if ((plVar8 != (long *)0x0) && (plVar8[1] != 0)) {
    do {
      lVar9 = *plVar17;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar6) {
        *plVar17 = lVar9 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar9 + -1 == 0) {
      (**(code **)(*plVar8 + 0x18))(plVar8);
    }
  }
  if (lVar16 != 0) {
    puVar4 = *(undefined8 **)(lVar16 + 8);
    uVar15 = (long)puVar4 + 0x17U & 0xfffffffffffffff8;
    if ((uVar15 <= *(ulong *)(lVar16 + 0x10)) &&
       (*(ulong *)(lVar16 + 8) = uVar15, puVar4 != (undefined8 *)0x0)) {
      *puVar4 = &DAT_0390f40e;
      uVar10 = nn::os::GetSystemTick();
      puVar4[1] = uVar10;
    }
  }
  return sVar7;
}


