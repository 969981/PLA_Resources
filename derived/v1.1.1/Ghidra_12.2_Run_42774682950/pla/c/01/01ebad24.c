/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01ebad24; name: FUN_01ebad24
 */


void FUN_01ebad24(long *param_1,long *param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  long *plVar9;
  
  lVar7 = *param_2;
  if ((lVar7 == 0) || (*(int *)(lVar7 + 0xc) == 0)) {
LAB_01ebad44:
    lVar6 = 0;
  }
  else {
    piVar1 = (int *)(lVar7 + 0xc);
    iVar8 = *(int *)(lVar7 + 0xc);
    do {
      plVar9 = *(long **)(lVar7 + 0x10);
      plVar5 = (long *)FUN_01b52494();
      if (plVar9 == (long *)0x0) goto LAB_01ebad44;
      while (plVar9 != plVar5) {
        plVar9 = (long *)*plVar9;
        lVar6 = 0;
        if (plVar9 == (long *)0x0) goto LAB_01ebad48;
      }
      iVar2 = *piVar1;
      if (iVar2 == iVar8) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar8 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          lVar6 = 0;
          if (*(long *)(lVar7 + 0x18) != 0) {
            lVar6 = *(long *)(lVar7 + 0x18) + -0x50;
          }
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      lVar6 = 0;
      iVar8 = iVar2;
    } while (iVar2 != 0);
  }
LAB_01ebad48:
  *param_1 = lVar6;
  return;
}


