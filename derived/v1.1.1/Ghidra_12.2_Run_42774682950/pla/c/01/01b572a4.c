/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b572a4; name: FUN_01b572a4
 */


bool FUN_01b572a4(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *local_48;
  
  plVar9 = *(long **)(param_1 + 0x430);
  plVar7 = *(long **)(param_1 + 0x438);
  if (plVar7 != plVar9) {
LAB_01b57428:
    do {
      while (*(char *)(*plVar9 + 0x103) != '\0') {
        plVar9 = plVar9 + 1;
LAB_01b575f8:
        plVar7 = *(long **)(param_1 + 0x438);
        if (plVar7 == plVar9) goto LAB_01b572d0;
      }
      uVar5 = FUN_01b577c4(plVar9);
      plVar7 = plVar9;
      if ((uVar5 & 1) == 0) {
        if ((*(long *)(*plVar9 + 0xf0) != 0) &&
           (FUN_00b911c4(&local_48), plVar6 = local_48, local_48 != (long *)0x0)) {
          uVar5 = FUN_01ba0290(local_48);
          if (((uVar5 & 1) == 0) && (uVar5 = FUN_01ba01a8(plVar6), (uVar5 & 1) == 0)) {
            FUN_01ba0a50(plVar6);
            FUN_01b57bc8(param_1 + 0x3f8,plVar9);
            plVar13 = *(long **)(param_1 + 0x438);
            plVar7 = plVar9 + 1;
            plVar10 = plVar9;
            plVar11 = plVar9;
            if (plVar7 == plVar13) {
LAB_01b576f4:
              plVar7 = plVar7 + -1;
              plVar10 = (long *)*plVar7;
              if (plVar10 != (long *)0x0) {
                lVar8 = plVar10[0xb];
                piVar1 = (int *)(lVar8 + 0xc);
                do {
                  iVar2 = *piVar1;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar4) {
                    *piVar1 = iVar2 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (iVar2 + -1 == 0) goto LAB_01b57744;
              }
LAB_01b57718:
              if (plVar7 != plVar11) {
                while( true ) {
                  plVar7 = plVar7 + -1;
                  plVar10 = (long *)*plVar7;
                  if (plVar10 == (long *)0x0) break;
                  lVar8 = plVar10[0xb];
                  piVar1 = (int *)(lVar8 + 0xc);
                  do {
                    iVar2 = *piVar1;
                    cVar3 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar4) {
                      *piVar1 = iVar2 + -1;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                  if (iVar2 + -1 != 0) break;
LAB_01b57744:
                  *(undefined8 *)(lVar8 + 0x18) = 0;
                  (**(code **)(*plVar10 + 0x20))();
                  if (plVar7 == plVar11) goto LAB_01b577a8;
                }
                goto LAB_01b57718;
              }
            }
            else {
              do {
                plVar11 = (long *)*plVar10;
                *plVar10 = 0;
                if (plVar11 != (long *)0x0) {
                  lVar8 = plVar11[0xb];
                  piVar1 = (int *)(lVar8 + 0xc);
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
                    *(undefined8 *)(lVar8 + 0x18) = 0;
                    (**(code **)(*plVar11 + 0x20))();
                  }
                }
                lVar8 = *plVar7;
                plVar12 = plVar7 + 1;
                *plVar7 = 0;
                plVar11 = plVar10 + 1;
                *plVar10 = lVar8;
                plVar10 = plVar11;
                plVar7 = plVar12;
              } while (plVar12 != plVar13);
              plVar7 = *(long **)(param_1 + 0x438);
              if (plVar7 != plVar11) goto LAB_01b576f4;
            }
LAB_01b577a8:
            *(long **)(param_1 + 0x438) = plVar11;
          }
          else {
            plVar9 = plVar9 + 1;
          }
          lVar8 = plVar6[0xb];
          piVar1 = (int *)(lVar8 + 0xc);
          do {
            iVar2 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar2 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar2 + -1 != 0) goto LAB_01b575f8;
          *(undefined8 *)(lVar8 + 0x18) = 0;
          (**(code **)(*plVar6 + 0x20))(plVar6);
          plVar7 = *(long **)(param_1 + 0x438);
          if (plVar7 == plVar9) break;
          goto LAB_01b57428;
        }
        plVar11 = *(long **)(param_1 + 0x438);
        plVar6 = plVar9 + 1;
        plVar10 = plVar9;
        if (plVar6 == plVar11) {
LAB_01b574f0:
          plVar6 = plVar6 + -1;
          plVar10 = (long *)*plVar6;
          if (plVar10 != (long *)0x0) {
            lVar8 = plVar10[0xb];
            piVar1 = (int *)(lVar8 + 0xc);
            do {
              iVar2 = *piVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar2 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar2 + -1 == 0) goto LAB_01b575cc;
          }
LAB_01b574f8:
          if (plVar6 != plVar7) {
            while( true ) {
              plVar6 = plVar6 + -1;
              plVar10 = (long *)*plVar6;
              if (plVar10 == (long *)0x0) break;
              lVar8 = plVar10[0xb];
              piVar1 = (int *)(lVar8 + 0xc);
              do {
                iVar2 = *piVar1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar4) {
                  *piVar1 = iVar2 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar2 + -1 != 0) break;
LAB_01b575cc:
              *(undefined8 *)(lVar8 + 0x18) = 0;
              (**(code **)(*plVar10 + 0x20))();
              if (plVar6 == plVar7) goto LAB_01b57528;
            }
            goto LAB_01b574f8;
          }
        }
        else {
          do {
            plVar7 = (long *)*plVar10;
            *plVar10 = 0;
            if (plVar7 != (long *)0x0) {
              lVar8 = plVar7[0xb];
              piVar1 = (int *)(lVar8 + 0xc);
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
                *(undefined8 *)(lVar8 + 0x18) = 0;
                (**(code **)(*plVar7 + 0x20))();
              }
            }
            lVar8 = *plVar6;
            plVar13 = plVar6 + 1;
            *plVar6 = 0;
            plVar7 = plVar10 + 1;
            *plVar10 = lVar8;
            plVar10 = plVar7;
            plVar6 = plVar13;
          } while (plVar13 != plVar11);
          plVar6 = *(long **)(param_1 + 0x438);
          if (plVar6 != plVar7) goto LAB_01b574f0;
        }
LAB_01b57528:
        *(long **)(param_1 + 0x438) = plVar7;
      }
      else {
        plVar11 = *(long **)(param_1 + 0x438);
        plVar6 = plVar9 + 1;
        plVar10 = plVar9;
        if (plVar6 == plVar11) {
LAB_01b57454:
          plVar6 = plVar6 + -1;
          plVar10 = (long *)*plVar6;
          if (plVar10 != (long *)0x0) {
            lVar8 = plVar10[0xb];
            piVar1 = (int *)(lVar8 + 0xc);
            do {
              iVar2 = *piVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar2 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar2 + -1 == 0) goto LAB_01b57618;
          }
LAB_01b57478:
          if (plVar6 != plVar7) {
            while( true ) {
              plVar6 = plVar6 + -1;
              plVar10 = (long *)*plVar6;
              if (plVar10 == (long *)0x0) break;
              lVar8 = plVar10[0xb];
              piVar1 = (int *)(lVar8 + 0xc);
              do {
                iVar2 = *piVar1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar4) {
                  *piVar1 = iVar2 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar2 + -1 != 0) break;
LAB_01b57618:
              *(undefined8 *)(lVar8 + 0x18) = 0;
              (**(code **)(*plVar10 + 0x20))();
              if (plVar6 == plVar7) goto LAB_01b574bc;
            }
            goto LAB_01b57478;
          }
        }
        else {
          do {
            plVar7 = (long *)*plVar10;
            *plVar10 = 0;
            if (plVar7 != (long *)0x0) {
              lVar8 = plVar7[0xb];
              piVar1 = (int *)(lVar8 + 0xc);
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
                *(undefined8 *)(lVar8 + 0x18) = 0;
                (**(code **)(*plVar7 + 0x20))();
              }
            }
            lVar8 = *plVar6;
            plVar13 = plVar6 + 1;
            *plVar6 = 0;
            plVar7 = plVar10 + 1;
            *plVar10 = lVar8;
            plVar10 = plVar7;
            plVar6 = plVar13;
          } while (plVar13 != plVar11);
          plVar6 = *(long **)(param_1 + 0x438);
          if (plVar6 != plVar7) goto LAB_01b57454;
        }
LAB_01b574bc:
        *(long **)(param_1 + 0x438) = plVar7;
      }
    } while (plVar7 != plVar9);
  }
LAB_01b572d0:
  plVar9 = *(long **)(param_1 + 0x3f8);
  if (*(long **)(param_1 + 0x400) != plVar9) {
    do {
      while (uVar5 = FUN_01b577c4(plVar9), (uVar5 & 1) == 0) {
        plVar10 = *(long **)(param_1 + 0x400);
        plVar9 = plVar9 + 1;
        if (plVar10 == plVar9) goto LAB_01b57320;
      }
      plVar11 = *(long **)(param_1 + 0x400);
      plVar7 = plVar9 + 1;
      plVar6 = plVar9;
      plVar10 = plVar9;
      if (plVar7 == plVar11) {
LAB_01b57350:
        plVar7 = plVar7 + -1;
        plVar6 = (long *)*plVar7;
        if (plVar6 != (long *)0x0) {
          lVar8 = plVar6[0xb];
          piVar1 = (int *)(lVar8 + 0xc);
          do {
            iVar2 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar2 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar2 + -1 == 0) goto LAB_01b573a0;
        }
LAB_01b57374:
        if (plVar7 != plVar10) {
          while( true ) {
            plVar7 = plVar7 + -1;
            plVar6 = (long *)*plVar7;
            if (plVar6 == (long *)0x0) break;
            lVar8 = plVar6[0xb];
            piVar1 = (int *)(lVar8 + 0xc);
            do {
              iVar2 = *piVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar2 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar2 + -1 != 0) break;
LAB_01b573a0:
            *(undefined8 *)(lVar8 + 0x18) = 0;
            (**(code **)(*plVar6 + 0x20))();
            if (plVar7 == plVar10) goto LAB_01b57404;
          }
          goto LAB_01b57374;
        }
      }
      else {
        do {
          plVar10 = (long *)*plVar6;
          *plVar6 = 0;
          if (plVar10 != (long *)0x0) {
            lVar8 = plVar10[0xb];
            piVar1 = (int *)(lVar8 + 0xc);
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
              *(undefined8 *)(lVar8 + 0x18) = 0;
              (**(code **)(*plVar10 + 0x20))();
            }
          }
          lVar8 = *plVar7;
          plVar13 = plVar7 + 1;
          *plVar7 = 0;
          plVar10 = plVar6 + 1;
          *plVar6 = lVar8;
          plVar6 = plVar10;
          plVar7 = plVar13;
        } while (plVar13 != plVar11);
        plVar7 = *(long **)(param_1 + 0x400);
        if (plVar7 != plVar10) goto LAB_01b57350;
      }
LAB_01b57404:
      *(long **)(param_1 + 0x400) = plVar10;
    } while (plVar10 != plVar9);
LAB_01b57320:
    if (*(long **)(param_1 + 0x3f8) != plVar10) {
      return false;
    }
    plVar7 = *(long **)(param_1 + 0x438);
  }
  return *(long **)(param_1 + 0x430) == plVar7;
}


