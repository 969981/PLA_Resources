/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b3bf44; name: FUN_02b3bf44
 */


void FUN_02b3bf44(long param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  long *plVar9;
  long lVar10;
  
  plVar2 = *(long **)(param_1 + 0xe8);
  plVar4 = *(long **)(param_1 + 0xf0);
  if (plVar2 != plVar4) {
    lVar10 = *(long *)(param_1 + 0x58);
    plVar9 = (long *)*plVar2;
    while( true ) {
      if (plVar9 != (long *)0x0) {
        plVar1 = plVar9 + 10;
        do {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar7) {
            *(int *)plVar1 = (int)*plVar1 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        lVar3 = plVar9[0x12];
        lVar5 = plVar9[0x13];
        do {
          iVar8 = (int)*plVar1 + -1;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar7) {
            *(int *)plVar1 = iVar8;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar8 == 0) {
          (**(code **)(*plVar9 + 0x10))();
        }
        if (lVar3 != lVar5) {
          FUN_02b472c0(plVar2,param_1 + 0x120,param_2,lVar10 + 0x60);
        }
      }
      plVar2 = plVar2 + 1;
      if (plVar2 == plVar4) break;
      plVar9 = (long *)*plVar2;
    }
  }
  return;
}


