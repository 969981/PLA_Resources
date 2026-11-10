/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b1fcf0; name: FUN_01b1fcf0
 */


void FUN_01b1fcf0(long *param_1,long *param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  long *plVar8;
  
  lVar6 = *param_2;
  if ((lVar6 != 0) && (*(int *)(lVar6 + 0xc) != 0)) {
    piVar1 = (int *)(lVar6 + 0xc);
    iVar7 = *(int *)(lVar6 + 0xc);
    do {
      plVar8 = *(long **)(lVar6 + 0x10);
      lVar5 = FUN_01091efc();
      while( true ) {
        if (plVar8 == (long *)0x0) goto LAB_01b1fd10;
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
          lVar5 = 0;
          if (*(long *)(lVar6 + 0x18) != 0) {
            lVar5 = *(long *)(lVar6 + 0x18) + -0x50;
          }
          *param_1 = lVar5;
          return;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar7 = iVar2;
    } while (iVar2 != 0);
  }
LAB_01b1fd10:
  *param_1 = 0;
  return;
}


