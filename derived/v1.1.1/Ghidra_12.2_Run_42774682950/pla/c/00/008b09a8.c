/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008b09a8; name: FUN_008b09a8
 */


void FUN_008b09a8(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  long *local_38;
  
  FUN_008b2878();
  uVar6 = FUN_00923c00();
  uVar6 = FUN_00933eec(uVar6,*(undefined1 *)(param_1 + 0x7c));
  FUN_008b2878(param_1);
  uVar7 = FUN_00923bc4();
  uVar5 = FUN_009982d4(uVar7,(undefined1 *)(param_1 + 0x7c));
  FUN_008b2878(param_1);
  FUN_00923bcc(&local_38);
  plVar8 = (long *)local_38[0x24];
  if (plVar8 == (long *)0x0) {
    FUN_00976414(0,uVar6,uVar5);
  }
  else {
    plVar1 = plVar8 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    FUN_00976414(plVar8,uVar6,uVar5);
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
    }
  }
  if (local_38 != (long *)0x0) {
    plVar8 = local_38 + 10;
    do {
      iVar4 = (int)*plVar8 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *(int *)plVar8 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_38 + 0x10))();
    }
  }
  return;
}


