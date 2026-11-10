/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013184fc; name: FUN_013184fc
 */


void FUN_013184fc(long *param_1,long *param_2,long *param_3,long *param_4,undefined8 param_5)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  
  lVar5 = *param_3;
  plVar11 = *(long **)(*param_2 + 0x1c0);
  if (plVar11 == (long *)0x0) {
    lVar9 = *(long *)(lVar5 + 0xb0);
    if (lVar9 != 0) {
      plVar11 = *(long **)(lVar9 + 0x270);
      if (plVar11 != *(long **)(lVar9 + 0x278)) {
        iVar7 = 0;
        do {
          plVar10 = (long *)PTR_DAT_04379c88;
          if (*plVar11 != 0) {
            plVar10 = (long *)(*plVar11 + 0x58);
          }
          if (*plVar10 == *param_4) goto LAB_013187ec;
          plVar11 = plVar11 + 1;
          iVar7 = iVar7 + 1;
        } while (*(long **)(lVar9 + 0x278) != plVar11);
      }
    }
    iVar7 = 0;
LAB_013187ec:
    FUN_02c2e33c(lVar5,iVar7,0);
  }
  else {
    plVar10 = plVar11 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *(int *)plVar10 = (int)*plVar10 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    lVar9 = *(long *)(lVar5 + 0xb0);
    if (lVar9 != 0) {
      plVar8 = *(long **)(lVar9 + 0x270);
      if (plVar8 != *(long **)(lVar9 + 0x278)) {
        iVar7 = 0;
        do {
          plVar2 = (long *)PTR_DAT_04379c88;
          if (*plVar8 != 0) {
            plVar2 = (long *)(*plVar8 + 0x58);
          }
          if (*plVar2 == *param_4) goto LAB_01318598;
          plVar8 = plVar8 + 1;
          iVar7 = iVar7 + 1;
        } while (*(long **)(lVar9 + 0x278) != plVar8);
      }
    }
    iVar7 = 0;
LAB_01318598:
    FUN_02c2e33c(lVar5,iVar7,plVar11);
    do {
      iVar7 = (int)*plVar10 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *(int *)plVar10 = iVar7;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
    }
  }
  plVar11 = *(long **)(*param_2 + 0x1b8);
  if (plVar11 == (long *)0x0) {
    FUN_010c6160(0,0,param_5);
  }
  else {
    lVar5 = plVar11[0xb];
    if (*(undefined8 **)(lVar5 + 0x18) == (undefined8 *)0x0) goto LAB_013187f8;
    if (*(long *)(lVar5 + 0x10) == 0) {
      uVar6 = (**(code **)**(undefined8 **)(lVar5 + 0x18))();
      *(undefined8 *)(lVar5 + 0x10) = uVar6;
    }
    piVar1 = (int *)(lVar5 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    FUN_010c6160(plVar11,0,param_5);
    lVar5 = plVar11[0xb];
    piVar1 = (int *)(lVar5 + 0xc);
    do {
      iVar7 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar5 + 0x18) = 0;
      (**(code **)(*plVar11 + 0x20))(plVar11);
    }
  }
  lVar5 = *param_2;
  plVar11 = *(long **)(lVar5 + 0x1b8);
  if (plVar11 != (long *)0x0) {
    lVar5 = plVar11[0xb];
    if (*(undefined8 **)(lVar5 + 0x18) == (undefined8 *)0x0) {
LAB_013187f8:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar5 + 0x10) == 0) {
      uVar6 = (**(code **)**(undefined8 **)(lVar5 + 0x18))();
      *(undefined8 *)(lVar5 + 0x10) = uVar6;
    }
    piVar1 = (int *)(lVar5 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    lVar5 = *param_2;
  }
  lVar9 = *param_1;
  plVar10 = *(long **)(lVar5 + 0x1c0);
  if (plVar10 != (long *)0x0) {
    plVar8 = plVar10 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *(int *)plVar8 = (int)*plVar8 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  *(undefined4 *)((long)plVar11 + 0x124) = 0;
  *(undefined2 *)(plVar11 + 0x25) = 0;
  *(undefined4 *)((long)plVar11 + 300) = 0;
  *(undefined4 *)((long)plVar11 + 0x134) = 0;
  FUN_02c33414(plVar11,plVar10);
  if (*(char *)(lVar9 + 0x7c) != '\0') {
    **(undefined2 **)(lVar9 + 0x58) = 0;
    *(undefined2 *)(lVar9 + 0x7a) = 0;
  }
  FUN_02c338a4(plVar11,lVar9,plVar10,0,0);
  plVar8 = plVar10 + 10;
  do {
    iVar7 = (int)*plVar8 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar4) {
      *(int *)plVar8 = iVar7;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar7 == 0) {
    (**(code **)(*plVar10 + 0x10))(plVar10);
  }
  lVar5 = plVar11[0xb];
  piVar1 = (int *)(lVar5 + 0xc);
  do {
    iVar7 = *piVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = iVar7 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar7 + -1 == 0) {
    *(undefined8 *)(lVar5 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x01318764. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar11 + 0x20))(plVar11);
    return;
  }
  return;
}


