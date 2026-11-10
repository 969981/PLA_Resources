/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0192ce14; name: FUN_0192ce14
 */


void FUN_0192ce14(undefined1 *param_1,long *param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  undefined8 uVar10;
  long *plVar11;
  long lVar12;
  long *local_70;
  long *local_68;
  long *local_60;
  long *local_58;
  long *local_48;
  
  if ((*param_2 == 0) || (FUN_01934508(&local_48), local_48 == (long *)0x0)) {
    *param_1 = 0;
  }
  else {
    if (param_2[2] == 0) {
      local_58 = (long *)0x0;
      *param_1 = 0;
    }
    else {
      FUN_00ca554c(&local_58);
      if (local_58 == (long *)0x0) {
        *param_1 = 0;
      }
      else {
        if (param_2[4] == 0) {
          local_60 = (long *)0x0;
          *param_1 = 0;
        }
        else {
          FUN_0193467c(&local_60);
          if (local_60 == (long *)0x0) {
            *param_1 = 0;
          }
          else {
            if (param_2[6] == 0) {
              local_68 = (long *)0x0;
              *param_1 = 0;
            }
            else {
              FUN_018c8968(&local_68);
              if (local_68 == (long *)0x0) {
                *param_1 = 0;
              }
              else {
                if (param_2[8] == 0) {
                  local_70 = (long *)0x0;
                  *param_1 = 0;
                }
                else {
                  FUN_0193471c(&local_70);
                  plVar9 = local_48;
                  if (local_70 == (long *)0x0) {
                    *param_1 = 0;
                  }
                  else {
                    if (local_48 != (long *)0x0) {
                      lVar12 = local_48[0xb];
                      if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) goto LAB_0192d1c8;
                      if (*(long *)(lVar12 + 0x10) == 0) {
                        uVar10 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
                        *(undefined8 *)(lVar12 + 0x10) = uVar10;
                      }
                      piVar1 = (int *)(lVar12 + 0xc);
                      do {
                        cVar3 = '\x01';
                        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                        if (bVar4) {
                          *piVar1 = *piVar1 + 1;
                          cVar3 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar3 != '\0');
                    }
                    plVar8 = local_58;
                    if (local_58 != (long *)0x0) {
                      lVar12 = local_58[0xb];
                      if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) goto LAB_0192d1c8;
                      if (*(long *)(lVar12 + 0x10) == 0) {
                        uVar10 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
                        *(undefined8 *)(lVar12 + 0x10) = uVar10;
                      }
                      piVar1 = (int *)(lVar12 + 0xc);
                      do {
                        cVar3 = '\x01';
                        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                        if (bVar4) {
                          *piVar1 = *piVar1 + 1;
                          cVar3 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar3 != '\0');
                    }
                    plVar7 = local_60;
                    if (local_60 != (long *)0x0) {
                      lVar12 = local_60[0xb];
                      if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) goto LAB_0192d1c8;
                      if (*(long *)(lVar12 + 0x10) == 0) {
                        uVar10 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
                        *(undefined8 *)(lVar12 + 0x10) = uVar10;
                      }
                      piVar1 = (int *)(lVar12 + 0xc);
                      do {
                        cVar3 = '\x01';
                        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                        if (bVar4) {
                          *piVar1 = *piVar1 + 1;
                          cVar3 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar3 != '\0');
                    }
                    plVar6 = local_68;
                    if (local_68 != (long *)0x0) {
                      lVar12 = local_68[0xb];
                      if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) goto LAB_0192d1c8;
                      if (*(long *)(lVar12 + 0x10) == 0) {
                        uVar10 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
                        *(undefined8 *)(lVar12 + 0x10) = uVar10;
                      }
                      piVar1 = (int *)(lVar12 + 0xc);
                      do {
                        cVar3 = '\x01';
                        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                        if (bVar4) {
                          *piVar1 = *piVar1 + 1;
                          cVar3 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar3 != '\0');
                    }
                    plVar5 = local_70;
                    if (local_70 == (long *)0x0) {
                      plVar11 = (long *)0x0;
                    }
                    else {
                      lVar12 = local_70[0xb];
                      if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) {
LAB_0192d1c8:
                    /* WARNING: Subroutine does not return */
                        nn::diag::detail::AbortImpl("","","",0);
                      }
                      if (*(long *)(lVar12 + 0x10) == 0) {
                        uVar10 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
                        *(undefined8 *)(lVar12 + 0x10) = uVar10;
                      }
                      piVar1 = (int *)(lVar12 + 0xc);
                      do {
                        cVar3 = '\x01';
                        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                        if (bVar4) {
                          *piVar1 = *piVar1 + 1;
                          cVar3 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar3 != '\0');
                      plVar11 = local_70;
                    }
                    *(long **)(param_1 + 8) = plVar9;
                    *(long **)(param_1 + 0x10) = plVar8;
                    *(long **)(param_1 + 0x28) = plVar5;
                    *param_1 = 1;
                    *(long **)(param_1 + 0x18) = plVar7;
                    *(long **)(param_1 + 0x20) = plVar6;
                    if (plVar11 != (long *)0x0) {
                      lVar12 = plVar11[0xb];
                      piVar1 = (int *)(lVar12 + 0xc);
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
                        *(undefined8 *)(lVar12 + 0x18) = 0;
                        (**(code **)(*plVar11 + 0x20))();
                      }
                    }
                  }
                }
                if (local_68 != (long *)0x0) {
                  lVar12 = local_68[0xb];
                  piVar1 = (int *)(lVar12 + 0xc);
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
                    *(undefined8 *)(lVar12 + 0x18) = 0;
                    (**(code **)(*local_68 + 0x20))();
                  }
                }
              }
            }
            if (local_60 != (long *)0x0) {
              lVar12 = local_60[0xb];
              piVar1 = (int *)(lVar12 + 0xc);
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
                *(undefined8 *)(lVar12 + 0x18) = 0;
                (**(code **)(*local_60 + 0x20))();
              }
            }
          }
        }
        if (local_58 != (long *)0x0) {
          lVar12 = local_58[0xb];
          piVar1 = (int *)(lVar12 + 0xc);
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
            *(undefined8 *)(lVar12 + 0x18) = 0;
            (**(code **)(*local_58 + 0x20))();
          }
        }
      }
    }
    if (local_48 != (long *)0x0) {
      lVar12 = local_48[0xb];
      piVar1 = (int *)(lVar12 + 0xc);
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
        *(undefined8 *)(lVar12 + 0x18) = 0;
        (**(code **)(*local_48 + 0x20))();
      }
    }
  }
  return;
}


