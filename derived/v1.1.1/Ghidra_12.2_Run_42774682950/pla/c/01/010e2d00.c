/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010e2d00; name: FUN_010e2d00
 */


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_010e2d00(long param_1,uint *param_2,uint *param_3,undefined8 *param_4)

{
  uint uVar1;
  long *plVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  uint uVar13;
  
  if (*(long *)(param_1 + 0x54668) == 0) {
    return 0;
  }
  bVar3 = *(byte *)(*(long *)(param_1 + 0x54668) + 0x4a8);
  uVar9 = (uint)bVar3;
  if (bVar3 == 0x20) {
    iVar7 = FUN_010e630c();
    uVar9 = iVar7 + 0x1d;
    if (uVar9 == 0) goto LAB_010e2eb0;
  }
  else if (bVar3 == 0) goto LAB_010e2eb0;
  uVar13 = 0;
  uVar12 = (ulong)*param_3;
  uVar8 = *param_2;
  do {
    if (uVar9 <= uVar8) {
      uVar8 = 0;
    }
    if ((uint)uVar12 < 0x1e) {
      if (uVar8 < 0x20) {
        do {
          plVar11 = (long *)*param_4;
          if (plVar11 == (long *)0x0) {
            halt_baddata();
          }
          plVar2 = plVar11 + 10;
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar5) {
              *(int *)plVar2 = (int)*plVar2 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar5) {
              *(int *)plVar2 = (int)*plVar2 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          (**(code **)(*plVar11 + 0x28))
                    (plVar11,param_1 + (ulong)uVar8 * 0x2a30 + uVar12 * 0x168 + 0x68);
          do {
            iVar7 = (int)*plVar2 + -1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar5) {
              *(int *)plVar2 = iVar7;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar7 == 0) {
            (**(code **)(*plVar11 + 0x10))(plVar11);
          }
          iVar7 = FUN_02c6849c(plVar11[0x13]);
          do {
            iVar6 = (int)*plVar2 + -1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar5) {
              *(int *)plVar2 = iVar6;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar6 == 0) {
            (**(code **)(*plVar11 + 0x10))(plVar11);
          }
          if (iVar7 == 0) {
LAB_010e2e78:
            *param_2 = uVar8;
            *param_3 = (uint)uVar12;
            return 1;
          }
          uVar12 = uVar12 + 1;
        } while ((int)uVar12 != 0x1e);
      }
      else {
        do {
          plVar11 = (long *)*param_4;
          if (plVar11 == (long *)0x0) {
            iVar7 = FUN_02c6849c(_DAT_00000098);
          }
          else {
            plVar2 = plVar11 + 10;
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar5) {
                *(int *)plVar2 = (int)*plVar2 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar5) {
                *(int *)plVar2 = (int)*plVar2 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            do {
              iVar7 = (int)*plVar2 + -1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar5) {
                *(int *)plVar2 = iVar7;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar7 == 0) {
              (**(code **)(*plVar11 + 0x10))(plVar11);
            }
            iVar7 = FUN_02c6849c(plVar11[0x13]);
            do {
              iVar6 = (int)*plVar2 + -1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar5) {
                *(int *)plVar2 = iVar6;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar6 == 0) {
              (**(code **)(*plVar11 + 0x10))(plVar11);
            }
          }
          if (iVar7 == 0) goto LAB_010e2e78;
          uVar1 = (int)uVar12 + 1;
          uVar12 = (ulong)uVar1;
        } while (uVar1 != 0x1e);
      }
    }
    uVar13 = uVar13 + 1;
    uVar12 = 0;
    uVar8 = uVar8 + 1;
  } while (uVar13 != uVar9);
LAB_010e2eb0:
  if (*param_3 != 0) {
    uVar12 = 0;
    do {
      uVar13 = *param_2;
      plVar11 = (long *)*param_4;
      if (plVar11 != (long *)0x0) {
        plVar2 = plVar11 + 10;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar5) {
            *(int *)plVar2 = (int)*plVar2 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar5) {
            *(int *)plVar2 = (int)*plVar2 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      if ((uVar12 < 0x1e) && (uVar13 < 0x20)) {
        (**(code **)(*plVar11 + 0x28))
                  (plVar11,param_1 + (ulong)uVar13 * 0x2a30 + uVar12 * 0x168 + 0x68);
      }
      if (plVar11 == (long *)0x0) {
        iVar7 = FUN_02c6849c(_DAT_00000098);
      }
      else {
        plVar2 = plVar11 + 10;
        do {
          iVar7 = (int)*plVar2 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar5) {
            *(int *)plVar2 = iVar7;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar7 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
        }
        iVar7 = FUN_02c6849c(plVar11[0x13]);
        do {
          iVar6 = (int)*plVar2 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar5) {
            *(int *)plVar2 = iVar6;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar6 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
        }
      }
      if (iVar7 == 0) {
        *param_3 = (uint)uVar12;
        return 1;
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 < *param_3);
  }
  iVar7 = FUN_010e630c();
  if (iVar7 + 0x1dU <= uVar9) {
    return 0;
  }
  uVar12 = (ulong)uVar9;
  do {
    if (uVar12 < 0x20) {
      uVar10 = 0;
      do {
        plVar11 = (long *)*param_4;
        if (plVar11 == (long *)0x0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        plVar2 = plVar11 + 10;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar5) {
            *(int *)plVar2 = (int)*plVar2 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar5) {
            *(int *)plVar2 = (int)*plVar2 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        (**(code **)(*plVar11 + 0x28))(plVar11,param_1 + uVar12 * 0x2a30 + uVar10 * 0x168 + 0x68);
        do {
          iVar7 = (int)*plVar2 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar5) {
            *(int *)plVar2 = iVar7;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar7 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
        }
        iVar7 = FUN_02c6849c(plVar11[0x13]);
        do {
          iVar6 = (int)*plVar2 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar5) {
            *(int *)plVar2 = iVar6;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar6 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
        }
        if (iVar7 == 0) {
LAB_010e3194:
          *param_2 = (uint)uVar12;
          *param_3 = (uint)uVar10;
          return 1;
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 != 0x1e);
    }
    else {
      uVar10 = 0;
      do {
        plVar11 = (long *)*param_4;
        if (plVar11 == (long *)0x0) {
          iVar7 = FUN_02c6849c(_DAT_00000098);
        }
        else {
          plVar2 = plVar11 + 10;
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar5) {
              *(int *)plVar2 = (int)*plVar2 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar5) {
              *(int *)plVar2 = (int)*plVar2 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          do {
            iVar7 = (int)*plVar2 + -1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar5) {
              *(int *)plVar2 = iVar7;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar7 == 0) {
            (**(code **)(*plVar11 + 0x10))(plVar11);
          }
          iVar7 = FUN_02c6849c(plVar11[0x13]);
          do {
            iVar6 = (int)*plVar2 + -1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar5) {
              *(int *)plVar2 = iVar6;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar6 == 0) {
            (**(code **)(*plVar11 + 0x10))(plVar11);
          }
        }
        if (iVar7 == 0) goto LAB_010e3194;
        uVar9 = (int)uVar10 + 1;
        uVar10 = (ulong)uVar9;
      } while (uVar9 != 0x1e);
    }
    uVar12 = uVar12 + 1;
    iVar7 = FUN_010e630c();
    if (iVar7 + 0x1d <= uVar12) {
      return 0;
    }
  } while( true );
}


