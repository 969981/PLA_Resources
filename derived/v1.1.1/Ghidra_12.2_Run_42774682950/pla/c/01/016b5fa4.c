/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 016b5fa4; name: FUN_016b5fa4
 */


void FUN_016b5fa4(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *local_58;
  long *local_50;
  long *local_48;
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  long *local_28;
  long *local_18;
  
  FUN_016b8f9c(*(undefined8 *)(param_1 + 0x120));
  local_40 = 0x1e5f23d6f19e85d9;
  pcStack_38 = "NpcTalkTableScript";
  local_30 = 0x12;
  local_28 = (long *)0x0;
  FUN_016b8f5c(&local_18,*(undefined8 *)(param_1 + 0x120),0,&local_40);
  if (local_18 != (long *)0x0) {
    lVar5 = local_18[0xb];
    piVar1 = (int *)(lVar5 + 0xc);
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
      *(undefined8 *)(lVar5 + 0x18) = 0;
      (**(code **)(*local_18 + 0x20))();
    }
  }
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  local_40 = 0x82c7348d2a2223d8;
  pcStack_38 = "SimpleTalkNPC";
  local_30 = 0xd;
  local_28 = (long *)0x0;
  FUN_016b8f5c(&local_48,*(undefined8 *)(param_1 + 0x120),0,&local_40);
  if (local_48 != (long *)0x0) {
    lVar5 = local_48[0xb];
    piVar1 = (int *)(lVar5 + 0xc);
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
      *(undefined8 *)(lVar5 + 0x18) = 0;
      (**(code **)(*local_48 + 0x20))();
    }
  }
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  local_40 = 0x82f74dc648175484;
  pcStack_38 = "SimpleTalkSystem";
  local_30 = 0x10;
  local_28 = (long *)0x0;
  FUN_016b8f5c(&local_50,*(undefined8 *)(param_1 + 0x120),0,&local_40);
  if (local_50 != (long *)0x0) {
    lVar5 = local_50[0xb];
    piVar1 = (int *)(lVar5 + 0xc);
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
      *(undefined8 *)(lVar5 + 0x18) = 0;
      (**(code **)(*local_50 + 0x20))();
    }
  }
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  local_40 = 0x16e11dab354a1103;
  pcStack_38 = "DoorEvent";
  local_30 = 9;
  local_28 = (long *)0x0;
  FUN_016b8f5c(&local_58,*(undefined8 *)(param_1 + 0x120),0,&local_40);
  if (local_58 != (long *)0x0) {
    lVar5 = local_58[0xb];
    piVar1 = (int *)(lVar5 + 0xc);
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
      *(undefined8 *)(lVar5 + 0x18) = 0;
      (**(code **)(*local_58 + 0x20))();
    }
  }
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  FUN_016b9220(*(undefined8 *)(param_1 + 0x120));
  return;
}


