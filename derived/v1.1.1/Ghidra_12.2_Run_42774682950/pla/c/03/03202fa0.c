/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03202fa0; name: FUN_03202fa0
 */


short FUN_03202fa0(long param_1,long param_2,short param_3)

{
  short *psVar1;
  uint uVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  short sVar6;
  long *plVar7;
  uint uVar8;
  undefined8 uVar9;
  int iVar10;
  uint uVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  
  lVar13 = tpidr_el0;
  lVar12 = *(long *)(lVar13 + 0x38d490);
  if (lVar12 == 0) {
    lVar12 = FUN_0333d16c(0,1);
    *(long *)(lVar13 + 0x38d490) = lVar12;
  }
  plVar7 = *(long **)(*(long *)(lVar12 + 8) + 0x58);
  plVar7 = (long *)(**(code **)(*plVar7 + 0x10))(plVar7,0x30,0);
  plVar7[1] = 0xffffffff;
  plVar14 = plVar7 + 2;
  *plVar14 = 1;
  *plVar7 = (long)&PTR_LAB_042f1be8;
  plVar7[4] = (long)&PTR_LAB_042f1c28;
  plVar7[5] = param_2;
  if ((param_2 != 0) && (*(long *)(param_2 + 8) != 0)) {
    plVar3 = (long *)(param_2 + 0x10);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *plVar3 = *plVar3 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  sVar6 = FUN_0333b6e8(param_1,plVar7,0x40);
  if ((param_3 != -1) && (sVar6 != -1)) {
    uVar11 = *(uint *)(param_1 + 0x334);
    iVar10 = *(int *)(param_1 + 0x330);
    uVar2 = iVar10 + 1;
    if (iVar10 < (int)(uVar11 & 0x3fffffff)) {
      lVar13 = *(long *)(param_1 + 0x328);
    }
    else {
      uVar9 = *(undefined8 *)(param_1 + 0x328);
      if (0x3ffffffe < iVar10) {
        FUN_032bd0a8(uVar2);
        uVar11 = *(uint *)(param_1 + 0x334);
      }
      uVar11 = (uVar11 & 0x3fffffff) << 1;
      if (0x3ffffffe < uVar11) {
        uVar11 = 0x3fffffff;
      }
      uVar8 = uVar2;
      if ((int)uVar2 <= (int)uVar11) {
        uVar8 = uVar11;
      }
      lVar13 = FUN_032bd1d4(PTR_PTR_0434a080,uVar8,4,uVar9,iVar10);
      iVar10 = *(int *)(param_1 + 0x330);
      *(long *)(param_1 + 0x328) = lVar13;
    }
    psVar1 = (short *)(lVar13 + (long)iVar10 * 4);
    *(uint *)(param_1 + 0x330) = uVar2;
    *psVar1 = param_3;
    psVar1[1] = sVar6;
  }
  if ((plVar7 != (long *)0x0) && (plVar7[1] != 0)) {
    do {
      lVar13 = *plVar14;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar5) {
        *plVar14 = lVar13 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar13 + -1 == 0) {
      (**(code **)(*plVar7 + 0x18))(plVar7);
    }
  }
  return sVar6;
}


