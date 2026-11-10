/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f582d0; name: FUN_02f582d0
 */


void FUN_02f582d0(int param_1,long param_2)

{
  long *plVar1;
  int *piVar2;
  uint *puVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  
  if ((*(uint *)(param_2 + 0x2c) & 1) == 0) {
    uVar10 = *(uint *)(param_2 + 0x30);
    uVar7 = *(ulong *)(&DAT_0442c138 + (long)param_1 * 0x820);
    lVar9 = param_2 + -(*(int *)(param_2 + 0x34) * (int)uVar7);
    if (*(ulong *)(&DAT_0442c120 + (long)param_1 * 0x820) <= uVar7) {
      (**(code **)(&DAT_0442c0f0 + (long)param_1 * 0x820))
                (param_2,uVar7 * uVar10,*(undefined8 *)(param_2 + 0x58),0);
      plVar1 = (long *)(&DAT_0442c8f8 + (long)param_1 * 0x820);
      do {
        lVar8 = *plVar1;
        while (*plVar1 == lVar8) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *plVar1 = lVar8 - uVar7 * uVar10;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_02f58380;
        }
        ClearExclusiveLocal();
      } while( true );
    }
  }
  else {
    uVar10 = *(uint *)(param_2 + 0x30);
    *(uint *)(param_2 + 0x2c) = *(uint *)(param_2 + 0x2c) | 3;
    lVar9 = param_2;
  }
LAB_02f58380:
  piVar2 = (int *)(lVar9 + 0x38);
  do {
    iVar4 = *piVar2;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
    if (bVar6) {
      *piVar2 = iVar4 - uVar10;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (0 < (int)(iVar4 - uVar10)) {
    return;
  }
  uVar7 = *(ulong *)(&DAT_0442c138 + (long)param_1 * 0x820);
  puVar3 = (uint *)(lVar9 + 0x34);
  if (*(ulong *)(&DAT_0442c120 + (long)param_1 * 0x820) <= uVar7) {
    puVar3 = (uint *)(lVar9 + 0x30);
  }
  FUN_02f585b0(param_1,lVar9,uVar7 * *puVar3,*(undefined4 *)(lVar9 + 0x3c),
               uVar7 * *(uint *)(lVar9 + 0x34),*(undefined8 *)(lVar9 + 0x58));
  return;
}


