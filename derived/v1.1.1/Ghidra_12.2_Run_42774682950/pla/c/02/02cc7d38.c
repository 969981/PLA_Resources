/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02cc7d38; name: FUN_02cc7d38
 */


void FUN_02cc7d38(long param_1,long *param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  long *plVar11;
  
  if ((*param_2 != 0) && (puVar10 = *(undefined8 **)(*param_2 + 0x18), puVar10 != (undefined8 *)0x0)
     ) {
    plVar7 = (long *)(**(code **)*puVar10)(puVar10);
    lVar8 = FUN_02760e90();
    for (; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
      if (plVar7 == (long *)lVar8) {
        plVar7 = *(long **)(param_1 + 0xa8);
        plVar11 = *(long **)(param_1 + 0xb0);
        if (plVar7 == plVar11) {
          return;
        }
        plVar9 = puVar10 + -10;
        if ((long *)*plVar7 != plVar9) {
          do {
                    /* WARNING: Do nothing block with infinite loop */
          } while( true );
        }
        if (plVar7 + 1 == plVar11) goto LAB_02cc7e20;
        *plVar7 = 0;
        plVar5 = plVar7;
        plVar6 = plVar7 + 1;
        while( true ) {
          if (plVar9 != (long *)0x0) {
            lVar8 = plVar9[0xb];
            piVar1 = (int *)(lVar8 + 0xc);
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
              *(undefined8 *)(lVar8 + 0x18) = 0;
              (**(code **)(*plVar9 + 0x20))();
            }
          }
          lVar8 = *plVar6;
          *plVar6 = 0;
          plVar7 = plVar5 + 1;
          *plVar5 = lVar8;
          if (plVar6 + 1 == plVar11) break;
          plVar9 = (long *)*plVar7;
          *plVar7 = 0;
          plVar5 = plVar7;
          plVar6 = plVar6 + 1;
        }
        plVar11 = *(long **)(param_1 + 0xb0);
        while (plVar11 != plVar7) {
LAB_02cc7e20:
          plVar11 = plVar11 + -1;
          plVar9 = (long *)*plVar11;
          if (plVar9 != (long *)0x0) {
            lVar8 = plVar9[0xb];
            piVar1 = (int *)(lVar8 + 0xc);
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
              *(undefined8 *)(lVar8 + 0x18) = 0;
              (**(code **)(*plVar9 + 0x20))();
            }
          }
        }
        *(long **)(param_1 + 0xb0) = plVar7;
        return;
      }
    }
  }
  return;
}


