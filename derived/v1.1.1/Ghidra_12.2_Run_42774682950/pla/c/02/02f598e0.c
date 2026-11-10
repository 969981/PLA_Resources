/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f598e0; name: FUN_02f598e0
 */


void FUN_02f598e0(int param_1,ulong *param_2)

{
  int *piVar1;
  ulong uVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  
  piVar1 = (int *)((long)param_2 + 0xc);
  do {
    uVar6 = *param_2;
    uVar2 = *(ulong *)(&DAT_0442c148 + (long)param_1 * 0x820) & uVar6;
    if (uVar2 == 0) {
      return;
    }
    uVar7 = *(ulong *)(uVar2 + 0x50);
    do {
      iVar3 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar3 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    uVar8 = *(ulong *)(&DAT_0442c148 + (long)param_1 * 0x820);
    while (*param_2 == uVar6) {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(param_2,0x10);
      if (bVar5) {
        *param_2 = (long)(iVar3 + 1) & (uVar8 ^ 0xffffffffffffffff) | uVar7;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 == '\0') {
        iVar3 = *(int *)(uVar2 + 0x1c);
        param_2 = param_2 + 1;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(param_2,0x10);
          if (bVar5) {
            *(int *)param_2 = (int)*param_2 - iVar3;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        return;
      }
    }
    ClearExclusiveLocal();
  } while( true );
}


