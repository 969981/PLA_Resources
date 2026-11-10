/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0141ed50; name: FUN_0141ed50
 */


/* WARNING: Removing unreachable block (ram,0x0141f208) */
/* WARNING: Removing unreachable block (ram,0x0141f20c) */
/* WARNING: Removing unreachable block (ram,0x0141f214) */
/* WARNING: Removing unreachable block (ram,0x0141f21c) */
/* WARNING: Removing unreachable block (ram,0x0141f220) */
/* WARNING: Removing unreachable block (ram,0x0141f140) */
/* WARNING: Removing unreachable block (ram,0x0141f144) */
/* WARNING: Removing unreachable block (ram,0x0141f14c) */
/* WARNING: Removing unreachable block (ram,0x0141f154) */
/* WARNING: Removing unreachable block (ram,0x0141f158) */
/* WARNING: Removing unreachable block (ram,0x0141f1a4) */
/* WARNING: Removing unreachable block (ram,0x0141f1a8) */
/* WARNING: Removing unreachable block (ram,0x0141f1b0) */
/* WARNING: Removing unreachable block (ram,0x0141f1b8) */
/* WARNING: Removing unreachable block (ram,0x0141f1bc) */
/* WARNING: Removing unreachable block (ram,0x0141f26c) */
/* WARNING: Removing unreachable block (ram,0x0141f270) */
/* WARNING: Removing unreachable block (ram,0x0141f278) */
/* WARNING: Removing unreachable block (ram,0x0141f280) */
/* WARNING: Removing unreachable block (ram,0x0141f284) */
/* WARNING: Removing unreachable block (ram,0x0141ef6c) */
/* WARNING: Removing unreachable block (ram,0x0141ef70) */
/* WARNING: Removing unreachable block (ram,0x0141ef78) */
/* WARNING: Removing unreachable block (ram,0x0141ef80) */
/* WARNING: Removing unreachable block (ram,0x0141f340) */
/* WARNING: Removing unreachable block (ram,0x0141ee28) */
/* WARNING: Removing unreachable block (ram,0x0141ee2c) */
/* WARNING: Removing unreachable block (ram,0x0141ee34) */
/* WARNING: Removing unreachable block (ram,0x0141ee3c) */
/* WARNING: Removing unreachable block (ram,0x0141f2d8) */
/* WARNING: Removing unreachable block (ram,0x0141eecc) */
/* WARNING: Removing unreachable block (ram,0x0141eed0) */
/* WARNING: Removing unreachable block (ram,0x0141eed8) */
/* WARNING: Removing unreachable block (ram,0x0141eee0) */
/* WARNING: Removing unreachable block (ram,0x0141f308) */
/* WARNING: Removing unreachable block (ram,0x0141f00c) */
/* WARNING: Removing unreachable block (ram,0x0141f010) */
/* WARNING: Removing unreachable block (ram,0x0141f018) */
/* WARNING: Removing unreachable block (ram,0x0141f020) */
/* WARNING: Removing unreachable block (ram,0x0141f378) */

void FUN_0141ed50(long *param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  int *piVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long local_48;
  long local_40;
  long *local_38;
  long *local_30;
  undefined1 local_28;
  
  lVar8 = *param_2;
  *param_1 = lVar8;
  if (((lVar8 != 0) && (lVar8 = param_2[1], param_1[1] = lVar8, lVar8 != 0)) &&
     (lVar8 = param_2[2], param_1[2] = lVar8, lVar8 != 0)) {
    lVar8 = param_2[3];
    if (lVar8 != 0) {
      piVar3 = (int *)(lVar8 + 0x50);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar5) {
          *piVar3 = *piVar3 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    plVar7 = (long *)param_1[3];
    param_1[3] = lVar8;
    if (plVar7 != (long *)0x0) {
      plVar9 = plVar7 + 10;
      do {
        iVar6 = (int)*plVar9 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar5) {
          *(int *)plVar9 = iVar6;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar6 == 0) {
        (**(code **)(*plVar7 + 0x10))();
      }
      lVar8 = param_1[3];
    }
    if (lVar8 != 0) {
      lVar8 = param_2[4];
      if (lVar8 != 0) {
        piVar3 = (int *)(lVar8 + 0x50);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar5) {
            *piVar3 = *piVar3 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      plVar7 = (long *)param_1[4];
      param_1[4] = lVar8;
      if (plVar7 != (long *)0x0) {
        plVar9 = plVar7 + 10;
        do {
          iVar6 = (int)*plVar9 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar5) {
            *(int *)plVar9 = iVar6;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar6 == 0) {
          (**(code **)(*plVar7 + 0x10))();
        }
        lVar8 = param_1[4];
      }
      if (lVar8 != 0) {
        local_48 = *param_1;
        local_40 = param_1[1];
        local_38 = (long *)param_1[3];
        if (local_38 != (long *)0x0) {
          plVar7 = local_38 + 10;
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar5) {
              *(int *)plVar7 = (int)*plVar7 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        local_30 = (long *)param_1[4];
        if (local_30 != (long *)0x0) {
          plVar7 = local_30 + 10;
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar5) {
              *(int *)plVar7 = (int)*plVar7 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        local_28 = 0;
        FUN_0141f3d0(param_1 + 5,&local_48);
        if (local_30 != (long *)0x0) {
          plVar7 = local_30 + 10;
          do {
            iVar6 = (int)*plVar7 + -1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar5) {
              *(int *)plVar7 = iVar6;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar6 == 0) {
            (**(code **)(*local_30 + 0x10))();
          }
        }
        if (local_38 != (long *)0x0) {
          plVar7 = local_38 + 10;
          do {
            iVar6 = (int)*plVar7 + -1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar5) {
              *(int *)plVar7 = iVar6;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar6 == 0) {
            (**(code **)(*local_38 + 0x10))();
          }
        }
        local_48 = *param_1;
        local_40 = param_1[1];
        local_38 = (long *)param_1[3];
        if (local_38 != (long *)0x0) {
          plVar7 = local_38 + 10;
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar5) {
              *(int *)plVar7 = (int)*plVar7 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        local_30 = (long *)param_1[4];
        if (local_30 != (long *)0x0) {
          plVar7 = local_30 + 10;
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar5) {
              *(int *)plVar7 = (int)*plVar7 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        local_28 = 1;
        FUN_0141f3d0(param_1 + 10,&local_48);
        if (local_30 != (long *)0x0) {
          plVar7 = local_30 + 10;
          do {
            iVar6 = (int)*plVar7 + -1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar5) {
              *(int *)plVar7 = iVar6;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar6 == 0) {
            (**(code **)(*local_30 + 0x10))();
          }
        }
        if (local_38 != (long *)0x0) {
          plVar7 = local_38 + 10;
          do {
            iVar6 = (int)*plVar7 + -1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar5) {
              *(int *)plVar7 = iVar6;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar6 == 0) {
            (**(code **)(*local_38 + 0x10))();
          }
        }
        local_48 = *param_1;
        local_40 = param_1[1];
        local_38 = (long *)param_1[3];
        if (local_38 != (long *)0x0) {
          plVar7 = local_38 + 10;
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar5) {
              *(int *)plVar7 = (int)*plVar7 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        local_30 = (long *)param_1[4];
        if (local_30 != (long *)0x0) {
          plVar7 = local_30 + 10;
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar5) {
              *(int *)plVar7 = (int)*plVar7 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        local_28 = 2;
        FUN_0141f3d0(param_1 + 0xf,&local_48);
        if (local_30 != (long *)0x0) {
          plVar7 = local_30 + 10;
          do {
            iVar6 = (int)*plVar7 + -1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar5) {
              *(int *)plVar7 = iVar6;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar6 == 0) {
            (**(code **)(*local_30 + 0x10))();
          }
        }
        if (local_38 != (long *)0x0) {
          plVar7 = local_38 + 10;
          do {
            iVar6 = (int)*plVar7 + -1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar5) {
              *(int *)plVar7 = iVar6;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar6 == 0) {
            (**(code **)(*local_38 + 0x10))();
          }
        }
        local_48 = *param_1;
        local_40 = param_1[1];
        local_38 = (long *)param_1[3];
        if (local_38 != (long *)0x0) {
          plVar7 = local_38 + 10;
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar5) {
              *(int *)plVar7 = (int)*plVar7 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        local_30 = (long *)param_1[4];
        if (local_30 != (long *)0x0) {
          plVar7 = local_30 + 10;
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar5) {
              *(int *)plVar7 = (int)*plVar7 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        local_28 = 3;
        FUN_0141f3d0(param_1 + 0x14,&local_48);
        if (local_30 != (long *)0x0) {
          plVar7 = local_30 + 10;
          do {
            iVar6 = (int)*plVar7 + -1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar5) {
              *(int *)plVar7 = iVar6;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar6 == 0) {
            (**(code **)(*local_30 + 0x10))();
          }
        }
        if (local_38 != (long *)0x0) {
          plVar7 = local_38 + 10;
          do {
            iVar6 = (int)*plVar7 + -1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar5) {
              *(int *)plVar7 = iVar6;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar6 == 0) {
            (**(code **)(*local_38 + 0x10))();
          }
        }
        plVar7 = *(long **)(*param_1 + 0x148);
        lVar8 = *(long *)(*param_1 + 0x150);
        if ((lVar8 != 0) && (*plVar7 != -0x17ab4adb67ddb0af)) {
          plVar9 = plVar7 + lVar8 * 6;
          lVar8 = lVar8 * 0x30;
          do {
            lVar8 = lVar8 + -0x30;
            if (lVar8 == 0) {
              plVar7 = plVar9;
              break;
            }
            plVar2 = plVar7 + 6;
            plVar1 = plVar7 + 6;
            plVar7 = plVar2;
          } while (*plVar1 != -0x17ab4adb67ddb0af);
        }
        *(byte *)(plVar7[4] + 0x58) = *(byte *)(plVar7[4] + 0x58) & 0xfe;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",0);
}


