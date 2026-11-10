/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01cd59e0; name: FUN_01cd59e0
 */


void FUN_01cd59e0(long *param_1,long *param_2)

{
  int *piVar1;
  long *plVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  long lVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float local_64;
  
LAB_01cd5a10:
  plVar14 = param_2 + -2;
  plVar8 = param_1;
LAB_01cd5a18:
  param_1 = plVar8;
  lVar13 = (long)param_2 - (long)param_1;
  uVar10 = lVar13 >> 4;
  switch(uVar10) {
  case 0:
  case 1:
    goto switchD_01cd5a40_caseD_0;
  case 2:
    fVar17 = *(float *)(param_1 + 1);
    if (fVar17 < *(float *)(param_2 + -1)) {
      lVar16 = *param_1;
      *param_1 = 0;
      lVar13 = param_2[-2];
      param_2[-2] = 0;
      *param_1 = lVar13;
      *(int *)(param_1 + 1) = (int)param_2[-1];
      plVar8 = (long *)param_2[-2];
      param_2[-2] = 0;
      if (plVar8 != (long *)0x0) {
        lVar13 = plVar8[0xb];
        piVar1 = (int *)(lVar13 + 0xc);
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
          *(undefined8 *)(lVar13 + 0x18) = 0;
          (**(code **)(*plVar8 + 0x20))();
        }
      }
      param_2[-2] = lVar16;
      *(float *)(param_2 + -1) = fVar17;
      return;
    }
    return;
  case 3:
    FUN_01cd60a0(param_1,param_1 + 2,plVar14);
    return;
  case 4:
    FUN_01cd6310(param_1,param_1 + 2,param_1 + 4,plVar14);
    return;
  case 5:
    FUN_01cd64c0(param_1,param_1 + 2,param_1 + 4,param_1 + 6,plVar14);
    return;
  default:
    if (lVar13 < 0x70) {
      FUN_01cd6700(param_1,param_2);
      return;
    }
    uVar9 = uVar10;
    if ((long)uVar10 < 0) {
      uVar9 = uVar10 + 1;
    }
    plVar8 = param_1 + ((long)uVar9 >> 1) * 2;
    if (lVar13 < 0x3e71) {
      iVar6 = FUN_01cd60a0(param_1,plVar8,plVar14);
    }
    else {
      uVar9 = uVar10 + 3;
      if (-1 < (long)uVar10) {
        uVar9 = uVar10;
      }
      lVar13 = (uVar9 & 0x3ffffffffffffffc) * 4;
      iVar6 = FUN_01cd64c0(param_1,(long)param_1 + lVar13,plVar8,(long)plVar8 + lVar13,plVar14);
    }
    fVar17 = *(float *)(param_1 + 1);
    if (fVar17 <= *(float *)(plVar8 + 1)) break;
    plVar12 = plVar14;
    goto LAB_01cd5ba8;
  }
  plVar12 = param_2;
  while (plVar15 = plVar12, param_1 + 4 != plVar15) {
    plVar12 = plVar15 + -2;
    if (*(float *)(plVar8 + 1) < *(float *)(plVar15 + -3)) goto code_r0x01cd5c28;
  }
  plVar8 = param_1 + 2;
  if (fVar17 <= *(float *)(param_2 + -1)) {
    if (plVar8 == plVar14) {
      return;
    }
    plVar8 = param_1 + 4;
    while (fVar18 = *(float *)(plVar8 + -1), fVar17 <= fVar18) {
      plVar8 = plVar8 + 2;
      if (param_2 == plVar8) {
        return;
      }
    }
    lVar16 = plVar8[-2];
    plVar8[-2] = 0;
    lVar13 = param_2[-2];
    param_2[-2] = 0;
    plVar8[-2] = lVar13;
    *(int *)(plVar8 + -1) = (int)param_2[-1];
    plVar12 = (long *)param_2[-2];
    param_2[-2] = 0;
    if (plVar12 != (long *)0x0) {
      lVar13 = plVar12[0xb];
      piVar1 = (int *)(lVar13 + 0xc);
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
        *(undefined8 *)(lVar13 + 0x18) = 0;
        (**(code **)(*plVar12 + 0x20))();
      }
    }
    param_2[-2] = lVar16;
    *(float *)(param_2 + -1) = fVar18;
  }
  if (plVar8 == plVar14) {
    return;
  }
  plVar12 = plVar14;
  while( true ) {
    fVar17 = *(float *)(param_1 + 1);
    plVar15 = plVar8 + 2;
    local_64 = *(float *)(plVar8 + 1);
    plVar7 = plVar12;
    if (local_64 < fVar17) {
      fVar18 = *(float *)(plVar12 + -1);
    }
    else {
      local_64 = *(float *)(plVar8 + 3);
      plVar2 = plVar8 + 4;
      if (fVar17 <= local_64) {
        do {
          plVar8 = plVar2;
          local_64 = *(float *)(plVar8 + 1);
          plVar15 = plVar8 + 2;
          plVar2 = plVar15;
        } while (fVar17 <= local_64);
        fVar18 = *(float *)(plVar12 + -1);
      }
      else {
        fVar18 = *(float *)(plVar12 + -1);
        plVar8 = plVar15;
        plVar15 = plVar2;
      }
    }
    while (fVar18 < fVar17) {
      fVar18 = *(float *)(plVar7 + -3);
      plVar7 = plVar7 + -2;
    }
    plVar12 = plVar7 + -2;
    if (plVar12 <= plVar8) break;
    lVar16 = *plVar8;
    *plVar8 = 0;
    lVar13 = *plVar12;
    *plVar12 = 0;
    *plVar8 = lVar13;
    *(int *)(plVar8 + 1) = (int)plVar7[-1];
    plVar8 = (long *)*plVar12;
    *plVar12 = 0;
    if (plVar8 != (long *)0x0) {
      lVar13 = plVar8[0xb];
      piVar1 = (int *)(lVar13 + 0xc);
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
        *(undefined8 *)(lVar13 + 0x18) = 0;
        (**(code **)(*plVar8 + 0x20))();
      }
    }
    *plVar12 = lVar16;
    *(float *)(plVar7 + -1) = local_64;
    plVar8 = plVar15;
  }
  goto LAB_01cd5a18;
code_r0x01cd5c28:
  lVar16 = *param_1;
  *param_1 = 0;
  plVar12 = plVar15 + -4;
  lVar13 = *plVar12;
  *plVar12 = 0;
  *param_1 = lVar13;
  *(int *)(param_1 + 1) = (int)plVar15[-3];
  plVar7 = (long *)*plVar12;
  *plVar12 = 0;
  if (plVar7 != (long *)0x0) {
    lVar13 = plVar7[0xb];
    piVar1 = (int *)(lVar13 + 0xc);
    do {
      iVar3 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 + -1 == 0) {
      *(undefined8 *)(lVar13 + 0x18) = 0;
      (**(code **)(*plVar7 + 0x20))();
    }
  }
  iVar6 = iVar6 + 1;
  plVar15[-4] = lVar16;
  *(float *)(plVar15 + -3) = fVar17;
LAB_01cd5ba8:
  plVar15 = param_1 + 2;
  if (plVar15 < plVar12) {
    while( true ) {
      fVar18 = *(float *)(plVar8 + 1);
      plVar7 = plVar15 + 2;
      fVar17 = *(float *)(plVar15 + 1);
      if (fVar18 < fVar17) {
        do {
          plVar15 = plVar7;
          fVar17 = *(float *)(plVar15 + 1);
          plVar7 = plVar15 + 2;
        } while (fVar18 < fVar17);
      }
      plVar11 = plVar12 + -2;
      plVar2 = plVar12;
      if (*(float *)(plVar12 + -1) <= fVar18) {
        fVar19 = *(float *)(plVar12 + -3);
        while (plVar2 = plVar11, fVar19 <= fVar18) {
          plVar11 = plVar2 + -2;
          plVar12 = plVar2;
          fVar19 = *(float *)(plVar2 + -3);
        }
        plVar11 = plVar12 + -4;
      }
      plVar12 = plVar11;
      if (plVar12 < plVar15) break;
      lVar16 = *plVar15;
      *plVar15 = 0;
      lVar13 = *plVar12;
      *plVar12 = 0;
      *plVar15 = lVar13;
      *(int *)(plVar15 + 1) = (int)plVar2[-1];
      plVar11 = (long *)*plVar12;
      *plVar12 = 0;
      if (plVar11 != (long *)0x0) {
        lVar13 = plVar11[0xb];
        piVar1 = (int *)(lVar13 + 0xc);
        do {
          iVar3 = *piVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar3 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar3 + -1 == 0) {
          *(undefined8 *)(lVar13 + 0x18) = 0;
          (**(code **)(*plVar11 + 0x20))(plVar11);
        }
      }
      *plVar12 = lVar16;
      iVar6 = iVar6 + 1;
      *(float *)(plVar2 + -1) = fVar17;
      plVar2 = plVar12;
      if (plVar8 != plVar15) {
        plVar2 = plVar8;
      }
      plVar8 = plVar2;
      plVar15 = plVar7;
    }
  }
  if ((plVar15 != plVar8) && (fVar17 = *(float *)(plVar15 + 1), fVar17 < *(float *)(plVar8 + 1))) {
    lVar16 = *plVar15;
    *plVar15 = 0;
    lVar13 = *plVar8;
    *plVar8 = 0;
    *plVar15 = lVar13;
    *(int *)(plVar15 + 1) = (int)plVar8[1];
    plVar12 = (long *)*plVar8;
    *plVar8 = 0;
    if (plVar12 != (long *)0x0) {
      lVar13 = plVar12[0xb];
      piVar1 = (int *)(lVar13 + 0xc);
      do {
        iVar3 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar3 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar3 + -1 == 0) {
        *(undefined8 *)(lVar13 + 0x18) = 0;
        (**(code **)(*plVar12 + 0x20))(plVar12);
      }
    }
    iVar6 = iVar6 + 1;
    *plVar8 = lVar16;
    *(float *)(plVar8 + 1) = fVar17;
  }
  if (iVar6 == 0) {
    uVar10 = FUN_01cd6850(param_1,plVar15);
    uVar9 = FUN_01cd6850(plVar15 + 2,param_2);
    if ((uVar9 & 1) != 0) goto code_r0x01cd6030;
    plVar8 = plVar15 + 2;
    if ((uVar10 & 1) != 0) goto LAB_01cd5a18;
  }
  if ((long)param_2 - (long)plVar15 <= (long)plVar15 - (long)param_1) {
    FUN_01cd59e0(plVar15 + 2,param_2);
    param_2 = plVar15;
    goto LAB_01cd5a10;
  }
  FUN_01cd59e0(param_1,plVar15);
  plVar8 = plVar15 + 2;
  goto LAB_01cd5a18;
code_r0x01cd6030:
  param_2 = plVar15;
  if ((uVar10 & 1) != 0) {
switchD_01cd5a40_caseD_0:
    return;
  }
  goto LAB_01cd5a10;
}


