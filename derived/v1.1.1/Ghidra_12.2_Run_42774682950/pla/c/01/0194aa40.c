/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0194aa40; name: FUN_0194aa40
 */


void FUN_0194aa40(long param_1,long *param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  
  if (*(long **)(param_1 + 8) != param_2) {
    plVar7 = *(long **)(param_1 + 8) + -1;
    plVar5 = (long *)*plVar7;
    if (plVar5 != (long *)0x0) {
      lVar6 = plVar5[0xb];
      piVar1 = (int *)(lVar6 + 0xc);
      do {
        iVar2 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 + -1 == 0) goto LAB_0194aab4;
    }
LAB_0194aa88:
    if (plVar7 != param_2) {
      while( true ) {
        plVar7 = plVar7 + -1;
        plVar5 = (long *)*plVar7;
        if (plVar5 == (long *)0x0) break;
        lVar6 = plVar5[0xb];
        piVar1 = (int *)(lVar6 + 0xc);
        do {
          iVar2 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar2 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar2 + -1 != 0) break;
LAB_0194aab4:
        *(undefined8 *)(lVar6 + 0x18) = 0;
        (**(code **)(*plVar5 + 0x20))();
        if (plVar7 == param_2) goto LAB_0194aacc;
      }
      goto LAB_0194aa88;
    }
  }
LAB_0194aacc:
  *(long **)(param_1 + 8) = param_2;
  return;
}


