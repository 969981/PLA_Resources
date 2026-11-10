/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0099b190; name: FUN_0099b190
 */


void FUN_0099b190(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  
  plVar11 = *(long **)(param_1 + 0x4d8);
  if (*(long **)(param_1 + 0x4e0) != plVar11) {
    do {
      iVar4 = (**(code **)(*(long *)*plVar11 + 0x58))();
      if (iVar4 == 0) {
        plVar11 = plVar11 + 1;
      }
      else if (iVar4 == 1) {
        *(undefined4 *)(*plVar11 + 0x68) = 3;
        plVar9 = *(long **)(param_1 + 0x4e0);
        plVar8 = plVar11 + 1;
        plVar5 = plVar11;
        plVar6 = plVar11;
        if (plVar8 == plVar9) {
LAB_0099b260:
          plVar8 = plVar8 + -1;
          plVar5 = (long *)*plVar8;
          if (plVar5 == (long *)0x0) goto LAB_0099b20c;
          lVar10 = plVar5[0xb];
          piVar1 = (int *)(lVar10 + 0xc);
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
              *(undefined8 *)(lVar10 + 0x18) = 0;
              (**(code **)(*plVar5 + 0x20))();
            }
LAB_0099b20c:
            do {
              if (plVar8 == plVar6) goto LAB_0099b2e4;
              plVar8 = plVar8 + -1;
              plVar5 = (long *)*plVar8;
            } while (plVar5 == (long *)0x0);
            lVar10 = plVar5[0xb];
            piVar1 = (int *)(lVar10 + 0xc);
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
          plVar6 = (long *)*plVar5;
          *plVar5 = 0;
          if (plVar6 != (long *)0x0) {
            lVar10 = plVar6[0xb];
            piVar1 = (int *)(lVar10 + 0xc);
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
              *(undefined8 *)(lVar10 + 0x18) = 0;
              (**(code **)(*plVar6 + 0x20))();
            }
          }
          lVar10 = *plVar8;
          plVar7 = plVar8 + 1;
          *plVar8 = 0;
          plVar6 = plVar5 + 1;
          *plVar5 = lVar10;
          plVar5 = plVar6;
          plVar8 = plVar7;
        } while (plVar7 != plVar9);
        plVar8 = *(long **)(param_1 + 0x4e0);
        if (plVar8 != plVar6) goto LAB_0099b260;
LAB_0099b2e4:
        *(long **)(param_1 + 0x4e0) = plVar6;
      }
    } while (*(long **)(param_1 + 0x4e0) != plVar11);
  }
  return;
}


