/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b57ec0; name: FUN_01b57ec0
 */


void FUN_01b57ec0(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long *local_18;
  
  plVar8 = *(long **)(param_1 + 0x438);
  for (plVar6 = *(long **)(param_1 + 0x430); plVar6 != plVar8; plVar6 = plVar6 + 1) {
    if ((*(long *)(*plVar6 + 0xf0) != 0) &&
       (FUN_00b911c4(&local_18,*(long *)(*plVar6 + 0xf0)), plVar5 = local_18,
       local_18 != (long *)0x0)) {
      FUN_01b9ee74(local_18);
      lVar7 = plVar5[0xb];
      piVar1 = (int *)(lVar7 + 0xc);
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
        *(undefined8 *)(lVar7 + 0x18) = 0;
        (**(code **)(*plVar5 + 0x20))(plVar5);
      }
    }
  }
  plVar8 = *(long **)(param_1 + 0x400);
  for (plVar6 = *(long **)(param_1 + 0x3f8); plVar6 != plVar8; plVar6 = plVar6 + 1) {
    if ((*(long *)(*plVar6 + 0xf0) != 0) &&
       (FUN_00b911c4(&local_18,*(long *)(*plVar6 + 0xf0)), plVar5 = local_18,
       local_18 != (long *)0x0)) {
      FUN_01b9ee74(local_18);
      lVar7 = plVar5[0xb];
      piVar1 = (int *)(lVar7 + 0xc);
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
        *(undefined8 *)(lVar7 + 0x18) = 0;
        (**(code **)(*plVar5 + 0x20))(plVar5);
      }
    }
  }
  FUN_01b572a4();
  return;
}


