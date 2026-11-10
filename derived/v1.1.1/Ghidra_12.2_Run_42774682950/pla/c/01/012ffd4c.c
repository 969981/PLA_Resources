/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 012ffd4c; name: FUN_012ffd4c
 */


void FUN_012ffd4c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  
  plVar5 = *(long **)(param_1 + 0x2c8);
  if (plVar5 != (long *)0x0) {
    plVar6 = plVar5 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *(int *)plVar6 = (int)*plVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar6 = (long *)plVar5[0x29];
  lVar8 = plVar5[0x2a];
  plVar7 = plVar6 + lVar8 * 6;
  plVar10 = plVar6;
  if ((lVar8 != 0) && (*plVar6 != 0x285bb21a284b1626)) {
    lVar9 = lVar8 * 0x30;
    plVar11 = plVar6;
    do {
      lVar9 = lVar9 + -0x30;
      if (lVar9 == 0) {
        plVar10 = plVar7;
        break;
      }
      plVar1 = plVar11 + 6;
      plVar10 = plVar11 + 6;
      plVar11 = plVar11 + 6;
    } while (*plVar1 != 0x285bb21a284b1626);
  }
  if ((*(byte *)(plVar10[4] + 0x58) & 1) != 0) {
    if ((lVar8 != 0) && (*plVar6 != 0x285bb21a284b1626)) {
      lVar8 = lVar8 * 0x30;
      do {
        lVar8 = lVar8 + -0x30;
        if (lVar8 == 0) {
          plVar6 = plVar7;
          break;
        }
        plVar11 = plVar6 + 6;
        plVar10 = plVar6 + 6;
        plVar6 = plVar11;
      } while (*plVar10 != 0x285bb21a284b1626);
    }
    *(byte *)(plVar6[4] + 0x58) = *(byte *)(plVar6[4] + 0x58) & 0xfe;
  }
  if (plVar5 != (long *)0x0) {
    plVar6 = plVar5 + 10;
    do {
      iVar4 = (int)*plVar6 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *(int *)plVar6 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
                    /* WARNING: Could not recover jumptable at 0x012ffe5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 0x10))();
      return;
    }
  }
  return;
}


