/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d7f7d8; name: FUN_00d7f7d8
 */


/* WARNING: Removing unreachable block (ram,0x00d7fae8) */
/* WARNING: Removing unreachable block (ram,0x00d7faec) */
/* WARNING: Removing unreachable block (ram,0x00d7faf8) */
/* WARNING: Removing unreachable block (ram,0x00d7fb00) */
/* WARNING: Removing unreachable block (ram,0x00d7fb08) */
/* WARNING: Removing unreachable block (ram,0x00d7fb10) */
/* WARNING: Removing unreachable block (ram,0x00d7fb8c) */
/* WARNING: Removing unreachable block (ram,0x00d7fb14) */
/* WARNING: Removing unreachable block (ram,0x00d7fb28) */
/* WARNING: Removing unreachable block (ram,0x00d7fb30) */
/* WARNING: Removing unreachable block (ram,0x00d7fb38) */
/* WARNING: Removing unreachable block (ram,0x00d7fb40) */
/* WARNING: Removing unreachable block (ram,0x00d7fba0) */
/* WARNING: Removing unreachable block (ram,0x00d7fb44) */
/* WARNING: Removing unreachable block (ram,0x00d7fb60) */
/* WARNING: Removing unreachable block (ram,0x00d7fb6c) */

void FUN_00d7f7d8(long param_1,long *param_2)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  
  plVar12 = (long *)(param_1 + 0x220);
  lVar10 = *plVar12;
  lVar6 = nn::os::GetCurrentThread();
  if (lVar6 == lVar10) {
    bVar5 = false;
    lVar6 = 0;
  }
  else {
    lVar6 = param_1 + 0x210;
    lVar10 = nn::os::GetCurrentThread();
    do {
      if (*plVar12 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x214));
          while (*plVar12 == 0) {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
            if (bVar5) {
              *plVar12 = lVar10;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') goto LAB_00d7f854;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar5) {
        *plVar12 = lVar10;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
LAB_00d7f854:
    bVar5 = true;
  }
  plVar12 = *(long **)(param_1 + 0x228);
  plVar11 = *(long **)(param_1 + 0x230);
  if (plVar12 != plVar11) {
    plVar7 = plVar12;
    if (plVar12[1] != *param_2) {
      do {
        plVar12 = plVar7 + 2;
        if (plVar11 == plVar12) goto LAB_00d7fa3c;
        plVar8 = plVar7 + 3;
        plVar7 = plVar12;
      } while (*plVar8 != *param_2);
    }
  }
  plVar7 = plVar12;
  if ((plVar12 != plVar11) && (plVar12 + 2 != plVar11)) {
    if (plVar12[3] != *param_2) {
      plVar7 = (long *)*plVar12;
      *plVar12 = 0;
      if (plVar7 != (long *)0x0) {
        lVar10 = plVar7[0xb];
        piVar1 = (int *)(lVar10 + 0xc);
        do {
          iVar2 = *piVar1;
          cVar4 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar2 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar2 + -1 == 0) {
          *(undefined8 *)(lVar10 + 0x18) = 0;
          (**(code **)(*plVar7 + 0x20))();
        }
      }
      lVar10 = plVar12[2];
      plVar12[2] = 0;
      plVar7 = (long *)plVar12[1];
      *plVar12 = lVar10;
      plVar12[1] = 0;
      if (plVar7 != (long *)0x0) {
        lVar10 = plVar7[0xb];
        piVar1 = (int *)(lVar10 + 0xc);
        do {
          iVar2 = *piVar1;
          cVar4 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar2 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar2 + -1 == 0) {
          *(undefined8 *)(lVar10 + 0x18) = 0;
          (**(code **)(*plVar7 + 0x20))();
        }
      }
      lVar10 = plVar12[3];
      plVar12[3] = 0;
      plVar12[1] = lVar10;
      plVar7 = plVar12 + 2;
    }
    if (plVar12 + 4 != plVar11) {
      if (plVar12[5] != *param_2) {
        plVar8 = (long *)*plVar7;
        *plVar7 = 0;
        if (plVar8 != (long *)0x0) {
          lVar10 = plVar8[0xb];
          piVar1 = (int *)(lVar10 + 0xc);
          do {
            iVar2 = *piVar1;
            cVar4 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar2 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar2 + -1 == 0) {
            *(undefined8 *)(lVar10 + 0x18) = 0;
            (**(code **)(*plVar8 + 0x20))();
          }
        }
        lVar10 = plVar12[4];
        plVar12[4] = 0;
        plVar8 = (long *)plVar7[1];
        *plVar7 = lVar10;
        plVar7[1] = 0;
        if (plVar8 != (long *)0x0) {
          lVar10 = plVar8[0xb];
          piVar1 = (int *)(lVar10 + 0xc);
          do {
            iVar2 = *piVar1;
            cVar4 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar2 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar2 + -1 == 0) {
            *(undefined8 *)(lVar10 + 0x18) = 0;
            (**(code **)(*plVar8 + 0x20))();
          }
        }
        lVar10 = plVar12[5];
        plVar12[5] = 0;
        plVar7[1] = lVar10;
        plVar7 = plVar7 + 2;
      }
      plVar8 = plVar12 + 4;
      for (plVar12 = plVar12 + 6; plVar12 != plVar11; plVar12 = plVar12 + 2) {
        if (plVar8[3] != *param_2) {
          plVar9 = (long *)*plVar7;
          *plVar7 = 0;
          if (plVar9 != (long *)0x0) {
            lVar10 = plVar9[0xb];
            piVar1 = (int *)(lVar10 + 0xc);
            do {
              iVar2 = *piVar1;
              cVar4 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar3) {
                *piVar1 = iVar2 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar2 + -1 == 0) {
              *(undefined8 *)(lVar10 + 0x18) = 0;
              (**(code **)(*plVar9 + 0x20))();
            }
          }
          lVar10 = *plVar12;
          *plVar12 = 0;
          plVar9 = (long *)plVar7[1];
          *plVar7 = lVar10;
          plVar7[1] = 0;
          if (plVar9 != (long *)0x0) {
            lVar10 = plVar9[0xb];
            piVar1 = (int *)(lVar10 + 0xc);
            do {
              iVar2 = *piVar1;
              cVar4 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar3) {
                *piVar1 = iVar2 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar2 + -1 == 0) {
              *(undefined8 *)(lVar10 + 0x18) = 0;
              (**(code **)(*plVar9 + 0x20))();
            }
          }
          lVar10 = plVar8[3];
          plVar8[3] = 0;
          plVar7[1] = lVar10;
          plVar7 = plVar7 + 2;
        }
        plVar8 = plVar12;
      }
    }
    plVar11 = *(long **)(param_1 + 0x230);
  }
  if (plVar11 != plVar7) {
LAB_00d7f9cc:
    if (plVar11 != plVar7) {
      do {
        plVar12 = (long *)plVar11[-1];
        plVar11 = plVar11 + -2;
        if (plVar12 == (long *)0x0) {
LAB_00d7f9fc:
          plVar12 = (long *)*plVar11;
        }
        else {
          lVar10 = plVar12[0xb];
          piVar1 = (int *)(lVar10 + 0xc);
          do {
            iVar2 = *piVar1;
            cVar4 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar2 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar2 + -1 != 0) goto LAB_00d7f9fc;
          *(undefined8 *)(lVar10 + 0x18) = 0;
          (**(code **)(*plVar12 + 0x20))();
          plVar12 = (long *)*plVar11;
        }
        if (plVar12 == (long *)0x0) goto LAB_00d7f9cc;
        lVar10 = plVar12[0xb];
        piVar1 = (int *)(lVar10 + 0xc);
        do {
          iVar2 = *piVar1;
          cVar4 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar2 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar2 + -1 != 0) goto LAB_00d7f9cc;
        *(undefined8 *)(lVar10 + 0x18) = 0;
        (**(code **)(*plVar12 + 0x20))();
        if (plVar11 == plVar7) break;
      } while( true );
    }
    *(long **)(param_1 + 0x230) = plVar7;
  }
LAB_00d7fa3c:
  if (!bVar5) {
    return;
  }
  *(undefined8 *)(lVar6 + 0x10) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar6 + 4));
  return;
}


