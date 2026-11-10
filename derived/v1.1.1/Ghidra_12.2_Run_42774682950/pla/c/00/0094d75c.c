/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0094d75c; name: FUN_0094d75c
 */


void FUN_0094d75c(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined8 uVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  code *pcVar11;
  long lVar12;
  long lVar13;
  undefined8 local_88;
  undefined8 local_80;
  char *pcStack_78;
  undefined8 local_70;
  long *local_68;
  
  FUN_0094e3c4(&local_80,*(undefined8 *)(param_1 + 8));
  plVar5 = *(long **)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0x90) = 0;
  if (plVar5 != (long *)0x0) {
    lVar10 = plVar5[0xb];
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
      (**(code **)(*plVar5 + 0x20))();
    }
  }
  *(undefined8 *)(param_1 + 0x90) = local_80;
  FUN_0094e43c(&local_80,*(undefined8 *)(param_1 + 8));
  plVar5 = *(long **)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = 0;
  if (plVar5 != (long *)0x0) {
    lVar10 = plVar5[0xb];
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
      (**(code **)(*plVar5 + 0x20))();
    }
  }
  *(undefined8 *)(param_1 + 0x50) = local_80;
  local_80 = 0;
  plVar5 = (long *)FUN_00957dc4(&local_88,*(undefined8 *)(param_1 + 8),&local_80);
  plVar5[0x3c] = plVar5[0x3c] | 8;
  if (plVar5 != (long *)0x0) {
    lVar10 = plVar5[0xb];
    if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) goto LAB_0094e3b4;
    if (*(long *)(lVar10 + 0x10) == 0) {
      uVar6 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
      *(undefined8 *)(lVar10 + 0x10) = uVar6;
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
  pcVar11 = (code *)plVar5[0x75];
  if (pcVar11 != (code *)0x0) {
    plVar5[0x76] = 0;
    plVar5[0x77] = 0;
    plVar5[0x74] = 0;
    plVar5[0x75] = 0;
    (*pcVar11)(plVar5 + 0x78);
  }
  lVar10 = plVar5[0xb];
  plVar5[0x78] = param_1;
  plVar5[0x79] = (long)&LAB_0094e4c0;
  plVar5[0x7a] = 0;
  plVar5[0x74] = (long)&LAB_00958458;
  plVar5[0x75] = (long)&LAB_00958474;
  plVar5[0x76] = (long)&LAB_00958478;
  plVar5[0x77] = (long)&LAB_0095848c;
  if (*(undefined8 **)(lVar10 + 0x18) != (undefined8 *)0x0) {
    if (*(long *)(lVar10 + 0x10) == 0) {
      uVar6 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
      *(undefined8 *)(lVar10 + 0x10) = uVar6;
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
    plVar7 = *(long **)(param_1 + 0x58);
    *(long **)(param_1 + 0x58) = plVar5;
    if (plVar7 != (long *)0x0) {
      lVar10 = plVar7[0xb];
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
        (**(code **)(*plVar7 + 0x20))();
      }
    }
    local_80 = 0x8c8e5b37998a65c;
    pcStack_78 = "BattleDirector_PreUpdate";
    local_70 = 0x18;
    local_68 = (long *)0x0;
    (**(code **)(**(long **)(param_1 + 0x58) + 0x50))(*(long **)(param_1 + 0x58),&local_80);
    if (local_68 != (long *)0x0) {
      (**(code **)(*local_68 + 0x20))();
    }
    plVar7 = (long *)FUN_009584a0(&local_80,*(undefined8 *)(param_1 + 8));
    plVar7[0x3c] = plVar7[0x3c] | 8;
    if (plVar7 != (long *)0x0) {
      lVar10 = plVar7[0xb];
      if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) goto LAB_0094e3b4;
      if (*(long *)(lVar10 + 0x10) == 0) {
        uVar6 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
        *(undefined8 *)(lVar10 + 0x10) = uVar6;
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
    plVar8 = *(long **)(param_1 + 0x68);
    *(undefined8 *)(param_1 + 0x68) = 0;
    if (plVar8 != (long *)0x0) {
      lVar10 = plVar8[0xb];
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
        (**(code **)(*plVar8 + 0x20))();
      }
    }
    *(long **)(param_1 + 0x68) = plVar7;
    local_80 = 0x1d25386e12c2f626;
    pcStack_78 = "BattleDirector_PreUpdate_Parallel";
    local_70 = 0x21;
    local_68 = (long *)0x0;
    (**(code **)(*plVar7 + 0x50))(plVar7,&local_80);
    if (local_68 != (long *)0x0) {
      (**(code **)(*local_68 + 0x20))();
    }
    plVar7 = (long *)FUN_009584a0(&local_80,*(undefined8 *)(param_1 + 8));
    plVar7[0x3c] = plVar7[0x3c] | 8;
    if (plVar7 != (long *)0x0) {
      lVar10 = plVar7[0xb];
      if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) goto LAB_0094e3b4;
      if (*(long *)(lVar10 + 0x10) == 0) {
        uVar6 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
        *(undefined8 *)(lVar10 + 0x10) = uVar6;
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
    plVar8 = *(long **)(param_1 + 0x78);
    *(undefined8 *)(param_1 + 0x78) = 0;
    if (plVar8 != (long *)0x0) {
      lVar10 = plVar8[0xb];
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
        (**(code **)(*plVar8 + 0x20))();
      }
    }
    *(long **)(param_1 + 0x78) = plVar7;
    local_80 = 0x7b7fa4245907c1a8;
    pcStack_78 = "BattleDirector_PreUpdate_GameObject";
    local_70 = 0x23;
    local_68 = (long *)0x0;
    (**(code **)(*plVar7 + 0x50))(plVar7,&local_80);
    if (local_68 != (long *)0x0) {
      (**(code **)(*local_68 + 0x20))();
    }
    lVar13 = *(long *)(param_1 + 0x58);
    lVar10 = nn::os::GetCurrentThread();
    plVar7 = (long *)(lVar13 + 0x208);
    do {
      if (*plVar7 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(lVar13 + 0x1fc));
          while (*plVar7 == 0) {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar4) {
              *plVar7 = lVar10;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') goto LAB_0094db3c;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *plVar7 = lVar10;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
LAB_0094db3c:
    lVar12 = *(long *)(param_1 + 0x68);
    lVar10 = lVar12;
    if (*(long *)(lVar12 + 0x1d0) != 0) {
      lVar10 = *(long *)(lVar12 + 0x1d0);
    }
    if (*(long *)(lVar12 + 0x1d8) != 0) {
      lVar12 = *(long *)(lVar12 + 0x1d8);
    }
    if (lVar10 != lVar12) {
      FUN_02a70230(lVar13);
      *(undefined8 *)(lVar13 + 0x208) = 0;
      nn::os::SignalLightEvent((LightEventType *)(lVar13 + 0x1fc));
      lVar13 = *(long *)(param_1 + 0x78);
      lVar10 = nn::os::GetCurrentThread();
      plVar7 = (long *)(lVar13 + 0x208);
      do {
        if (*plVar7 != 0) {
          ClearExclusiveLocal();
          do {
            nn::os::WaitLightEvent((LightEventType *)(lVar13 + 0x1fc));
            while (*plVar7 == 0) {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
              if (bVar4) {
                *plVar7 = lVar10;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 == '\0') goto LAB_0094dbc0;
            }
            ClearExclusiveLocal();
          } while( true );
        }
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar4) {
          *plVar7 = lVar10;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
LAB_0094dbc0:
      lVar12 = *(long *)(param_1 + 0x68);
      lVar10 = lVar12;
      if (*(long *)(lVar12 + 0x1d0) != 0) {
        lVar10 = *(long *)(lVar12 + 0x1d0);
      }
      if (*(long *)(lVar12 + 0x1d8) != 0) {
        lVar12 = *(long *)(lVar12 + 0x1d8);
      }
      if (lVar10 != lVar12) {
        FUN_02a70230(lVar13);
        FUN_02a70468(lVar13,*(undefined8 *)(param_1 + 0x58),0);
        *(undefined8 *)(lVar13 + 0x208) = 0;
        nn::os::SignalLightEvent((LightEventType *)(lVar13 + 0x1fc));
        lVar13 = *(long *)(*(long *)(param_1 + 0x50) + 0x68);
        lVar10 = nn::os::GetCurrentThread();
        plVar7 = (long *)(lVar13 + 0x208);
        do {
          if (*plVar7 != 0) {
            ClearExclusiveLocal();
            do {
              nn::os::WaitLightEvent((LightEventType *)(lVar13 + 0x1fc));
              while (*plVar7 == 0) {
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
                if (bVar4) {
                  *plVar7 = lVar10;
                  cVar3 = ExclusiveMonitorsStatus();
                }
                if (cVar3 == '\0') goto LAB_0094dc58;
              }
              ClearExclusiveLocal();
            } while( true );
          }
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar4) {
            *plVar7 = lVar10;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
LAB_0094dc58:
        lVar12 = *(long *)(param_1 + 0x78);
        lVar10 = lVar12;
        if (*(long *)(lVar12 + 0x1d0) != 0) {
          lVar10 = *(long *)(lVar12 + 0x1d0);
        }
        if (*(long *)(lVar12 + 0x1d8) != 0) {
          lVar12 = *(long *)(lVar12 + 0x1d8);
        }
        if (lVar10 != lVar12) {
          FUN_02a70230(lVar13);
          *(undefined8 *)(lVar13 + 0x208) = 0;
          nn::os::SignalLightEvent((LightEventType *)(lVar13 + 0x1fc));
          local_80 = 0;
          plVar7 = (long *)FUN_00957dc4(&local_88,*(undefined8 *)(param_1 + 8),&local_80);
          plVar7[0x3c] = plVar7[0x3c] | 8;
          if (plVar7 != (long *)0x0) {
            lVar10 = plVar7[0xb];
            if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) goto LAB_0094e3b4;
            if (*(long *)(lVar10 + 0x10) == 0) {
              uVar6 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
              *(undefined8 *)(lVar10 + 0x10) = uVar6;
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
          pcVar11 = (code *)plVar7[0x75];
          if (pcVar11 != (code *)0x0) {
            plVar7[0x76] = 0;
            plVar7[0x77] = 0;
            plVar7[0x74] = 0;
            plVar7[0x75] = 0;
            (*pcVar11)(plVar7 + 0x78);
          }
          lVar10 = plVar7[0xb];
          plVar7[0x78] = param_1;
          plVar7[0x79] = (long)FUN_0094f544;
          plVar7[0x7a] = 0;
          plVar7[0x74] = (long)&LAB_00958458;
          plVar7[0x75] = (long)&LAB_00958474;
          plVar7[0x76] = (long)&LAB_00958478;
          plVar7[0x77] = (long)&LAB_0095848c;
          if (*(undefined8 **)(lVar10 + 0x18) != (undefined8 *)0x0) {
            if (*(long *)(lVar10 + 0x10) == 0) {
              uVar6 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
              *(undefined8 *)(lVar10 + 0x10) = uVar6;
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
            plVar8 = *(long **)(param_1 + 0x60);
            *(long **)(param_1 + 0x60) = plVar7;
            if (plVar8 != (long *)0x0) {
              lVar10 = plVar8[0xb];
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
                (**(code **)(*plVar8 + 0x20))();
              }
            }
            local_80 = 0x14672183854dfd07;
            pcStack_78 = "BattleDirector_PostUpdate";
            local_70 = 0x19;
            local_68 = (long *)0x0;
            (**(code **)(**(long **)(param_1 + 0x60) + 0x50))(*(long **)(param_1 + 0x60),&local_80);
            if (local_68 != (long *)0x0) {
              (**(code **)(*local_68 + 0x20))();
            }
            plVar8 = (long *)FUN_009584a0(&local_80,*(undefined8 *)(param_1 + 8));
            plVar8[0x3c] = plVar8[0x3c] | 8;
            if (plVar8 != (long *)0x0) {
              lVar10 = plVar8[0xb];
              if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) goto LAB_0094e3b4;
              if (*(long *)(lVar10 + 0x10) == 0) {
                uVar6 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
                *(undefined8 *)(lVar10 + 0x10) = uVar6;
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
            plVar9 = *(long **)(param_1 + 0x70);
            *(undefined8 *)(param_1 + 0x70) = 0;
            if (plVar9 != (long *)0x0) {
              lVar10 = plVar9[0xb];
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
                (**(code **)(*plVar9 + 0x20))();
              }
            }
            *(long **)(param_1 + 0x70) = plVar8;
            local_80 = 0x44eab4af43d430d7;
            pcStack_78 = "BattleDirector_PostUpdate_Parallel";
            local_70 = 0x22;
            local_68 = (long *)0x0;
            (**(code **)(*plVar8 + 0x50))(plVar8,&local_80);
            if (local_68 != (long *)0x0) {
              (**(code **)(*local_68 + 0x20))();
            }
            plVar8 = (long *)FUN_009584a0(&local_80,*(undefined8 *)(param_1 + 8));
            plVar8[0x3c] = plVar8[0x3c] | 8;
            if (plVar8 != (long *)0x0) {
              lVar10 = plVar8[0xb];
              if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) goto LAB_0094e3b4;
              if (*(long *)(lVar10 + 0x10) == 0) {
                uVar6 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
                *(undefined8 *)(lVar10 + 0x10) = uVar6;
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
            plVar9 = *(long **)(param_1 + 0x80);
            *(undefined8 *)(param_1 + 0x80) = 0;
            if (plVar9 != (long *)0x0) {
              lVar10 = plVar9[0xb];
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
                (**(code **)(*plVar9 + 0x20))();
              }
            }
            *(long **)(param_1 + 0x80) = plVar8;
            local_80 = 0xf3a40fd00c5c82f1;
            pcStack_78 = "BattleDirector_PostUpdate_GameObject";
            local_70 = 0x24;
            local_68 = (long *)0x0;
            (**(code **)(*plVar8 + 0x50))(plVar8,&local_80);
            if (local_68 != (long *)0x0) {
              (**(code **)(*local_68 + 0x20))();
            }
            lVar13 = *(long *)(param_1 + 0x60);
            lVar10 = nn::os::GetCurrentThread();
            plVar8 = (long *)(lVar13 + 0x208);
            do {
              if (*plVar8 != 0) {
                ClearExclusiveLocal();
                do {
                  nn::os::WaitLightEvent((LightEventType *)(lVar13 + 0x1fc));
                  while (*plVar8 == 0) {
                    cVar3 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
                    if (bVar4) {
                      *plVar8 = lVar10;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                    if (cVar3 == '\0') goto LAB_0094dfb4;
                  }
                  ClearExclusiveLocal();
                } while( true );
              }
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
              if (bVar4) {
                *plVar8 = lVar10;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
LAB_0094dfb4:
            lVar12 = *(long *)(param_1 + 0x70);
            lVar10 = lVar12;
            if (*(long *)(lVar12 + 0x1d0) != 0) {
              lVar10 = *(long *)(lVar12 + 0x1d0);
            }
            if (*(long *)(lVar12 + 0x1d8) != 0) {
              lVar12 = *(long *)(lVar12 + 0x1d8);
            }
            if (lVar10 != lVar12) {
              FUN_02a70230(lVar13);
              *(undefined8 *)(lVar13 + 0x208) = 0;
              nn::os::SignalLightEvent((LightEventType *)(lVar13 + 0x1fc));
              lVar13 = *(long *)(param_1 + 0x80);
              lVar10 = nn::os::GetCurrentThread();
              plVar8 = (long *)(lVar13 + 0x208);
              do {
                if (*plVar8 != 0) {
                  ClearExclusiveLocal();
                  do {
                    nn::os::WaitLightEvent((LightEventType *)(lVar13 + 0x1fc));
                    while (*plVar8 == 0) {
                      cVar3 = '\x01';
                      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
                      if (bVar4) {
                        *plVar8 = lVar10;
                        cVar3 = ExclusiveMonitorsStatus();
                      }
                      if (cVar3 == '\0') goto LAB_0094e038;
                    }
                    ClearExclusiveLocal();
                  } while( true );
                }
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
                if (bVar4) {
                  *plVar8 = lVar10;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
LAB_0094e038:
              lVar12 = *(long *)(param_1 + 0x70);
              lVar10 = lVar12;
              if (*(long *)(lVar12 + 0x1d0) != 0) {
                lVar10 = *(long *)(lVar12 + 0x1d0);
              }
              if (*(long *)(lVar12 + 0x1d8) != 0) {
                lVar12 = *(long *)(lVar12 + 0x1d8);
              }
              if (lVar10 != lVar12) {
                FUN_02a70230(lVar13);
                FUN_02a70468(lVar13,*(undefined8 *)(param_1 + 0x60),0);
                *(undefined8 *)(lVar13 + 0x208) = 0;
                nn::os::SignalLightEvent((LightEventType *)(lVar13 + 0x1fc));
                lVar13 = *(long *)(*(long *)(param_1 + 0x50) + 0x70);
                lVar10 = nn::os::GetCurrentThread();
                plVar8 = (long *)(lVar13 + 0x208);
                do {
                  if (*plVar8 != 0) {
                    ClearExclusiveLocal();
                    do {
                      nn::os::WaitLightEvent((LightEventType *)(lVar13 + 0x1fc));
                      while (*plVar8 == 0) {
                        cVar3 = '\x01';
                        bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
                        if (bVar4) {
                          *plVar8 = lVar10;
                          cVar3 = ExclusiveMonitorsStatus();
                        }
                        if (cVar3 == '\0') goto LAB_0094e0d0;
                      }
                      ClearExclusiveLocal();
                    } while( true );
                  }
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
                  if (bVar4) {
                    *plVar8 = lVar10;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
LAB_0094e0d0:
                lVar12 = *(long *)(param_1 + 0x80);
                lVar10 = lVar12;
                if (*(long *)(lVar12 + 0x1d0) != 0) {
                  lVar10 = *(long *)(lVar12 + 0x1d0);
                }
                if (*(long *)(lVar12 + 0x1d8) != 0) {
                  lVar12 = *(long *)(lVar12 + 0x1d8);
                }
                if (lVar10 != lVar12) {
                  FUN_02a70230(lVar13);
                  *(undefined8 *)(lVar13 + 0x208) = 0;
                  nn::os::SignalLightEvent((LightEventType *)(lVar13 + 0x1fc));
                  (**(code **)(**(long **)(param_1 + 0x70) + 0x40))(*(long **)(param_1 + 0x70),0);
                  (**(code **)(**(long **)(param_1 + 0x68) + 0x40))(*(long **)(param_1 + 0x68),0);
                  local_80 = *(undefined8 *)(param_1 + 8);
                  lVar10 = FUN_00958c08(local_80,&local_80);
                  if (lVar10 != 0) {
                    piVar1 = (int *)(lVar10 + 0x50);
                    do {
                      cVar3 = '\x01';
                      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                      if (bVar4) {
                        *piVar1 = *piVar1 + 1;
                        cVar3 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar3 != '\0');
                  }
                  plVar8 = *(long **)(param_1 + 0xb8);
                  *(undefined8 *)(param_1 + 0xb8) = 0;
                  if (plVar8 != (long *)0x0) {
                    plVar9 = plVar8 + 10;
                    do {
                      iVar2 = (int)*plVar9 + -1;
                      cVar3 = '\x01';
                      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
                      if (bVar4) {
                        *(int *)plVar9 = iVar2;
                        cVar3 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar3 != '\0');
                    if (iVar2 == 0) {
                      (**(code **)(*plVar8 + 0x10))();
                    }
                  }
                  local_88 = *(undefined8 *)(param_1 + 8);
                  *(long *)(param_1 + 0xb8) = lVar10;
                  FUN_0094f5b8(&local_80,local_88,&local_88);
                  plVar8 = *(long **)(param_1 + 0x88);
                  *(undefined8 *)(param_1 + 0x88) = 0;
                  if (plVar8 != (long *)0x0) {
                    lVar10 = plVar8[0xb];
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
                      (**(code **)(*plVar8 + 0x20))();
                    }
                  }
                  *(undefined8 *)(param_1 + 0x88) = local_80;
                  FUN_0094f630(&local_80,*(undefined8 *)(param_1 + 8));
                  plVar8 = *(long **)(param_1 + 0xc0);
                  *(undefined8 *)(param_1 + 0xc0) = 0;
                  if (plVar8 != (long *)0x0) {
                    lVar10 = plVar8[0xb];
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
                      (**(code **)(*plVar8 + 0x20))();
                    }
                  }
                  *(undefined8 *)(param_1 + 0xc0) = local_80;
                  if (plVar7 != (long *)0x0) {
                    lVar10 = plVar7[0xb];
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
                      (**(code **)(*plVar7 + 0x20))(plVar7);
                    }
                  }
                  if (plVar5 != (long *)0x0) {
                    lVar10 = plVar5[0xb];
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
                      (**(code **)(*plVar5 + 0x20))(plVar5);
                    }
                  }
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_0094e3b4:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",0);
}


