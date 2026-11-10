/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02857700; name: FUN_02857700
 */


void FUN_02857700(long param_1)

{
  int *piVar1;
  long *plVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  
  if (*(undefined1 **)(param_1 + 0xf8) == &DAT_cbf29ce484222645) {
    return;
  }
  plVar11 = *(long **)(*(long *)(param_1 + 8) + 0x1b8);
  if (plVar11 == (long *)0x0) {
    iVar6 = FUN_02c600e8(*(undefined8 *)(param_1 + 0x18));
    iVar7 = FUN_02c68e44(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x98));
    FUN_02c395d0(0,0,iVar6 - iVar7,7,0,1);
  }
  else {
    lVar12 = plVar11[0xb];
    if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar12 + 0x10) == 0) {
      uVar8 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
      *(undefined8 *)(lVar12 + 0x10) = uVar8;
    }
    piVar1 = (int *)(lVar12 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    iVar6 = FUN_02c600e8(*(undefined8 *)(param_1 + 0x18));
    iVar7 = FUN_02c68e44(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x98));
    FUN_02c395d0(plVar11,0,iVar6 - iVar7,7,0,1);
    lVar12 = plVar11[0xb];
    piVar1 = (int *)(lVar12 + 0xc);
    do {
      iVar6 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar6 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 + -1 == 0) {
      *(undefined8 *)(lVar12 + 0x18) = 0;
      (**(code **)(*plVar11 + 0x20))(plVar11);
    }
  }
  lVar12 = *(long *)(param_1 + 0x20);
  plVar11 = *(long **)(*(long *)(param_1 + 8) + 0x1c0);
  if (plVar11 == (long *)0x0) {
    lVar10 = *(long *)(lVar12 + 0xb0);
    if (lVar10 != 0) {
      plVar11 = *(long **)(lVar10 + 0x270);
      if (plVar11 != *(long **)(lVar10 + 0x278)) {
        iVar6 = 0;
        do {
          plVar3 = (long *)PTR_DAT_04379c88;
          if (*plVar11 != 0) {
            plVar3 = (long *)(*plVar11 + 0x58);
          }
          if (*plVar3 == *(long *)(param_1 + 0xf8)) goto LAB_028579ac;
          plVar11 = plVar11 + 1;
          iVar6 = iVar6 + 1;
        } while (*(long **)(lVar10 + 0x278) != plVar11);
      }
    }
    iVar6 = 0;
LAB_028579ac:
    FUN_02c2e33c(lVar12,iVar6,0);
  }
  else {
    plVar3 = plVar11 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *(int *)plVar3 = (int)*plVar3 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    lVar10 = *(long *)(lVar12 + 0xb0);
    if (lVar10 != 0) {
      plVar9 = *(long **)(lVar10 + 0x270);
      if (plVar9 != *(long **)(lVar10 + 0x278)) {
        iVar6 = 0;
        do {
          plVar2 = (long *)PTR_DAT_04379c88;
          if (*plVar9 != 0) {
            plVar2 = (long *)(*plVar9 + 0x58);
          }
          if (*plVar2 == *(long *)(param_1 + 0xf8)) goto LAB_02857844;
          plVar9 = plVar9 + 1;
          iVar6 = iVar6 + 1;
        } while (*(long **)(lVar10 + 0x278) != plVar9);
      }
    }
    iVar6 = 0;
LAB_02857844:
    FUN_02c2e33c(lVar12,iVar6,plVar11);
    do {
      iVar6 = (int)*plVar3 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *(int *)plVar3 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
    }
  }
  lVar10 = *(long *)(param_1 + 8);
  lVar13 = *(long *)(lVar10 + 0x1b8);
  uVar8 = *(undefined8 *)(lVar10 + 0x1c0);
  lVar12 = *(long *)(lVar10 + 0x1c8);
  *(undefined4 *)(lVar13 + 0x124) = 0;
  *(undefined2 *)(lVar13 + 0x128) = 0;
  *(undefined4 *)(lVar13 + 300) = 0;
  *(undefined4 *)(lVar13 + 0x134) = 0;
  FUN_02c33414(lVar13,uVar8);
  if (*(char *)(lVar12 + 0x7c) != '\0') {
    **(undefined2 **)(lVar12 + 0x58) = 0;
    *(undefined2 *)(lVar12 + 0x7a) = 0;
  }
  FUN_02c338a4(lVar13,lVar12,uVar8,0,0);
  FUN_0283ce7c(lVar10,param_1 + 0x498,*(undefined8 *)(lVar10 + 0x1c8),10);
  return;
}


