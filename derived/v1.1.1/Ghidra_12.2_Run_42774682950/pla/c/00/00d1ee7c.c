/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d1ee7c; name: FUN_00d1ee7c
 */


void FUN_00d1ee7c(long *param_1,long param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  int iVar6;
  long *plVar7;
  
  if (*(int *)(param_2 + 0xc) != 0) {
    piVar1 = (int *)(param_2 + 0xc);
    iVar6 = *(int *)(param_2 + 0xc);
    do {
      while( true ) {
        plVar7 = *(long **)(param_2 + 0x10);
        lVar5 = FUN_00d1ede0();
        while( true ) {
          if (plVar7 == (long *)0x0) goto LAB_00d1eef4;
          if (plVar7 == (long *)lVar5) break;
          plVar7 = (long *)*plVar7;
        }
        iVar2 = *piVar1;
        if (iVar2 != iVar6) break;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar6 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          lVar5 = 0;
          if (*(long *)(param_2 + 0x18) != 0) {
            lVar5 = *(long *)(param_2 + 0x18) + -0x50;
          }
          *param_1 = lVar5;
          return;
        }
        iVar6 = iVar2;
        if (iVar2 == 0) goto LAB_00d1eef4;
      }
      ClearExclusiveLocal();
      iVar6 = iVar2;
    } while (iVar2 != 0);
  }
LAB_00d1eef4:
  *param_1 = 0;
  return;
}


