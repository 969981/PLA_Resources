/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031a6df4; name: FUN_031a6df4
 */


void FUN_031a6df4(long param_1,undefined8 *param_2,undefined4 *param_3)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  uint uVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  ulong local_80;
  undefined4 local_78;
  long *local_70;
  long *plStack_68;
  
  if (*(ulong *)(*(long *)(param_1 + 0x180) + 0x28) < 4) goto LAB_031a6e30;
  lVar7 = tpidr_el0;
  lVar10 = *(long *)(lVar7 + 0x38d490);
  if (lVar10 == 0) {
    lVar10 = FUN_0333d16c(0,1);
    *(long *)(lVar7 + 0x38d490) = lVar10;
  }
  plVar5 = *(long **)(*(long *)(lVar10 + 8) + 0x58);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x10))(plVar5,0x28,0);
  plVar5[1] = 0xffffffff;
  plVar12 = plVar5 + 2;
  *plVar12 = 1;
  *plVar5 = (long)&PTR_LAB_042f0738;
  plVar5[3] = 0;
  plVar5[4] = -0x8000000000000000;
  puVar3 = PTR_PTR_0434a080;
  local_80 = 0x10;
  lVar10 = (**(code **)(*(long *)PTR_PTR_0434a080 + 0x10))(PTR_PTR_0434a080,0x10,&local_80);
  uVar11 = local_80 >> 4;
  if (0x3ffffffe < uVar11) {
    uVar11 = 0x3fffffff;
  }
  *(int *)((long)plVar5 + 0x24) = (int)uVar11;
  puVar9 = (undefined8 *)(lVar10 + (long)(int)plVar5[4] * 0x10);
  plVar5[3] = lVar10;
  puVar9[1] = param_2[1];
  *puVar9 = *param_2;
  *(undefined4 *)(plVar5 + 4) = 1;
  lVar10 = *(long *)(lVar7 + 0x38d490);
  if (lVar10 == 0) {
    lVar10 = FUN_0333d16c(0,1);
    *(long *)(lVar7 + 0x38d490) = lVar10;
  }
  plVar6 = *(long **)(*(long *)(lVar10 + 8) + 0x58);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x10))(plVar6,0x28,0);
  plVar6[1] = 0xffffffff;
  plVar13 = plVar6 + 2;
  *plVar13 = 1;
  *plVar6 = (long)&PTR_LAB_042f0848;
  plVar6[3] = 0;
  plVar6[4] = -0x8000000000000000;
  lVar7 = FUN_032bd1d4(puVar3,1,4,0,0,(long)plVar6 + 0x24);
  plVar6[3] = lVar7;
  *(undefined4 *)(lVar7 + (long)(int)plVar6[4] * 4) = *param_3;
  *(undefined4 *)(plVar6 + 4) = 1;
  local_78 = *(undefined4 *)(param_1 + 0x23c);
  local_80 = CONCAT26(local_80._6_2_,0x4608000020);
  local_70 = plVar5;
  plStack_68 = plVar6;
  FUN_031aa380(*(long *)(param_1 + 0x180) + 0x28,*(long *)(param_1 + 0x180),&local_80);
  if ((plVar6 == (long *)0x0) || (plVar6[1] == 0)) {
LAB_031a70a4:
    lVar7 = plVar5[1];
  }
  else {
    do {
      lVar7 = *plVar13;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar2) {
        *plVar13 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar7 + -1 != 0) goto LAB_031a70a4;
    (**(code **)(*plVar6 + 0x18))(plVar6);
    lVar7 = plVar5[1];
  }
  if (lVar7 != 0) {
    do {
      lVar7 = *plVar12;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar2) {
        *plVar12 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar7 + -1 == 0) {
      (**(code **)(*plVar5 + 0x18))(plVar5);
    }
  }
LAB_031a6e30:
  if ((*(uint *)(param_1 + 0x2c) & 0x3fffffff) == 0) {
    uVar8 = (*(uint *)(param_1 + 0x2c) & 0x3fffffff) * 2;
    if (uVar8 < 0x3fffffff) {
      if (uVar8 < 2) {
        uVar8 = 1;
      }
    }
    else {
      uVar8 = 0x3fffffff;
    }
    uVar4 = FUN_032bd1d4(PTR_PTR_0434a080,uVar8,0x20,*(undefined8 *)(param_1 + 0x20),
                         *(undefined4 *)(param_1 + 0x28));
    *(undefined8 *)(param_1 + 0x20) = uVar4;
  }
  if (*(int *)(param_1 + 0x28) != 1) {
    *(undefined4 *)(param_1 + 0x28) = 1;
  }
  uVar4 = *param_2;
  puVar9 = *(undefined8 **)(param_1 + 0x20);
  puVar9[1] = param_2[1];
  *puVar9 = uVar4;
  *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x10) = *param_3;
  *(undefined1 *)(param_1 + 0x199) = 1;
  if ((*(int *)(param_1 + 0x40) == 1) && (*(int *)(param_1 + 0x28) != 0)) {
    FUN_031a7148(param_1);
  }
  return;
}


