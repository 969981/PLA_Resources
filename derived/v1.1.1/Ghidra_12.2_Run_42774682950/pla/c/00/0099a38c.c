/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0099a38c; name: FUN_0099a38c
 */


void FUN_0099a38c(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  
  plVar12 = *(long **)(param_1 + 0x4a0);
  if (*(long **)(param_1 + 0x4a8) != plVar12) {
    do {
      uVar6 = (**(code **)(*(long *)*plVar12 + 0x40))();
      if ((uVar6 & 1) == 0) {
        plVar5 = *(long **)(param_1 + 0x4a8);
        plVar12 = plVar12 + 1;
      }
      else {
        *(undefined4 *)(*plVar12 + 0x68) = 2;
        (**(code **)(*(long *)*plVar12 + 0x48))();
        FUN_0099ae98(param_1 + 0x4d8,plVar12);
        plVar10 = *(long **)(param_1 + 0x4a8);
        plVar9 = plVar12 + 1;
        plVar7 = plVar12;
        plVar5 = plVar12;
        if (plVar9 == plVar10) {
LAB_0099a500:
          plVar9 = plVar9 + -1;
          plVar7 = (long *)*plVar9;
          if (plVar7 != (long *)0x0) {
            lVar11 = plVar7[0xb];
            piVar1 = (int *)(lVar11 + 0xc);
            do {
              iVar4 = *piVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar3) {
                *piVar1 = iVar4 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar4 + -1 == 0) goto LAB_0099a600;
          }
LAB_0099a524:
          if (plVar9 != plVar5) {
            while( true ) {
              plVar9 = plVar9 + -1;
              plVar7 = (long *)*plVar9;
              if (plVar7 == (long *)0x0) break;
              lVar11 = plVar7[0xb];
              piVar1 = (int *)(lVar11 + 0xc);
              do {
                iVar4 = *piVar1;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar3) {
                  *piVar1 = iVar4 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (iVar4 + -1 != 0) break;
LAB_0099a600:
              *(undefined8 *)(lVar11 + 0x18) = 0;
              (**(code **)(*plVar7 + 0x20))();
              if (plVar9 == plVar5) goto LAB_0099a554;
            }
            goto LAB_0099a524;
          }
        }
        else {
          do {
            plVar5 = (long *)*plVar7;
            *plVar7 = 0;
            if (plVar5 != (long *)0x0) {
              lVar11 = plVar5[0xb];
              piVar1 = (int *)(lVar11 + 0xc);
              do {
                iVar4 = *piVar1;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar3) {
                  *piVar1 = iVar4 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (iVar4 + -1 == 0) {
                *(undefined8 *)(lVar11 + 0x18) = 0;
                (**(code **)(*plVar5 + 0x20))();
              }
            }
            lVar11 = *plVar9;
            plVar8 = plVar9 + 1;
            *plVar9 = 0;
            plVar5 = plVar7 + 1;
            *plVar7 = lVar11;
            plVar9 = plVar8;
            plVar7 = plVar5;
          } while (plVar8 != plVar10);
          plVar9 = *(long **)(param_1 + 0x4a8);
          if (plVar9 != plVar5) goto LAB_0099a500;
        }
LAB_0099a554:
        *(long **)(param_1 + 0x4a8) = plVar5;
      }
    } while (plVar5 != plVar12);
  }
  plVar12 = *(long **)(param_1 + 0x4d8);
  if (*(long **)(param_1 + 0x4e0) != plVar12) {
    do {
      iVar4 = (**(code **)(*(long *)*plVar12 + 0x50))();
      if (iVar4 == 0) {
        plVar12 = plVar12 + 1;
      }
      else if (iVar4 == 1) {
        *(undefined4 *)(*plVar12 + 0x68) = 3;
        plVar10 = *(long **)(param_1 + 0x4e0);
        plVar9 = plVar12 + 1;
        plVar7 = plVar12;
        plVar5 = plVar12;
        if (plVar9 == plVar10) {
LAB_0099a5cc:
          plVar9 = plVar9 + -1;
          plVar7 = (long *)*plVar9;
          if (plVar7 == (long *)0x0) goto LAB_0099a418;
          lVar11 = plVar7[0xb];
          piVar1 = (int *)(lVar11 + 0xc);
          do {
            iVar4 = *piVar1 + -1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar4;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          do {
            if (iVar4 == 0) {
              *(undefined8 *)(lVar11 + 0x18) = 0;
              (**(code **)(*plVar7 + 0x20))();
            }
LAB_0099a418:
            do {
              if (plVar9 == plVar5) goto LAB_0099a490;
              plVar9 = plVar9 + -1;
              plVar7 = (long *)*plVar9;
            } while (plVar7 == (long *)0x0);
            lVar11 = plVar7[0xb];
            piVar1 = (int *)(lVar11 + 0xc);
            do {
              iVar4 = *piVar1 + -1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar3) {
                *piVar1 = iVar4;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          } while( true );
        }
        do {
          plVar5 = (long *)*plVar7;
          *plVar7 = 0;
          if (plVar5 != (long *)0x0) {
            lVar11 = plVar5[0xb];
            piVar1 = (int *)(lVar11 + 0xc);
            do {
              iVar4 = *piVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar3) {
                *piVar1 = iVar4 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar4 + -1 == 0) {
              *(undefined8 *)(lVar11 + 0x18) = 0;
              (**(code **)(*plVar5 + 0x20))();
            }
          }
          lVar11 = *plVar9;
          plVar8 = plVar9 + 1;
          *plVar9 = 0;
          plVar5 = plVar7 + 1;
          *plVar7 = lVar11;
          plVar9 = plVar8;
          plVar7 = plVar5;
        } while (plVar8 != plVar10);
        plVar9 = *(long **)(param_1 + 0x4e0);
        if (plVar9 != plVar5) goto LAB_0099a5cc;
LAB_0099a490:
        *(long **)(param_1 + 0x4e0) = plVar5;
      }
    } while (*(long **)(param_1 + 0x4e0) != plVar12);
  }
  return;
}


