/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008c02e0; name: FUN_008c02e0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_008c02e0(long param_1)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  long *plVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  byte bVar11;
  long *plVar12;
  long lVar13;
  long *local_28;
  
  if (*(int *)(param_1 + 0x88) == 1) {
    plVar12 = *(long **)(**(long **)(param_1 + 0x70) + 0x30);
    if (plVar12 != (long *)0x0) {
      plVar7 = plVar12 + 10;
      do {
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar5) {
          *(int *)plVar7 = (int)*plVar7 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    plVar7 = (long *)plVar12[0x20];
    if (plVar7 == (long *)0x0) {
      if (_DAT_00000058 == 0) {
        local_28 = (long *)0x0;
        lVar13 = _DAT_000006a8;
      }
      else {
        FUN_00931034(&local_28);
        lVar13 = local_28[0xd5];
        if (local_28 != (long *)0x0) {
          lVar10 = local_28[0xb];
          piVar2 = (int *)(lVar10 + 0xc);
          do {
            iVar6 = *piVar2;
            cVar3 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar5) {
              *piVar2 = iVar6 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar6 + -1 == 0) {
            *(undefined8 *)(lVar10 + 0x18) = 0;
            (**(code **)(*local_28 + 0x20))();
          }
        }
      }
      bVar5 = *(int *)(*(long *)(lVar13 + 0x5b0) + 0x80) == 7;
    }
    else {
      plVar1 = plVar7 + 10;
      do {
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *(int *)plVar1 = (int)*plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (plVar7[0xb] == 0) {
        local_28 = (long *)0x0;
        lVar13 = _DAT_000006a8;
      }
      else {
        FUN_00931034(&local_28,plVar7[0xb]);
        lVar13 = local_28[0xd5];
        if (local_28 != (long *)0x0) {
          lVar10 = local_28[0xb];
          piVar2 = (int *)(lVar10 + 0xc);
          do {
            iVar6 = *piVar2;
            cVar3 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar5) {
              *piVar2 = iVar6 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar6 + -1 == 0) {
            *(undefined8 *)(lVar10 + 0x18) = 0;
            (**(code **)(*local_28 + 0x20))();
          }
        }
      }
      bVar5 = *(int *)(*(long *)(lVar13 + 0x5b0) + 0x80) == 7;
      do {
        iVar6 = (int)*plVar1 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *(int *)plVar1 = iVar6;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar6 == 0) {
        (**(code **)(*plVar7 + 0x10))();
      }
    }
    plVar7 = plVar12 + 10;
    do {
      iVar6 = (int)*plVar7 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *(int *)plVar7 = iVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
    }
    if (!bVar5) {
      plVar12 = *(long **)(**(long **)(param_1 + 0x70) + 0x30);
      if (plVar12 != (long *)0x0) {
        plVar7 = plVar12 + 10;
        do {
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar5) {
            *(int *)plVar7 = (int)*plVar7 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      plVar7 = (long *)plVar12[0x20];
      if (plVar7 == (long *)0x0) {
        if (_DAT_00000058 == 0) {
          local_28 = (long *)0x0;
          lVar13 = _DAT_000006a8;
        }
        else {
          FUN_00931034(&local_28);
          lVar13 = local_28[0xd5];
          if (local_28 != (long *)0x0) {
            lVar10 = local_28[0xb];
            piVar2 = (int *)(lVar10 + 0xc);
            do {
              iVar6 = *piVar2;
              cVar3 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar5) {
                *piVar2 = iVar6 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar6 + -1 == 0) {
              *(undefined8 *)(lVar10 + 0x18) = 0;
              (**(code **)(*local_28 + 0x20))();
            }
          }
        }
        if (*(long *)(lVar13 + 0x5c0) == 0) {
          bVar11 = 1;
        }
        else {
          bVar11 = *(byte *)(*(long *)(lVar13 + 0x5c0) + 0x58) ^ 1;
        }
        bVar5 = (bVar11 & *(int *)(*(long *)(lVar13 + 0x5b0) + 0x80) == 6) != 0;
      }
      else {
        plVar1 = plVar7 + 10;
        do {
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *(int *)plVar1 = (int)*plVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (plVar7[0xb] == 0) {
          local_28 = (long *)0x0;
          lVar13 = _DAT_000006a8;
        }
        else {
          FUN_00931034(&local_28,plVar7[0xb]);
          lVar13 = local_28[0xd5];
          if (local_28 != (long *)0x0) {
            lVar10 = local_28[0xb];
            piVar2 = (int *)(lVar10 + 0xc);
            do {
              iVar6 = *piVar2;
              cVar3 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar5) {
                *piVar2 = iVar6 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar6 + -1 == 0) {
              *(undefined8 *)(lVar10 + 0x18) = 0;
              (**(code **)(*local_28 + 0x20))();
            }
          }
        }
        if (*(long *)(lVar13 + 0x5c0) == 0) {
          bVar11 = 1;
        }
        else {
          bVar11 = *(byte *)(*(long *)(lVar13 + 0x5c0) + 0x58) ^ 1;
        }
        bVar5 = (bVar11 & *(int *)(*(long *)(lVar13 + 0x5b0) + 0x80) == 6) != 0;
        do {
          iVar6 = (int)*plVar1 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *(int *)plVar1 = iVar6;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar6 == 0) {
          (**(code **)(*plVar7 + 0x10))();
        }
      }
      plVar7 = plVar12 + 10;
      do {
        iVar6 = (int)*plVar7 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar4) {
          *(int *)plVar7 = iVar6;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar6 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
      }
      if (bVar5) {
        if (((*PTR_DAT_043796b8 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_043796b8), iVar6 != 0)) {
          FUN_00100250(&LAB_008c0a98,PTR_DAT_043796c0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_043796b8);
        }
        *(undefined8 *)PTR_DAT_043796c8 = *(undefined8 *)PTR_DAT_043796c0;
        uVar8 = FUN_00d9f320();
        uVar9 = FUN_00d9a45c(uVar8,1);
        if ((uVar9 & 1) != 0) {
          plVar12 = *(long **)(**(long **)(param_1 + 0x70) + 0x30);
          if (plVar12 != (long *)0x0) {
            plVar7 = plVar12 + 10;
            do {
              cVar3 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
              if (bVar5) {
                *(int *)plVar7 = (int)*plVar7 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          plVar7 = (long *)plVar12[0x20];
          if (plVar7 == (long *)0x0) {
            FUN_00973e6c(0);
          }
          else {
            plVar1 = plVar7 + 10;
            do {
              cVar3 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar5) {
                *(int *)plVar1 = (int)*plVar1 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            FUN_00973e6c(plVar7);
            do {
              iVar6 = (int)*plVar1 + -1;
              cVar3 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar5) {
                *(int *)plVar1 = iVar6;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar6 == 0) {
              (**(code **)(*plVar7 + 0x10))(plVar7);
            }
          }
          plVar7 = plVar12 + 10;
          do {
            lVar13 = *plVar7;
            cVar3 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar5) {
              *(int *)plVar7 = (int)lVar13 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if ((int)lVar13 == 1) {
            (**(code **)(*plVar12 + 0x10))(plVar12);
            return 2;
          }
          return 2;
        }
      }
      return 0;
    }
  }
  else if (*(int *)(param_1 + 0x88) == 0) {
    FUN_008c079c(param_1);
    *(int *)(param_1 + 0x88) = *(int *)(param_1 + 0x88) + 1;
    return 0;
  }
  return 2;
}


