/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b91d38; name: FUN_01b91d38
 */


void FUN_01b91d38(uint *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  int iVar7;
  long *plVar8;
  
  if ((*param_1 & 0xfffffffe) != 2) {
    return;
  }
  lVar6 = *(long *)(param_1 + 0x78);
  if ((lVar6 != 0) && (*(int *)(lVar6 + 0xc) != 0)) {
    piVar1 = (int *)(lVar6 + 0xc);
    iVar7 = *(int *)(lVar6 + 0xc);
    do {
      plVar8 = *(long **)(lVar6 + 0x10);
      plVar5 = (long *)FUN_01b925ec(param_1);
      if (plVar8 == (long *)0x0) break;
      while (plVar8 != plVar5) {
        plVar8 = (long *)*plVar8;
        if (plVar8 == (long *)0x0) goto LAB_01b91d64;
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
          plVar5 = (long *)(lVar6 + -0x50);
          if (lVar6 != 0) {
            FUN_01b6ec48(plVar5);
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
              (**(code **)(*plVar5 + 0x20))(plVar5);
            }
          }
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar7 = iVar2;
    } while (iVar2 != 0);
  }
LAB_01b91d64:
  FUN_01b91e50(param_1);
  return;
}


