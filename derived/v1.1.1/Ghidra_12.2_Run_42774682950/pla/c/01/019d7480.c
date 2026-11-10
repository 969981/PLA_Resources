/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 019d7480; name: FUN_019d7480
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_019d7480(long *param_1,long *param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  long *plVar14;
  int iVar15;
  
  switch((long)param_2 - (long)param_1 >> 3) {
  case 0:
  case 1:
    break;
  case 2:
    plVar11 = (long *)param_2[-1];
    if (plVar11 != (long *)0x0) {
      lVar13 = plVar11[0xb];
      if (*(undefined8 **)(lVar13 + 0x18) == (undefined8 *)0x0) goto LAB_019d79e8;
      if (*(long *)(lVar13 + 0x10) == 0) {
        uVar6 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
        *(undefined8 *)(lVar13 + 0x10) = uVar6;
      }
      piVar1 = (int *)(lVar13 + 0xc);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    plVar10 = (long *)*param_1;
    if (plVar10 == (long *)0x0) {
      bVar4 = _DAT_00000080 < *(float *)(plVar11 + 0x10);
    }
    else {
      lVar13 = plVar10[0xb];
      if (*(undefined8 **)(lVar13 + 0x18) == (undefined8 *)0x0) {
LAB_019d79e8:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      if (*(long *)(lVar13 + 0x10) == 0) {
        uVar6 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
        *(undefined8 *)(lVar13 + 0x10) = uVar6;
      }
      piVar1 = (int *)(lVar13 + 0xc);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      lVar13 = plVar10[0xb];
      piVar1 = (int *)(lVar13 + 0xc);
      bVar4 = *(float *)(plVar10 + 0x10) < *(float *)(plVar11 + 0x10);
      do {
        iVar15 = *piVar1;
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar15 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar15 + -1 == 0) {
        *(undefined8 *)(lVar13 + 0x18) = 0;
        (**(code **)(*plVar10 + 0x20))(plVar10);
      }
    }
    lVar13 = plVar11[0xb];
    piVar1 = (int *)(lVar13 + 0xc);
    do {
      iVar15 = *piVar1;
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar15 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar15 + -1 == 0) {
      *(undefined8 *)(lVar13 + 0x18) = 0;
      (**(code **)(*plVar11 + 0x20))(plVar11);
    }
    if (bVar4) {
      lVar8 = *param_1;
      *param_1 = 0;
      lVar13 = param_2[-1];
      param_2[-1] = 0;
      *param_1 = lVar13;
      plVar11 = (long *)param_2[-1];
      param_2[-1] = 0;
      if (plVar11 != (long *)0x0) {
        lVar13 = plVar11[0xb];
        piVar1 = (int *)(lVar13 + 0xc);
        do {
          iVar15 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar15 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar15 + -1 == 0) {
          *(undefined8 *)(lVar13 + 0x18) = 0;
          (**(code **)(*plVar11 + 0x20))();
        }
      }
      param_2[-1] = lVar8;
    }
    break;
  case 3:
    FUN_019d6200(param_1,param_1 + 1,param_2 + -1);
    break;
  case 4:
    FUN_019d6980(param_1,param_1 + 1,param_1 + 2,param_2 + -1);
    break;
  case 5:
    FUN_019d6e40(param_1,param_1 + 1,param_1 + 2,param_1 + 3,param_2 + -1);
    break;
  default:
    FUN_019d6200(param_1,param_1 + 1,param_1 + 2);
    if (param_1 + 3 != param_2) {
      iVar15 = 0;
      plVar11 = param_1 + 3;
      plVar10 = param_1 + 2;
      do {
        plVar7 = plVar11;
        plVar11 = (long *)*plVar7;
        if (plVar11 != (long *)0x0) {
          lVar13 = plVar11[0xb];
          if (*(undefined8 **)(lVar13 + 0x18) == (undefined8 *)0x0) goto LAB_019d79e8;
          if (*(long *)(lVar13 + 0x10) == 0) {
            uVar6 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
            *(undefined8 *)(lVar13 + 0x10) = uVar6;
          }
          piVar1 = (int *)(lVar13 + 0xc);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = *piVar1 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        plVar14 = (long *)*plVar10;
        if (plVar14 == (long *)0x0) {
          bVar4 = _DAT_00000080 < *(float *)(plVar11 + 0x10);
        }
        else {
          lVar13 = plVar14[0xb];
          if (*(undefined8 **)(lVar13 + 0x18) == (undefined8 *)0x0) goto LAB_019d79e8;
          if (*(long *)(lVar13 + 0x10) == 0) {
            uVar6 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
            *(undefined8 *)(lVar13 + 0x10) = uVar6;
          }
          piVar1 = (int *)(lVar13 + 0xc);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = *piVar1 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          lVar13 = plVar14[0xb];
          piVar1 = (int *)(lVar13 + 0xc);
          bVar4 = *(float *)(plVar14 + 0x10) < *(float *)(plVar11 + 0x10);
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
            *(undefined8 *)(lVar13 + 0x18) = 0;
            (**(code **)(*plVar14 + 0x20))(plVar14);
          }
        }
        lVar13 = plVar11[0xb];
        piVar1 = (int *)(lVar13 + 0xc);
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
          *(undefined8 *)(lVar13 + 0x18) = 0;
          (**(code **)(*plVar11 + 0x20))(plVar11);
        }
        if (bVar4) {
          plVar12 = (long *)*plVar7;
          plVar14 = (long *)0x0;
          *plVar7 = 0;
          plVar11 = plVar7;
          if (plVar12 == (long *)0x0) {
            *plVar7 = 0;
            while( true ) {
              plVar9 = plVar10;
              lVar13 = *plVar9;
              *plVar9 = 0;
              *plVar11 = lVar13;
              if (plVar9 == param_1) break;
              plVar10 = plVar9 + -1;
              plVar11 = (long *)*plVar10;
              if (plVar11 == (long *)0x0) {
                bVar4 = false;
              }
              else {
                lVar13 = plVar11[0xb];
                if (*(undefined8 **)(lVar13 + 0x18) == (undefined8 *)0x0) goto LAB_019d79e8;
                if (*(long *)(lVar13 + 0x10) == 0) {
                  uVar6 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
                  *(undefined8 *)(lVar13 + 0x10) = uVar6;
                }
                piVar1 = (int *)(lVar13 + 0xc);
                do {
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar4) {
                    *piVar1 = *piVar1 + 1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                lVar13 = plVar11[0xb];
                piVar1 = (int *)(lVar13 + 0xc);
                bVar4 = *(float *)(plVar11 + 0x10) < _DAT_00000080;
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
                  *(undefined8 *)(lVar13 + 0x18) = 0;
                  (**(code **)(*plVar11 + 0x20))(plVar11);
                }
              }
              lVar13 = _DAT_00000058;
              piVar1 = (int *)(_DAT_00000058 + 0xc);
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
                *(undefined8 *)(lVar13 + 0x18) = 0;
                (**(code **)(lRam0000000000000000 + 0x20))(0);
              }
              if (!bVar4) goto LAB_019d7a04;
              plVar14 = (long *)*plVar9;
              *plVar9 = 0;
              plVar11 = plVar9;
              if (plVar14 != (long *)0x0) {
                lVar13 = plVar14[0xb];
                piVar1 = (int *)(lVar13 + 0xc);
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
                  *(undefined8 *)(lVar13 + 0x18) = 0;
                  (**(code **)(*plVar14 + 0x20))();
                }
              }
            }
LAB_019d7a00:
            plVar9 = param_1;
          }
          else {
            while( true ) {
              plVar9 = plVar10;
              *plVar11 = 0;
              if (plVar14 != (long *)0x0) {
                lVar13 = plVar14[0xb];
                piVar1 = (int *)(lVar13 + 0xc);
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
                  *(undefined8 *)(lVar13 + 0x18) = 0;
                  (**(code **)(*plVar14 + 0x20))();
                }
              }
              lVar13 = *plVar9;
              *plVar9 = 0;
              *plVar11 = lVar13;
              if (plVar9 == param_1) goto LAB_019d7a00;
              lVar13 = plVar12[0xb];
              if (*(undefined8 **)(lVar13 + 0x18) == (undefined8 *)0x0) goto LAB_019d79e8;
              if (*(long *)(lVar13 + 0x10) == 0) {
                uVar6 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
                *(undefined8 *)(lVar13 + 0x10) = uVar6;
              }
              piVar1 = (int *)(lVar13 + 0xc);
              do {
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar4) {
                  *piVar1 = *piVar1 + 1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              plVar11 = (long *)plVar9[-1];
              if (plVar11 == (long *)0x0) {
                bVar4 = _DAT_00000080 < *(float *)(plVar12 + 0x10);
              }
              else {
                lVar13 = plVar11[0xb];
                if (*(undefined8 **)(lVar13 + 0x18) == (undefined8 *)0x0) goto LAB_019d79e8;
                if (*(long *)(lVar13 + 0x10) == 0) {
                  uVar6 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
                  *(undefined8 *)(lVar13 + 0x10) = uVar6;
                }
                piVar1 = (int *)(lVar13 + 0xc);
                do {
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar4) {
                    *piVar1 = *piVar1 + 1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                lVar13 = plVar11[0xb];
                piVar1 = (int *)(lVar13 + 0xc);
                bVar4 = *(float *)(plVar11 + 0x10) < *(float *)(plVar12 + 0x10);
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
                  *(undefined8 *)(lVar13 + 0x18) = 0;
                  (**(code **)(*plVar11 + 0x20))(plVar11);
                }
              }
              lVar13 = plVar12[0xb];
              piVar1 = (int *)(lVar13 + 0xc);
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
                *(undefined8 *)(lVar13 + 0x18) = 0;
                (**(code **)(*plVar12 + 0x20))(plVar12);
              }
              if (!bVar4) break;
              plVar14 = (long *)*plVar9;
              plVar10 = plVar9 + -1;
              plVar11 = plVar9;
            }
          }
LAB_019d7a04:
          plVar11 = (long *)*plVar9;
          *plVar9 = 0;
          if (plVar11 != (long *)0x0) {
            lVar13 = plVar11[0xb];
            piVar1 = (int *)(lVar13 + 0xc);
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
              *(undefined8 *)(lVar13 + 0x18) = 0;
              (**(code **)(*plVar11 + 0x20))();
            }
          }
          iVar15 = iVar15 + 1;
          *plVar9 = (long)plVar12;
          if (iVar15 == 8) {
            return plVar7 + 1 == param_2;
          }
        }
        plVar11 = plVar7 + 1;
        plVar10 = plVar7;
        if (plVar7 + 1 == param_2) {
          return true;
        }
      } while( true );
    }
  }
  return true;
}


