/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f592a0; name: FUN_02f592a0
 */


void FUN_02f592a0(int param_1,ulong param_2)

{
  ulong *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  
  lVar7 = (ulong)*(uint *)(param_2 + 0x30) * 0x10 + (long)param_1 * 0x820;
  puVar8 = &DAT_0442c158;
  if (*(uint *)(param_2 + 0x30) != 1) {
    puVar8 = &DAT_0442c160;
  }
  uVar9 = *(undefined8 *)(puVar8 + (long)param_1 * 0x820);
  puVar1 = (ulong *)(&DAT_0442c0e0 + lVar7 + 0x480);
  iVar4 = *(int *)(param_2 + 0x1c);
  piVar2 = (int *)(&DAT_0442c0e0 + lVar7 + 0x488);
  do {
    iVar3 = *piVar2 + iVar4;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
    if (bVar6) {
      *piVar2 = iVar3;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if ((int)uVar9 * 0x60 < iVar3) {
    uVar10 = (ulong)*(uint *)(param_2 + 0x1c);
    if (*(uint *)(param_2 + 0x1c) != 0) {
      do {
        uVar11 = *(ulong *)(param_2 + 0x48);
        FUN_02f582d0(param_1,param_2);
        uVar10 = uVar10 - 1;
        param_2 = uVar11;
      } while (uVar10 != 0);
    }
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar6) {
        *piVar2 = *piVar2 - iVar4;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    return;
  }
  piVar2 = (int *)(&DAT_0442c0e0 + lVar7 + 0x48c);
  do {
    uVar10 = *puVar1;
    *(ulong *)(param_2 + 0x50) = *(ulong *)(&DAT_0442c148 + (long)param_1 * 0x820) & uVar10;
    do {
      iVar4 = *piVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar6) {
        *piVar2 = iVar4 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    uVar11 = *(ulong *)(&DAT_0442c148 + (long)param_1 * 0x820);
    while (*puVar1 == uVar10) {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar6) {
        *puVar1 = (long)(iVar4 + 1) & (uVar11 ^ 0xffffffffffffffff) | param_2;
        cVar5 = ExclusiveMonitorsStatus();
      }
      if (cVar5 == '\0') {
        return;
      }
    }
    ClearExclusiveLocal();
  } while( true );
}


