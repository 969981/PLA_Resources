/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f58650; name: FUN_02f58650
 */


void FUN_02f58650(int param_1,ulong *param_2)

{
  ulong *puVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = *(ulong *)(&DAT_0442c148 + (long)param_1 * 0x820);
  if ((uVar6 & *param_2) != 0) {
    puVar1 = param_2 + 1;
    uVar5 = uVar6 & *param_2;
    while( true ) {
      uVar7 = *(ulong *)(uVar5 + 0x50) & uVar6;
      iVar2 = *(int *)(uVar5 + 0x1c);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *(int *)puVar1 = (int)*puVar1 - iVar2;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      uVar6 = (ulong)*(uint *)(uVar5 + 0x1c);
      if (*(uint *)(uVar5 + 0x1c) != 0) {
        do {
          FUN_02f582d0(param_1);
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
      if (uVar7 == 0) break;
      uVar6 = *(ulong *)(&DAT_0442c148 + (long)param_1 * 0x820);
      uVar5 = uVar7;
    }
  }
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return;
}


