/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 019d4de0; name: FUN_019d4de0
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_019d4de0(long *param_1,long *param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  
LAB_019d4e04:
  plVar11 = param_2 + -1;
  plVar12 = param_1;
LAB_019d4e0c:
  param_1 = plVar12;
  lVar10 = (long)param_2 - (long)param_1;
  uVar9 = lVar10 >> 3;
  switch(uVar9) {
  case 0:
  case 1:
    goto switchD_019d4e34_caseD_0;
  case 2:
    plVar12 = (long *)*plVar11;
    if (plVar12 == (long *)0x0) goto LAB_019d4ea4;
    lVar10 = plVar12[0xb];
    if (*(undefined8 **)(lVar10 + 0x18) != (undefined8 *)0x0) {
      if (*(long *)(lVar10 + 0x10) == 0) {
        uVar7 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
        *(undefined8 *)(lVar10 + 0x10) = uVar7;
      }
      piVar1 = (int *)(lVar10 + 0xc);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
LAB_019d4ea4:
      plVar14 = (long *)*param_1;
      if (plVar14 == (long *)0x0) {
        bVar4 = _DAT_00000080 < *(float *)(plVar12 + 0x10);
LAB_019d4f10:
        lVar10 = plVar12[0xb];
        piVar1 = (int *)(lVar10 + 0xc);
        do {
          iVar6 = *piVar1;
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar6 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar6 + -1 == 0) {
          *(undefined8 *)(lVar10 + 0x18) = 0;
          (**(code **)(*plVar12 + 0x20))(plVar12);
        }
        if (bVar4) {
          lVar13 = *param_1;
          *param_1 = 0;
          lVar10 = *plVar11;
          *plVar11 = 0;
          *param_1 = lVar10;
          plVar12 = (long *)*plVar11;
          *plVar11 = 0;
          if (plVar12 != (long *)0x0) {
            lVar10 = plVar12[0xb];
            piVar1 = (int *)(lVar10 + 0xc);
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
              *(undefined8 *)(lVar10 + 0x18) = 0;
              (**(code **)(*plVar12 + 0x20))();
            }
          }
          *plVar11 = lVar13;
          return;
        }
        return;
      }
      lVar10 = plVar14[0xb];
      if (*(undefined8 **)(lVar10 + 0x18) != (undefined8 *)0x0) {
        if (*(long *)(lVar10 + 0x10) == 0) {
          uVar7 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
          *(undefined8 *)(lVar10 + 0x10) = uVar7;
        }
        piVar1 = (int *)(lVar10 + 0xc);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = *piVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        lVar10 = plVar14[0xb];
        piVar1 = (int *)(lVar10 + 0xc);
        bVar4 = *(float *)(plVar14 + 0x10) < *(float *)(plVar12 + 0x10);
        do {
          iVar6 = *piVar1;
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar6 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar6 + -1 == 0) {
          *(undefined8 *)(lVar10 + 0x18) = 0;
          (**(code **)(*plVar14 + 0x20))(plVar14);
        }
        goto LAB_019d4f10;
      }
    }
    goto LAB_019d61b8;
  case 3:
    FUN_019d6200(param_1,param_1 + 1,plVar11);
    return;
  case 4:
    FUN_019d6980(param_1,param_1 + 1,param_1 + 2,plVar11);
    return;
  case 5:
    FUN_019d6e40(param_1,param_1 + 1,param_1 + 2,param_1 + 3,plVar11);
    return;
  default:
    if (0x37 < lVar10) {
      uVar8 = uVar9;
      if ((long)uVar9 < 0) {
        uVar8 = uVar9 + 1;
      }
      plVar12 = (long *)((long)param_1 + (uVar8 & 0x3ffffffffffffffe) * 4);
      if (lVar10 < 0x1f39) {
        iVar6 = FUN_019d6200(param_1,plVar12,plVar11);
      }
      else {
        uVar8 = uVar9 + 3;
        if (-1 < (long)uVar9) {
          uVar8 = uVar9;
        }
        lVar10 = (uVar8 & 0x7ffffffffffffffc) * 2;
        iVar6 = FUN_019d6e40(param_1,(long)param_1 + lVar10,plVar12,(long)plVar12 + lVar10,plVar11);
      }
      plVar14 = (long *)*param_1;
      if (plVar14 != (long *)0x0) {
        lVar10 = plVar14[0xb];
        if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) goto LAB_019d61b8;
        if (*(long *)(lVar10 + 0x10) == 0) {
          uVar7 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
          *(undefined8 *)(lVar10 + 0x10) = uVar7;
        }
        piVar1 = (int *)(lVar10 + 0xc);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = *piVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      plVar16 = (long *)*plVar12;
      if (plVar16 == (long *)0x0) {
        bVar4 = _DAT_00000080 < *(float *)(plVar14 + 0x10);
      }
      else {
        lVar10 = plVar16[0xb];
        if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) goto LAB_019d61b8;
        if (*(long *)(lVar10 + 0x10) == 0) {
          uVar7 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
          *(undefined8 *)(lVar10 + 0x10) = uVar7;
        }
        piVar1 = (int *)(lVar10 + 0xc);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = *piVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        lVar10 = plVar16[0xb];
        piVar1 = (int *)(lVar10 + 0xc);
        bVar4 = *(float *)(plVar16 + 0x10) < *(float *)(plVar14 + 0x10);
        do {
          iVar2 = *piVar1;
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar2 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar2 + -1 == 0) {
          *(undefined8 *)(lVar10 + 0x18) = 0;
          (**(code **)(*plVar16 + 0x20))(plVar16);
        }
      }
      lVar10 = plVar14[0xb];
      piVar1 = (int *)(lVar10 + 0xc);
      do {
        iVar2 = *piVar1;
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 + -1 == 0) {
        *(undefined8 *)(lVar10 + 0x18) = 0;
        (**(code **)(*plVar14 + 0x20))(plVar14);
      }
      plVar14 = plVar11;
      if (!bVar4) break;
      goto LAB_019d514c;
    }
    FUN_019d6200(param_1,param_1 + 1,param_1 + 2);
    plVar12 = param_1 + 2;
    plVar11 = param_1 + 3;
    goto joined_r0x019d54dc;
  }
  while (plVar14 = plVar14 + -1, param_1 != plVar14) {
    plVar16 = (long *)*plVar14;
    if (plVar16 != (long *)0x0) {
      lVar10 = plVar16[0xb];
      if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) goto LAB_019d61b8;
      if (*(long *)(lVar10 + 0x10) == 0) {
        uVar7 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
        *(undefined8 *)(lVar10 + 0x10) = uVar7;
      }
      piVar1 = (int *)(lVar10 + 0xc);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    plVar15 = (long *)*plVar12;
    if (plVar15 == (long *)0x0) {
      bVar4 = _DAT_00000080 < *(float *)(plVar16 + 0x10);
    }
    else {
      lVar10 = plVar15[0xb];
      if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) goto LAB_019d61b8;
      if (*(long *)(lVar10 + 0x10) == 0) {
        uVar7 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
        *(undefined8 *)(lVar10 + 0x10) = uVar7;
      }
      piVar1 = (int *)(lVar10 + 0xc);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      lVar10 = plVar15[0xb];
      piVar1 = (int *)(lVar10 + 0xc);
      bVar4 = *(float *)(plVar15 + 0x10) < *(float *)(plVar16 + 0x10);
      do {
        iVar2 = *piVar1;
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 + -1 == 0) {
        *(undefined8 *)(lVar10 + 0x18) = 0;
        (**(code **)(*plVar15 + 0x20))(plVar15);
      }
    }
    lVar10 = plVar16[0xb];
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*plVar16 + 0x20))(plVar16);
    }
    if (bVar4) goto LAB_019d5854;
  }
  plVar14 = param_1 + 1;
  plVar12 = (long *)*param_1;
  if (plVar12 == (long *)0x0) goto LAB_019d58e0;
  lVar10 = plVar12[0xb];
  if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) goto LAB_019d61b8;
  if (*(long *)(lVar10 + 0x10) == 0) {
    uVar7 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
    *(undefined8 *)(lVar10 + 0x10) = uVar7;
  }
  piVar1 = (int *)(lVar10 + 0xc);
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = *piVar1 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_019d58e0:
  plVar16 = (long *)*plVar11;
  if (plVar16 == (long *)0x0) {
    bVar4 = _DAT_00000080 < *(float *)(plVar12 + 0x10);
  }
  else {
    lVar10 = plVar16[0xb];
    if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) goto LAB_019d61b8;
    if (*(long *)(lVar10 + 0x10) == 0) {
      uVar7 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
      *(undefined8 *)(lVar10 + 0x10) = uVar7;
    }
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    lVar10 = plVar16[0xb];
    piVar1 = (int *)(lVar10 + 0xc);
    bVar4 = *(float *)(plVar16 + 0x10) < *(float *)(plVar12 + 0x10);
    do {
      iVar6 = *piVar1;
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 + -1 == 0) {
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*plVar16 + 0x20))(plVar16);
    }
  }
  lVar10 = plVar12[0xb];
  piVar1 = (int *)(lVar10 + 0xc);
  do {
    iVar6 = *piVar1;
    cVar3 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar5) {
      *piVar1 = iVar6 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar6 + -1 == 0) {
    *(undefined8 *)(lVar10 + 0x18) = 0;
    (**(code **)(*plVar12 + 0x20))(plVar12);
  }
  if (!bVar4) {
    while( true ) {
      if (plVar14 == plVar11) {
        return;
      }
      plVar12 = (long *)*param_1;
      if (plVar12 != (long *)0x0) {
        lVar10 = plVar12[0xb];
        if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) goto LAB_019d61b8;
        if (*(long *)(lVar10 + 0x10) == 0) {
          uVar7 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
          *(undefined8 *)(lVar10 + 0x10) = uVar7;
        }
        piVar1 = (int *)(lVar10 + 0xc);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = *piVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      plVar16 = (long *)*plVar14;
      if (plVar16 == (long *)0x0) {
        bVar4 = _DAT_00000080 < *(float *)(plVar12 + 0x10);
      }
      else {
        lVar10 = plVar16[0xb];
        if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) goto LAB_019d61b8;
        if (*(long *)(lVar10 + 0x10) == 0) {
          uVar7 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
          *(undefined8 *)(lVar10 + 0x10) = uVar7;
        }
        piVar1 = (int *)(lVar10 + 0xc);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = *piVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        lVar10 = plVar16[0xb];
        piVar1 = (int *)(lVar10 + 0xc);
        bVar4 = *(float *)(plVar16 + 0x10) < *(float *)(plVar12 + 0x10);
        do {
          iVar6 = *piVar1;
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar6 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar6 + -1 == 0) {
          *(undefined8 *)(lVar10 + 0x18) = 0;
          (**(code **)(*plVar16 + 0x20))(plVar16);
        }
      }
      lVar10 = plVar12[0xb];
      piVar1 = (int *)(lVar10 + 0xc);
      do {
        iVar6 = *piVar1;
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar6 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar6 + -1 == 0) {
        *(undefined8 *)(lVar10 + 0x18) = 0;
        (**(code **)(*plVar12 + 0x20))(plVar12);
      }
      if (bVar4) break;
      plVar14 = plVar14 + 1;
    }
    lVar13 = *plVar14;
    *plVar14 = 0;
    lVar10 = *plVar11;
    *plVar11 = 0;
    *plVar14 = lVar10;
    plVar12 = (long *)*plVar11;
    *plVar11 = 0;
    if (plVar12 != (long *)0x0) {
      lVar10 = plVar12[0xb];
      piVar1 = (int *)(lVar10 + 0xc);
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
        *(undefined8 *)(lVar10 + 0x18) = 0;
        (**(code **)(*plVar12 + 0x20))();
      }
    }
    plVar14 = plVar14 + 1;
    *plVar11 = lVar13;
  }
  if (plVar14 == plVar11) {
    return;
  }
  plVar16 = plVar11;
LAB_019d597c:
  do {
    plVar12 = plVar14;
    plVar14 = (long *)*param_1;
    if (plVar14 != (long *)0x0) {
      lVar10 = plVar14[0xb];
      if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) goto LAB_019d61b8;
      if (*(long *)(lVar10 + 0x10) == 0) {
        uVar7 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
        *(undefined8 *)(lVar10 + 0x10) = uVar7;
      }
      piVar1 = (int *)(lVar10 + 0xc);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    plVar15 = (long *)*plVar12;
    if (plVar15 == (long *)0x0) {
      bVar4 = _DAT_00000080 < *(float *)(plVar14 + 0x10);
    }
    else {
      lVar10 = plVar15[0xb];
      if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) goto LAB_019d61b8;
      if (*(long *)(lVar10 + 0x10) == 0) {
        uVar7 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
        *(undefined8 *)(lVar10 + 0x10) = uVar7;
      }
      piVar1 = (int *)(lVar10 + 0xc);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      lVar10 = plVar15[0xb];
      piVar1 = (int *)(lVar10 + 0xc);
      bVar4 = *(float *)(plVar15 + 0x10) < *(float *)(plVar14 + 0x10);
      do {
        iVar6 = *piVar1;
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar6 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar6 + -1 == 0) {
        *(undefined8 *)(lVar10 + 0x18) = 0;
        (**(code **)(*plVar15 + 0x20))(plVar15);
      }
    }
    lVar10 = plVar14[0xb];
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      iVar6 = *piVar1;
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 + -1 == 0) {
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*plVar14 + 0x20))(plVar14);
    }
    plVar14 = plVar12 + 1;
  } while (!bVar4);
  do {
    while( true ) {
      plVar14 = (long *)*param_1;
      if (plVar14 != (long *)0x0) {
        lVar10 = plVar14[0xb];
        if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) goto LAB_019d61b8;
        if (*(long *)(lVar10 + 0x10) == 0) {
          uVar7 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
          *(undefined8 *)(lVar10 + 0x10) = uVar7;
        }
        piVar1 = (int *)(lVar10 + 0xc);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = *piVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      plVar16 = plVar16 + -1;
      plVar15 = (long *)*plVar16;
      if (plVar15 == (long *)0x0) {
        bVar4 = _DAT_00000080 < *(float *)(plVar14 + 0x10);
      }
      else {
        lVar10 = plVar15[0xb];
        if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) goto LAB_019d61b8;
        if (*(long *)(lVar10 + 0x10) == 0) {
          uVar7 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
          *(undefined8 *)(lVar10 + 0x10) = uVar7;
        }
        piVar1 = (int *)(lVar10 + 0xc);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = *piVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        lVar10 = plVar15[0xb];
        piVar1 = (int *)(lVar10 + 0xc);
        bVar4 = *(float *)(plVar15 + 0x10) < *(float *)(plVar14 + 0x10);
        do {
          iVar6 = *piVar1;
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar6 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar6 + -1 == 0) {
          *(undefined8 *)(lVar10 + 0x18) = 0;
          (**(code **)(*plVar15 + 0x20))(plVar15);
        }
      }
      lVar10 = plVar14[0xb];
      piVar1 = (int *)(lVar10 + 0xc);
      do {
        iVar6 = *piVar1;
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar6 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar6 + -1 == 0) break;
      if (!bVar4) goto LAB_019d5b1c;
    }
    *(undefined8 *)(lVar10 + 0x18) = 0;
    (**(code **)(*plVar14 + 0x20))(plVar14);
  } while (bVar4);
LAB_019d5b1c:
  if (plVar12 < plVar16) {
    lVar13 = *plVar12;
    *plVar12 = 0;
    lVar10 = *plVar16;
    *plVar16 = 0;
    *plVar12 = lVar10;
    plVar14 = (long *)*plVar16;
    *plVar16 = 0;
    if (plVar14 != (long *)0x0) {
      lVar10 = plVar14[0xb];
      piVar1 = (int *)(lVar10 + 0xc);
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
        *(undefined8 *)(lVar10 + 0x18) = 0;
        (**(code **)(*plVar14 + 0x20))();
      }
    }
    *plVar16 = lVar13;
    plVar14 = plVar12 + 1;
    goto LAB_019d597c;
  }
  goto LAB_019d4e0c;
LAB_019d5854:
  lVar13 = *param_1;
  *param_1 = 0;
  lVar10 = *plVar14;
  *plVar14 = 0;
  *param_1 = lVar10;
  plVar16 = (long *)*plVar14;
  *plVar14 = 0;
  if (plVar16 != (long *)0x0) {
    lVar10 = plVar16[0xb];
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*plVar16 + 0x20))();
    }
  }
  iVar6 = iVar6 + 1;
  *plVar14 = lVar13;
LAB_019d514c:
  plVar16 = param_1 + 1;
  plVar15 = plVar16;
  if (plVar16 < plVar14) {
LAB_019d5158:
    do {
      plVar16 = plVar15;
      plVar15 = (long *)*plVar16;
      if (plVar15 != (long *)0x0) {
        lVar10 = plVar15[0xb];
        if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) goto LAB_019d61b8;
        if (*(long *)(lVar10 + 0x10) == 0) {
          uVar7 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
          *(undefined8 *)(lVar10 + 0x10) = uVar7;
        }
        piVar1 = (int *)(lVar10 + 0xc);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = *piVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      plVar17 = (long *)*plVar12;
      if (plVar17 == (long *)0x0) {
        bVar4 = _DAT_00000080 < *(float *)(plVar15 + 0x10);
      }
      else {
        lVar10 = plVar17[0xb];
        if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) goto LAB_019d61b8;
        if (*(long *)(lVar10 + 0x10) == 0) {
          uVar7 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
          *(undefined8 *)(lVar10 + 0x10) = uVar7;
        }
        piVar1 = (int *)(lVar10 + 0xc);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = *piVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        lVar10 = plVar17[0xb];
        piVar1 = (int *)(lVar10 + 0xc);
        bVar4 = *(float *)(plVar17 + 0x10) < *(float *)(plVar15 + 0x10);
        do {
          iVar2 = *piVar1;
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar2 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar2 + -1 == 0) {
          *(undefined8 *)(lVar10 + 0x18) = 0;
          (**(code **)(*plVar17 + 0x20))(plVar17);
        }
      }
      lVar10 = plVar15[0xb];
      piVar1 = (int *)(lVar10 + 0xc);
      do {
        iVar2 = *piVar1;
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 + -1 == 0) goto LAB_019d5728;
      plVar15 = plVar16 + 1;
      if (!bVar4) goto LAB_019d522c;
    } while( true );
  }
LAB_019d5338:
  if (plVar16 == plVar12) {
LAB_019d540c:
    if (iVar6 != 0) goto LAB_019d5c40;
  }
  else {
    plVar14 = (long *)*plVar12;
    if (plVar14 != (long *)0x0) {
      lVar10 = plVar14[0xb];
      if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) goto LAB_019d61b8;
      if (*(long *)(lVar10 + 0x10) == 0) {
        uVar7 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
        *(undefined8 *)(lVar10 + 0x10) = uVar7;
      }
      piVar1 = (int *)(lVar10 + 0xc);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    plVar15 = (long *)*plVar16;
    if (plVar15 == (long *)0x0) {
      bVar4 = _DAT_00000080 < *(float *)(plVar14 + 0x10);
    }
    else {
      lVar10 = plVar15[0xb];
      if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) goto LAB_019d61b8;
      if (*(long *)(lVar10 + 0x10) == 0) {
        uVar7 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
        *(undefined8 *)(lVar10 + 0x10) = uVar7;
      }
      piVar1 = (int *)(lVar10 + 0xc);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      lVar10 = plVar15[0xb];
      piVar1 = (int *)(lVar10 + 0xc);
      bVar4 = *(float *)(plVar15 + 0x10) < *(float *)(plVar14 + 0x10);
      do {
        iVar2 = *piVar1;
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 + -1 == 0) {
        *(undefined8 *)(lVar10 + 0x18) = 0;
        (**(code **)(*plVar15 + 0x20))(plVar15);
      }
    }
    lVar10 = plVar14[0xb];
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*plVar14 + 0x20))(plVar14);
    }
    if (!bVar4) goto LAB_019d540c;
    lVar13 = *plVar16;
    *plVar16 = 0;
    lVar10 = *plVar12;
    *plVar12 = 0;
    *plVar16 = lVar10;
    plVar14 = (long *)*plVar12;
    *plVar12 = 0;
    if (plVar14 != (long *)0x0) {
      lVar10 = plVar14[0xb];
      piVar1 = (int *)(lVar10 + 0xc);
      do {
        iVar2 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 + -1 == 0) {
        *(undefined8 *)(lVar10 + 0x18) = 0;
        (**(code **)(*plVar14 + 0x20))();
      }
    }
    *plVar12 = lVar13;
    if (iVar6 != -1) goto LAB_019d5c40;
  }
  uVar9 = FUN_019d7480(param_1,plVar16);
  uVar8 = FUN_019d7480(plVar16 + 1,param_2);
  if ((uVar8 & 1) != 0) goto code_r0x019d543c;
  plVar12 = plVar16 + 1;
  if ((uVar9 & 1) != 0) goto LAB_019d4e0c;
LAB_019d5c40:
  if ((long)param_2 - (long)plVar16 <= (long)plVar16 - (long)param_1) {
    FUN_019d4de0(plVar16 + 1,param_2);
    param_2 = plVar16;
    goto LAB_019d4e04;
  }
  FUN_019d4de0(param_1,plVar16);
  plVar12 = plVar16 + 1;
  goto LAB_019d4e0c;
LAB_019d5728:
  *(undefined8 *)(lVar10 + 0x18) = 0;
  (**(code **)(*plVar15 + 0x20))(plVar15);
  plVar15 = plVar16 + 1;
  if (!bVar4) {
LAB_019d522c:
    do {
      while( true ) {
        plVar14 = plVar14 + -1;
        plVar15 = (long *)*plVar14;
        if (plVar15 != (long *)0x0) {
          lVar10 = plVar15[0xb];
          if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) goto LAB_019d61b8;
          if (*(long *)(lVar10 + 0x10) == 0) {
            uVar7 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
            *(undefined8 *)(lVar10 + 0x10) = uVar7;
          }
          piVar1 = (int *)(lVar10 + 0xc);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = *piVar1 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        plVar17 = (long *)*plVar12;
        if (plVar17 == (long *)0x0) {
          bVar4 = _DAT_00000080 < *(float *)(plVar15 + 0x10);
        }
        else {
          lVar10 = plVar17[0xb];
          if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) goto LAB_019d61b8;
          if (*(long *)(lVar10 + 0x10) == 0) {
            uVar7 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
            *(undefined8 *)(lVar10 + 0x10) = uVar7;
          }
          piVar1 = (int *)(lVar10 + 0xc);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = *piVar1 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          lVar10 = plVar17[0xb];
          piVar1 = (int *)(lVar10 + 0xc);
          bVar4 = *(float *)(plVar17 + 0x10) < *(float *)(plVar15 + 0x10);
          do {
            iVar2 = *piVar1;
            cVar3 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = iVar2 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar2 + -1 == 0) {
            *(undefined8 *)(lVar10 + 0x18) = 0;
            (**(code **)(*plVar17 + 0x20))(plVar17);
          }
        }
        lVar10 = plVar15[0xb];
        piVar1 = (int *)(lVar10 + 0xc);
        do {
          iVar2 = *piVar1;
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar2 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar2 + -1 == 0) break;
        if (bVar4) goto LAB_019d5300;
      }
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*plVar15 + 0x20))(plVar15);
    } while (!bVar4);
LAB_019d5300:
    if (plVar16 <= plVar14) {
      lVar13 = *plVar16;
      *plVar16 = 0;
      lVar10 = *plVar14;
      *plVar14 = 0;
      *plVar16 = lVar10;
      plVar15 = (long *)*plVar14;
      *plVar14 = 0;
      if (plVar15 != (long *)0x0) {
        lVar10 = plVar15[0xb];
        piVar1 = (int *)(lVar10 + 0xc);
        do {
          iVar2 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar2 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar2 + -1 == 0) {
          *(undefined8 *)(lVar10 + 0x18) = 0;
          (**(code **)(*plVar15 + 0x20))();
        }
      }
      *plVar14 = lVar13;
      iVar6 = iVar6 + 1;
      plVar15 = plVar14;
      if (plVar12 != plVar16) {
        plVar15 = plVar12;
      }
      plVar12 = plVar15;
      plVar15 = plVar16 + 1;
      goto LAB_019d5158;
    }
    goto LAB_019d5338;
  }
  goto LAB_019d5158;
code_r0x019d543c:
  param_2 = plVar16;
  if ((uVar9 & 1) != 0) {
    return;
  }
  goto LAB_019d4e04;
joined_r0x019d54dc:
  if (plVar11 == param_2) {
switchD_019d4e34_caseD_0:
    return;
  }
  plVar14 = (long *)*plVar11;
  if (plVar14 != (long *)0x0) {
    lVar10 = plVar14[0xb];
    if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) goto LAB_019d61b8;
    if (*(long *)(lVar10 + 0x10) == 0) {
      uVar7 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
      *(undefined8 *)(lVar10 + 0x10) = uVar7;
    }
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar16 = (long *)*plVar12;
  if (plVar16 == (long *)0x0) {
    bVar4 = _DAT_00000080 < *(float *)(plVar14 + 0x10);
  }
  else {
    lVar10 = plVar16[0xb];
    if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) {
LAB_019d61b8:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar10 + 0x10) == 0) {
      uVar7 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
      *(undefined8 *)(lVar10 + 0x10) = uVar7;
    }
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    lVar10 = plVar16[0xb];
    piVar1 = (int *)(lVar10 + 0xc);
    bVar4 = *(float *)(plVar16 + 0x10) < *(float *)(plVar14 + 0x10);
    do {
      iVar6 = *piVar1;
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 + -1 == 0) {
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*plVar16 + 0x20))(plVar16);
    }
  }
  lVar10 = plVar14[0xb];
  piVar1 = (int *)(lVar10 + 0xc);
  do {
    iVar6 = *piVar1;
    cVar3 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar5) {
      *piVar1 = iVar6 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar6 + -1 == 0) {
    *(undefined8 *)(lVar10 + 0x18) = 0;
    (**(code **)(*plVar14 + 0x20))(plVar14);
  }
  if (bVar4) {
    plVar15 = (long *)*plVar11;
    plVar16 = (long *)0x0;
    *plVar11 = 0;
    plVar14 = plVar11;
    if (plVar15 == (long *)0x0) {
      while( true ) {
        plVar17 = plVar12;
        *plVar14 = 0;
        if (plVar16 != (long *)0x0) {
          lVar10 = plVar16[0xb];
          piVar1 = (int *)(lVar10 + 0xc);
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
            *(undefined8 *)(lVar10 + 0x18) = 0;
            (**(code **)(*plVar16 + 0x20))();
          }
        }
        lVar10 = *plVar17;
        *plVar17 = 0;
        *plVar14 = lVar10;
        if (plVar17 == param_1) goto LAB_019d5ff4;
        plVar12 = (long *)plVar17[-1];
        if (plVar12 == (long *)0x0) {
          bVar4 = false;
        }
        else {
          lVar10 = plVar12[0xb];
          if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) goto LAB_019d61b8;
          if (*(long *)(lVar10 + 0x10) == 0) {
            uVar7 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
            *(undefined8 *)(lVar10 + 0x10) = uVar7;
          }
          piVar1 = (int *)(lVar10 + 0xc);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = *piVar1 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          lVar10 = plVar12[0xb];
          piVar1 = (int *)(lVar10 + 0xc);
          bVar4 = *(float *)(plVar12 + 0x10) < _DAT_00000080;
          do {
            iVar6 = *piVar1;
            cVar3 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = iVar6 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar6 + -1 == 0) {
            *(undefined8 *)(lVar10 + 0x18) = 0;
            (**(code **)(*plVar12 + 0x20))(plVar12);
          }
        }
        lVar10 = _DAT_00000058;
        piVar1 = (int *)(_DAT_00000058 + 0xc);
        do {
          iVar6 = *piVar1;
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar6 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar6 + -1 == 0) {
          *(undefined8 *)(lVar10 + 0x18) = 0;
          (**(code **)(lRam0000000000000000 + 0x20))(0);
        }
        if (!bVar4) break;
        plVar16 = (long *)*plVar17;
        plVar12 = plVar17 + -1;
        plVar14 = plVar17;
      }
    }
    else {
      *plVar11 = 0;
      while( true ) {
        plVar17 = plVar12;
        lVar10 = *plVar17;
        *plVar17 = 0;
        *plVar14 = lVar10;
        if (plVar17 == param_1) break;
        lVar10 = plVar15[0xb];
        if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) goto LAB_019d61b8;
        if (*(long *)(lVar10 + 0x10) == 0) {
          uVar7 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
          *(undefined8 *)(lVar10 + 0x10) = uVar7;
        }
        piVar1 = (int *)(lVar10 + 0xc);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = *piVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        plVar12 = plVar17 + -1;
        plVar14 = (long *)*plVar12;
        if (plVar14 == (long *)0x0) {
          bVar4 = _DAT_00000080 < *(float *)(plVar15 + 0x10);
        }
        else {
          lVar10 = plVar14[0xb];
          if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) goto LAB_019d61b8;
          if (*(long *)(lVar10 + 0x10) == 0) {
            uVar7 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
            *(undefined8 *)(lVar10 + 0x10) = uVar7;
          }
          piVar1 = (int *)(lVar10 + 0xc);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = *piVar1 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          lVar10 = plVar14[0xb];
          piVar1 = (int *)(lVar10 + 0xc);
          bVar4 = *(float *)(plVar14 + 0x10) < *(float *)(plVar15 + 0x10);
          do {
            iVar6 = *piVar1;
            cVar3 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = iVar6 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar6 + -1 == 0) {
            *(undefined8 *)(lVar10 + 0x18) = 0;
            (**(code **)(*plVar14 + 0x20))(plVar14);
          }
        }
        lVar10 = plVar15[0xb];
        piVar1 = (int *)(lVar10 + 0xc);
        do {
          iVar6 = *piVar1;
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar6 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar6 + -1 == 0) {
          *(undefined8 *)(lVar10 + 0x18) = 0;
          (**(code **)(*plVar15 + 0x20))(plVar15);
        }
        if (!bVar4) goto LAB_019d56f8;
        plVar16 = (long *)*plVar17;
        *plVar17 = 0;
        plVar14 = plVar17;
        if (plVar16 != (long *)0x0) {
          lVar10 = plVar16[0xb];
          piVar1 = (int *)(lVar10 + 0xc);
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
            *(undefined8 *)(lVar10 + 0x18) = 0;
            (**(code **)(*plVar16 + 0x20))();
          }
        }
      }
LAB_019d5ff4:
      plVar17 = param_1;
    }
LAB_019d56f8:
    plVar12 = (long *)*plVar17;
    *plVar17 = 0;
    if (plVar12 != (long *)0x0) {
      lVar10 = plVar12[0xb];
      piVar1 = (int *)(lVar10 + 0xc);
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
        *(undefined8 *)(lVar10 + 0x18) = 0;
        (**(code **)(*plVar12 + 0x20))();
      }
    }
    *plVar17 = (long)plVar15;
  }
  plVar12 = plVar11;
  plVar11 = plVar11 + 1;
  goto joined_r0x019d54dc;
}


