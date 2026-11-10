/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d0f294; name: FUN_00d0f294
 */


byte FUN_00d0f294(long *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  byte bVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined1 auStack_30 [8];
  long *local_28;
  
  bVar5 = FUN_00d0f254();
  (**(code **)(*param_1 + 0x48))(&local_28,param_1);
  plVar9 = local_28;
  (**(code **)local_28[10])();
  uVar6 = FUN_00d10e04();
  if ((uVar6 & 1) == 0) {
    plVar9 = (long *)0x0;
  }
  if (local_28 != (long *)0x0) {
    lVar8 = local_28[0xb];
    piVar1 = (int *)(lVar8 + 0xc);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      *(undefined8 *)(lVar8 + 0x18) = 0;
      (**(code **)(*local_28 + 0x20))();
    }
  }
  if (plVar9 != (long *)0x0) {
    FUN_00d11cc4(&local_28,plVar9);
    lVar8 = FUN_00d11170(local_28 + 0x1e,auStack_30);
    lVar7 = FUN_00d11528(local_28 + 0x1e,auStack_30);
    bVar5 = bVar5 & lVar8 != 0 & lVar7 != 0;
    if (local_28 != (long *)0x0) {
      lVar8 = local_28[0xb];
      piVar1 = (int *)(lVar8 + 0xc);
      do {
        iVar2 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 + -1 == 0) {
        *(undefined8 *)(lVar8 + 0x18) = 0;
        (**(code **)(*local_28 + 0x20))();
      }
    }
  }
  return bVar5 & 1;
}


