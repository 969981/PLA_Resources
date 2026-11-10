/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 018501fc; name: FUN_018501fc
 */


undefined8 FUN_018501fc(long param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *local_38;
  
  if (param_2 != 3) {
    if (param_2 == 2) {
      lVar7 = *(long *)(param_1 + 400);
      for (lVar8 = *(long *)(lVar7 + 8); lVar8 != lVar7; lVar8 = *(long *)(lVar8 + 8)) {
        FUN_009c69bc(&local_38,*(undefined8 *)(lVar8 + 0x10));
        if (local_38 != (long *)0x0) {
          lVar6 = local_38[0xb];
          piVar1 = (int *)(lVar6 + 0xc);
          lVar5 = local_38[0x62];
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
            *(undefined8 *)(lVar6 + 0x18) = 0;
            (**(code **)(*local_38 + 0x20))();
          }
          if ((int)lVar5 == 0) {
            return 1;
          }
        }
      }
      lVar8 = *(long *)(param_1 + 0x1b0);
      lVar7 = *(long *)(lVar8 + 8);
      if (lVar7 != lVar8) {
        do {
          FUN_009c69bc(&local_38,*(undefined8 *)(lVar7 + 0x10));
          if (local_38 != (long *)0x0) {
            lVar6 = local_38[0xb];
            piVar1 = (int *)(lVar6 + 0xc);
            lVar5 = local_38[0x62];
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
              *(undefined8 *)(lVar6 + 0x18) = 0;
              (**(code **)(*local_38 + 0x20))();
            }
            if ((int)lVar5 == 0) {
              return 1;
            }
          }
          lVar7 = *(long *)(lVar7 + 8);
          if (lVar7 == lVar8) {
            return 0;
          }
        } while( true );
      }
    }
    else if (param_2 < 2) {
      lVar7 = *(long *)(param_1 + 0x170);
      for (lVar8 = *(long *)(lVar7 + 8); lVar8 != lVar7; lVar8 = *(long *)(lVar8 + 8)) {
        FUN_009c69bc(&local_38,*(undefined8 *)(lVar8 + 0x10));
        if (local_38 != (long *)0x0) {
          lVar6 = local_38[0xb];
          piVar1 = (int *)(lVar6 + 0xc);
          lVar5 = local_38[0x62];
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
            *(undefined8 *)(lVar6 + 0x18) = 0;
            (**(code **)(*local_38 + 0x20))();
          }
          if ((int)lVar5 == 0) {
            return 1;
          }
        }
      }
      lVar7 = *(long *)(param_1 + 400);
      for (lVar8 = *(long *)(lVar7 + 8); lVar8 != lVar7; lVar8 = *(long *)(lVar8 + 8)) {
        FUN_009c69bc(&local_38,*(undefined8 *)(lVar8 + 0x10));
        if (local_38 != (long *)0x0) {
          lVar6 = local_38[0xb];
          piVar1 = (int *)(lVar6 + 0xc);
          lVar5 = local_38[0x62];
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
            *(undefined8 *)(lVar6 + 0x18) = 0;
            (**(code **)(*local_38 + 0x20))();
          }
          if ((int)lVar5 == 0) {
            return 1;
          }
        }
      }
      lVar7 = *(long *)(param_1 + 0x1b0);
      for (lVar8 = *(long *)(lVar7 + 8); lVar8 != lVar7; lVar8 = *(long *)(lVar8 + 8)) {
        FUN_009c69bc(&local_38,*(undefined8 *)(lVar8 + 0x10));
        if (local_38 != (long *)0x0) {
          lVar6 = local_38[0xb];
          piVar1 = (int *)(lVar6 + 0xc);
          lVar5 = local_38[0x62];
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
            *(undefined8 *)(lVar6 + 0x18) = 0;
            (**(code **)(*local_38 + 0x20))();
          }
          if ((int)lVar5 == 0) {
            return 1;
          }
        }
      }
      lVar7 = *(long *)(param_1 + 0x1d0);
      for (lVar8 = *(long *)(lVar7 + 8); lVar8 != lVar7; lVar8 = *(long *)(lVar8 + 8)) {
        FUN_009c69bc(&local_38,*(undefined8 *)(lVar8 + 0x10));
        if (local_38 != (long *)0x0) {
          lVar6 = local_38[0xb];
          piVar1 = (int *)(lVar6 + 0xc);
          lVar5 = local_38[0x62];
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
            *(undefined8 *)(lVar6 + 0x18) = 0;
            (**(code **)(*local_38 + 0x20))();
          }
          if ((int)lVar5 == 0) {
            return 1;
          }
        }
      }
      lVar7 = *(long *)(param_1 + 0x1f0);
      for (lVar8 = *(long *)(lVar7 + 8); lVar8 != lVar7; lVar8 = *(long *)(lVar8 + 8)) {
        FUN_009c69bc(&local_38,*(undefined8 *)(lVar8 + 0x10));
        if (local_38 != (long *)0x0) {
          lVar6 = local_38[0xb];
          piVar1 = (int *)(lVar6 + 0xc);
          lVar5 = local_38[0x62];
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
            *(undefined8 *)(lVar6 + 0x18) = 0;
            (**(code **)(*local_38 + 0x20))();
          }
          if ((int)lVar5 == 0) {
            return 1;
          }
        }
      }
      lVar7 = *(long *)(param_1 + 0x210);
      for (lVar8 = *(long *)(lVar7 + 8); lVar8 != lVar7; lVar8 = *(long *)(lVar8 + 8)) {
        FUN_009c69bc(&local_38,*(undefined8 *)(lVar8 + 0x10));
        if (local_38 != (long *)0x0) {
          lVar6 = local_38[0xb];
          piVar1 = (int *)(lVar6 + 0xc);
          lVar5 = local_38[0x62];
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
            *(undefined8 *)(lVar6 + 0x18) = 0;
            (**(code **)(*local_38 + 0x20))();
          }
          if ((int)lVar5 == 0) {
            return 1;
          }
        }
      }
      lVar7 = *(long *)(param_1 + 0x230);
      for (lVar8 = *(long *)(lVar7 + 8); lVar8 != lVar7; lVar8 = *(long *)(lVar8 + 8)) {
        FUN_009c69bc(&local_38,*(undefined8 *)(lVar8 + 0x10));
        if (local_38 != (long *)0x0) {
          lVar6 = local_38[0xb];
          piVar1 = (int *)(lVar6 + 0xc);
          lVar5 = local_38[0x62];
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
            *(undefined8 *)(lVar6 + 0x18) = 0;
            (**(code **)(*local_38 + 0x20))();
          }
          if ((int)lVar5 == 0) {
            return 1;
          }
        }
      }
      lVar8 = *(long *)(param_1 + 0x250);
      lVar7 = *(long *)(lVar8 + 8);
      if (lVar7 != lVar8) {
        do {
          FUN_009c69bc(&local_38,*(undefined8 *)(lVar7 + 0x10));
          if (local_38 != (long *)0x0) {
            lVar6 = local_38[0xb];
            piVar1 = (int *)(lVar6 + 0xc);
            lVar5 = local_38[0x62];
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
              *(undefined8 *)(lVar6 + 0x18) = 0;
              (**(code **)(*local_38 + 0x20))();
            }
            if ((int)lVar5 == 0) {
              return 1;
            }
          }
          lVar7 = *(long *)(lVar7 + 8);
          if (lVar7 == lVar8) {
            return 0;
          }
        } while( true );
      }
    }
    else {
      lVar7 = *(long *)(param_1 + 0x170);
      for (lVar8 = *(long *)(lVar7 + 8); lVar8 != lVar7; lVar8 = *(long *)(lVar8 + 8)) {
        FUN_009c69bc(&local_38,*(undefined8 *)(lVar8 + 0x10));
        if (local_38 != (long *)0x0) {
          lVar6 = local_38[0xb];
          piVar1 = (int *)(lVar6 + 0xc);
          lVar5 = local_38[0x62];
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
            *(undefined8 *)(lVar6 + 0x18) = 0;
            (**(code **)(*local_38 + 0x20))();
          }
          if ((int)lVar5 == 0) {
            return 1;
          }
        }
      }
      lVar7 = *(long *)(param_1 + 400);
      for (lVar8 = *(long *)(lVar7 + 8); lVar8 != lVar7; lVar8 = *(long *)(lVar8 + 8)) {
        FUN_009c69bc(&local_38,*(undefined8 *)(lVar8 + 0x10));
        if (local_38 != (long *)0x0) {
          lVar6 = local_38[0xb];
          piVar1 = (int *)(lVar6 + 0xc);
          lVar5 = local_38[0x62];
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
            *(undefined8 *)(lVar6 + 0x18) = 0;
            (**(code **)(*local_38 + 0x20))();
          }
          if ((int)lVar5 == 0) {
            return 1;
          }
        }
      }
      lVar7 = *(long *)(param_1 + 0x1b0);
      for (lVar8 = *(long *)(lVar7 + 8); lVar8 != lVar7; lVar8 = *(long *)(lVar8 + 8)) {
        FUN_009c69bc(&local_38,*(undefined8 *)(lVar8 + 0x10));
        if (local_38 != (long *)0x0) {
          lVar6 = local_38[0xb];
          piVar1 = (int *)(lVar6 + 0xc);
          lVar5 = local_38[0x62];
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
            *(undefined8 *)(lVar6 + 0x18) = 0;
            (**(code **)(*local_38 + 0x20))();
          }
          if ((int)lVar5 == 0) {
            return 1;
          }
        }
      }
      lVar7 = *(long *)(param_1 + 0x1d0);
      for (lVar8 = *(long *)(lVar7 + 8); lVar8 != lVar7; lVar8 = *(long *)(lVar8 + 8)) {
        FUN_009c69bc(&local_38,*(undefined8 *)(lVar8 + 0x10));
        if (local_38 != (long *)0x0) {
          lVar6 = local_38[0xb];
          piVar1 = (int *)(lVar6 + 0xc);
          lVar5 = local_38[0x62];
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
            *(undefined8 *)(lVar6 + 0x18) = 0;
            (**(code **)(*local_38 + 0x20))();
          }
          if ((int)lVar5 == 0) {
            return 1;
          }
        }
      }
      lVar7 = *(long *)(param_1 + 0x1f0);
      for (lVar8 = *(long *)(lVar7 + 8); lVar8 != lVar7; lVar8 = *(long *)(lVar8 + 8)) {
        FUN_009c69bc(&local_38,*(undefined8 *)(lVar8 + 0x10));
        if (local_38 != (long *)0x0) {
          lVar6 = local_38[0xb];
          piVar1 = (int *)(lVar6 + 0xc);
          lVar5 = local_38[0x62];
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
            *(undefined8 *)(lVar6 + 0x18) = 0;
            (**(code **)(*local_38 + 0x20))();
          }
          if ((int)lVar5 == 0) {
            return 1;
          }
        }
      }
      lVar7 = *(long *)(param_1 + 0x210);
      for (lVar8 = *(long *)(lVar7 + 8); lVar8 != lVar7; lVar8 = *(long *)(lVar8 + 8)) {
        FUN_009c69bc(&local_38,*(undefined8 *)(lVar8 + 0x10));
        if (local_38 != (long *)0x0) {
          lVar6 = local_38[0xb];
          piVar1 = (int *)(lVar6 + 0xc);
          lVar5 = local_38[0x62];
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
            *(undefined8 *)(lVar6 + 0x18) = 0;
            (**(code **)(*local_38 + 0x20))();
          }
          if ((int)lVar5 == 0) {
            return 1;
          }
        }
      }
      lVar7 = *(long *)(param_1 + 0x230);
      for (lVar8 = *(long *)(lVar7 + 8); lVar8 != lVar7; lVar8 = *(long *)(lVar8 + 8)) {
        FUN_009c69bc(&local_38,*(undefined8 *)(lVar8 + 0x10));
        if (local_38 != (long *)0x0) {
          lVar6 = local_38[0xb];
          piVar1 = (int *)(lVar6 + 0xc);
          lVar5 = local_38[0x62];
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
            *(undefined8 *)(lVar6 + 0x18) = 0;
            (**(code **)(*local_38 + 0x20))();
          }
          if ((int)lVar5 == 0) {
            return 1;
          }
        }
      }
      lVar8 = *(long *)(param_1 + 0x250);
      lVar7 = *(long *)(lVar8 + 8);
      if (lVar7 != lVar8) {
        do {
          FUN_009c69bc(&local_38,*(undefined8 *)(lVar7 + 0x10));
          if (local_38 != (long *)0x0) {
            lVar6 = local_38[0xb];
            piVar1 = (int *)(lVar6 + 0xc);
            lVar5 = local_38[0x62];
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
              *(undefined8 *)(lVar6 + 0x18) = 0;
              (**(code **)(*local_38 + 0x20))();
            }
            if ((int)lVar5 == 0) {
              return 1;
            }
          }
          lVar7 = *(long *)(lVar7 + 8);
          if (lVar7 == lVar8) {
            return 0;
          }
        } while( true );
      }
    }
  }
  return 0;
}


