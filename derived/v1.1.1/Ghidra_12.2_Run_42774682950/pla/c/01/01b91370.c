/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b91370; name: FUN_01b91370
 */


void FUN_01b91370(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  long *plVar8;
  long *plVar9;
  
  lVar6 = *(long *)(param_1 + 0x4d0);
  *(undefined1 *)(param_1 + 0x730) = 0;
  if ((lVar6 != 0) && (*(int *)(lVar6 + 0xc) != 0)) {
    piVar1 = (int *)(lVar6 + 0xc);
    iVar7 = *(int *)(lVar6 + 0xc);
    do {
      plVar9 = *(long **)(lVar6 + 0x10);
      plVar8 = (long *)FUN_01b925ec();
      if (plVar9 == (long *)0x0) break;
      while (plVar9 != plVar8) {
        plVar9 = (long *)*plVar9;
        if (plVar9 == (long *)0x0) goto LAB_01b91390;
      }
      iVar2 = *piVar1;
      if (iVar2 == iVar7) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar7 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_01b913c0;
        lVar6 = *(long *)(lVar6 + 0x18);
        plVar8 = (long *)(lVar6 + -0x50);
        if (lVar6 != 0) {
          FUN_01b76b84(plVar8,0);
          lVar6 = *(long *)(lVar6 + 8);
          piVar1 = (int *)(lVar6 + 0xc);
          do {
            iVar7 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar7 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar7 + -1 != 0) break;
          *(undefined8 *)(lVar6 + 0x18) = 0;
          (**(code **)(*plVar8 + 0x20))(plVar8);
          lVar6 = *(long *)(param_1 + 0x6e0);
          if (lVar6 == 0) {
            return;
          }
          goto LAB_01b91478;
        }
        break;
      }
      ClearExclusiveLocal();
LAB_01b913c0:
      iVar7 = iVar2;
    } while (iVar2 != 0);
  }
LAB_01b91390:
  lVar6 = *(long *)(param_1 + 0x6e0);
  if (lVar6 != 0) {
LAB_01b91478:
    if (*(int *)(lVar6 + 0xc) != 0) {
      piVar1 = (int *)(lVar6 + 0xc);
      iVar7 = *(int *)(lVar6 + 0xc);
      do {
        plVar8 = *(long **)(lVar6 + 0x10);
        lVar5 = FUN_01b925ec();
        while( true ) {
          if (plVar8 == (long *)0x0) {
            return;
          }
          if (plVar8 == (long *)lVar5) break;
          plVar8 = (long *)*plVar8;
        }
        iVar2 = *piVar1;
        if (iVar2 == iVar7) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar7 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            lVar6 = *(long *)(lVar6 + 0x18);
            plVar8 = (long *)(lVar6 + -0x50);
            if (lVar6 == 0) {
              return;
            }
            FUN_01b76b84(plVar8,0);
            lVar6 = *(long *)(lVar6 + 8);
            piVar1 = (int *)(lVar6 + 0xc);
            do {
              iVar7 = *piVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar7 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar7 + -1 == 0) {
              *(undefined8 *)(lVar6 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x01b91528. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(*plVar8 + 0x20))(plVar8);
              return;
            }
            return;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar7 = iVar2;
      } while (iVar2 != 0);
    }
  }
  return;
}


