/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0255a630; name: FUN_0255a630
 */


void FUN_0255a630(long *param_1,long *param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  byte bVar4;
  byte bVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  float fVar16;
  float fVar17;
  int local_64;
  
LAB_0255a664:
  do {
    plVar14 = param_2 + -1;
    plVar10 = param_1;
LAB_0255a670:
    param_1 = plVar10;
    lVar13 = (long)param_2 - (long)param_1;
    uVar12 = lVar13 >> 3;
    switch(uVar12) {
    case 0:
    case 1:
      return;
    case 2:
      bVar4 = (**(code **)(*(long *)*plVar14 + 0x28))();
      bVar5 = (**(code **)(*(long *)*param_1 + 0x28))();
      fVar16 = (float)(**(code **)(*(long *)*plVar14 + 0x30))((long *)*plVar14,*param_3);
      fVar17 = (float)(**(code **)(*(long *)*param_1 + 0x30))((long *)*param_1,*param_3);
      if (bVar4 <= bVar5) {
        bVar3 = false;
        if ((bVar5 <= bVar4) && (bVar3 = false, !NAN(fVar17) && !NAN(fVar16))) {
          bVar3 = fVar17 < fVar16;
        }
        if (!bVar3) {
          return;
        }
      }
      lVar15 = *param_1;
      *param_1 = 0;
      lVar13 = *plVar14;
      *plVar14 = 0;
      *param_1 = lVar13;
      plVar10 = (long *)*plVar14;
      *plVar14 = 0;
      if (plVar10 != (long *)0x0) {
        plVar7 = plVar10 + 10;
        do {
          iVar2 = (int)*plVar7 + -1;
          cVar1 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar3) {
            *(int *)plVar7 = iVar2;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (iVar2 == 0) {
          (**(code **)(*plVar10 + 0x10))();
        }
      }
      *plVar14 = lVar15;
      return;
    case 3:
      FUN_0255b140(param_1,param_1 + 1,plVar14,param_3);
      return;
    case 4:
      FUN_0255b510(param_1,param_1 + 1,param_1 + 2,plVar14,param_3);
      return;
    case 5:
      FUN_0255b7c0(param_1,param_1 + 1,param_1 + 2,param_1 + 3,plVar14,param_3);
      return;
    }
    if (lVar13 < 0x38) {
      FUN_0255b140(param_1,param_1 + 1,param_1 + 2,param_3);
      plVar10 = param_1 + 3;
      plVar14 = param_1 + 2;
      if (param_1 + 3 == param_2) {
        return;
      }
      break;
    }
    uVar8 = uVar12;
    if ((long)uVar12 < 0) {
      uVar8 = uVar12 + 1;
    }
    plVar10 = (long *)((long)param_1 + (uVar8 & 0x3ffffffffffffffe) * 4);
    if (lVar13 < 0x1f39) {
      local_64 = FUN_0255b140(param_1,plVar10,plVar14,param_3);
    }
    else {
      uVar8 = uVar12 + 3;
      if (-1 < (long)uVar12) {
        uVar8 = uVar12;
      }
      lVar13 = (uVar8 & 0x7ffffffffffffffc) * 2;
      local_64 = FUN_0255b7c0(param_1,(long)param_1 + lVar13,plVar10,(long)plVar10 + lVar13,plVar14,
                              param_3);
    }
    bVar4 = (**(code **)(*(long *)*param_1 + 0x28))();
    bVar5 = (**(code **)(*(long *)*plVar10 + 0x28))();
    fVar16 = (float)(**(code **)(*(long *)*param_1 + 0x30))((long *)*param_1,*param_3);
    fVar17 = (float)(**(code **)(*(long *)*plVar10 + 0x30))((long *)*plVar10,*param_3);
    if (bVar5 < bVar4) {
LAB_0255a8d8:
      plVar7 = plVar14;
    }
    else {
      bVar3 = false;
      if ((bVar5 <= bVar4) && (bVar3 = false, !NAN(fVar17) && !NAN(fVar16))) {
        bVar3 = fVar17 < fVar16;
      }
      if (bVar3) goto LAB_0255a8d8;
      plVar6 = param_2 + -2;
      do {
        plVar7 = plVar6;
        if (param_1 == plVar7) {
          bVar4 = (**(code **)(*(long *)*param_1 + 0x28))();
          bVar5 = (**(code **)(*(long *)*plVar14 + 0x28))();
          plVar10 = param_1 + 1;
          fVar16 = (float)(**(code **)(*(long *)*param_1 + 0x30))((long *)*param_1,*param_3);
          fVar17 = (float)(**(code **)(*(long *)*plVar14 + 0x30))((long *)*plVar14,*param_3);
          if (bVar5 < bVar4) goto LAB_0255ab54;
          bVar3 = false;
          if ((bVar5 <= bVar4) && (bVar3 = false, !NAN(fVar17) && !NAN(fVar16))) {
            bVar3 = fVar17 < fVar16;
          }
          if (bVar3) goto LAB_0255ab54;
          if (plVar10 == plVar14) {
            return;
          }
          plVar10 = param_1 + 2;
          goto LAB_0255aa98;
        }
        bVar4 = (**(code **)(*(long *)*plVar7 + 0x28))();
        bVar5 = (**(code **)(*(long *)*plVar10 + 0x28))();
        fVar16 = (float)(**(code **)(*(long *)*plVar7 + 0x30))((long *)*plVar7,*param_3);
        fVar17 = (float)(**(code **)(*(long *)*plVar10 + 0x30))((long *)*plVar10,*param_3);
        if (bVar5 < bVar4) break;
        bVar3 = false;
        if ((bVar5 <= bVar4) && (bVar3 = false, !NAN(fVar17) && !NAN(fVar16))) {
          bVar3 = fVar17 < fVar16;
        }
        plVar6 = plVar7 + -1;
      } while (!bVar3);
      lVar15 = *param_1;
      *param_1 = 0;
      lVar13 = *plVar7;
      *plVar7 = 0;
      *param_1 = lVar13;
      plVar6 = (long *)*plVar7;
      *plVar7 = 0;
      if (plVar6 != (long *)0x0) {
        plVar11 = plVar6 + 10;
        do {
          iVar2 = (int)*plVar11 + -1;
          cVar1 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar3) {
            *(int *)plVar11 = iVar2;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (iVar2 == 0) {
          (**(code **)(*plVar6 + 0x10))();
        }
      }
      local_64 = local_64 + 1;
      *plVar7 = lVar15;
    }
    plVar6 = param_1 + 1;
    if (plVar6 < plVar7) {
      do {
        while( true ) {
          bVar4 = (**(code **)(*(long *)*plVar6 + 0x28))();
          bVar5 = (**(code **)(*(long *)*plVar10 + 0x28))();
          fVar16 = (float)(**(code **)(*(long *)*plVar6 + 0x30))((long *)*plVar6,*param_3);
          fVar17 = (float)(**(code **)(*(long *)*plVar10 + 0x30))((long *)*plVar10,*param_3);
          if (bVar4 <= bVar5) break;
LAB_0255afd8:
          plVar6 = plVar6 + 1;
        }
        bVar3 = false;
        if ((bVar5 <= bVar4) && (bVar3 = false, !NAN(fVar17) && !NAN(fVar16))) {
          bVar3 = fVar17 < fVar16;
        }
        if (bVar3) goto LAB_0255afd8;
        do {
          plVar7 = plVar7 + -1;
          bVar4 = (**(code **)(*(long *)*plVar7 + 0x28))();
          bVar5 = (**(code **)(*(long *)*plVar10 + 0x28))();
          fVar16 = (float)(**(code **)(*(long *)*plVar7 + 0x30))((long *)*plVar7,*param_3);
          fVar17 = (float)(**(code **)(*(long *)*plVar10 + 0x30))((long *)*plVar10,*param_3);
          if (bVar5 < bVar4) break;
          bVar3 = false;
          if ((bVar5 <= bVar4) && (bVar3 = false, !NAN(fVar17) && !NAN(fVar16))) {
            bVar3 = fVar17 < fVar16;
          }
        } while (!bVar3);
        if (plVar7 < plVar6) break;
        lVar15 = *plVar6;
        *plVar6 = 0;
        lVar13 = *plVar7;
        *plVar7 = 0;
        *plVar6 = lVar13;
        plVar11 = (long *)*plVar7;
        *plVar7 = 0;
        if (plVar11 != (long *)0x0) {
          plVar9 = plVar11 + 10;
          do {
            iVar2 = (int)*plVar9 + -1;
            cVar1 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar3) {
              *(int *)plVar9 = iVar2;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (iVar2 == 0) {
            (**(code **)(*plVar11 + 0x10))();
          }
        }
        local_64 = local_64 + 1;
        plVar11 = plVar7;
        if (plVar10 != plVar6) {
          plVar11 = plVar10;
        }
        plVar6 = plVar6 + 1;
        *plVar7 = lVar15;
        plVar10 = plVar11;
      } while( true );
    }
    if (plVar6 != plVar10) {
      bVar4 = (**(code **)(*(long *)*plVar10 + 0x28))();
      bVar5 = (**(code **)(*(long *)*plVar6 + 0x28))();
      fVar16 = (float)(**(code **)(*(long *)*plVar10 + 0x30))((long *)*plVar10,*param_3);
      fVar17 = (float)(**(code **)(*(long *)*plVar6 + 0x30))((long *)*plVar6,*param_3);
      if ((bVar5 < bVar4) || ((bVar5 <= bVar4 && (fVar17 < fVar16)))) {
        lVar15 = *plVar6;
        *plVar6 = 0;
        lVar13 = *plVar10;
        *plVar10 = 0;
        *plVar6 = lVar13;
        plVar7 = (long *)*plVar10;
        *plVar10 = 0;
        if (plVar7 != (long *)0x0) {
          plVar11 = plVar7 + 10;
          do {
            iVar2 = (int)*plVar11 + -1;
            cVar1 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar3) {
              *(int *)plVar11 = iVar2;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (iVar2 == 0) {
            (**(code **)(*plVar7 + 0x10))();
          }
        }
        local_64 = local_64 + 1;
        *plVar10 = lVar15;
      }
    }
    if (local_64 != 0) goto LAB_0255ad90;
    uVar12 = FUN_0255bb40(param_1,plVar6,param_3);
    uVar8 = FUN_0255bb40(plVar6 + 1,param_2,param_3);
    if ((uVar8 & 1) == 0) goto LAB_0255ae24;
    param_2 = plVar6;
    if ((uVar12 & 1) != 0) {
      return;
    }
  } while( true );
LAB_0255ae48:
  plVar7 = plVar10;
  bVar4 = (**(code **)(*(long *)*plVar7 + 0x28))();
  bVar5 = (**(code **)(*(long *)*plVar14 + 0x28))();
  fVar16 = (float)(**(code **)(*(long *)*plVar7 + 0x30))((long *)*plVar7,*param_3);
  fVar17 = (float)(**(code **)(*(long *)*plVar14 + 0x30))((long *)*plVar14,*param_3);
  if (bVar5 < bVar4) {
LAB_0255aebc:
    plVar6 = (long *)*plVar7;
    *plVar7 = 0;
    *plVar7 = 0;
    plVar10 = plVar7;
    while( true ) {
      plVar11 = plVar14;
      lVar13 = *plVar11;
      *plVar11 = 0;
      *plVar10 = lVar13;
      if (plVar11 == param_1) break;
      bVar4 = (**(code **)(*plVar6 + 0x28))(plVar6);
      plVar14 = plVar11 + -1;
      bVar5 = (**(code **)(*(long *)*plVar14 + 0x28))();
      fVar16 = (float)(**(code **)(*plVar6 + 0x30))(plVar6,*param_3);
      fVar17 = (float)(**(code **)(*(long *)*plVar14 + 0x30))((long *)*plVar14,*param_3);
      if ((bVar4 <= bVar5) && ((bVar4 < bVar5 || (fVar16 <= fVar17)))) goto LAB_0255af94;
      plVar9 = (long *)*plVar11;
      *plVar11 = 0;
      plVar10 = plVar11;
      if (plVar9 != (long *)0x0) {
        plVar11 = plVar9 + 10;
        do {
          iVar2 = (int)*plVar11 + -1;
          cVar1 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar3) {
            *(int *)plVar11 = iVar2;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (iVar2 == 0) {
          (**(code **)(*plVar9 + 0x10))();
        }
      }
    }
    plVar11 = param_1;
LAB_0255af94:
    plVar10 = (long *)*plVar11;
    *plVar11 = 0;
    if (plVar10 != (long *)0x0) {
      plVar14 = plVar10 + 10;
      do {
        iVar2 = (int)*plVar14 + -1;
        cVar1 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar3) {
          *(int *)plVar14 = iVar2;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (iVar2 == 0) {
        (**(code **)(*plVar10 + 0x10))();
      }
    }
    *plVar11 = (long)plVar6;
  }
  else {
    bVar3 = false;
    if ((bVar5 <= bVar4) && (bVar3 = false, !NAN(fVar17) && !NAN(fVar16))) {
      bVar3 = fVar17 < fVar16;
    }
    if (bVar3) goto LAB_0255aebc;
  }
  plVar10 = plVar7 + 1;
  plVar14 = plVar7;
  if (plVar7 + 1 == param_2) {
    return;
  }
  goto LAB_0255ae48;
LAB_0255aa98:
  bVar4 = (**(code **)(*(long *)*param_1 + 0x28))();
  bVar5 = (**(code **)(*(long *)plVar10[-1] + 0x28))();
  fVar16 = (float)(**(code **)(*(long *)*param_1 + 0x30))((long *)*param_1,*param_3);
  fVar17 = (float)(**(code **)(*(long *)plVar10[-1] + 0x30))((long *)plVar10[-1],*param_3);
  if (bVar5 < bVar4) goto LAB_0255ab18;
  bVar3 = false;
  if ((bVar5 <= bVar4) && (bVar3 = false, !NAN(fVar17) && !NAN(fVar16))) {
    bVar3 = fVar17 < fVar16;
  }
  if (bVar3) goto LAB_0255ab18;
  plVar10 = plVar10 + 1;
  if (param_2 == plVar10) {
    return;
  }
  goto LAB_0255aa98;
LAB_0255ab18:
  lVar15 = plVar10[-1];
  plVar10[-1] = 0;
  lVar13 = *plVar14;
  *plVar14 = 0;
  plVar10[-1] = lVar13;
  plVar7 = (long *)*plVar14;
  *plVar14 = 0;
  if (plVar7 != (long *)0x0) {
    plVar6 = plVar7 + 10;
    do {
      iVar2 = (int)*plVar6 + -1;
      cVar1 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *(int *)plVar6 = iVar2;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar2 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
  }
  *plVar14 = lVar15;
LAB_0255ab54:
  if (plVar10 == plVar14) {
    return;
  }
  plVar7 = plVar14;
LAB_0255ab68:
  while( true ) {
    bVar4 = (**(code **)(*(long *)*param_1 + 0x28))();
    bVar5 = (**(code **)(*(long *)*plVar10 + 0x28))();
    fVar16 = (float)(**(code **)(*(long *)*param_1 + 0x30))((long *)*param_1,*param_3);
    fVar17 = (float)(**(code **)(*(long *)*plVar10 + 0x30))((long *)*plVar10,*param_3);
    if (bVar5 < bVar4) break;
    bVar3 = false;
    if ((bVar5 <= bVar4) && (bVar3 = false, !NAN(fVar17) && !NAN(fVar16))) {
      bVar3 = fVar17 < fVar16;
    }
    if (bVar3) break;
    plVar10 = plVar10 + 1;
  }
  do {
    do {
      bVar4 = (**(code **)(*(long *)*param_1 + 0x28))();
      plVar7 = plVar7 + -1;
      bVar5 = (**(code **)(*(long *)*plVar7 + 0x28))();
      fVar16 = (float)(**(code **)(*(long *)*param_1 + 0x30))((long *)*param_1,*param_3);
      fVar17 = (float)(**(code **)(*(long *)*plVar7 + 0x30))((long *)*plVar7,*param_3);
    } while (bVar5 < bVar4);
    bVar3 = false;
    if ((bVar5 <= bVar4) && (bVar3 = false, !NAN(fVar17) && !NAN(fVar16))) {
      bVar3 = fVar17 < fVar16;
    }
  } while (bVar3);
  if (plVar10 < plVar7) {
    lVar15 = *plVar10;
    *plVar10 = 0;
    lVar13 = *plVar7;
    *plVar7 = 0;
    *plVar10 = lVar13;
    plVar6 = (long *)*plVar7;
    *plVar7 = 0;
    if (plVar6 != (long *)0x0) {
      plVar11 = plVar6 + 10;
      do {
        iVar2 = (int)*plVar11 + -1;
        cVar1 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar3) {
          *(int *)plVar11 = iVar2;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (iVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))();
      }
    }
    *plVar7 = lVar15;
    plVar10 = plVar10 + 1;
    goto LAB_0255ab68;
  }
  goto LAB_0255adb4;
LAB_0255ae24:
  plVar10 = plVar6 + 1;
  if ((uVar12 & 1) != 0) goto LAB_0255a670;
LAB_0255ad90:
  if ((long)param_2 - (long)plVar6 <= (long)plVar6 - (long)param_1) {
    FUN_0255a630(plVar6 + 1,param_2,param_3);
    param_2 = plVar6;
    goto LAB_0255a664;
  }
  FUN_0255a630(param_1,plVar6,param_3);
  plVar10 = plVar6 + 1;
LAB_0255adb4:
  goto LAB_0255a670;
}


