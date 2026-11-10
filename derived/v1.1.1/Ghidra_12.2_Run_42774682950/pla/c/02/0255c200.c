/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0255c200; name: FUN_0255c200
 */


void FUN_0255c200(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  byte bVar2;
  int iVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  int local_74;
  undefined8 local_70;
  undefined8 local_68;
  
LAB_0255c230:
  plVar15 = param_2 + -1;
  plVar8 = param_1;
LAB_0255c23c:
  while( true ) {
    param_1 = plVar8;
    lVar13 = (long)param_2 - (long)param_1;
    uVar12 = lVar13 >> 3;
    switch(uVar12) {
    case 0:
    case 1:
      return;
    case 2:
      lVar14 = *param_3;
      local_68 = (**(code **)(*(long *)*plVar15 + 0x38))();
      local_70 = (**(code **)(*(long *)*param_1 + 0x38))();
      lVar13 = FUN_0255db80(lVar14 + 0x1d0,&local_68);
      bVar4 = *(byte *)(lVar13 + 4);
      iVar3 = *(int *)(lVar13 + 8);
      lVar13 = FUN_0255db80(lVar14 + 0x1d0,&local_70);
      bVar4 = bVar4 & 1;
      bVar2 = *(byte *)(lVar13 + 4) & 1;
      if (bVar4 <= bVar2) {
        if (bVar4 < bVar2) {
          return;
        }
        if (iVar3 <= *(int *)(lVar13 + 8)) {
          return;
        }
      }
      lVar14 = *param_1;
      *param_1 = 0;
      lVar13 = *plVar15;
      *plVar15 = 0;
      *param_1 = lVar13;
      plVar8 = (long *)*plVar15;
      *plVar15 = 0;
      if (plVar8 != (long *)0x0) {
        plVar9 = plVar8 + 10;
        do {
          iVar3 = (int)*plVar9 + -1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar6) {
            *(int *)plVar9 = iVar3;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar3 == 0) {
          (**(code **)(*plVar8 + 0x10))();
        }
      }
      *plVar15 = lVar14;
      return;
    case 3:
      FUN_0255cb60(param_1,param_1 + 1,plVar15,param_3);
      return;
    case 4:
      FUN_0255cf50(param_1,param_1 + 1,param_1 + 2,plVar15,param_3);
      return;
    case 5:
      FUN_0255d220(param_1,param_1 + 1,param_1 + 2,param_1 + 3,plVar15,param_3);
      return;
    }
    if (lVar13 < 0x38) {
      FUN_0255d5c0(param_1,param_2,param_3);
      return;
    }
    uVar10 = uVar12;
    if ((long)uVar12 < 0) {
      uVar10 = uVar12 + 1;
    }
    plVar8 = (long *)((long)param_1 + (uVar10 & 0x3ffffffffffffffe) * 4);
    if (lVar13 < 0x1f39) {
      local_74 = FUN_0255cb60(param_1,plVar8,plVar15,param_3);
    }
    else {
      uVar10 = uVar12 + 3;
      if (-1 < (long)uVar12) {
        uVar10 = uVar12;
      }
      lVar13 = (uVar10 & 0x7ffffffffffffffc) * 2;
      local_74 = FUN_0255d220(param_1,(long)param_1 + lVar13,plVar8,(long)plVar8 + lVar13,plVar15,
                              param_3);
    }
    lVar14 = *param_3;
    local_68 = (**(code **)(*(long *)*param_1 + 0x38))();
    local_70 = (**(code **)(*(long *)*plVar8 + 0x38))();
    lVar13 = FUN_0255db80(lVar14 + 0x1d0,&local_68);
    bVar4 = *(byte *)(lVar13 + 4);
    iVar3 = *(int *)(lVar13 + 8);
    lVar13 = FUN_0255db80(lVar14 + 0x1d0,&local_70);
    bVar4 = bVar4 & 1;
    bVar2 = *(byte *)(lVar13 + 4) & 1;
    if ((bVar2 < bVar4) || ((bVar2 <= bVar4 && (*(int *)(lVar13 + 8) < iVar3)))) break;
    plVar11 = param_2 + -2;
    while (plVar9 = plVar11, param_1 != plVar9) {
      lVar14 = *param_3;
      local_68 = (**(code **)(*(long *)*plVar9 + 0x38))();
      local_70 = (**(code **)(*(long *)*plVar8 + 0x38))();
      lVar13 = FUN_0255db80(lVar14 + 0x1d0,&local_68);
      bVar4 = *(byte *)(lVar13 + 4);
      iVar3 = *(int *)(lVar13 + 8);
      lVar13 = FUN_0255db80(lVar14 + 0x1d0,&local_70);
      bVar4 = bVar4 & 1;
      bVar2 = *(byte *)(lVar13 + 4) & 1;
      if ((bVar2 < bVar4) ||
         ((plVar11 = plVar9 + -1, bVar2 <= bVar4 && (*(int *)(lVar13 + 8) < iVar3))))
      goto LAB_0255c7c8;
    }
    plVar8 = param_1 + 1;
    lVar14 = *param_3;
    local_68 = (**(code **)(*(long *)*param_1 + 0x38))();
    local_70 = (**(code **)(*(long *)*plVar15 + 0x38))();
    lVar13 = FUN_0255db80(lVar14 + 0x1d0,&local_68);
    bVar4 = *(byte *)(lVar13 + 4);
    iVar3 = *(int *)(lVar13 + 8);
    lVar13 = FUN_0255db80(lVar14 + 0x1d0,&local_70);
    bVar4 = bVar4 & 1;
    bVar2 = *(byte *)(lVar13 + 4) & 1;
    if ((bVar4 <= bVar2) && ((bVar4 < bVar2 || (iVar3 <= *(int *)(lVar13 + 8))))) {
      if (plVar8 == plVar15) {
        return;
      }
      plVar8 = param_1 + 2;
      while( true ) {
        lVar14 = *param_3;
        local_68 = (**(code **)(*(long *)*param_1 + 0x38))();
        local_70 = (**(code **)(*(long *)plVar8[-1] + 0x38))();
        lVar13 = FUN_0255db80(lVar14 + 0x1d0,&local_68);
        bVar4 = *(byte *)(lVar13 + 4);
        iVar3 = *(int *)(lVar13 + 8);
        lVar13 = FUN_0255db80(lVar14 + 0x1d0,&local_70);
        bVar4 = bVar4 & 1;
        bVar2 = *(byte *)(lVar13 + 4) & 1;
        if ((bVar2 < bVar4) || ((bVar2 <= bVar4 && (*(int *)(lVar13 + 8) < iVar3)))) break;
        plVar8 = plVar8 + 1;
        if (param_2 == plVar8) {
          return;
        }
      }
      lVar14 = plVar8[-1];
      plVar8[-1] = 0;
      lVar13 = *plVar15;
      *plVar15 = 0;
      plVar8[-1] = lVar13;
      plVar9 = (long *)*plVar15;
      *plVar15 = 0;
      if (plVar9 != (long *)0x0) {
        plVar11 = plVar9 + 10;
        do {
          iVar3 = (int)*plVar11 + -1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar6) {
            *(int *)plVar11 = iVar3;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar3 == 0) {
          (**(code **)(*plVar9 + 0x10))();
        }
      }
      *plVar15 = lVar14;
    }
    if (plVar8 == plVar15) {
      return;
    }
    plVar9 = plVar15;
    while( true ) {
      while( true ) {
        lVar14 = *param_3;
        local_68 = (**(code **)(*(long *)*param_1 + 0x38))();
        local_70 = (**(code **)(*(long *)*plVar8 + 0x38))();
        lVar13 = FUN_0255db80(lVar14 + 0x1d0,&local_68);
        bVar4 = *(byte *)(lVar13 + 4);
        iVar3 = *(int *)(lVar13 + 8);
        lVar13 = FUN_0255db80(lVar14 + 0x1d0,&local_70);
        bVar4 = bVar4 & 1;
        bVar2 = *(byte *)(lVar13 + 4) & 1;
        if ((bVar2 < bVar4) || ((bVar2 <= bVar4 && (*(int *)(lVar13 + 8) < iVar3)))) break;
        plVar8 = plVar8 + 1;
      }
      do {
        do {
          lVar14 = *param_3;
          local_68 = (**(code **)(*(long *)*param_1 + 0x38))();
          plVar9 = plVar9 + -1;
          local_70 = (**(code **)(*(long *)*plVar9 + 0x38))();
          lVar13 = FUN_0255db80(lVar14 + 0x1d0,&local_68);
          bVar4 = *(byte *)(lVar13 + 4);
          iVar3 = *(int *)(lVar13 + 8);
          lVar13 = FUN_0255db80(lVar14 + 0x1d0,&local_70);
          bVar4 = bVar4 & 1;
          bVar2 = *(byte *)(lVar13 + 4) & 1;
        } while (bVar2 < bVar4);
      } while ((bVar2 <= bVar4) && (*(int *)(lVar13 + 8) < iVar3));
      if (plVar9 <= plVar8) break;
      lVar14 = *plVar8;
      *plVar8 = 0;
      lVar13 = *plVar9;
      *plVar9 = 0;
      *plVar8 = lVar13;
      plVar11 = (long *)*plVar9;
      *plVar9 = 0;
      if (plVar11 != (long *)0x0) {
        plVar7 = plVar11 + 10;
        do {
          iVar3 = (int)*plVar7 + -1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar6) {
            *(int *)plVar7 = iVar3;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar3 == 0) {
          (**(code **)(*plVar11 + 0x10))();
        }
      }
      *plVar9 = lVar14;
      plVar8 = plVar8 + 1;
    }
  }
  plVar9 = plVar15;
  goto LAB_0255c5d0;
LAB_0255c7c8:
  lVar14 = *param_1;
  *param_1 = 0;
  lVar13 = *plVar9;
  *plVar9 = 0;
  *param_1 = lVar13;
  plVar11 = (long *)*plVar9;
  *plVar9 = 0;
  if (plVar11 != (long *)0x0) {
    plVar7 = plVar11 + 10;
    do {
      iVar3 = (int)*plVar7 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar6) {
        *(int *)plVar7 = iVar3;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar3 == 0) {
      (**(code **)(*plVar11 + 0x10))();
    }
  }
  local_74 = local_74 + 1;
  *plVar9 = lVar14;
LAB_0255c5d0:
  plVar11 = param_1 + 1;
  if (plVar11 < plVar9) {
    do {
      while( true ) {
        lVar14 = *param_3;
        local_68 = (**(code **)(*(long *)*plVar11 + 0x38))();
        local_70 = (**(code **)(*(long *)*plVar8 + 0x38))();
        lVar13 = FUN_0255db80(lVar14 + 0x1d0,&local_68);
        bVar4 = *(byte *)(lVar13 + 4);
        iVar3 = *(int *)(lVar13 + 8);
        lVar13 = FUN_0255db80(lVar14 + 0x1d0,&local_70);
        bVar4 = bVar4 & 1;
        bVar2 = *(byte *)(lVar13 + 4) & 1;
        if ((bVar4 <= bVar2) && ((bVar4 < bVar2 || (iVar3 <= *(int *)(lVar13 + 8))))) break;
        plVar11 = plVar11 + 1;
      }
      plVar7 = plVar9 + -1;
      do {
        plVar9 = plVar7;
        lVar14 = *param_3;
        local_68 = (**(code **)(*(long *)*plVar9 + 0x38))();
        local_70 = (**(code **)(*(long *)*plVar8 + 0x38))();
        lVar13 = FUN_0255db80(lVar14 + 0x1d0,&local_68);
        bVar4 = *(byte *)(lVar13 + 4);
        iVar3 = *(int *)(lVar13 + 8);
        lVar13 = FUN_0255db80(lVar14 + 0x1d0,&local_70);
        bVar4 = bVar4 & 1;
        bVar2 = *(byte *)(lVar13 + 4) & 1;
        if (bVar2 < bVar4) break;
        plVar7 = plVar9 + -1;
      } while ((bVar4 < bVar2) || (iVar3 <= *(int *)(lVar13 + 8)));
      if (plVar9 < plVar11) break;
      lVar14 = *plVar11;
      *plVar11 = 0;
      lVar13 = *plVar9;
      *plVar9 = 0;
      *plVar11 = lVar13;
      plVar7 = (long *)*plVar9;
      *plVar9 = 0;
      if (plVar7 != (long *)0x0) {
        plVar1 = plVar7 + 10;
        do {
          iVar3 = (int)*plVar1 + -1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *(int *)plVar1 = iVar3;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar3 == 0) {
          (**(code **)(*plVar7 + 0x10))();
        }
      }
      local_74 = local_74 + 1;
      *plVar9 = lVar14;
      plVar7 = plVar9;
      if (plVar8 != plVar11) {
        plVar7 = plVar8;
      }
      plVar11 = plVar11 + 1;
      plVar8 = plVar7;
    } while( true );
  }
  if (plVar11 != plVar8) {
    lVar14 = *param_3;
    local_68 = (**(code **)(*(long *)*plVar8 + 0x38))();
    local_70 = (**(code **)(*(long *)*plVar11 + 0x38))();
    lVar13 = FUN_0255db80(lVar14 + 0x1d0,&local_68);
    bVar4 = *(byte *)(lVar13 + 4);
    iVar3 = *(int *)(lVar13 + 8);
    lVar13 = FUN_0255db80(lVar14 + 0x1d0,&local_70);
    bVar4 = bVar4 & 1;
    bVar2 = *(byte *)(lVar13 + 4) & 1;
    if ((bVar2 < bVar4) || ((bVar2 <= bVar4 && (*(int *)(lVar13 + 8) < iVar3)))) {
      lVar14 = *plVar11;
      *plVar11 = 0;
      lVar13 = *plVar8;
      *plVar8 = 0;
      *plVar11 = lVar13;
      plVar9 = (long *)*plVar8;
      *plVar8 = 0;
      if (plVar9 != (long *)0x0) {
        plVar7 = plVar9 + 10;
        do {
          iVar3 = (int)*plVar7 + -1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar6) {
            *(int *)plVar7 = iVar3;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar3 == 0) {
          (**(code **)(*plVar9 + 0x10))();
        }
      }
      local_74 = local_74 + 1;
      *plVar8 = lVar14;
    }
  }
  if (local_74 == 0) {
    uVar12 = FUN_0255d7e0(param_1,plVar11,param_3);
    uVar10 = FUN_0255d7e0(plVar11 + 1,param_2,param_3);
    if ((uVar10 & 1) != 0) goto code_r0x0255c730;
    plVar8 = plVar11 + 1;
    if ((uVar12 & 1) != 0) goto LAB_0255c23c;
  }
  if ((long)param_2 - (long)plVar11 <= (long)plVar11 - (long)param_1) {
    FUN_0255c200(plVar11 + 1,param_2,param_3);
    param_2 = plVar11;
    goto LAB_0255c230;
  }
  FUN_0255c200(param_1,plVar11,param_3);
  plVar8 = plVar11 + 1;
  goto LAB_0255c23c;
code_r0x0255c730:
  param_2 = plVar11;
  if ((uVar12 & 1) != 0) {
    return;
  }
  goto LAB_0255c230;
}


