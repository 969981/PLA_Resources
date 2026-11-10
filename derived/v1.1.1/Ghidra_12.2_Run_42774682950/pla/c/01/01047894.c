/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01047894; name: FUN_01047894
 */


void FUN_01047894(long *param_1)

{
  int *piVar1;
  int iVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  
  plVar3 = (long *)*param_1;
  if ((long *)param_1[1] != plVar3) {
    plVar8 = (long *)param_1[1] + -1;
    plVar6 = (long *)*plVar8;
    if (plVar6 != (long *)0x0) {
      lVar7 = plVar6[0xb];
      piVar1 = (int *)(lVar7 + 0xc);
      do {
        iVar2 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar2 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar2 + -1 == 0) goto LAB_01047904;
    }
LAB_010478d8:
    if (plVar8 != plVar3) {
      while( true ) {
        plVar8 = plVar8 + -1;
        plVar6 = (long *)*plVar8;
        if (plVar6 == (long *)0x0) break;
        lVar7 = plVar6[0xb];
        piVar1 = (int *)(lVar7 + 0xc);
        do {
          iVar2 = *piVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar2 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar2 + -1 != 0) break;
LAB_01047904:
        *(undefined8 *)(lVar7 + 0x18) = 0;
        (**(code **)(*plVar6 + 0x20))();
        if (plVar8 == plVar3) goto LAB_0104791c;
      }
      goto LAB_010478d8;
    }
  }
LAB_0104791c:
  param_1[1] = (long)plVar3;
  return;
}


