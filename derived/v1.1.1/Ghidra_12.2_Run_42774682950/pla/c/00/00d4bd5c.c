/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d4bd5c; name: FUN_00d4bd5c
 */


void FUN_00d4bd5c(long param_1,ulong param_2,int param_3)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  byte bVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  
  if ((param_2 & 1) == 0) {
    bVar7 = 0;
    plVar6 = *(long **)(param_1 + 0x2c8);
  }
  else {
    bVar7 = *(byte *)(param_1 + (long)param_3 * 0x60 + 0x665);
    plVar6 = *(long **)(param_1 + 0x2c8);
  }
  if (plVar6 != (long *)0x0) {
    plVar8 = plVar6 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *(int *)plVar8 = (int)*plVar8 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar8 = (long *)plVar6[0x29];
  lVar10 = plVar6[0x2a];
  if ((lVar10 != 0) && (*plVar8 != 0x2dc110817bf2fd6c)) {
    plVar9 = plVar8 + lVar10 * 6;
    lVar10 = lVar10 * 0x30;
    do {
      lVar10 = lVar10 + -0x30;
      if (lVar10 == 0) {
        plVar8 = plVar9;
        break;
      }
      plVar2 = plVar8 + 6;
      plVar1 = plVar8 + 6;
      plVar8 = plVar2;
    } while (*plVar1 != 0x2dc110817bf2fd6c);
  }
  *(byte *)(plVar8[4] + 0x58) = *(byte *)(plVar8[4] + 0x58) & 0xfe | bVar7;
  if (plVar6 != (long *)0x0) {
    plVar8 = plVar6 + 10;
    do {
      iVar5 = (int)*plVar8 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *(int *)plVar8 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00d4be30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar6 + 0x10))();
      return;
    }
  }
  return;
}


