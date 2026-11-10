/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008bebb4; name: FUN_008bebb4
 */


void FUN_008bebb4(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  long *plVar7;
  long *local_38;
  
  uVar6 = FUN_00923c00(**(undefined8 **)(param_1 + 0x70));
  uVar6 = FUN_00933eec(uVar6,*(undefined1 *)(param_1 + 0x7b));
  uVar5 = FUN_009982d4(*(undefined8 *)(**(long **)(param_1 + 0x70) + 0x28),
                       (undefined1 *)(param_1 + 0x7b));
  FUN_00923bcc(&local_38,**(undefined8 **)(param_1 + 0x70));
  plVar7 = (long *)local_38[0x24];
  if (plVar7 == (long *)0x0) {
    FUN_0097612c(0,uVar6,uVar5);
  }
  else {
    plVar1 = plVar7 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    FUN_0097612c(plVar7,uVar6,uVar5);
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
      (**(code **)(*plVar7 + 0x10))(plVar7);
    }
  }
  if (local_38 != (long *)0x0) {
    plVar7 = local_38 + 10;
    do {
      iVar4 = (int)*plVar7 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *(int *)plVar7 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_38 + 0x10))();
    }
  }
  return;
}


