/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b9152c; name: FUN_01b9152c
 */


void FUN_01b9152c(long param_1,ulong param_2)

{
  int *piVar1;
  long lVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  long lVar7;
  int iVar8;
  long *plVar9;
  
  lVar7 = param_1 + 0x500;
  if ((param_2 & 1) == 0) {
    lVar7 = param_1 + 0x2f0;
  }
  lVar2 = param_1 + 0x500;
  if (*(int *)(param_1 + 0x714) != 1) {
    lVar2 = lVar7;
  }
  lVar7 = *(long *)(lVar2 + 0x1e0);
  if ((lVar7 != 0) && (*(int *)(lVar7 + 0xc) != 0)) {
    piVar1 = (int *)(lVar7 + 0xc);
    iVar8 = *(int *)(lVar7 + 0xc);
    do {
      plVar9 = *(long **)(lVar7 + 0x10);
      plVar6 = (long *)FUN_01b925ec();
      if (plVar9 == (long *)0x0) {
        return;
      }
      while (plVar9 != plVar6) {
        plVar9 = (long *)*plVar9;
        if (plVar9 == (long *)0x0) {
          return;
        }
      }
      iVar3 = *piVar1;
      if (iVar3 == iVar8) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar8 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 == '\0') {
          lVar7 = *(long *)(lVar7 + 0x18);
          plVar6 = (long *)(lVar7 + -0x50);
          if (lVar7 == 0) {
            return;
          }
          FUN_01b76b84(plVar6,1);
          lVar7 = *(long *)(lVar7 + 8);
          piVar1 = (int *)(lVar7 + 0xc);
          do {
            iVar8 = *piVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = iVar8 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar8 + -1 == 0) {
            *(undefined8 *)(lVar7 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x01b91620. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar6 + 0x20))(plVar6);
            return;
          }
          return;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar8 = iVar3;
    } while (iVar3 != 0);
  }
  return;
}


