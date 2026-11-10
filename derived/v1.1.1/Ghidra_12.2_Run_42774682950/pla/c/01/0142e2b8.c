/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0142e2b8; name: FUN_0142e2b8
 */


void FUN_0142e2b8(long param_1,long param_2,uint param_3)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  
  if (param_3 < 0x10) {
    plVar10 = *(long **)(*(long *)(*(long *)(param_1 + 0x68) + 0xb0) + (ulong)param_3 * 0x18 + 0x18)
    ;
    if (plVar10 != (long *)0x0) {
      lVar7 = plVar10[0xb];
      if (*(undefined8 **)(lVar7 + 0x18) == (undefined8 *)0x0) goto LAB_0142e690;
      if (*(long *)(lVar7 + 0x10) == 0) {
        uVar5 = (**(code **)**(undefined8 **)(lVar7 + 0x18))();
        *(undefined8 *)(lVar7 + 0x10) = uVar5;
      }
      piVar1 = (int *)(lVar7 + 0xc);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
  }
  else {
    plVar10 = (long *)0x0;
  }
  plVar9 = (long *)plVar10[0xd];
  if (plVar9 != (long *)0x0) {
    plVar11 = plVar9 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar4) {
        *(int *)plVar11 = (int)*plVar11 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (plVar10 == (long *)0x0) {
LAB_0142e31c:
    plVar10 = *(long **)(param_1 + 0x2c8);
  }
  else {
    lVar7 = plVar10[0xb];
    piVar1 = (int *)(lVar7 + 0xc);
    do {
      iVar6 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 + -1 != 0) goto LAB_0142e31c;
    *(undefined8 *)(lVar7 + 0x18) = 0;
    (**(code **)(*plVar10 + 0x20))(plVar10);
    plVar10 = *(long **)(param_1 + 0x2c8);
  }
  if (plVar10 != (long *)0x0) {
    plVar11 = plVar10 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar4) {
        *(int *)plVar11 = (int)*plVar11 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar11 = (long *)plVar10[0x37];
  if (plVar11 != (long *)0x0) {
    lVar7 = plVar11[0xb];
    if (*(undefined8 **)(lVar7 + 0x18) == (undefined8 *)0x0) {
LAB_0142e690:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar7 + 0x10) == 0) {
      uVar5 = (**(code **)**(undefined8 **)(lVar7 + 0x18))();
      *(undefined8 *)(lVar7 + 0x10) = uVar5;
    }
    piVar1 = (int *)(lVar7 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar12 = (long *)plVar10[0x38];
  if (plVar12 == (long *)0x0) {
    lVar7 = plVar9[0x16];
    if (lVar7 != 0) {
      plVar12 = *(long **)(lVar7 + 0x270);
      if (plVar12 != *(long **)(lVar7 + 0x278)) {
        iVar6 = 0;
        do {
          plVar13 = (long *)PTR_DAT_04379c88;
          if (*plVar12 != 0) {
            plVar13 = (long *)(*plVar12 + 0x58);
          }
          if (*plVar13 == param_2) goto LAB_0142e678;
          plVar12 = plVar12 + 1;
          iVar6 = iVar6 + 1;
        } while (*(long **)(lVar7 + 0x278) != plVar12);
      }
    }
    iVar6 = 0;
LAB_0142e678:
    FUN_02c2e33c(plVar9,iVar6,0);
    plVar12 = (long *)plVar10[0x39];
  }
  else {
    plVar13 = plVar12 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar4) {
        *(int *)plVar13 = (int)*plVar13 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    lVar7 = plVar9[0x16];
    if (lVar7 != 0) {
      plVar8 = *(long **)(lVar7 + 0x270);
      if (plVar8 != *(long **)(lVar7 + 0x278)) {
        iVar6 = 0;
        do {
          plVar2 = (long *)PTR_DAT_04379c88;
          if (*plVar8 != 0) {
            plVar2 = (long *)(*plVar8 + 0x58);
          }
          if (*plVar2 == param_2) goto LAB_0142e3e8;
          plVar8 = plVar8 + 1;
          iVar6 = iVar6 + 1;
        } while (*(long **)(lVar7 + 0x278) != plVar8);
      }
    }
    iVar6 = 0;
LAB_0142e3e8:
    FUN_02c2e33c(plVar9,iVar6,plVar12);
    do {
      iVar6 = (int)*plVar13 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar4) {
        *(int *)plVar13 = iVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
      plVar12 = (long *)plVar10[0x39];
    }
    else {
      plVar12 = (long *)plVar10[0x39];
    }
  }
  if (plVar12 != (long *)0x0) {
    plVar13 = plVar12 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar4) {
        *(int *)plVar13 = (int)*plVar13 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar13 = (long *)plVar10[0x38];
  if (plVar13 != (long *)0x0) {
    plVar8 = plVar13 + 10;
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
  FUN_02c33414(plVar11,plVar13);
  if (*(char *)((long)plVar12 + 0x7c) != '\0') {
    *(undefined2 *)plVar12[0xb] = 0;
    *(undefined2 *)((long)plVar12 + 0x7a) = 0;
  }
  FUN_02c338a4(plVar11,plVar12,plVar13,0,0);
  plVar8 = plVar13 + 10;
  do {
    iVar6 = (int)*plVar8 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar4) {
      *(int *)plVar8 = iVar6;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar6 == 0) {
    (**(code **)(*plVar13 + 0x10))(plVar13);
  }
  plVar13 = plVar12 + 10;
  do {
    iVar6 = (int)*plVar13 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar4) {
      *(int *)plVar13 = iVar6;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar6 == 0) {
    (**(code **)(*plVar12 + 0x10))(plVar12);
  }
  lVar7 = plVar11[0xb];
  piVar1 = (int *)(lVar7 + 0xc);
  do {
    iVar6 = *piVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = iVar6 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar6 + -1 == 0) {
    *(undefined8 *)(lVar7 + 0x18) = 0;
    (**(code **)(*plVar11 + 0x20))(plVar11);
  }
  plVar11 = plVar10 + 10;
  do {
    iVar6 = (int)*plVar11 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar4) {
      *(int *)plVar11 = iVar6;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar6 == 0) {
    (**(code **)(*plVar10 + 0x10))(plVar10);
  }
  if (plVar9 != (long *)0x0) {
    plVar10 = plVar9 + 10;
    do {
      iVar6 = (int)*plVar10 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *(int *)plVar10 = iVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0142e594. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar9 + 0x10))(plVar9);
      return;
    }
  }
  return;
}


