/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010e0644; name: FUN_010e0644
 */


undefined8
FUN_010e0644(long param_1,undefined8 *param_2,undefined8 *param_3,uint *param_4,int *param_5)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  ulong uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  long *plVar14;
  long *plVar15;
  long *local_70;
  long *local_68;
  
  if (*(long *)(param_1 + 0x54668) != 0) {
    bVar4 = *(byte *)(*(long *)(param_1 + 0x54668) + 0x4a8);
    uVar13 = (uint)bVar4;
    if (bVar4 == 0x20) {
      iVar9 = FUN_010e630c();
      uVar13 = iVar9 + 0x1d;
      if (uVar13 != 0) goto LAB_010e069c;
    }
    else if (bVar4 != 0) {
LAB_010e069c:
      uVar11 = *param_4;
      uVar12 = 0;
LAB_010e06a8:
      plVar14 = (long *)*param_2;
      if (uVar13 <= uVar11) {
        uVar11 = 0;
      }
      if (plVar14 != (long *)0x0) {
        plVar15 = plVar14 + 10;
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar6) {
            *(int *)plVar15 = (int)*plVar15 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      plVar15 = (long *)*param_3;
      if (plVar15 != (long *)0x0) {
        plVar1 = plVar15 + 10;
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *(int *)plVar1 = (int)*plVar1 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      plVar1 = plVar14 + 10;
      plVar2 = plVar15 + 10;
      iVar9 = 0;
      if (plVar14 == (long *)0x0) {
        do {
          local_68 = (long *)0x0;
          if (plVar15 == (long *)0x0) {
            local_70 = plVar15;
            uVar10 = FUN_010e0f6c(param_1,&local_68,&local_70,uVar11,iVar9);
          }
          else {
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar6) {
                *(int *)plVar2 = (int)*plVar2 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            local_70 = plVar15;
            uVar10 = FUN_010e0f6c(param_1,&local_68,&local_70,uVar11,iVar9);
            if (plVar15 != (long *)0x0) {
              plVar3 = plVar15 + 10;
              do {
                iVar8 = (int)*plVar3 + -1;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
                if (bVar6) {
                  *(int *)plVar3 = iVar8;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (iVar8 == 0) {
                (**(code **)(*plVar15 + 0x10))(plVar15);
              }
            }
            if (local_68 != (long *)0x0) {
              plVar3 = local_68 + 10;
              do {
                iVar8 = (int)*plVar3 + -1;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
                if (bVar6) {
                  *(int *)plVar3 = iVar8;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (iVar8 == 0) {
                (**(code **)(*local_68 + 0x10))();
              }
            }
          }
          if ((uVar10 & 1) != 0) goto LAB_010e07cc;
          iVar9 = iVar9 + 1;
          bVar6 = false;
        } while (iVar9 != 0x1e);
      }
      else {
        do {
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar6) {
              *(int *)plVar1 = (int)*plVar1 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          local_68 = plVar14;
          if (plVar15 == (long *)0x0) {
            local_70 = plVar15;
            uVar10 = FUN_010e0f6c(param_1,&local_68,&local_70,uVar11,iVar9);
            uVar10 = uVar10 & 0xffffffff;
          }
          else {
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar6) {
                *(int *)plVar2 = (int)*plVar2 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            local_70 = plVar15;
            uVar10 = FUN_010e0f6c(param_1,&local_68,&local_70,uVar11,iVar9);
            uVar10 = uVar10 & 0xffffffff;
            if (plVar15 != (long *)0x0) {
              plVar3 = plVar15 + 10;
              do {
                iVar8 = (int)*plVar3 + -1;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
                if (bVar6) {
                  *(int *)plVar3 = iVar8;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (iVar8 == 0) {
                (**(code **)(*plVar15 + 0x10))(plVar15);
              }
            }
          }
          if (local_68 != (long *)0x0) {
            plVar3 = local_68 + 10;
            do {
              iVar8 = (int)*plVar3 + -1;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
              if (bVar6) {
                *(int *)plVar3 = iVar8;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar8 == 0) {
              (**(code **)(*local_68 + 0x10))();
            }
          }
          if ((uVar10 & 1) != 0) goto LAB_010e07cc;
          iVar9 = iVar9 + 1;
        } while (iVar9 != 0x1e);
        bVar6 = false;
      }
      goto joined_r0x010e07dc;
    }
LAB_010e095c:
    iVar9 = FUN_010e630c();
    if (uVar13 < iVar9 + 0x1dU) {
LAB_010e096c:
      plVar14 = (long *)*param_2;
      if (plVar14 != (long *)0x0) {
        plVar15 = plVar14 + 10;
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar6) {
            *(int *)plVar15 = (int)*plVar15 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      plVar15 = (long *)*param_3;
      if (plVar15 != (long *)0x0) {
        plVar1 = plVar15 + 10;
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *(int *)plVar1 = (int)*plVar1 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      plVar1 = plVar14 + 10;
      plVar2 = plVar15 + 10;
      iVar9 = 0;
      if (plVar14 == (long *)0x0) {
        do {
          local_68 = (long *)0x0;
          if (plVar15 == (long *)0x0) {
            local_70 = plVar15;
            uVar10 = FUN_010e0f6c(param_1,&local_68,&local_70,uVar13,iVar9);
          }
          else {
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar6) {
                *(int *)plVar2 = (int)*plVar2 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            local_70 = plVar15;
            uVar10 = FUN_010e0f6c(param_1,&local_68,&local_70,uVar13,iVar9);
            if (plVar15 != (long *)0x0) {
              plVar3 = plVar15 + 10;
              do {
                iVar8 = (int)*plVar3 + -1;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
                if (bVar6) {
                  *(int *)plVar3 = iVar8;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (iVar8 == 0) {
                (**(code **)(*plVar15 + 0x10))(plVar15);
              }
            }
            if (local_68 != (long *)0x0) {
              plVar3 = local_68 + 10;
              do {
                iVar8 = (int)*plVar3 + -1;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
                if (bVar6) {
                  *(int *)plVar3 = iVar8;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (iVar8 == 0) {
                (**(code **)(*local_68 + 0x10))();
              }
            }
          }
          if ((uVar10 & 1) != 0) goto LAB_010e0b34;
          iVar9 = iVar9 + 1;
          bVar6 = false;
        } while (iVar9 != 0x1e);
      }
      else {
        do {
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar6) {
              *(int *)plVar1 = (int)*plVar1 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          local_68 = plVar14;
          if (plVar15 == (long *)0x0) {
            local_70 = plVar15;
            uVar10 = FUN_010e0f6c(param_1,&local_68,&local_70,uVar13,iVar9);
            uVar10 = uVar10 & 0xffffffff;
          }
          else {
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar6) {
                *(int *)plVar2 = (int)*plVar2 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            local_70 = plVar15;
            uVar10 = FUN_010e0f6c(param_1,&local_68,&local_70,uVar13,iVar9);
            uVar10 = uVar10 & 0xffffffff;
            if (plVar15 != (long *)0x0) {
              plVar3 = plVar15 + 10;
              do {
                iVar8 = (int)*plVar3 + -1;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
                if (bVar6) {
                  *(int *)plVar3 = iVar8;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (iVar8 == 0) {
                (**(code **)(*plVar15 + 0x10))(plVar15);
              }
            }
          }
          if (local_68 != (long *)0x0) {
            plVar3 = local_68 + 10;
            do {
              iVar8 = (int)*plVar3 + -1;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
              if (bVar6) {
                *(int *)plVar3 = iVar8;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar8 == 0) {
              (**(code **)(*local_68 + 0x10))();
            }
          }
          if ((uVar10 & 1) != 0) goto LAB_010e0b34;
          iVar9 = iVar9 + 1;
        } while (iVar9 != 0x1e);
        bVar6 = false;
      }
      goto joined_r0x010e0b40;
    }
  }
  return 0;
LAB_010e07cc:
  *param_5 = iVar9;
  bVar6 = true;
joined_r0x010e07dc:
  if (plVar15 != (long *)0x0) {
    do {
      iVar9 = (int)*plVar2 + -1;
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar7) {
        *(int *)plVar2 = iVar9;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar9 == 0) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
    }
  }
  if (plVar14 != (long *)0x0) {
    do {
      iVar9 = (int)*plVar1 + -1;
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *(int *)plVar1 = iVar9;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar9 == 0) {
      (**(code **)(*plVar14 + 0x10))(plVar14);
    }
  }
  if (bVar6) {
    *param_4 = uVar11;
    return 1;
  }
  uVar12 = uVar12 + 1;
  uVar11 = uVar11 + 1;
  if (uVar12 == uVar13) goto LAB_010e095c;
  goto LAB_010e06a8;
LAB_010e0b34:
  *param_5 = iVar9;
  bVar6 = true;
joined_r0x010e0b40:
  if (plVar15 != (long *)0x0) {
    do {
      iVar9 = (int)*plVar2 + -1;
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar7) {
        *(int *)plVar2 = iVar9;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar9 == 0) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
    }
  }
  if (plVar14 != (long *)0x0) {
    do {
      iVar9 = (int)*plVar1 + -1;
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *(int *)plVar1 = iVar9;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar9 == 0) {
      (**(code **)(*plVar14 + 0x10))(plVar14);
    }
  }
  if (bVar6) {
    *param_4 = uVar13;
    return 1;
  }
  uVar13 = uVar13 + 1;
  iVar9 = FUN_010e630c();
  if (iVar9 + 0x1dU <= uVar13) {
    return 0;
  }
  goto LAB_010e096c;
}


