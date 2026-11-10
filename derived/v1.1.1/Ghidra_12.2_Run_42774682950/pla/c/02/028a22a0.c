/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028a22a0; name: FUN_028a22a0
 */


void FUN_028a22a0(long *param_1,long *param_2)

{
  long *plVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  long *plVar16;
  
LAB_028a22c8:
  plVar15 = param_2 + -1;
  plVar11 = param_1;
LAB_028a22d0:
  param_1 = plVar11;
  lVar14 = (long)param_2 - (long)param_1;
  uVar12 = lVar14 >> 3;
  switch(uVar12) {
  case 0:
  case 1:
    goto switchD_028a2690_caseD_0;
  case 2:
    lVar14 = *param_1;
    if (*(uint *)(lVar14 + 0x178) <= *(uint *)(*plVar15 + 0x178)) {
      return;
    }
    *param_1 = 0;
    lVar13 = *plVar15;
    *plVar15 = 0;
    *param_1 = lVar13;
    plVar11 = (long *)*plVar15;
    *plVar15 = 0;
    if (plVar11 != (long *)0x0) {
      plVar9 = plVar11 + 10;
      do {
        iVar6 = (int)*plVar9 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar4) {
          *(int *)plVar9 = iVar6;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar6 == 0) {
        (**(code **)(*plVar11 + 0x10))();
      }
    }
    *plVar15 = lVar14;
    return;
  case 3:
    FUN_028a28b0(param_1,param_1 + 1,plVar15);
    return;
  case 4:
    FUN_028a2ac0(param_1,param_1 + 1,param_1 + 2,plVar15);
    return;
  case 5:
    FUN_028a2c40(param_1,param_1 + 1,param_1 + 2,param_1 + 3,plVar15);
    return;
  default:
    if (0x37 < lVar14) {
      uVar10 = uVar12;
      if ((long)uVar12 < 0) {
        uVar10 = uVar12 + 1;
      }
      plVar11 = (long *)((long)param_1 + (uVar10 & 0x3ffffffffffffffe) * 4);
      if (lVar14 < 0x1f39) {
        iVar6 = FUN_028a28b0(param_1,plVar11,plVar15);
      }
      else {
        uVar10 = uVar12 + 3;
        if (-1 < (long)uVar12) {
          uVar10 = uVar12;
        }
        lVar14 = (uVar10 & 0x7ffffffffffffffc) * 2;
        iVar6 = FUN_028a2c40(param_1,(long)param_1 + lVar14,plVar11,(long)plVar11 + lVar14,plVar15);
      }
      lVar14 = *param_1;
      uVar2 = *(uint *)(lVar14 + 0x178);
      if (*(uint *)(*plVar11 + 0x178) <= uVar2) goto LAB_028a236c;
      plVar9 = plVar15;
      goto LAB_028a23d0;
    }
    FUN_028a28b0(param_1,param_1 + 1,param_1 + 2);
    plVar11 = param_1 + 3;
    plVar15 = param_1 + 2;
    if (param_1 + 3 == param_2) {
      return;
    }
  }
LAB_028a2720:
  plVar9 = plVar11;
  lVar14 = *plVar9;
  if (*(uint *)(lVar14 + 0x178) < *(uint *)(*plVar15 + 0x178)) {
    *plVar9 = 0;
    *plVar9 = 0;
    plVar11 = plVar9;
    while( true ) {
      plVar16 = plVar15;
      lVar13 = *plVar16;
      *plVar16 = 0;
      *plVar11 = lVar13;
      if (plVar16 == param_1) break;
      plVar15 = plVar16 + -1;
      if (*(uint *)(*plVar15 + 0x178) <= *(uint *)(lVar14 + 0x178)) goto LAB_028a27c0;
      plVar7 = (long *)*plVar16;
      *plVar16 = 0;
      plVar11 = plVar16;
      if (plVar7 != (long *)0x0) {
        plVar16 = plVar7 + 10;
        do {
          iVar6 = (int)*plVar16 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar4) {
            *(int *)plVar16 = iVar6;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar6 == 0) {
          (**(code **)(*plVar7 + 0x10))();
        }
      }
    }
    plVar16 = param_1;
LAB_028a27c0:
    plVar11 = (long *)*plVar16;
    *plVar16 = 0;
    if (plVar11 != (long *)0x0) {
      plVar15 = plVar11 + 10;
      do {
        iVar6 = (int)*plVar15 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar4) {
          *(int *)plVar15 = iVar6;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar6 == 0) {
        (**(code **)(*plVar11 + 0x10))();
      }
    }
    *plVar16 = lVar14;
  }
  plVar11 = plVar9 + 1;
  plVar15 = plVar9;
  if (plVar9 + 1 == param_2) {
switchD_028a2690_caseD_0:
    return;
  }
  goto LAB_028a2720;
LAB_028a236c:
  plVar9 = param_2;
  while (plVar16 = plVar9, param_1 + 2 != plVar16) {
    plVar9 = plVar16 + -1;
    if (*(uint *)(plVar16[-2] + 0x178) < *(uint *)(*plVar11 + 0x178)) goto code_r0x028a2390;
  }
  plVar9 = param_1 + 1;
  if (*(uint *)(*plVar15 + 0x178) <= uVar2) {
    if (plVar9 == plVar15) {
      return;
    }
    plVar9 = param_1 + 2;
    while (lVar14 = plVar9[-1], *(uint *)(lVar14 + 0x178) <= uVar2) {
      plVar9 = plVar9 + 1;
      if (param_2 == plVar9) {
        return;
      }
    }
    plVar9[-1] = 0;
    lVar13 = *plVar15;
    *plVar15 = 0;
    plVar9[-1] = lVar13;
    plVar11 = (long *)*plVar15;
    *plVar15 = 0;
    if (plVar11 != (long *)0x0) {
      plVar16 = plVar11 + 10;
      do {
        iVar6 = (int)*plVar16 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar4) {
          *(int *)plVar16 = iVar6;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar6 == 0) {
        (**(code **)(*plVar11 + 0x10))();
      }
    }
    *plVar15 = lVar14;
  }
  if (plVar9 == plVar15) {
    return;
  }
  plVar16 = plVar15;
  while( true ) {
    plVar11 = plVar9 + -1;
    do {
      plVar9 = plVar11;
      plVar11 = plVar9 + 1;
      lVar14 = *plVar11;
    } while (*(uint *)(lVar14 + 0x178) <= *(uint *)(*param_1 + 0x178));
    plVar9 = plVar9 + 2;
    do {
      plVar16 = plVar16 + -1;
    } while (*(uint *)(*param_1 + 0x178) < *(uint *)(*plVar16 + 0x178));
    if (plVar16 <= plVar11) break;
    *plVar11 = 0;
    lVar13 = *plVar16;
    *plVar16 = 0;
    *plVar11 = lVar13;
    plVar11 = (long *)*plVar16;
    *plVar16 = 0;
    if (plVar11 != (long *)0x0) {
      plVar7 = plVar11 + 10;
      do {
        iVar6 = (int)*plVar7 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar4) {
          *(int *)plVar7 = iVar6;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar6 == 0) {
        (**(code **)(*plVar11 + 0x10))();
      }
    }
    *plVar16 = lVar14;
  }
  goto LAB_028a22d0;
code_r0x028a2390:
  *param_1 = 0;
  plVar9 = plVar16 + -2;
  lVar13 = *plVar9;
  *plVar9 = 0;
  *param_1 = lVar13;
  plVar7 = (long *)*plVar9;
  *plVar9 = 0;
  if (plVar7 != (long *)0x0) {
    plVar8 = plVar7 + 10;
    do {
      iVar5 = (int)*plVar8 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *(int *)plVar8 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
  }
  iVar6 = iVar6 + 1;
  plVar16[-2] = lVar14;
LAB_028a23d0:
  plVar16 = param_1 + 1;
  plVar7 = plVar16;
  if (plVar16 < plVar9) {
    while( true ) {
      plVar16 = plVar7 + -1;
      do {
        plVar7 = plVar16;
        plVar16 = plVar7 + 1;
        lVar14 = *plVar16;
      } while (*(uint *)(lVar14 + 0x178) < *(uint *)(*plVar11 + 0x178));
      plVar7 = plVar7 + 2;
      do {
        plVar9 = plVar9 + -1;
      } while (*(uint *)(*plVar11 + 0x178) <= *(uint *)(*plVar9 + 0x178));
      if (plVar9 < plVar16) break;
      *plVar16 = 0;
      lVar13 = *plVar9;
      *plVar9 = 0;
      *plVar16 = lVar13;
      plVar8 = (long *)*plVar9;
      *plVar9 = 0;
      if (plVar8 != (long *)0x0) {
        plVar1 = plVar8 + 10;
        do {
          iVar5 = (int)*plVar1 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *(int *)plVar1 = iVar5;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar5 == 0) {
          (**(code **)(*plVar8 + 0x10))();
        }
      }
      *plVar9 = lVar14;
      iVar6 = iVar6 + 1;
      plVar8 = plVar9;
      if (plVar11 != plVar16) {
        plVar8 = plVar11;
      }
      plVar11 = plVar8;
    }
    if (plVar16 == plVar11) goto LAB_028a24d4;
  }
  else if (plVar16 == plVar11) goto LAB_028a24d4;
  lVar14 = *plVar16;
  if (*(uint *)(*plVar11 + 0x178) < *(uint *)(lVar14 + 0x178)) {
    *plVar16 = 0;
    lVar13 = *plVar11;
    *plVar11 = 0;
    *plVar16 = lVar13;
    plVar9 = (long *)*plVar11;
    *plVar11 = 0;
    if (plVar9 != (long *)0x0) {
      plVar7 = plVar9 + 10;
      do {
        iVar5 = (int)*plVar7 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar4) {
          *(int *)plVar7 = iVar5;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 == 0) {
        (**(code **)(*plVar9 + 0x10))();
      }
    }
    iVar6 = iVar6 + 1;
    *plVar11 = lVar14;
  }
LAB_028a24d4:
  if (iVar6 == 0) {
    uVar12 = FUN_028a2e30(param_1,plVar16);
    uVar10 = FUN_028a2e30(plVar16 + 1,param_2);
    if ((uVar10 & 1) != 0) goto LAB_028a2670;
    plVar11 = plVar16 + 1;
    if ((uVar12 & 1) != 0) goto LAB_028a22d0;
  }
  if ((long)param_2 - (long)plVar16 <= (long)plVar16 - (long)param_1) {
    FUN_028a22a0(plVar16 + 1,param_2);
    param_2 = plVar16;
    goto LAB_028a22c8;
  }
  FUN_028a22a0(param_1,plVar16);
  plVar11 = plVar16 + 1;
  goto LAB_028a22d0;
LAB_028a2670:
  param_2 = plVar16;
  if ((uVar12 & 1) != 0) {
    return;
  }
  goto LAB_028a22c8;
}


