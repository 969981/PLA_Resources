/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0127c20c; name: FUN_0127c20c
 */


void FUN_0127c20c(long param_1,long param_2,undefined8 param_3)

{
  int *piVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  char cVar5;
  bool bVar6;
  undefined8 uVar7;
  int iVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  
  plVar10 = *(long **)(param_1 + 0x2c8);
  if (plVar10 != (long *)0x0) {
    plVar13 = plVar10 + 10;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar6) {
        *(int *)plVar13 = (int)*plVar13 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  plVar13 = *(long **)(*(long *)(*(long *)(param_1 + 0x68) + 0xb0) + 0x18);
  if (plVar13 != (long *)0x0) {
    lVar11 = plVar13[0xb];
    if (*(undefined8 **)(lVar11 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar11 + 0x10) == 0) {
      uVar7 = (**(code **)**(undefined8 **)(lVar11 + 0x18))();
      *(undefined8 *)(lVar11 + 0x10) = uVar7;
    }
    piVar1 = (int *)(lVar11 + 0xc);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = *piVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  plVar12 = (long *)plVar13[0xd];
  if (plVar12 != (long *)0x0) {
    plVar3 = plVar12 + 10;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar6) {
        *(int *)plVar3 = (int)*plVar3 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  lVar11 = plVar13[0xb];
  piVar1 = (int *)(lVar11 + 0xc);
  do {
    iVar8 = *piVar1;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar6) {
      *piVar1 = iVar8 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (iVar8 + -1 == 0) {
    *(undefined8 *)(lVar11 + 0x18) = 0;
    (**(code **)(*plVar13 + 0x20))(plVar13);
    plVar13 = (long *)plVar10[0x38];
  }
  else {
    plVar13 = (long *)plVar10[0x38];
  }
  if (plVar13 == (long *)0x0) {
    lVar11 = plVar12[0x16];
    if (lVar11 != 0) {
      plVar13 = *(long **)(lVar11 + 0x270);
      if (plVar13 != *(long **)(lVar11 + 0x278)) {
        iVar8 = 0;
        do {
          plVar3 = (long *)PTR_DAT_04379c88;
          if (*plVar13 != 0) {
            plVar3 = (long *)(*plVar13 + 0x58);
          }
          if (*plVar3 == param_2) goto LAB_0127c4b8;
          plVar13 = plVar13 + 1;
          iVar8 = iVar8 + 1;
        } while (*(long **)(lVar11 + 0x278) != plVar13);
      }
    }
    iVar8 = 0;
LAB_0127c4b8:
    FUN_02c2e33c(plVar12,iVar8,0);
  }
  else {
    plVar3 = plVar13 + 10;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar6) {
        *(int *)plVar3 = (int)*plVar3 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    lVar11 = plVar12[0x16];
    if (lVar11 != 0) {
      plVar9 = *(long **)(lVar11 + 0x270);
      if (plVar9 != *(long **)(lVar11 + 0x278)) {
        iVar8 = 0;
        do {
          plVar2 = (long *)PTR_DAT_04379c88;
          if (*plVar9 != 0) {
            plVar2 = (long *)(*plVar9 + 0x58);
          }
          if (*plVar2 == param_2) goto LAB_0127c334;
          plVar9 = plVar9 + 1;
          iVar8 = iVar8 + 1;
        } while (*(long **)(lVar11 + 0x278) != plVar9);
      }
    }
    iVar8 = 0;
LAB_0127c334:
    FUN_02c2e33c(plVar12,iVar8,plVar13);
    do {
      iVar8 = (int)*plVar3 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar6) {
        *(int *)plVar3 = iVar8;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
    }
  }
  lVar11 = plVar10[0x38];
  lVar4 = plVar10[0x39];
  lVar14 = plVar10[0x37];
  *(undefined4 *)(lVar14 + 0x124) = 0;
  *(undefined2 *)(lVar14 + 0x128) = 0;
  *(undefined4 *)(lVar14 + 300) = 0;
  *(undefined4 *)(lVar14 + 0x134) = 0;
  FUN_02c33414(lVar14,lVar11);
  if (*(char *)(lVar4 + 0x7c) != '\0') {
    **(undefined2 **)(lVar4 + 0x58) = 0;
    *(undefined2 *)(lVar4 + 0x7a) = 0;
  }
  FUN_02c338a4(lVar14,lVar4,lVar11,0,0);
  FUN_0283ce7c(plVar10,param_3,plVar10[0x39],10);
  if (plVar12 != (long *)0x0) {
    plVar13 = plVar12 + 10;
    do {
      iVar8 = (int)*plVar13 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar6) {
        *(int *)plVar13 = iVar8;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
    }
  }
  plVar13 = plVar10 + 10;
  do {
    iVar8 = (int)*plVar13 + -1;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar6) {
      *(int *)plVar13 = iVar8;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (iVar8 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0127c41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar10 + 0x10))(plVar10);
    return;
  }
  return;
}


