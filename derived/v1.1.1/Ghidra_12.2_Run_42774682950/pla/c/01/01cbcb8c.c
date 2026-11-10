/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01cbcb8c; name: FUN_01cbcb8c
 */


undefined8 FUN_01cbcb8c(long param_1)

{
  long *plVar1;
  int *piVar2;
  int iVar3;
  long *plVar4;
  char cVar5;
  bool bVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  
  plVar4 = *(long **)(param_1 + 0x68);
  if (plVar4 != *(long **)(param_1 + 0x70)) {
    plVar1 = plVar4 + 1;
    do {
      lVar9 = *plVar4;
      uVar7 = FUN_01cbbbb4(lVar9);
      if (((uVar7 & 1) == 0) || (uVar7 = FUN_01cbc500(lVar9), (uVar7 & 1) == 0)) {
        return 0;
      }
      plVar13 = *(long **)(param_1 + 0x70);
      plVar8 = plVar4;
      plVar10 = plVar1;
      if (plVar1 == plVar13) {
LAB_01cbcc5c:
        plVar10 = plVar10 + -1;
        plVar13 = (long *)*plVar10;
        if (plVar13 != (long *)0x0) {
          lVar9 = plVar13[0xb];
          piVar2 = (int *)(lVar9 + 0xc);
          do {
            iVar3 = *piVar2;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar6) {
              *piVar2 = iVar3 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar3 + -1 == 0) goto LAB_01cbccac;
        }
LAB_01cbcc80:
        if (plVar10 != plVar8) {
          while( true ) {
            plVar10 = plVar10 + -1;
            plVar13 = (long *)*plVar10;
            if (plVar13 == (long *)0x0) break;
            lVar9 = plVar13[0xb];
            piVar2 = (int *)(lVar9 + 0xc);
            do {
              iVar3 = *piVar2;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar6) {
                *piVar2 = iVar3 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar3 + -1 != 0) break;
LAB_01cbccac:
            *(undefined8 *)(lVar9 + 0x18) = 0;
            (**(code **)(*plVar13 + 0x20))();
            if (plVar10 == plVar8) goto LAB_01cbcbc4;
          }
          goto LAB_01cbcc80;
        }
      }
      else {
        plVar10 = plVar4;
        plVar12 = plVar1;
        do {
          plVar8 = (long *)*plVar10;
          *plVar10 = 0;
          if (plVar8 != (long *)0x0) {
            lVar9 = plVar8[0xb];
            piVar2 = (int *)(lVar9 + 0xc);
            do {
              iVar3 = *piVar2;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar6) {
                *piVar2 = iVar3 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar3 + -1 == 0) {
              *(undefined8 *)(lVar9 + 0x18) = 0;
              (**(code **)(*plVar8 + 0x20))();
            }
          }
          lVar9 = *plVar12;
          plVar11 = plVar12 + 1;
          *plVar12 = 0;
          plVar8 = plVar10 + 1;
          *plVar10 = lVar9;
          plVar10 = plVar8;
          plVar12 = plVar11;
        } while (plVar11 != plVar13);
        plVar10 = *(long **)(param_1 + 0x70);
        if (plVar10 != plVar8) goto LAB_01cbcc5c;
      }
LAB_01cbcbc4:
      *(long **)(param_1 + 0x70) = plVar8;
    } while (plVar4 != plVar8);
  }
  return 1;
}


