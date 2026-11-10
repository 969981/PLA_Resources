/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b3bbf8; name: FUN_02b3bbf8
 */


void FUN_02b3bbf8(long param_1,long *param_2,uint param_3)

{
  long *plVar1;
  int *piVar2;
  int *piVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  int *piVar12;
  undefined8 local_48;
  long *local_38;
  
  piVar3 = *(int **)(param_1 + 0x138);
  for (piVar12 = *(int **)(param_1 + 0x130); piVar12 != piVar3; piVar12 = piVar12 + 3) {
    FUN_02b45920(*(undefined8 *)(*(long *)(param_1 + 0xe8) + (long)*piVar12 * 8),
                 *(long *)(param_1 + 0x58) + 0x58);
  }
  local_38 = *(long **)(*(long *)(param_1 + 0x58) + 0x60);
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
  lVar9 = *(long *)(param_1 + 0x120);
  if (*(long *)(lVar9 + 0x98) == *(long *)(lVar9 + 0xa0)) {
    lVar10 = *param_2;
    if (lVar10 != 0) {
      piVar12 = (int *)(lVar10 + 0x50);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar12,0x10);
        if (bVar5) {
          *piVar12 = *piVar12 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    plVar7 = *(long **)(lVar9 + 0xd0);
    *(long *)(lVar9 + 0xd0) = lVar10;
    if (plVar7 != (long *)0x0) {
      plVar11 = plVar7 + 10;
      do {
        iVar6 = (int)*plVar11 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar5) {
          *(int *)plVar11 = iVar6;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar6 == 0) {
        (**(code **)(*plVar7 + 0x10))();
      }
    }
    FUN_02b46cd4(*(undefined8 *)(param_1 + 0x120),&local_38,param_3 & 1);
  }
  piVar3 = *(int **)(param_1 + 0x138);
  for (piVar12 = *(int **)(param_1 + 0x130); piVar12 != piVar3; piVar12 = piVar12 + 3) {
    FUN_02b47170(*(long *)(param_1 + 0xe8) + (long)*piVar12 * 8,(undefined8 *)(param_1 + 0x120),
                 &local_38);
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
      lVar9 = *(long *)(param_1 + 0x128);
      goto joined_r0x02b3bd20;
    }
  }
  lVar9 = *(long *)(param_1 + 0x128);
joined_r0x02b3bd20:
  if (lVar9 != 0) {
    if (*(long *)(lVar9 + 0x88) == 0) {
      lVar10 = *(long *)(param_1 + 0x58);
      FUN_02b6f730(&local_38,*(undefined8 *)(lVar10 + 0x68),*(long *)(lVar9 + 0x60) + 0x270,
                   *(undefined8 *)(lVar9 + 8));
      FUN_02b6faa8(&local_48,*(undefined8 *)(lVar10 + 0x68),&local_38,0);
      plVar7 = *(long **)(lVar9 + 0x88);
      *(undefined8 *)(lVar9 + 0x88) = 0;
      if (plVar7 != (long *)0x0) {
        plVar11 = plVar7 + 10;
        do {
          iVar6 = (int)*plVar11 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar5) {
            *(int *)plVar11 = iVar6;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar6 == 0) {
          (**(code **)(*plVar7 + 0x10))();
        }
      }
      *(undefined8 *)(lVar9 + 0x88) = local_48;
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
    }
    piVar3 = *(int **)(param_1 + 0x138);
    for (piVar12 = *(int **)(param_1 + 0x130); piVar12 != piVar3; piVar12 = piVar12 + 3) {
      lVar9 = *(long *)(*(long *)(param_1 + 0xe8) + (long)*piVar12 * 8);
      plVar11 = *(long **)(lVar9 + 0x98);
      for (plVar7 = *(long **)(lVar9 + 0x90); plVar7 != plVar11; plVar7 = plVar7 + 1) {
        lVar9 = *plVar7;
        lVar10 = *(long *)(*(long *)(param_1 + 0x128) + 0x88);
        if (lVar10 != 0) {
          piVar2 = (int *)(lVar10 + 0x50);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar5) {
              *piVar2 = *piVar2 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        plVar8 = *(long **)(lVar9 + 0xe8);
        *(long *)(lVar9 + 0xe8) = lVar10;
        if (plVar8 != (long *)0x0) {
          plVar1 = plVar8 + 10;
          do {
            iVar6 = (int)*plVar1 + -1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar5) {
              *(int *)plVar1 = iVar6;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar6 == 0) {
            (**(code **)(*plVar8 + 0x10))();
          }
        }
      }
    }
  }
  if (*(long *)(param_1 + 0xe0) != 0) {
    piVar12 = *(int **)(param_1 + 0x130);
    piVar3 = *(int **)(param_1 + 0x138);
    if (piVar12 != piVar3) {
      plVar7 = *(long **)(*(long *)(param_1 + 0xe0) + 0xe0);
      do {
        if (plVar7 != (long *)0x0) {
          iVar6 = *piVar12;
          lVar9 = *(long *)(param_1 + 0xe8);
          do {
            lVar10 = *(long *)(lVar9 + (long)iVar6 * 8);
            plVar11 = *(long **)(lVar10 + 0x90);
            plVar8 = *(long **)(lVar10 + 0x98);
            if (plVar11 == plVar8) {
LAB_02b3bec0:
              if (plVar11 != plVar8) {
                *(char *)(*plVar11 + 0x228) = (char)plVar7[6];
              }
            }
            else {
              do {
                if (*(long *)(*plVar11 + 0x58) == plVar7[2]) goto LAB_02b3bec0;
                plVar11 = plVar11 + 1;
              } while (plVar8 != plVar11);
            }
            plVar7 = (long *)*plVar7;
          } while (plVar7 != (long *)0x0);
        }
        piVar12 = piVar12 + 3;
        if (piVar12 == piVar3) break;
        plVar7 = *(long **)(*(long *)(param_1 + 0xe0) + 0xe0);
      } while( true );
    }
  }
  *(undefined8 *)(param_1 + 0x138) = *(undefined8 *)(param_1 + 0x130);
  return;
}


