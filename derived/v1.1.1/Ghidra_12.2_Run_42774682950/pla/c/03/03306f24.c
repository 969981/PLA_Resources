/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03306f24; name: FUN_03306f24
 */


void FUN_03306f24(long *param_1)

{
  ulong *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  int iVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  lVar10 = *param_1;
  *(undefined4 *)(lVar10 + 8) = 0;
  FUN_0330bf54(lVar10 + 0x10);
  FUN_032f8f08(lVar10 + 0x58);
  plVar9 = *(long **)(lVar10 + 0x30);
  if (plVar9 != (long *)0x0) {
    if ((int)plVar9[1] != 0) {
      lVar11 = *plVar9;
      lVar10 = lVar11 + (long)(int)plVar9[1] * 0x20;
      if ((*(ulong *)(lVar10 + -0x10) & 1) != 0) {
        plVar5 = (long *)(*(ulong *)(lVar10 + -0x10) & 0xfffffffffffffffe);
        plVar6 = plVar5 + 1;
        do {
          lVar12 = *plVar6;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar4) {
            *(int *)plVar6 = (int)lVar12 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((plVar5 != (long *)0x0) && ((int)lVar12 == 1)) {
          (**(code **)(*plVar5 + 8))();
        }
      }
      if (lVar10 + -0x20 != lVar11) {
        lVar12 = lVar10 + -0x40;
        if ((*(ulong *)(lVar10 + -0x30) & 1) != 0) {
          plVar5 = (long *)(*(ulong *)(lVar10 + -0x30) & 0xfffffffffffffffe);
          plVar6 = plVar5 + 1;
          do {
            iVar8 = (int)*plVar6;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar4) {
              *(int *)plVar6 = iVar8 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (plVar5 != (long *)0x0) goto LAB_03307028;
        }
LAB_03306f9c:
        if (lVar12 != lVar11) {
          while( true ) {
            puVar1 = (ulong *)(lVar12 + -0x10);
            lVar12 = lVar12 + -0x20;
            if ((*puVar1 & 1) == 0) break;
            plVar5 = (long *)(*puVar1 & 0xfffffffffffffffe);
            plVar6 = plVar5 + 1;
            do {
              iVar8 = (int)*plVar6;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
              if (bVar4) {
                *(int *)plVar6 = iVar8 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (plVar5 == (long *)0x0) break;
LAB_03307028:
            if (iVar8 != 1) break;
            (**(code **)(*plVar5 + 8))();
            if (lVar12 == lVar11) goto LAB_03307044;
          }
          goto LAB_03306f9c;
        }
      }
    }
LAB_03307044:
    *(undefined4 *)(plVar9 + 1) = 0;
    iVar8 = (int)plVar9[4];
    if (iVar8 != 0) {
      plVar5 = (long *)plVar9[3];
      plVar6 = (long *)plVar5[(long)iVar8 + -1];
      if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
        plVar7 = plVar6 + 2;
        do {
          lVar10 = *plVar7;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar4) {
            *plVar7 = lVar10 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar10 + -1 == 0) {
          (**(code **)(*plVar6 + 0x18))();
        }
      }
      if (plVar5 + (long)iVar8 + -1 != plVar5) {
        plVar6 = (long *)plVar5[(long)iVar8 + -2];
        if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
          plVar7 = plVar6 + 2;
          do {
            lVar10 = *plVar7;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar4) {
              *plVar7 = lVar10 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar10 + -1 == 0) {
            (**(code **)(*plVar6 + 0x18))();
          }
        }
        if (plVar5 + (long)iVar8 + -2 != plVar5) {
          plVar6 = (long *)plVar5[(long)iVar8 + -3];
          if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
            plVar7 = plVar6 + 2;
            do {
              lVar10 = *plVar7;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
              if (bVar4) {
                *plVar7 = lVar10 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (lVar10 + -1 == 0) {
              (**(code **)(*plVar6 + 0x18))();
            }
          }
          if (plVar5 + (long)iVar8 + -3 != plVar5) {
            plVar6 = (long *)plVar5[(long)iVar8 + -4];
            if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
              plVar7 = plVar6 + 2;
              do {
                lVar10 = *plVar7;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
                if (bVar4) {
                  *plVar7 = lVar10 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (lVar10 + -1 == 0) {
                (**(code **)(*plVar6 + 0x18))();
              }
            }
            if (plVar5 + (long)iVar8 + -4 != plVar5) {
              plVar6 = plVar5 + (long)iVar8 + -5;
              plVar7 = (long *)*plVar6;
              if (plVar7 == (long *)0x0) goto LAB_033071fc;
              if (plVar7[1] == 0) goto LAB_033071fc;
              plVar2 = plVar7 + 2;
              do {
                lVar10 = *plVar2 + -1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                if (bVar4) {
                  *plVar2 = lVar10;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              do {
                if (lVar10 == 0) {
                  (**(code **)(*plVar7 + 0x18))();
                }
LAB_033071fc:
                do {
                  if (plVar6 == plVar5) goto LAB_03307120;
                  plVar6 = plVar6 + -1;
                  plVar7 = (long *)*plVar6;
                } while ((plVar7 == (long *)0x0) || (plVar7[1] == 0));
                plVar2 = plVar7 + 2;
                do {
                  lVar10 = *plVar2 + -1;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                  if (bVar4) {
                    *plVar2 = lVar10;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
              } while( true );
            }
          }
        }
      }
    }
LAB_03307120:
    *(undefined4 *)(plVar9 + 4) = 0;
    plVar6 = (long *)plVar9[2];
    plVar9[2] = 0;
    if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
      plVar9 = plVar6 + 2;
      do {
        lVar10 = *plVar9;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar4) {
          *plVar9 = lVar10 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar10 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x03307168. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar6 + 0x18))();
        return;
      }
    }
  }
  return;
}


